/* Generated code for Python module 'numpy$lib$_utils_impl'
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



/* The "module_numpy$lib$_utils_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_utils_impl;
PyDictObject *moduledict_numpy$lib$_utils_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pprint;
PyObject *const_tuple_str_plain_pprint_tuple;
PyObject *const_str_digest_1955d320fcf10915350aecf079948e27;
PyObject *const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple;
PyObject *const_str_plain___cpu_baseline__;
PyObject *const_str_plain___cpu_dispatch__;
PyObject *const_str_plain___cpu_features__;
PyObject *const_str_plain_numpy_version;
PyObject *const_str_plain_np;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_python;
PyObject *const_str_digest_b3836178c5086d1da4353bc34793fa77;
PyObject *const_str_plain_uname;
PyObject *const_str_plain_platform;
PyObject *const_tuple_list_empty_list_empty_tuple;
PyObject *const_str_plain_features_found;
PyObject *const_str_plain_append;
PyObject *const_str_plain_features_not_found;
PyObject *const_str_plain_simd_extensions;
PyObject *const_str_plain_baseline;
PyObject *const_str_plain_found;
PyObject *const_str_plain_not_found;
PyObject *const_str_plain_ignore_floating_point_errors_in_matmul;
PyObject *const_str_plain__core;
PyObject *const_str_plain__multiarray_umath;
PyObject *const_str_plain__blas_supports_fpe;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_threadpoolctl;
PyObject *const_tuple_str_plain_threadpool_info_tuple;
PyObject *const_str_plain_threadpool_info;
PyObject *const_tuple_str_digest_8a1a25327b3c2dacdc3321a1797e26ff_tuple;
PyObject *const_str_digest_cb9e74d9f2cd33c29595bb04eeeae8af;
PyObject *const_str_plain_numpy;
PyObject *const_str_plain_show_config;
PyObject *const_str_plain_join;
PyObject *const_str_plain_include;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_str_digest_9106ce8bbb6f6f5121e9d032da94d26e;
PyObject *const_str_plain_old_name;
PyObject *const_str_plain_new_name;
PyObject *const_str_plain_message;
PyObject *const_str_chr_96;
PyObject *const_str_digest_53a51b45ff25c35499e16e8ebdbae40e;
PyObject *const_str_digest_720b58a1af6acb21dad819b05182bcea;
PyObject *const_str_digest_7b36e8496befda77accbbabcce73303a;
PyObject *const_str_newline;
PyObject *const_str_plain_wraps;
PyObject *const_str_plain_newfunc;
PyObject *const_str_digest_f277fe91e917f14a1edfcbe55077f14c;
PyObject *const_str_plain_expandtabs;
PyObject *const_tuple_str_newline_tuple;
PyObject *const_str_plain__get_indent;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_lstrip;
PyObject *const_str_space;
PyObject *const_str_plain_skip;
PyObject *const_str_plain_textwrap;
PyObject *const_str_plain_indent;
PyObject *const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
PyObject *const_str_digest_2b5959e61bf08944296df4df4e74b521;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_plain_depdoc;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_func;
PyObject *const_int_hex_7fffffffffffffff;
PyObject *const_str_plain_min;
PyObject *const_str_digest_f24dc18c6125d716f2b01c76dcabae7e;
PyObject *const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf;
PyObject *const_str_plain__Deprecate;
PyObject *const_str_digest_7b8c81e816c6f98f4b3cf01d6e5908c9;
PyObject *const_tuple_str_plain_message_tuple;
PyObject *const_str_digest_fea0e29ab0a9062174ca21449bd63f9e;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_plain_k;
PyObject *const_str_plain_firstwidth;
PyObject *const_str_plain_sepstr;
PyObject *const_str_plain_newstr;
PyObject *const_str_digest_4012fa31eb9aad3a18542bb631c34296;
PyObject *const_int_pos_2;
PyObject *const_str_plain_module;
PyObject *const_str_plain_thedict;
PyObject *const_str_plain_dictlist;
PyObject *const_str_plain_totraverse;
PyObject *const_str_plain_thisdict;
PyObject *const_str_plain_x;
PyObject *const_str_plain_modname;
PyObject *const_str_plain_moddict;
PyObject *const_str_plain_pop;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_ModuleType;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_d15883d287f25ee97943e33fc8b84cbc;
PyObject *const_str_plain_strides;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_byteorder;
PyObject *const_str_plain_stdout;
PyObject *const_str_digest_43bc3449adbc115b2dadbc8db25e363a;
PyObject *const_tuple_str_plain_file_tuple;
PyObject *const_str_digest_7e797acb9342c109a4833fa1a7bdde6e;
PyObject *const_str_plain_shape;
PyObject *const_str_digest_3006969257adc16118484a64a9cb6194;
PyObject *const_str_digest_2563d895f233ff6c8ba35fdc080c8321;
PyObject *const_str_plain_itemsize;
PyObject *const_str_digest_e49d5e2e97a46c9a22e12b346eb849fe;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_aligned;
PyObject *const_str_digest_bf54b61d64b75b180e82455486b519fa;
PyObject *const_str_plain_contiguous;
PyObject *const_str_digest_651dfd3122218fc040fd3c000e075f74;
PyObject *const_str_plain_fortran;
PyObject *const_str_digest_aa3f546ca9ce43f67be2e207ae73edc2;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain__as_parameter_;
PyObject *const_str_plain_value;
PyObject *const_tuple_str_digest_4943cd63f781f8ecc22725dd76eb010b_tuple;
PyObject *const_tuple_str_plain_end_str_plain_file_tuple;
PyObject *const_tuple_str_chr_124_str_chr_61_tuple;
PyObject *const_tuple_str_plain_little_tuple;
PyObject *const_str_chr_62;
PyObject *const_tuple_str_plain_big_tuple;
PyObject *const_str_digest_7eee015a07d8313712564c5bb4c64867;
PyObject *const_str_digest_a5b62ca4149eee27e55e7f20c59b857d;
PyObject *const_str_digest_6cfad5e59067295af94d02c24191a103;
PyObject *const_str_digest_36f52fbe295ef2b52b12db0ec2a323e2;
PyObject *const_str_digest_cf91cbf23f4c773bd7959671e4b86e8b;
PyObject *const_str_plain_ast;
PyObject *const_str_plain_literal_eval;
PyObject *const_str_digest_fb9aa19f7c2e0edb667f03798ffc6f6f;
PyObject *const_str_plain_size;
PyObject *const_str_plain_take;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_tuple_str_plain_axis_tuple;
PyObject *const_str_plain_isnan;
PyObject *const_str_plain_ma;
PyObject *const_str_plain_isMaskedArray;
PyObject *const_str_plain_filled;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_n;
PyObject *const_str_plain_any;
PyObject *const_str_plain_generic;
PyObject *const_str_plain_copyto;
PyObject *const_tuple_str_plain_where_tuple;
PyObject *const_str_digest_66b70e418ddc7d3817e69022a8a81710;
PyObject *const_str_plain_enabled_features;
PyObject *const_str_chr_42;
PyObject *const_str_chr_63;
PyObject *const_str_digest_9e4a6c25574373a29a2d9fb25fd03dca;
PyObject *const_str_plain_fields;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_items;
PyObject *const_str_plain_drop_metadata;
PyObject *const_str_plain_names;
PyObject *const_str_plain_formats;
PyObject *const_str_plain_offsets;
PyObject *const_str_plain_titles;
PyObject *const_str_plain_found_metadata;
PyObject *const_str_plain_isalignedstruct;
PyObject *const_tuple_str_plain_align_tuple;
PyObject *const_str_plain_subdtype;
PyObject *const_str_plain_str;
PyObject *const_str_digest_2d660152c6812eb223f3a37515b3e563;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_tuple_str_plain_ndarray_tuple;
PyObject *const_str_plain_ndarray;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_str_plain_get_include;
PyObject *const_str_plain_info;
PyObject *const_str_plain_show_runtime;
PyObject *const_tuple_str_plain_numpy_tuple;
PyObject *const_str_digest_76728a0345609fd377a64fa593c96ff4;
PyObject *const_str_digest_3c1614694eed002c142a06ca742a7adf;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_126;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_39531106ac2f3993cc58f23c531aad18;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_140823063ce19e1ac9bf7cfc0a13b032;
PyObject *const_tuple_str_plain_old_name_str_plain_new_name_str_plain_message_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_deprecate;
PyObject *const_str_plain_deprecate_with_doc;
PyObject *const_str_plain__split_line;
PyObject *const_str_plain__namedict;
PyObject *const_str_plain__dictlist;
PyObject *const_str_plain__makenamedict;
PyObject *const_str_plain__info;
PyObject *const_tuple_none_int_pos_76_none_str_plain_numpy_tuple;
PyObject *const_str_plain_safe_eval;
PyObject *const_str_plain__median_nancheck;
PyObject *const_str_plain__opt_info;
PyObject *const_str_digest_5b6766397bc191002a7de8ad03db40c1;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_str_digest_f6ec3d6635e3fca1dae4defec219a610;
PyObject *const_tuple_a0c9de1b5ae55485607cc4c553feee2e_tuple;
PyObject *const_tuple_cffa4389e2ffb1c1fc4e170acbfc0d56_tuple;
PyObject *const_tuple_bad435d37f26679f092d33d7ab4e94fd_tuple;
PyObject *const_tuple_b4ee2ca6662b32ea4abd08c2ed5de6bd_tuple;
PyObject *const_tuple_1ac7d04ed19f3334b9a9488b5fa47c44_tuple;
PyObject *const_tuple_c4faba56b5e46aac105da8530f396fcd_tuple;
PyObject *const_tuple_4e61bb65ed7e37109c2405f054324af6_tuple;
PyObject *const_tuple_da9545d9b65ab6fc5cf853dc051c0182_tuple;
PyObject *const_tuple_str_plain_args_str_plain_kwargs_str_plain_fn_tuple;
PyObject *const_tuple_str_plain_msg_tuple;
PyObject *const_tuple_1490daa9ee311650a29c2962f3a496e3_tuple;
PyObject *const_tuple_str_plain_numpy_str_plain_d_str_plain__core_tuple;
PyObject *const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple;
PyObject *const_tuple_139b0fa8419baf5c8ced1f634f65997f_tuple;
PyObject *const_tuple_str_plain_depdoc_str_plain_func_tuple;
PyObject *const_tuple_str_plain_source_str_plain_ast_tuple;
PyObject *const_tuple_4f7643e9e8e498aca31924b6a6040233_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._utils_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pprint);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pprint_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_baseline__);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_dispatch__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_features__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy_version);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_python);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_uname);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_list_empty_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_features_found);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_features_not_found);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_simd_extensions);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_baseline);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_found);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_found);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_floating_point_errors_in_matmul);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__blas_supports_fpe);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_threadpoolctl);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_threadpool_info_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_threadpool_info);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a1a25327b3c2dacdc3321a1797e26ff_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb9e74d9f2cd33c29595bb04eeeae8af);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_config);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_include);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_9106ce8bbb6f6f5121e9d032da94d26e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_old_name);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_name);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_chr_96);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_53a51b45ff25c35499e16e8ebdbae40e);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_720b58a1af6acb21dad819b05182bcea);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b36e8496befda77accbbabcce73303a);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_newfunc);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_f277fe91e917f14a1edfcbe55077f14c);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_expandtabs);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_indent);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_skip);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_indent);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b5959e61bf08944296df4df4e74b521);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_depdoc);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_hex_7fffffffffffffff);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_f24dc18c6125d716f2b01c76dcabae7e);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__Deprecate);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b8c81e816c6f98f4b3cf01d6e5908c9);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_fea0e29ab0a9062174ca21449bd63f9e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_firstwidth);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_sepstr);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_newstr);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_4012fa31eb9aad3a18542bb631c34296);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_module);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_thedict);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_dictlist);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_totraverse);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_thisdict);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_modname);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_moddict);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleType);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_d15883d287f25ee97943e33fc8b84cbc);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_strides);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_byteorder);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdout);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_43bc3449adbc115b2dadbc8db25e363a);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e797acb9342c109a4833fa1a7bdde6e);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_3006969257adc16118484a64a9cb6194);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_2563d895f233ff6c8ba35fdc080c8321);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_e49d5e2e97a46c9a22e12b346eb849fe);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_aligned);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf54b61d64b75b180e82455486b519fa);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_contiguous);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_651dfd3122218fc040fd3c000e075f74);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_fortran);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa3f546ca9ce43f67be2e207ae73edc2);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_parameter_);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4943cd63f781f8ecc22725dd76eb010b_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_str_plain_file_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_124_str_chr_61_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_little_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_big_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_7eee015a07d8313712564c5bb4c64867);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5b62ca4149eee27e55e7f20c59b857d);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cfad5e59067295af94d02c24191a103);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_36f52fbe295ef2b52b12db0ec2a323e2);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf91cbf23f4c773bd7959671e4b86e8b);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ast);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_literal_eval);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb9aa19f7c2e0edb667f03798ffc6f6f);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_take);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ma);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_isMaskedArray);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_filled);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_generic);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyto);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_66b70e418ddc7d3817e69022a8a81710);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_enabled_features);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_chr_42);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e4a6c25574373a29a2d9fb25fd03dca);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_drop_metadata);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_names);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_formats);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_offsets);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_titles);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_found_metadata);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_isalignedstruct);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_align_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_subdtype);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d660152c6812eb223f3a37515b3e563);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndarray_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_include);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_runtime);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_76728a0345609fd377a64fa593c96ff4);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c1614694eed002c142a06ca742a7adf);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_39531106ac2f3993cc58f23c531aad18);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_140823063ce19e1ac9bf7cfc0a13b032);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_old_name_str_plain_new_name_str_plain_message_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate_with_doc);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain__split_line);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain__namedict);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain__dictlist);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain__makenamedict);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain__info);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_none_int_pos_76_none_str_plain_numpy_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe_eval);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain__median_nancheck);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain__opt_info);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b6766397bc191002a7de8ad03db40c1);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6ec3d6635e3fca1dae4defec219a610);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_a0c9de1b5ae55485607cc4c553feee2e_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_cffa4389e2ffb1c1fc4e170acbfc0d56_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_bad435d37f26679f092d33d7ab4e94fd_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_b4ee2ca6662b32ea4abd08c2ed5de6bd_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_1ac7d04ed19f3334b9a9488b5fa47c44_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_c4faba56b5e46aac105da8530f396fcd_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_4e61bb65ed7e37109c2405f054324af6_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_da9545d9b65ab6fc5cf853dc051c0182_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_str_plain_fn_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_1490daa9ee311650a29c2962f3a496e3_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_str_plain_d_str_plain__core_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_139b0fa8419baf5c8ced1f634f65997f_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_depdoc_str_plain_func_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_str_plain_ast_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_4f7643e9e8e498aca31924b6a6040233_tuple);
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
void checkModuleConstants_numpy$lib$_utils_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pprint);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pprint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pprint_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_baseline__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___cpu_baseline__);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_dispatch__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___cpu_dispatch__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain___cpu_features__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___cpu_features__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy_version);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_python));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_python);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_uname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uname);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_list_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_list_empty_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_features_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_features_found);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_features_not_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_features_not_found);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_simd_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_simd_extensions);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_baseline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_baseline);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_found);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_found);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_floating_point_errors_in_matmul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore_floating_point_errors_in_matmul);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__multiarray_umath);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__blas_supports_fpe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__blas_supports_fpe);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_threadpoolctl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threadpoolctl);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_threadpool_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_threadpool_info_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_threadpool_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threadpool_info);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a1a25327b3c2dacdc3321a1797e26ff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8a1a25327b3c2dacdc3321a1797e26ff_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb9e74d9f2cd33c29595bb04eeeae8af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb9e74d9f2cd33c29595bb04eeeae8af);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_config);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_include));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_include);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_9106ce8bbb6f6f5121e9d032da94d26e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9106ce8bbb6f6f5121e9d032da94d26e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_old_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_old_name);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_name);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_chr_96));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_96);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_53a51b45ff25c35499e16e8ebdbae40e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53a51b45ff25c35499e16e8ebdbae40e);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_720b58a1af6acb21dad819b05182bcea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_720b58a1af6acb21dad819b05182bcea);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b36e8496befda77accbbabcce73303a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b36e8496befda77accbbabcce73303a);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_newfunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newfunc);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_f277fe91e917f14a1edfcbe55077f14c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f277fe91e917f14a1edfcbe55077f14c);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_expandtabs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expandtabs);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_indent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_indent);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_skip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skip);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textwrap);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_indent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_indent);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b5959e61bf08944296df4df4e74b521));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b5959e61bf08944296df4df4e74b521);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_depdoc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_depdoc);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_hex_7fffffffffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_7fffffffffffffff);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_f24dc18c6125d716f2b01c76dcabae7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f24dc18c6125d716f2b01c76dcabae7e);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__Deprecate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Deprecate);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b8c81e816c6f98f4b3cf01d6e5908c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b8c81e816c6f98f4b3cf01d6e5908c9);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_message_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_fea0e29ab0a9062174ca21449bd63f9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fea0e29ab0a9062174ca21449bd63f9e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_firstwidth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_firstwidth);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_sepstr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sepstr);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_newstr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newstr);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_4012fa31eb9aad3a18542bb631c34296));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4012fa31eb9aad3a18542bb631c34296);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_thedict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thedict);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_dictlist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dictlist);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_totraverse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_totraverse);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_thisdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thisdict);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_modname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modname);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_moddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moddict);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModuleType);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_d15883d287f25ee97943e33fc8b84cbc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d15883d287f25ee97943e33fc8b84cbc);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_strides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strides);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_byteorder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byteorder);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdout);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_43bc3449adbc115b2dadbc8db25e363a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43bc3449adbc115b2dadbc8db25e363a);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e797acb9342c109a4833fa1a7bdde6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e797acb9342c109a4833fa1a7bdde6e);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_3006969257adc16118484a64a9cb6194));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3006969257adc16118484a64a9cb6194);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_2563d895f233ff6c8ba35fdc080c8321));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2563d895f233ff6c8ba35fdc080c8321);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemsize);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_e49d5e2e97a46c9a22e12b346eb849fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e49d5e2e97a46c9a22e12b346eb849fe);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_aligned));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aligned);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf54b61d64b75b180e82455486b519fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf54b61d64b75b180e82455486b519fa);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_contiguous));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contiguous);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_651dfd3122218fc040fd3c000e075f74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_651dfd3122218fc040fd3c000e075f74);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_fortran));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fortran);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa3f546ca9ce43f67be2e207ae73edc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa3f546ca9ce43f67be2e207ae73edc2);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_parameter_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__as_parameter_);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4943cd63f781f8ecc22725dd76eb010b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4943cd63f781f8ecc22725dd76eb010b_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_str_plain_file_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_124_str_chr_61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_124_str_chr_61_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_little_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_little_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_big_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_big_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_7eee015a07d8313712564c5bb4c64867));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7eee015a07d8313712564c5bb4c64867);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5b62ca4149eee27e55e7f20c59b857d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5b62ca4149eee27e55e7f20c59b857d);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cfad5e59067295af94d02c24191a103));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cfad5e59067295af94d02c24191a103);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_36f52fbe295ef2b52b12db0ec2a323e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36f52fbe295ef2b52b12db0ec2a323e2);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf91cbf23f4c773bd7959671e4b86e8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf91cbf23f4c773bd7959671e4b86e8b);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ast);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_literal_eval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_literal_eval);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb9aa19f7c2e0edb667f03798ffc6f6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb9aa19f7c2e0edb667f03798ffc6f6f);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_take));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_take);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ma);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_isMaskedArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isMaskedArray);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_filled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filled);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generic);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copyto);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_where_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_66b70e418ddc7d3817e69022a8a81710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66b70e418ddc7d3817e69022a8a81710);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_enabled_features));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enabled_features);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_chr_42));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_42);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e4a6c25574373a29a2d9fb25fd03dca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e4a6c25574373a29a2d9fb25fd03dca);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_drop_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_drop_metadata);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_names);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_formats));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_formats);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_offsets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offsets);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_titles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_titles);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_found_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_found_metadata);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_isalignedstruct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isalignedstruct);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_align_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_align_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_subdtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subdtype);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d660152c6812eb223f3a37515b3e563));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d660152c6812eb223f3a37515b3e563);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndarray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ndarray_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_include));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_include);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_runtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_runtime);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_76728a0345609fd377a64fa593c96ff4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76728a0345609fd377a64fa593c96ff4);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c1614694eed002c142a06ca742a7adf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c1614694eed002c142a06ca742a7adf);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_126));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_126);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_39531106ac2f3993cc58f23c531aad18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39531106ac2f3993cc58f23c531aad18);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_140823063ce19e1ac9bf7cfc0a13b032));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_140823063ce19e1ac9bf7cfc0a13b032);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_old_name_str_plain_new_name_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_old_name_str_plain_new_name_str_plain_message_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deprecate);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate_with_doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deprecate_with_doc);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain__split_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__split_line);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain__namedict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__namedict);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain__dictlist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dictlist);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain__makenamedict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__makenamedict);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain__info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__info);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_none_int_pos_76_none_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_int_pos_76_none_str_plain_numpy_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe_eval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe_eval);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain__median_nancheck));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__median_nancheck);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain__opt_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__opt_info);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b6766397bc191002a7de8ad03db40c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b6766397bc191002a7de8ad03db40c1);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6ec3d6635e3fca1dae4defec219a610));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6ec3d6635e3fca1dae4defec219a610);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_a0c9de1b5ae55485607cc4c553feee2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a0c9de1b5ae55485607cc4c553feee2e_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_cffa4389e2ffb1c1fc4e170acbfc0d56_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cffa4389e2ffb1c1fc4e170acbfc0d56_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_bad435d37f26679f092d33d7ab4e94fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bad435d37f26679f092d33d7ab4e94fd_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_b4ee2ca6662b32ea4abd08c2ed5de6bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b4ee2ca6662b32ea4abd08c2ed5de6bd_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_1ac7d04ed19f3334b9a9488b5fa47c44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ac7d04ed19f3334b9a9488b5fa47c44_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_c4faba56b5e46aac105da8530f396fcd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4faba56b5e46aac105da8530f396fcd_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_4e61bb65ed7e37109c2405f054324af6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e61bb65ed7e37109c2405f054324af6_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_da9545d9b65ab6fc5cf853dc051c0182_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_da9545d9b65ab6fc5cf853dc051c0182_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_str_plain_fn_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_kwargs_str_plain_fn_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_msg_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_1490daa9ee311650a29c2962f3a496e3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1490daa9ee311650a29c2962f3a496e3_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_str_plain_d_str_plain__core_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_str_plain_d_str_plain__core_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_139b0fa8419baf5c8ced1f634f65997f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_139b0fa8419baf5c8ced1f634f65997f_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_depdoc_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_depdoc_str_plain_func_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_str_plain_ast_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_source_str_plain_ast_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_4f7643e9e8e498aca31924b6a6040233_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f7643e9e8e498aca31924b6a6040233_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_numpy$lib$_utils_impl$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$_Deprecate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__Deprecate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Deprecate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Deprecate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Deprecate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Deprecate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__Deprecate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__Deprecate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Deprecate);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$_get_indent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_indent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_indent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_indent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_indent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_indent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_indent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_indent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_indent);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$drop_metadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_drop_metadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_drop_metadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_drop_metadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_drop_metadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_drop_metadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_drop_metadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_drop_metadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_drop_metadata);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$platform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$textwrap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_textwrap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_textwrap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_textwrap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_textwrap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_utils_impl$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_utils_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_utils_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_utils_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5690af6071fdf79fe7b08f9537901ce4;
static PyCodeObject *code_objects_30636259ebaee7c6a44872e44062f7e5;
static PyCodeObject *code_objects_ee48244dbf5c0ec92a9717fa2ea94bf5;
static PyCodeObject *code_objects_0dfc6d580d86cac004f8d0772e638731;
static PyCodeObject *code_objects_aeb957a7f4c0c44a3d7315bb8a9060fc;
static PyCodeObject *code_objects_adad016370ca3e5b522eec8b49487e6b;
static PyCodeObject *code_objects_23b5124b96145662ddded51bbc1bed2e;
static PyCodeObject *code_objects_28f9e35abb7798753fab3cb5aa4ab3e6;
static PyCodeObject *code_objects_115d6e830a9a6f50624d9607a83c0c18;
static PyCodeObject *code_objects_dab376669b8856b61290ab978dc51d17;
static PyCodeObject *code_objects_cd62a4c6295a2daeef8207ec25b5d1e2;
static PyCodeObject *code_objects_eecff080a9619fb9a57fc437ee9ab065;
static PyCodeObject *code_objects_cac6321352bde9aef04027f54875eb17;
static PyCodeObject *code_objects_4567a2555ac584ddc65d57285b6b9ed1;
static PyCodeObject *code_objects_0a10d2ea63e4da2a9b54446b0454a9b0;
static PyCodeObject *code_objects_0418c9ffd163a02327dc2d3eba279db8;
static PyCodeObject *code_objects_d6b06885dc68344be6fa35157e353626;
static PyCodeObject *code_objects_e2b4ce1429a026ea565bc4f9d87956e2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5b6766397bc191002a7de8ad03db40c1); CHECK_OBJECT(module_filename_obj);
code_objects_5690af6071fdf79fe7b08f9537901ce4 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_d15883d287f25ee97943e33fc8b84cbc, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_30636259ebaee7c6a44872e44062f7e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_f6ec3d6635e3fca1dae4defec219a610, mod_consts.const_str_digest_f6ec3d6635e3fca1dae4defec219a610, NULL, NULL, 0, 0, 0);
code_objects_ee48244dbf5c0ec92a9717fa2ea94bf5 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_140823063ce19e1ac9bf7cfc0a13b032, mod_consts.const_tuple_a0c9de1b5ae55485607cc4c553feee2e_tuple, NULL, 2, 0, 0);
code_objects_0dfc6d580d86cac004f8d0772e638731 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_39531106ac2f3993cc58f23c531aad18, mod_consts.const_tuple_cffa4389e2ffb1c1fc4e170acbfc0d56_tuple, NULL, 4, 0, 0);
code_objects_aeb957a7f4c0c44a3d7315bb8a9060fc = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_indent, mod_consts.const_str_plain__get_indent, mod_consts.const_tuple_bad435d37f26679f092d33d7ab4e94fd_tuple, NULL, 1, 0, 0);
code_objects_adad016370ca3e5b522eec8b49487e6b = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__info, mod_consts.const_str_plain__info, mod_consts.const_tuple_b4ee2ca6662b32ea4abd08c2ed5de6bd_tuple, NULL, 2, 0, 0);
code_objects_23b5124b96145662ddded51bbc1bed2e = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__makenamedict, mod_consts.const_str_plain__makenamedict, mod_consts.const_tuple_1ac7d04ed19f3334b9a9488b5fa47c44_tuple, NULL, 1, 0, 0);
code_objects_28f9e35abb7798753fab3cb5aa4ab3e6 = MAKE_CODE_OBJECT(module_filename_obj, 650, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__median_nancheck, mod_consts.const_str_plain__median_nancheck, mod_consts.const_tuple_c4faba56b5e46aac105da8530f396fcd_tuple, NULL, 3, 0, 0);
code_objects_115d6e830a9a6f50624d9607a83c0c18 = MAKE_CODE_OBJECT(module_filename_obj, 692, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__opt_info, mod_consts.const_str_plain__opt_info, mod_consts.const_tuple_4e61bb65ed7e37109c2405f054324af6_tuple, NULL, 0, 0, 0);
code_objects_dab376669b8856b61290ab978dc51d17 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__split_line, mod_consts.const_str_plain__split_line, mod_consts.const_tuple_da9545d9b65ab6fc5cf853dc051c0182_tuple, NULL, 3, 0, 0);
code_objects_cd62a4c6295a2daeef8207ec25b5d1e2 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_deprecate, mod_consts.const_str_plain_deprecate, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_str_plain_fn_tuple, NULL, 0, 0, 0);
code_objects_eecff080a9619fb9a57fc437ee9ab065 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_deprecate_with_doc, mod_consts.const_str_plain_deprecate_with_doc, mod_consts.const_tuple_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_cac6321352bde9aef04027f54875eb17 = MAKE_CODE_OBJECT(module_filename_obj, 724, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_drop_metadata, mod_consts.const_str_plain_drop_metadata, mod_consts.const_tuple_1490daa9ee311650a29c2962f3a496e3_tuple, NULL, 1, 0, 1);
code_objects_4567a2555ac584ddc65d57285b6b9ed1 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_include, mod_consts.const_str_plain_get_include, mod_consts.const_tuple_str_plain_numpy_str_plain_d_str_plain__core_tuple, NULL, 0, 0, 0);
code_objects_0a10d2ea63e4da2a9b54446b0454a9b0 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_info, mod_consts.const_str_plain_info, mod_consts.const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple, NULL, 4, 0, 0);
code_objects_0418c9ffd163a02327dc2d3eba279db8 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_newfunc, mod_consts.const_str_digest_f277fe91e917f14a1edfcbe55077f14c, mod_consts.const_tuple_139b0fa8419baf5c8ced1f634f65997f_tuple, mod_consts.const_tuple_str_plain_depdoc_str_plain_func_tuple, 0, 0, 0);
code_objects_d6b06885dc68344be6fa35157e353626 = MAKE_CODE_OBJECT(module_filename_obj, 583, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_safe_eval, mod_consts.const_str_plain_safe_eval, mod_consts.const_tuple_str_plain_source_str_plain_ast_tuple, NULL, 1, 0, 0);
code_objects_e2b4ce1429a026ea565bc4f9d87956e2 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_show_runtime, mod_consts.const_str_plain_show_runtime, mod_consts.const_tuple_4f7643e9e8e498aca31924b6a6040233_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__11_info(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__12_safe_eval(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__13__median_nancheck(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__14__opt_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__15_drop_metadata(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__1_show_runtime(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__2_get_include(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__3___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__5__get_indent(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__6_deprecate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__8__split_line(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__9__makenamedict(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$_utils_impl$$$function__1_show_runtime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_pprint = NULL;
PyObject *var___cpu_baseline__ = NULL;
PyObject *var___cpu_dispatch__ = NULL;
PyObject *var___cpu_features__ = NULL;
PyObject *var_config_found = NULL;
PyObject *var_features_found = NULL;
PyObject *var_features_not_found = NULL;
PyObject *var_feature = NULL;
PyObject *var_threadpool_info = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime = MAKE_FUNCTION_FRAME(tstate, code_objects_e2b4ce1429a026ea565bc4f9d87956e2, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime = cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pprint;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_pprint_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 39;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain_pprint,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_pprint);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pprint == NULL);
var_pprint = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 41;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_baseline__,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain___cpu_baseline__);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var___cpu_baseline__ == NULL);
var___cpu_baseline__ = tmp_assign_source_3;
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
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_dispatch__,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain___cpu_dispatch__);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var___cpu_dispatch__ == NULL);
var___cpu_dispatch__ = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_features__,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain___cpu_features__);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var___cpu_features__ == NULL);
var___cpu_features__ = tmp_assign_source_5;
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
{
PyObject *tmp_assign_source_6;
PyObject *tmp_list_element_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_numpy_version;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___version__);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_1;
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_python;
tmp_dict_value_1 = mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77;
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_uname;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_utils_impl$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 49;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_uname);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_6, 0, tmp_list_element_1);
assert(var_config_found == NULL);
var_config_found = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_list_empty_tuple, "ll");
tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
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
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
assert(var_features_found == NULL);
Py_INCREF(tmp_assign_source_10);
var_features_found = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
assert(var_features_not_found == NULL);
Py_INCREF(tmp_assign_source_11);
var_features_not_found = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var___cpu_dispatch__);
tmp_iter_arg_2 = var___cpu_dispatch__;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooo";
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
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 52;
        goto try_except_handler_5;
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
    PyObject *old = var_feature;
    var_feature = tmp_assign_source_14;
    Py_INCREF(var_feature);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var___cpu_features__);
tmp_expression_value_2 = var___cpu_features__;
CHECK_OBJECT(var_feature);
tmp_subscript_value_1 = var_feature;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_features_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_features_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_3 = var_features_found;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_feature);
tmp_args_element_value_1 = var_feature;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 54;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (var_features_not_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_features_not_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_4 = var_features_not_found;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_feature);
tmp_args_element_value_2 = var_feature;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 56;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
CHECK_OBJECT(var_config_found);
tmp_list_arg_value_1 = var_config_found;
tmp_dict_key_2 = mod_consts.const_str_plain_simd_extensions;
tmp_dict_key_3 = mod_consts.const_str_plain_baseline;
CHECK_OBJECT(var___cpu_baseline__);
tmp_dict_value_3 = var___cpu_baseline__;
tmp_dict_value_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_found;
if (var_features_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_features_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto dict_build_exception_2;
}

tmp_dict_value_3 = var_features_found;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_not_found;
if (var_features_not_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_features_not_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto dict_build_exception_2;
}

tmp_dict_value_3 = var_features_not_found;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_dict_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_item_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_item_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_config_found);
tmp_list_arg_value_2 = var_config_found;
tmp_dict_key_4 = mod_consts.const_str_plain_ignore_floating_point_errors_in_matmul;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__core);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__multiarray_umath);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 66;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain__blas_supports_fpe,
    PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_4 = (tmp_res == 0) ? Py_True : Py_False;
tmp_item_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_item_value_2, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threadpoolctl;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_threadpool_info_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 70;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain_threadpool_info,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_threadpool_info);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(var_threadpool_info == NULL);
var_threadpool_info = tmp_assign_source_15;
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_config_found);
tmp_list_arg_value_3 = var_config_found;
CHECK_OBJECT(var_threadpool_info);
tmp_called_value_3 = var_threadpool_info;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 71;
tmp_value_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_3, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
tmp_called_value_4 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_4 != NULL);
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 73;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_8a1a25327b3c2dacdc3321a1797e26ff_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 69;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame)) {
        frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_7;
branch_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_pprint);
tmp_called_value_5 = var_pprint;
CHECK_OBJECT(var_config_found);
tmp_args_element_value_3 = var_config_found;
frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame.f_lineno = 77;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime,
    type_description_1,
    var_pprint,
    var___cpu_baseline__,
    var___cpu_dispatch__,
    var___cpu_features__,
    var_config_found,
    var_features_found,
    var_features_not_found,
    var_feature,
    var_threadpool_info
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime == cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__1_show_runtime);

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
CHECK_OBJECT(var_pprint);
CHECK_OBJECT(var_pprint);
Py_DECREF(var_pprint);
var_pprint = NULL;
CHECK_OBJECT(var___cpu_baseline__);
CHECK_OBJECT(var___cpu_baseline__);
Py_DECREF(var___cpu_baseline__);
var___cpu_baseline__ = NULL;
CHECK_OBJECT(var___cpu_dispatch__);
CHECK_OBJECT(var___cpu_dispatch__);
Py_DECREF(var___cpu_dispatch__);
var___cpu_dispatch__ = NULL;
CHECK_OBJECT(var___cpu_features__);
CHECK_OBJECT(var___cpu_features__);
Py_DECREF(var___cpu_features__);
var___cpu_features__ = NULL;
CHECK_OBJECT(var_config_found);
CHECK_OBJECT(var_config_found);
Py_DECREF(var_config_found);
var_config_found = NULL;
Py_XDECREF(var_features_found);
var_features_found = NULL;
Py_XDECREF(var_features_not_found);
var_features_not_found = NULL;
Py_XDECREF(var_feature);
var_feature = NULL;
Py_XDECREF(var_threadpool_info);
var_threadpool_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pprint);
var_pprint = NULL;
Py_XDECREF(var___cpu_baseline__);
var___cpu_baseline__ = NULL;
Py_XDECREF(var___cpu_dispatch__);
var___cpu_dispatch__ = NULL;
Py_XDECREF(var___cpu_features__);
var___cpu_features__ = NULL;
Py_XDECREF(var_config_found);
var_config_found = NULL;
Py_XDECREF(var_features_found);
var_features_found = NULL;
Py_XDECREF(var_features_not_found);
var_features_not_found = NULL;
Py_XDECREF(var_feature);
var_feature = NULL;
Py_XDECREF(var_threadpool_info);
var_threadpool_info = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_numpy$lib$_utils_impl$$$function__2_get_include(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_numpy = NULL;
PyObject *var_d = NULL;
PyObject *var__core = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__2_get_include;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include = MAKE_FUNCTION_FRAME(tstate, code_objects_4567a2555ac584ddc65d57285b6b9ed1, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__2_get_include = cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__2_get_include);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__2_get_include) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_frame.f_lineno = 115;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_numpy == NULL);
var_numpy = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_numpy);
tmp_expression_value_1 = var_numpy;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_show_config);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_numpy);
tmp_expression_value_3 = var_numpy;
tmp_path_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___file__);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain__core;
tmp_args_element_value_3 = mod_consts.const_str_plain_include;
frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_d == NULL);
var_d = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_frame.f_lineno = 121;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var__core == NULL);
var__core = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_path_arg_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__core);
tmp_expression_value_5 = var__core;
tmp_path_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___file__);
if (tmp_path_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
CHECK_OBJECT(tmp_path_arg_2);
Py_DECREF(tmp_path_arg_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_include;
frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_d == NULL);
var_d = tmp_assign_source_4;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__2_get_include, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__2_get_include->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__2_get_include, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__2_get_include,
    type_description_1,
    var_numpy,
    var_d,
    var__core
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__2_get_include == cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__2_get_include = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__2_get_include);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_d);
tmp_return_value = var_d;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_numpy);
CHECK_OBJECT(var_numpy);
Py_DECREF(var_numpy);
var_numpy = NULL;
CHECK_OBJECT(var_d);
CHECK_OBJECT(var_d);
Py_DECREF(var_d);
var_d = NULL;
Py_XDECREF(var__core);
var__core = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_numpy);
var_numpy = NULL;
Py_XDECREF(var__core);
var__core = NULL;
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


static PyObject *impl_numpy$lib$_utils_impl$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_old_name = python_pars[1];
PyObject *par_new_name = python_pars[2];
PyObject *par_message = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0dfc6d580d86cac004f8d0772e638731, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__3___init__ = cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__3___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_old_name);
tmp_assattr_value_1 = par_old_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_old_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_new_name);
tmp_assattr_value_2 = par_new_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_new_name, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_message);
tmp_assattr_value_3 = par_message;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_message, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__3___init__,
    type_description_1,
    par_self,
    par_old_name,
    par_new_name,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__3___init__ == cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__3___init__);

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
CHECK_OBJECT(par_old_name);
Py_DECREF(par_old_name);
CHECK_OBJECT(par_new_name);
Py_DECREF(par_new_name);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_old_name);
Py_DECREF(par_old_name);
CHECK_OBJECT(par_new_name);
Py_DECREF(par_new_name);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__4___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
PyObject *par_args = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_old_name = NULL;
PyObject *var_new_name = NULL;
PyObject *var_message = NULL;
struct Nuitka_CellObject *var_depdoc = Nuitka_Cell_NewEmpty();
PyObject *var_newfunc = NULL;
PyObject *var_doc = NULL;
PyObject *var_lines = NULL;
PyObject *var_indent = NULL;
PyObject *var_skip = NULL;
PyObject *var_line = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__4___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ee48244dbf5c0ec92a9717fa2ea94bf5, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__4___call__ = cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__4___call__);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__4___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_old_name);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_old_name == NULL);
var_old_name = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_new_name);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_new_name == NULL);
var_new_name = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_message);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_message == NULL);
var_message = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_old_name);
tmp_cmp_expr_left_1 = var_old_name;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_expression_value_4 = Nuitka_Cell_GET(par_func);
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_old_name;
    assert(old != NULL);
    var_old_name = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_new_name);
tmp_cmp_expr_left_2 = var_new_name;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_96;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_old_name);
tmp_format_value_1 = var_old_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ocooooocoooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_53a51b45ff25c35499e16e8ebdbae40e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_5 == NULL));
assert(Nuitka_Cell_GET(var_depdoc) == NULL);
Nuitka_Cell_SET(var_depdoc, tmp_assign_source_5);

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_chr_96;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_old_name);
tmp_format_value_2 = var_old_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ocooooocoooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_720b58a1af6acb21dad819b05182bcea;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_new_name);
tmp_format_value_3 = var_new_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ocooooocoooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_7b36e8496befda77accbbabcce73303a;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_6 == NULL));
assert(Nuitka_Cell_GET(var_depdoc) == NULL);
Nuitka_Cell_SET(var_depdoc, tmp_assign_source_6);

}
branch_end_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_message);
tmp_cmp_expr_left_3 = var_message;
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
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
tmp_iadd_expr_left_1 = Nuitka_Cell_GET(var_depdoc);
tmp_add_expr_left_1 = mod_consts.const_str_newline;
CHECK_OBJECT(var_message);
tmp_add_expr_right_1 = var_message;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_iadd_expr_left_1;
Nuitka_Cell_SET(var_depdoc, tmp_assign_source_7);

}
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 162;
tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wraps, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = var_depdoc;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_func;
Py_INCREF(tmp_closure_1[1]);
tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc(tstate, tmp_closure_1);

frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 162;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_newfunc == NULL);
var_newfunc = tmp_assign_source_8;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_old_name);
tmp_assattr_value_1 = var_old_name;
CHECK_OBJECT(var_newfunc);
tmp_assattr_target_1 = var_newfunc;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_expression_value_5 = Nuitka_Cell_GET(par_func);
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___doc__);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_doc == NULL);
var_doc = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_doc);
tmp_cmp_expr_left_4 = var_doc;
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
tmp_assign_source_10 = Nuitka_Cell_GET(var_depdoc);
{
    PyObject *old = var_doc;
    assert(old != NULL);
    var_doc = tmp_assign_source_10;
    Py_INCREF(var_doc);
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_doc);
tmp_expression_value_7 = var_doc;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_expandtabs);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 172;
tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 172;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_newline_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_lines == NULL);
var_lines = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
tmp_called_value_4 = module_var_accessor_numpy$lib$_utils_impl$_get_indent(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_indent);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_expression_value_8 = var_lines;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 173;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_indent == NULL);
var_indent = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_lines);
tmp_expression_value_10 = var_lines;
tmp_subscript_value_2 = const_int_0;
tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 174;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 174;
type_description_1 = "ocooooocoooooo";
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
PyObject *tmp_assign_source_13;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(var_indent);
tmp_mult_expr_left_1 = var_indent;
tmp_mult_expr_right_1 = mod_consts.const_str_space;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_doc);
tmp_add_expr_right_2 = var_doc;
tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_doc;
    assert(old != NULL);
    var_doc = tmp_assign_source_13;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_add_expr_left_3;
nuitka_digit tmp_add_expr_right_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_lines);
tmp_expression_value_11 = var_lines;
tmp_subscript_value_3 = const_int_0;
tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, 0);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = 1;
tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
assert(!(tmp_assign_source_14 == NULL));
assert(var_skip == NULL);
var_skip = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_lines);
tmp_expression_value_12 = var_lines;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ocooooocoooooo";
exception_lineno = 181;
        goto try_except_handler_2;
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
    PyObject *old = var_line;
    var_line = tmp_assign_source_17;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_line);
tmp_len_arg_2 = var_line;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ocooooocoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_indent);
tmp_cmp_expr_right_5 = var_indent;
tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ocooooocoooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_1;
branch_no_6:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_len_arg_3;
if (var_skip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "ocooooocoooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_skip;
CHECK_OBJECT(var_line);
tmp_len_arg_3 = var_line;
tmp_add_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ocooooocoooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_4 = 1;
tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_LONG_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_18 = tmp_iadd_expr_left_2;
var_skip = tmp_assign_source_18;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ocooooocoooooo";
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
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_doc);
tmp_expression_value_13 = var_doc;
if (var_skip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 185;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}

tmp_start_value_1 = var_skip;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_doc;
    assert(old != NULL);
    var_doc = tmp_assign_source_19;
    Py_DECREF(old);
}

}
branch_end_5:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_utils_impl$textwrap(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_textwrap);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_indent);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
tmp_args_element_value_4 = Nuitka_Cell_GET(var_depdoc);
tmp_mult_expr_left_2 = mod_consts.const_str_space;
CHECK_OBJECT(var_indent);
tmp_mult_expr_right_2 = var_indent;
tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 186;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_depdoc);
    Nuitka_Cell_SET(var_depdoc, tmp_assign_source_20);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
tmp_format_value_4 = Nuitka_Cell_GET(var_depdoc);
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ocooooocoooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_doc);
tmp_format_value_5 = var_doc;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ocooooocoooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_21 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_21 == NULL));
{
    PyObject *old = var_doc;
    assert(old != NULL);
    var_doc = tmp_assign_source_21;
    Py_DECREF(old);
}

}
branch_end_4:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_doc);
tmp_assattr_value_2 = var_doc;
CHECK_OBJECT(var_newfunc);
tmp_assattr_target_2 = var_newfunc;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ocooooocoooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__4___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__4___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__4___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__4___call__,
    type_description_1,
    par_self,
    par_func,
    par_args,
    par_kwargs,
    var_old_name,
    var_new_name,
    var_message,
    var_depdoc,
    var_newfunc,
    var_doc,
    var_lines,
    var_indent,
    var_skip,
    var_line
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__4___call__ == cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__4___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_newfunc);
tmp_return_value = var_newfunc;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(var_old_name);
CHECK_OBJECT(var_old_name);
Py_DECREF(var_old_name);
var_old_name = NULL;
CHECK_OBJECT(var_new_name);
CHECK_OBJECT(var_new_name);
Py_DECREF(var_new_name);
var_new_name = NULL;
CHECK_OBJECT(var_message);
CHECK_OBJECT(var_message);
Py_DECREF(var_message);
var_message = NULL;
CHECK_OBJECT(var_depdoc);
CHECK_OBJECT(var_depdoc);
Py_DECREF(var_depdoc);
var_depdoc = NULL;
CHECK_OBJECT(var_newfunc);
CHECK_OBJECT(var_newfunc);
Py_DECREF(var_newfunc);
var_newfunc = NULL;
CHECK_OBJECT(var_doc);
CHECK_OBJECT(var_doc);
Py_DECREF(var_doc);
var_doc = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_skip);
var_skip = NULL;
Py_XDECREF(var_line);
var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
Py_XDECREF(var_old_name);
var_old_name = NULL;
Py_XDECREF(var_new_name);
var_new_name = NULL;
Py_XDECREF(var_message);
var_message = NULL;
CHECK_OBJECT(var_depdoc);
CHECK_OBJECT(var_depdoc);
Py_DECREF(var_depdoc);
var_depdoc = NULL;
Py_XDECREF(var_newfunc);
var_newfunc = NULL;
Py_XDECREF(var_doc);
var_doc = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_skip);
var_skip = NULL;
Py_XDECREF(var_line);
var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *par_kwds = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc = MAKE_FUNCTION_FRAME(tstate, code_objects_0418c9ffd163a02327dc2d3eba279db8, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc = cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_utils_impl$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_depdoc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_utils_impl$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "oocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc->m_frame.f_lineno = 164;
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


exception_lineno = 164;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwds);
tmp_direct_call_arg3_1 = par_kwds;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc,
    type_description_1,
    par_args,
    par_kwds,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc == cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__5__get_indent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_lines = python_pars[0];
PyObject *var_indent = NULL;
PyObject *var_line = NULL;
PyObject *var_content = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_int_hex_7fffffffffffffff;
assert(var_indent == NULL);
Py_INCREF(tmp_assign_source_1);
var_indent = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent = MAKE_FUNCTION_FRAME(tstate, code_objects_aeb957a7f4c0c44a3d7315bb8a9060fc, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent = cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_lines);
tmp_iter_arg_1 = par_lines;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
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
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 198;
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
    PyObject *old = var_line;
    var_line = tmp_assign_source_4;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_len_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_line);
tmp_expression_value_1 = var_line;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lstrip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent->m_frame.f_lineno = 199;
tmp_len_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_content;
    var_content = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
CHECK_OBJECT(var_content);
tmp_condition_result_1 = CHECK_IF_TRUE(var_content) == 1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_len_arg_2;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
if (var_indent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = var_indent;
CHECK_OBJECT(var_line);
tmp_len_arg_2 = var_line;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_content);
tmp_sub_expr_right_1 = var_content;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent->m_frame.f_lineno = 201;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_indent;
    var_indent = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_indent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_indent;
tmp_cmp_expr_right_1 = mod_consts.const_int_hex_7fffffffffffffff;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_0;
{
    PyObject *old = var_indent;
    var_indent = tmp_assign_source_7;
    Py_INCREF(var_indent);
    Py_XDECREF(old);
}

}
branch_no_2:;
if (var_indent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_indent;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent,
    type_description_1,
    par_lines,
    var_indent,
    var_line,
    var_content
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent == cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__5__get_indent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_content);
var_content = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__6_deprecate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_fn = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate = MAKE_FUNCTION_FRAME(tstate, code_objects_cd62a4c6295a2daeef8207ec25b5d1e2, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate = cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_utils_impl$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_utils_impl$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate->m_frame.f_lineno = 255;
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


exception_lineno = 255;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
CHECK_OBJECT(par_args);
tmp_condition_result_1 = CHECK_IF_TRUE(par_args) == 1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_fn == NULL);
var_fn = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_args);
tmp_expression_value_3 = par_args;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_args;
    assert(old != NULL);
    par_args = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_args_element_value_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_utils_impl$_Deprecate(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Deprecate);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_called_value_2 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fn);
tmp_args_element_value_1 = var_fn;
frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate->m_frame.f_lineno = 267;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_2;
tmp_direct_call_arg1_2 = module_var_accessor_numpy$lib$_utils_impl$_Deprecate(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Deprecate);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_2 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_2 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate,
    type_description_1,
    par_args,
    par_kwargs,
    var_fn
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate == cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__6_deprecate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_args);
par_args = NULL;
Py_XDECREF(var_fn);
var_fn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_args);
par_args = NULL;
Py_XDECREF(var_fn);
var_fn = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_msg = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc = MAKE_FUNCTION_FRAME(tstate, code_objects_eecff080a9619fb9a57fc437ee9ab065, module_numpy$lib$_utils_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc = cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_utils_impl$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_0799ee27d1ffcac14f706ceb2a1f8ddf;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_utils_impl$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc->m_frame.f_lineno = 302;
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


exception_lineno = 302;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_utils_impl$_Deprecate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Deprecate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_msg);
tmp_kw_call_value_0_1 = par_msg;
frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc->m_frame.f_lineno = 310;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_message_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc,
    type_description_1,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc == cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__8__split_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_arguments = python_pars[1];
PyObject *par_width = python_pars[2];
PyObject *var_firstwidth = NULL;
PyObject *var_k = NULL;
PyObject *var_newstr = NULL;
PyObject *var_sepstr = NULL;
PyObject *var_arglist = NULL;
PyObject *var_argument = NULL;
PyObject *var_addstr = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__8__split_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line = MAKE_FUNCTION_FRAME(tstate, code_objects_dab376669b8856b61290ab978dc51d17, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__8__split_line = cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__8__split_line);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__8__split_line) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_name);
tmp_len_arg_1 = par_name;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_firstwidth == NULL);
var_firstwidth = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_firstwidth);
tmp_assign_source_2 = var_firstwidth;
assert(var_k == NULL);
Py_INCREF(tmp_assign_source_2);
var_k = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_name);
tmp_assign_source_3 = par_name;
assert(var_newstr == NULL);
Py_INCREF(tmp_assign_source_3);
var_newstr = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
assert(var_sepstr == NULL);
Py_INCREF(tmp_assign_source_4);
var_sepstr = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_arguments);
tmp_expression_value_1 = par_arguments;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sepstr);
tmp_args_element_value_1 = var_sepstr;
frame_frame_numpy$lib$_utils_impl$$$function__8__split_line->m_frame.f_lineno = 327;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_arglist == NULL);
var_arglist = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_arglist);
tmp_iter_arg_1 = var_arglist;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooo";
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
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 328;
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
    PyObject *old = var_argument;
    var_argument = tmp_assign_source_8;
    Py_INCREF(var_argument);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = var_k;
if (var_firstwidth == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_firstwidth);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_firstwidth;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_str_empty;
{
    PyObject *old = var_addstr;
    var_addstr = tmp_assign_source_9;
    Py_INCREF(var_addstr);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
if (var_sepstr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sepstr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_10 = var_sepstr;
{
    PyObject *old = var_addstr;
    var_addstr = tmp_assign_source_10;
    Py_INCREF(var_addstr);
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_len_arg_2;
PyObject *tmp_len_arg_3;
if (var_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_2 = var_k;
CHECK_OBJECT(var_argument);
tmp_len_arg_2 = var_argument;
tmp_add_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_addstr);
tmp_len_arg_3 = var_addstr;
tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_2 = var_k;
CHECK_OBJECT(par_width);
tmp_cmp_expr_right_2 = par_width;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_12;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_len_arg_4;
if (var_firstwidth == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_firstwidth);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_4 = var_firstwidth;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_argument);
tmp_len_arg_4 = var_argument;
tmp_add_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_k;
    assert(old != NULL);
    var_k = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
if (var_newstr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newstr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_7 = var_newstr;
tmp_add_expr_right_7 = mod_consts.const_str_digest_4012fa31eb9aad3a18542bb631c34296;
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_1 = mod_consts.const_str_space;
if (var_firstwidth == NULL) {
Py_DECREF(tmp_add_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_firstwidth);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_8 = var_firstwidth;
tmp_add_expr_right_8 = mod_consts.const_int_pos_2;
tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_argument);
tmp_add_expr_right_5 = var_argument;
tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newstr;
    var_newstr = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
if (var_newstr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newstr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 338;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_10 = var_newstr;
CHECK_OBJECT(var_addstr);
tmp_add_expr_right_10 = var_addstr;
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_10, tmp_add_expr_right_10);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_argument);
tmp_add_expr_right_9 = var_argument;
tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newstr;
    var_newstr = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooo";
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
if (var_newstr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newstr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_newstr;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__8__split_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__8__split_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__8__split_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__8__split_line,
    type_description_1,
    par_name,
    par_arguments,
    par_width,
    var_firstwidth,
    var_k,
    var_newstr,
    var_sepstr,
    var_arglist,
    var_argument,
    var_addstr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__8__split_line == cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__8__split_line = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__8__split_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_firstwidth);
var_firstwidth = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_newstr);
var_newstr = NULL;
Py_XDECREF(var_sepstr);
var_sepstr = NULL;
CHECK_OBJECT(var_arglist);
CHECK_OBJECT(var_arglist);
Py_DECREF(var_arglist);
var_arglist = NULL;
Py_XDECREF(var_argument);
var_argument = NULL;
Py_XDECREF(var_addstr);
var_addstr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_firstwidth);
var_firstwidth = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_newstr);
var_newstr = NULL;
Py_XDECREF(var_sepstr);
var_sepstr = NULL;
Py_XDECREF(var_arglist);
var_arglist = NULL;
Py_XDECREF(var_argument);
var_argument = NULL;
Py_XDECREF(var_addstr);
var_addstr = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_arguments);
Py_DECREF(par_arguments);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_arguments);
Py_DECREF(par_arguments);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__9__makenamedict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_module = python_pars[0];
PyObject *var_thedict = NULL;
PyObject *var_dictlist = NULL;
PyObject *var_totraverse = NULL;
PyObject *var_thisdict = NULL;
PyObject *var_x = NULL;
PyObject *var_modname = NULL;
PyObject *var_moddict = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *locals_numpy$lib$_utils_impl$$$function__9__makenamedict = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict = MAKE_FUNCTION_FRAME(tstate, code_objects_23b5124b96145662ddded51bbc1bed2e, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict = cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
CHECK_OBJECT(par_module);
tmp_name_value_1 = par_module;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
if (locals_numpy$lib$_utils_impl$$$function__9__makenamedict == NULL) locals_numpy$lib$_utils_impl$$$function__9__makenamedict = MAKE_DICT_EMPTY(tstate);
tmp_locals_arg_value_1 = locals_numpy$lib$_utils_impl$$$function__9__makenamedict;
Py_INCREF(tmp_locals_arg_value_1);
if (par_module != NULL) {
    PyObject *value;
CHECK_OBJECT(par_module);
value = par_module;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_module, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_module) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_thedict != NULL) {
    PyObject *value;
CHECK_OBJECT(var_thedict);
value = var_thedict;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_thedict, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_thedict) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_dictlist != NULL) {
    PyObject *value;
CHECK_OBJECT(var_dictlist);
value = var_dictlist;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_dictlist, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_dictlist) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_totraverse != NULL) {
    PyObject *value;
CHECK_OBJECT(var_totraverse);
value = var_totraverse;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_totraverse, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_totraverse) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_thisdict != NULL) {
    PyObject *value;
CHECK_OBJECT(var_thisdict);
value = var_thisdict;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_thisdict, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_thisdict) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_x != NULL) {
    PyObject *value;
CHECK_OBJECT(var_x);
value = var_x;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_x, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_x) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_modname != NULL) {
    PyObject *value;
CHECK_OBJECT(var_modname);
value = var_modname;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_modname, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_modname) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_moddict != NULL) {
    PyObject *value;
CHECK_OBJECT(var_moddict);
value = var_moddict;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts.const_str_plain_moddict, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts.const_str_plain_moddict) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

tmp_fromlist_value_1 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame.f_lineno = 348;
tmp_assign_source_1 = IMPORT_MODULE4(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
CHECK_OBJECT(tmp_locals_arg_value_1);
Py_DECREF(tmp_locals_arg_value_1);
CHECK_OBJECT(tmp_fromlist_value_1);
Py_DECREF(tmp_fromlist_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_module;
    assert(old != NULL);
    par_module = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_module);
tmp_expression_value_1 = par_module;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_module);
tmp_expression_value_2 = par_module;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 349;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_thedict == NULL);
var_thedict = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_module);
tmp_expression_value_3 = par_module;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
assert(var_dictlist == NULL);
var_dictlist = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_module);
tmp_expression_value_4 = par_module;
tmp_list_element_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_4, 0, tmp_list_element_2);
assert(var_totraverse == NULL);
var_totraverse = tmp_assign_source_4;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
if (var_totraverse == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_totraverse);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_totraverse;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
if (var_totraverse == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_totraverse);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_totraverse;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame.f_lineno = 355;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_thisdict;
    var_thisdict = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_thisdict);
tmp_expression_value_6 = var_thisdict;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_keys);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame.f_lineno = 356;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 356;
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
    PyObject *old = var_x;
    var_x = tmp_assign_source_8;
    Py_INCREF(var_x);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_thisdict);
tmp_expression_value_7 = var_thisdict;
CHECK_OBJECT(var_x);
tmp_subscript_value_1 = var_x;
tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_8 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ModuleType);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 357;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_thisdict);
tmp_expression_value_10 = var_thisdict;
CHECK_OBJECT(var_x);
tmp_subscript_value_2 = var_x;
tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_modname;
    var_modname = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_modname);
tmp_cmp_expr_left_2 = var_modname;
if (var_dictlist == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictlist);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = var_dictlist;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_thisdict);
tmp_expression_value_12 = var_thisdict;
CHECK_OBJECT(var_x);
tmp_subscript_value_3 = var_x;
tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_11);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_moddict;
    var_moddict = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_dictlist == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictlist);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 361;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_13 = var_dictlist;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_modname);
tmp_args_element_value_1 = var_modname;
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame.f_lineno = 361;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (var_totraverse == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_totraverse);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_14 = var_totraverse;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_moddict);
tmp_args_element_value_2 = var_moddict;
frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame.f_lineno = 362;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_moddict);
tmp_ass_subvalue_1 = var_moddict;
if (var_thedict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thedict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_thedict;
CHECK_OBJECT(var_modname);
tmp_ass_subscript_1 = var_modname;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
branch_no_3:;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_tuple_element_1;
if (var_thedict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thedict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = var_thedict;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
if (var_dictlist == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictlist);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_dictlist;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict,
    type_description_1,
    par_module,
    var_thedict,
    var_dictlist,
    var_totraverse,
    var_thisdict,
    var_x,
    var_modname,
    var_moddict
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict == cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__9__makenamedict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_module);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
par_module = NULL;
Py_XDECREF(var_thedict);
var_thedict = NULL;
Py_XDECREF(var_dictlist);
var_dictlist = NULL;
Py_XDECREF(var_totraverse);
var_totraverse = NULL;
Py_XDECREF(var_thisdict);
var_thisdict = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_modname);
var_modname = NULL;
Py_XDECREF(var_moddict);
var_moddict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_module);
par_module = NULL;
Py_XDECREF(var_thedict);
var_thedict = NULL;
Py_XDECREF(var_dictlist);
var_dictlist = NULL;
Py_XDECREF(var_totraverse);
var_totraverse = NULL;
Py_XDECREF(var_thisdict);
var_thisdict = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_modname);
var_modname = NULL;
Py_XDECREF(var_moddict);
var_moddict = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
Py_XDECREF(locals_numpy$lib$_utils_impl$$$function__9__makenamedict);

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
Py_XDECREF(locals_numpy$lib$_utils_impl$$$function__9__makenamedict);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__10__info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_output = python_pars[1];
PyObject *var_bp = NULL;
PyObject *var_cls = NULL;
PyObject *var_nm = NULL;
PyObject *var_strides = NULL;
PyObject *var_endian = NULL;
PyObject *var_byteswap = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__10__info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;

tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda(tstate);

assert(var_bp == NULL);
var_bp = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info = MAKE_FUNCTION_FRAME(tstate, code_objects_adad016370ca3e5b522eec8b49487e6b, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__10__info = cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__10__info);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__10__info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_name_value_1 = const_str_plain___class__;
CHECK_OBJECT(par_obj);
tmp_type_arg_1 = par_obj;
tmp_default_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_default_value_1 == NULL));
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
assert(var_cls == NULL);
var_cls = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(var_cls);
tmp_expression_value_2 = var_cls;
tmp_name_value_2 = const_str_plain___name__;
CHECK_OBJECT(var_cls);
tmp_default_value_2 = var_cls;
tmp_assign_source_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
assert(var_nm == NULL);
var_nm = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_obj);
tmp_expression_value_3 = par_obj;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strides);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
assert(var_strides == NULL);
var_strides = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_obj);
tmp_expression_value_5 = par_obj;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_byteorder);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
assert(var_endian == NULL);
var_endian = tmp_assign_source_5;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_output);
tmp_cmp_expr_left_1 = par_output;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_6 == NULL));
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_stdout);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_output;
    assert(old != NULL);
    par_output = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_1 != NULL);
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_43bc3449adbc115b2dadbc8db25e363a;
CHECK_OBJECT(var_nm);
tmp_kw_call_arg_value_1_1 = var_nm;
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_1 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 396;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_2 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_2 != NULL);
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_7e797acb9342c109a4833fa1a7bdde6e;
CHECK_OBJECT(par_obj);
tmp_expression_value_7 = par_obj;
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_2 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 397;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_called_value_3 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_3 != NULL);
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_3006969257adc16118484a64a9cb6194;
CHECK_OBJECT(var_strides);
tmp_kw_call_arg_value_1_3 = var_strides;
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_3 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 398;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_called_value_4 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_4 != NULL);
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_2563d895f233ff6c8ba35fdc080c8321;
CHECK_OBJECT(par_obj);
tmp_expression_value_8 = par_obj;
tmp_kw_call_arg_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_itemsize);
if (tmp_kw_call_arg_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_4 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 399;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_4);
Py_DECREF(tmp_kw_call_arg_value_1_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_5;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_arg_value_1_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_dict_value_0_5;
tmp_called_value_5 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_5 != NULL);
tmp_kw_call_arg_value_0_5 = mod_consts.const_str_digest_e49d5e2e97a46c9a22e12b346eb849fe;
CHECK_OBJECT(var_bp);
tmp_called_value_6 = var_bp;
CHECK_OBJECT(par_obj);
tmp_expression_value_10 = par_obj;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_flags);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_aligned);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 400;
tmp_kw_call_arg_value_1_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_arg_value_1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_5 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 400;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_5);
Py_DECREF(tmp_kw_call_arg_value_1_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_arg_value_1_6;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_dict_value_0_6;
tmp_called_value_7 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_7 != NULL);
tmp_kw_call_arg_value_0_6 = mod_consts.const_str_digest_bf54b61d64b75b180e82455486b519fa;
CHECK_OBJECT(var_bp);
tmp_called_value_8 = var_bp;
CHECK_OBJECT(par_obj);
tmp_expression_value_12 = par_obj;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_flags);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_contiguous);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 401;
tmp_kw_call_arg_value_1_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_arg_value_1_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_6 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 401;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_6);
Py_DECREF(tmp_kw_call_arg_value_1_6);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_7;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_arg_value_1_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_dict_value_0_7;
tmp_called_value_9 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_9 != NULL);
tmp_kw_call_arg_value_0_7 = mod_consts.const_str_digest_651dfd3122218fc040fd3c000e075f74;
CHECK_OBJECT(par_obj);
tmp_expression_value_14 = par_obj;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_flags);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_fortran);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_arg_value_1_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_7 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 402;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_7);
Py_DECREF(tmp_kw_call_arg_value_1_7);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_8;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_0_8;
tmp_called_value_10 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_10 != NULL);
tmp_tuple_element_1 = mod_consts.const_str_digest_aa3f546ca9ce43f67be2e207ae73edc2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_hex_arg_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_obj);
tmp_expression_value_17 = par_obj;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_ctypes);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__as_parameter_);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_1;
}
tmp_hex_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_hex_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = BUILTIN_HEX(tstate, tmp_hex_arg_1);
CHECK_OBJECT(tmp_hex_arg_1);
Py_DECREF(tmp_hex_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_empty;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kw_call_arg_value_0_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_kw_call_arg_value_0_8 == NULL));
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_8 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 403;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_8);
Py_DECREF(tmp_kw_call_arg_value_0_8);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_9;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_11 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_11 != NULL);
tmp_kw_call_value_0_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_output);
tmp_kw_call_value_1_1 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 407;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, mod_consts.const_tuple_str_digest_4943cd63f781f8ecc22725dd76eb010b_tuple, kw_values, mod_consts.const_tuple_str_plain_end_str_plain_file_tuple);
}

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_endian);
tmp_cmp_expr_left_2 = var_endian;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_chr_124_str_chr_61_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_10;
PyObject *tmp_kw_call_value_0_2;
tmp_called_value_12 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_12 != NULL);
CHECK_OBJECT(par_output);
tmp_kw_call_value_0_2 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 409;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
    tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_little_tuple, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
assert(var_byteswap == NULL);
Py_INCREF(tmp_assign_source_7);
var_byteswap = tmp_assign_source_7;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_endian);
tmp_cmp_expr_left_3 = var_endian;
tmp_cmp_expr_right_3 = mod_consts.const_str_chr_62;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "ooNNoooooo";
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
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_11;
PyObject *tmp_kw_call_value_0_3;
tmp_called_value_13 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_13 != NULL);
CHECK_OBJECT(par_output);
tmp_kw_call_value_0_3 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 412;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
    tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_big_tuple, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_True;
assert(var_byteswap == NULL);
Py_INCREF(tmp_assign_source_8);
var_byteswap = tmp_assign_source_8;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_12;
PyObject *tmp_kw_call_value_0_4;
tmp_called_value_14 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_14 != NULL);
CHECK_OBJECT(par_output);
tmp_kw_call_value_0_4 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 415;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
    tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_little_tuple, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
assert(var_byteswap == NULL);
Py_INCREF(tmp_assign_source_9);
var_byteswap = tmp_assign_source_9;
}
branch_end_3:;
branch_end_2:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_13;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_arg_value_1_8;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_dict_value_0_9;
tmp_called_value_15 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_15 != NULL);
tmp_kw_call_arg_value_0_9 = mod_consts.const_str_digest_7eee015a07d8313712564c5bb4c64867;
CHECK_OBJECT(var_bp);
tmp_called_value_16 = var_bp;
CHECK_OBJECT(var_byteswap);
tmp_args_element_value_3 = var_byteswap;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 417;
tmp_kw_call_arg_value_1_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_3);
if (tmp_kw_call_arg_value_1_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_9 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 417;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_8};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_8);
Py_DECREF(tmp_kw_call_arg_value_1_8);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_14;
PyObject *tmp_kw_call_arg_value_0_10;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_10;
tmp_called_value_17 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_17 != NULL);
tmp_tuple_element_2 = mod_consts.const_str_digest_a5b62ca4149eee27e55e7f20c59b857d;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_obj);
tmp_expression_value_18 = par_obj;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_dtype);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooNNoooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_10 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_10 == NULL));
CHECK_OBJECT(par_output);
tmp_kw_call_dict_value_0_10 = par_output;
frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame.f_lineno = 418;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_10};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
    tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts.const_tuple_str_plain_file_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_10);
Py_DECREF(tmp_kw_call_arg_value_0_10);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooNNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__10__info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__10__info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__10__info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__10__info,
    type_description_1,
    par_obj,
    par_output,
    NULL,
    NULL,
    var_bp,
    var_cls,
    var_nm,
    var_strides,
    var_endian,
    var_byteswap
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__10__info == cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__10__info = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__10__info);

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
CHECK_OBJECT(par_output);
CHECK_OBJECT(par_output);
Py_DECREF(par_output);
par_output = NULL;
CHECK_OBJECT(var_bp);
CHECK_OBJECT(var_bp);
Py_DECREF(var_bp);
var_bp = NULL;
CHECK_OBJECT(var_cls);
CHECK_OBJECT(var_cls);
Py_DECREF(var_cls);
var_cls = NULL;
CHECK_OBJECT(var_nm);
CHECK_OBJECT(var_nm);
Py_DECREF(var_nm);
var_nm = NULL;
CHECK_OBJECT(var_strides);
CHECK_OBJECT(var_strides);
Py_DECREF(var_strides);
var_strides = NULL;
CHECK_OBJECT(var_endian);
CHECK_OBJECT(var_endian);
Py_DECREF(var_endian);
var_endian = NULL;
CHECK_OBJECT(var_byteswap);
CHECK_OBJECT(var_byteswap);
Py_DECREF(var_byteswap);
var_byteswap = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_output);
CHECK_OBJECT(par_output);
Py_DECREF(par_output);
par_output = NULL;
CHECK_OBJECT(var_bp);
CHECK_OBJECT(var_bp);
Py_DECREF(var_bp);
var_bp = NULL;
Py_XDECREF(var_cls);
var_cls = NULL;
Py_XDECREF(var_nm);
var_nm = NULL;
Py_XDECREF(var_strides);
var_strides = NULL;
Py_XDECREF(var_endian);
var_endian = NULL;
Py_XDECREF(var_byteswap);
var_byteswap = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto function_return_exit;

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


static PyObject *impl_numpy$lib$_utils_impl$$$function__11_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_object = python_pars[0];
PyObject *par_maxwidth = python_pars[1];
PyObject *par_output = python_pars[2];
PyObject *par_toplevel = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__11_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info = MAKE_FUNCTION_FRAME(tstate, code_objects_0a10d2ea63e4da2a9b54446b0454a9b0, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__11_info = cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__11_info);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__11_info) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_36f52fbe295ef2b52b12db0ec2a323e2;
frame_frame_numpy$lib$_utils_impl$$$function__11_info->m_frame.f_lineno = 1;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__11_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__11_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__11_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__11_info,
    type_description_1,
    par_object,
    par_maxwidth,
    par_output,
    par_toplevel
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__11_info == cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__11_info = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__11_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_object);
Py_DECREF(par_object);
CHECK_OBJECT(par_maxwidth);
Py_DECREF(par_maxwidth);
CHECK_OBJECT(par_output);
Py_DECREF(par_output);
CHECK_OBJECT(par_toplevel);
Py_DECREF(par_toplevel);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_numpy$lib$_utils_impl$$$function__12_safe_eval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_source = python_pars[0];
PyObject *var_ast = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval = MAKE_FUNCTION_FRAME(tstate, code_objects_d6b06885dc68344be6fa35157e353626, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval = cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_utils_impl$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_cf91cbf23f4c773bd7959671e4b86e8b;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_utils_impl$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 641;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval->m_frame.f_lineno = 637;
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


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ast;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval->m_frame.f_lineno = 646;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_ast == NULL);
var_ast = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_ast);
tmp_called_instance_1 = var_ast;
CHECK_OBJECT(par_source);
tmp_args_element_value_1 = par_source;
frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval->m_frame.f_lineno = 647;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_literal_eval, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval,
    type_description_1,
    par_source,
    var_ast
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval == cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__12_safe_eval);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ast);
CHECK_OBJECT(var_ast);
Py_DECREF(var_ast);
var_ast = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ast);
var_ast = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_source);
Py_DECREF(par_source);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_source);
Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__13__median_nancheck(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_result = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *var_potential_nans = NULL;
PyObject *var_n = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck = MAKE_FUNCTION_FRAME(tstate, code_objects_28f9e35abb7798753fab3cb5aa4ab3e6, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck = cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
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


exception_lineno = 671;
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
CHECK_OBJECT(par_result);
tmp_return_value = par_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_data);
tmp_expression_value_2 = par_data;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_take);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_kw_call_value_0_1 = par_axis;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 673;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_int_neg_1_tuple, kw_values, mod_consts.const_tuple_str_plain_axis_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_potential_nans == NULL);
var_potential_nans = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 674;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_potential_nans);
tmp_args_element_value_1 = var_potential_nans;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 674;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isnan, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 674;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 677;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ma);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_args_element_value_2 = var_n;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 677;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isMaskedArray, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 677;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_n);
tmp_called_instance_3 = var_n;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 678;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_filled,
    PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_n;
    assert(old != NULL);
    var_n = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_4;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 680;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = var_n;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 680;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_any);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
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
CHECK_OBJECT(par_result);
tmp_return_value = par_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_result);
tmp_isinstance_inst_1 = par_result;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 685;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_generic);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_potential_nans);
tmp_return_value = var_potential_nans;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 689;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_copyto);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_result);
tmp_kw_call_arg_value_0_1 = par_result;
CHECK_OBJECT(var_potential_nans);
tmp_kw_call_arg_value_1_1 = var_potential_nans;
if (var_n == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 689;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = var_n;
frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame.f_lineno = 689;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_where_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck,
    type_description_1,
    par_data,
    par_result,
    par_axis,
    var_potential_nans,
    var_n
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck == cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__13__median_nancheck);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_result);
tmp_return_value = par_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_potential_nans);
var_potential_nans = NULL;
Py_XDECREF(var_n);
var_n = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_potential_nans);
var_potential_nans = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_result);
Py_DECREF(par_result);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_result);
Py_DECREF(par_result);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_utils_impl$$$function__14__opt_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var___cpu_baseline__ = NULL;
PyObject *var___cpu_dispatch__ = NULL;
PyObject *var___cpu_features__ = NULL;
PyObject *var_enabled_features = NULL;
PyObject *var_feature = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info = MAKE_FUNCTION_FRAME(tstate, code_objects_115d6e830a9a6f50624d9607a83c0c18, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info = cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_254c442e5ce6aae1f88196117f5c19f9_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info->m_frame.f_lineno = 706;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooo";
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
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_baseline__,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain___cpu_baseline__);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var___cpu_baseline__ == NULL);
var___cpu_baseline__ = tmp_assign_source_2;
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
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_dispatch__,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain___cpu_dispatch__);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var___cpu_dispatch__ == NULL);
var___cpu_dispatch__ = tmp_assign_source_3;
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
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain___cpu_features__,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain___cpu_features__);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var___cpu_features__ == NULL);
var___cpu_features__ = tmp_assign_source_4;
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
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var___cpu_baseline__);
tmp_len_arg_1 = var___cpu_baseline__;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_and_left_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var___cpu_dispatch__);
tmp_len_arg_2 = var___cpu_dispatch__;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(var___cpu_baseline__);
tmp_iterable_value_1 = var___cpu_baseline__;
tmp_assign_source_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_enabled_features == NULL);
var_enabled_features = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var___cpu_dispatch__);
tmp_iter_arg_1 = var___cpu_dispatch__;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
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
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 716;
        goto try_except_handler_3;
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
    PyObject *old = var_feature;
    var_feature = tmp_assign_source_8;
    Py_INCREF(var_feature);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var___cpu_features__);
tmp_expression_value_1 = var___cpu_features__;
CHECK_OBJECT(var_feature);
tmp_subscript_value_1 = var_feature;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 717;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (var_enabled_features == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enabled_features);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 718;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_iadd_expr_left_1 = var_enabled_features;
tmp_tuple_element_1 = mod_consts.const_str_space;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_feature);
tmp_format_value_1 = var_feature;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 718;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_42;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 718;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_enabled_features = tmp_assign_source_9;

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
if (var_enabled_features == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enabled_features);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 720;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_iadd_expr_left_2 = var_enabled_features;
tmp_tuple_element_2 = mod_consts.const_str_space;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_feature);
tmp_format_value_2 = var_feature;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_63;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_iadd_expr_right_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
var_enabled_features = tmp_assign_source_10;

}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
if (var_enabled_features == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enabled_features);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 722;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_enabled_features;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info,
    type_description_1,
    var___cpu_baseline__,
    var___cpu_dispatch__,
    var___cpu_features__,
    var_enabled_features,
    var_feature
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info == cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__14__opt_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var___cpu_baseline__);
CHECK_OBJECT(var___cpu_baseline__);
Py_DECREF(var___cpu_baseline__);
var___cpu_baseline__ = NULL;
CHECK_OBJECT(var___cpu_dispatch__);
CHECK_OBJECT(var___cpu_dispatch__);
Py_DECREF(var___cpu_dispatch__);
var___cpu_dispatch__ = NULL;
CHECK_OBJECT(var___cpu_features__);
CHECK_OBJECT(var___cpu_features__);
Py_DECREF(var___cpu_features__);
var___cpu_features__ = NULL;
Py_XDECREF(var_enabled_features);
var_enabled_features = NULL;
Py_XDECREF(var_feature);
var_feature = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var___cpu_baseline__);
var___cpu_baseline__ = NULL;
Py_XDECREF(var___cpu_dispatch__);
var___cpu_dispatch__ = NULL;
Py_XDECREF(var___cpu_features__);
var___cpu_features__ = NULL;
Py_XDECREF(var_enabled_features);
var_enabled_features = NULL;
Py_XDECREF(var_feature);
var_feature = NULL;
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


static PyObject *impl_numpy$lib$_utils_impl$$$function__15_drop_metadata(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dtype = python_pars[0];
PyObject *var_found_metadata = NULL;
PyObject *var_names = NULL;
PyObject *var_formats = NULL;
PyObject *var_offsets = NULL;
PyObject *var_titles = NULL;
PyObject *var_name = NULL;
PyObject *var_field = NULL;
PyObject *var_field_dt = NULL;
PyObject *var_structure = NULL;
PyObject *var_subdtype = NULL;
PyObject *var_shape = NULL;
PyObject *var_new_subdtype = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata;
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
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata = MAKE_FUNCTION_FRAME(tstate, code_objects_cac6321352bde9aef04027f54875eb17, module_numpy$lib$_utils_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_type_description == NULL);
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata = cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_dtype);
tmp_expression_value_1 = par_dtype;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fields);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 745;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_dtype);
tmp_expression_value_2 = par_dtype;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_metadata);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_assign_source_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
assert(var_found_metadata == NULL);
Py_INCREF(tmp_assign_source_1);
var_found_metadata = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_names == NULL);
var_names = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_formats == NULL);
var_formats = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_offsets == NULL);
var_offsets = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_titles == NULL);
var_titles = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_dtype);
tmp_expression_value_4 = par_dtype;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fields);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 752;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
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
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 752;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 752;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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



exception_lineno = 752;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_11;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_12;
    Py_INCREF(var_field);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_utils_impl$drop_metadata(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_drop_metadata);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 753;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_field);
tmp_expression_value_5 = var_field;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 753;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_field_dt;
    var_field_dt = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_field_dt);
tmp_cmp_expr_left_3 = var_field_dt;
CHECK_OBJECT(var_field);
tmp_expression_value_6 = var_field;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_True;
{
    PyObject *old = var_found_metadata;
    var_found_metadata = tmp_assign_source_14;
    Py_INCREF(var_found_metadata);
    Py_XDECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 757;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_names;
CHECK_OBJECT(var_name);
tmp_item_value_1 = var_name;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_formats == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 758;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_formats;
CHECK_OBJECT(var_field_dt);
tmp_item_value_2 = var_field_dt;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 759;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_3 = var_offsets;
CHECK_OBJECT(var_field);
tmp_expression_value_7 = var_field;
tmp_subscript_value_3 = const_int_pos_1;
tmp_item_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 1);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
if (var_titles == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 760;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_4 = var_titles;
CHECK_OBJECT(var_field);
tmp_len_arg_1 = var_field;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_4 = 3;
tmp_condition_result_3 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_item_value_4 = Py_None;
Py_INCREF(tmp_item_value_4);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_field);
tmp_expression_value_8 = var_field;
tmp_subscript_value_4 = mod_consts.const_int_pos_2;
tmp_item_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 2);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooooooooooo";
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
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
if (var_found_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_found_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 762;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_found_metadata;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(par_dtype);
tmp_return_value = par_dtype;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_names;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 766;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = var_names;
tmp_assign_source_15 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_9;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_formats;
if (var_formats == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 766;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_formats;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_offsets;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 766;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_offsets;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_titles;
if (var_titles == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 766;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_titles;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_itemsize;
CHECK_OBJECT(par_dtype);
tmp_expression_value_9 = par_dtype;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_itemsize);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_structure == NULL);
var_structure = tmp_assign_source_15;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_11;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 770;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 770;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_structure);
tmp_kw_call_arg_value_0_1 = var_structure;
CHECK_OBJECT(par_dtype);
tmp_expression_value_11 = par_dtype;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_isalignedstruct);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 770;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 770;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_align_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 770;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_dtype);
tmp_expression_value_12 = par_dtype;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_subdtype);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_dtype);
tmp_expression_value_13 = par_dtype;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_subdtype);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 773;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 773;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 773;
type_description_1 = "ooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
assert(var_subdtype == NULL);
Py_INCREF(tmp_assign_source_19);
var_subdtype = tmp_assign_source_19;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
assert(var_shape == NULL);
Py_INCREF(tmp_assign_source_20);
var_shape = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_numpy$lib$_utils_impl$drop_metadata(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_drop_metadata);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 774;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_subdtype);
tmp_args_element_value_2 = var_subdtype;
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 774;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_new_subdtype == NULL);
var_new_subdtype = tmp_assign_source_21;
}
{
bool tmp_condition_result_6;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_dtype);
tmp_expression_value_14 = par_dtype;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_metadata);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 775;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_new_subdtype);
tmp_cmp_expr_left_7 = var_new_subdtype;
CHECK_OBJECT(var_subdtype);
tmp_cmp_expr_right_7 = var_subdtype;
tmp_and_right_value_1 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(par_dtype);
tmp_return_value = par_dtype;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_new_subdtype);
tmp_tuple_element_1 = var_new_subdtype;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_shape);
tmp_tuple_element_1 = var_shape;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 778;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_dtype);
tmp_expression_value_15 = par_dtype;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_metadata);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(par_dtype);
tmp_return_value = par_dtype;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_17;
tmp_expression_value_16 = module_var_accessor_numpy$lib$_utils_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 784;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_expression_value_17 = par_dtype;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_str);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 784;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame.f_lineno = 784;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata,
    type_description_1,
    par_dtype,
    var_found_metadata,
    var_names,
    var_formats,
    var_offsets,
    var_titles,
    var_name,
    var_field,
    var_field_dt,
    var_structure,
    var_subdtype,
    var_shape,
    var_new_subdtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata == cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata);
    cache_frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_utils_impl$$$function__15_drop_metadata);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_found_metadata);
var_found_metadata = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_titles);
var_titles = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_field);
var_field = NULL;
Py_XDECREF(var_field_dt);
var_field_dt = NULL;
Py_XDECREF(var_structure);
var_structure = NULL;
Py_XDECREF(var_subdtype);
var_subdtype = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
Py_XDECREF(var_new_subdtype);
var_new_subdtype = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_found_metadata);
var_found_metadata = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_titles);
var_titles = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_field);
var_field = NULL;
Py_XDECREF(var_field_dt);
var_field_dt = NULL;
Py_XDECREF(var_structure);
var_structure = NULL;
Py_XDECREF(var_subdtype);
var_subdtype = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
Py_XDECREF(var_new_subdtype);
var_new_subdtype = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__10__info,
        mod_consts.const_str_plain__info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_adad016370ca3e5b522eec8b49487e6b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_6cfad5e59067295af94d02c24191a103,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d15883d287f25ee97943e33fc8b84cbc,
#endif
        code_objects_5690af6071fdf79fe7b08f9537901ce4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__11_info(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__11_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0a10d2ea63e4da2a9b54446b0454a9b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__12_safe_eval(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__12_safe_eval,
        mod_consts.const_str_plain_safe_eval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d6b06885dc68344be6fa35157e353626,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_fb9aa19f7c2e0edb667f03798ffc6f6f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__13__median_nancheck(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__13__median_nancheck,
        mod_consts.const_str_plain__median_nancheck,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_28f9e35abb7798753fab3cb5aa4ab3e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_66b70e418ddc7d3817e69022a8a81710,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__14__opt_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__14__opt_info,
        mod_consts.const_str_plain__opt_info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_115d6e830a9a6f50624d9607a83c0c18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_9e4a6c25574373a29a2d9fb25fd03dca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__15_drop_metadata(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__15_drop_metadata,
        mod_consts.const_str_plain_drop_metadata,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cac6321352bde9aef04027f54875eb17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_2d660152c6812eb223f3a37515b3e563,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__1_show_runtime(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__1_show_runtime,
        mod_consts.const_str_plain_show_runtime,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e2b4ce1429a026ea565bc4f9d87956e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_cb9e74d9f2cd33c29595bb04eeeae8af,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__2_get_include(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__2_get_include,
        mod_consts.const_str_plain_get_include,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4567a2555ac584ddc65d57285b6b9ed1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_9106ce8bbb6f6f5121e9d032da94d26e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__3___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39531106ac2f3993cc58f23c531aad18,
#endif
        code_objects_0dfc6d580d86cac004f8d0772e638731,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__4___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_140823063ce19e1ac9bf7cfc0a13b032,
#endif
        code_objects_ee48244dbf5c0ec92a9717fa2ea94bf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_2b5959e61bf08944296df4df4e74b521,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc,
        mod_consts.const_str_plain_newfunc,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f277fe91e917f14a1edfcbe55077f14c,
#endif
        code_objects_0418c9ffd163a02327dc2d3eba279db8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__5__get_indent(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__5__get_indent,
        mod_consts.const_str_plain__get_indent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aeb957a7f4c0c44a3d7315bb8a9060fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_f24dc18c6125d716f2b01c76dcabae7e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__6_deprecate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__6_deprecate,
        mod_consts.const_str_plain_deprecate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cd62a4c6295a2daeef8207ec25b5d1e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_7b8c81e816c6f98f4b3cf01d6e5908c9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc,
        mod_consts.const_str_plain_deprecate_with_doc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eecff080a9619fb9a57fc437ee9ab065,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        mod_consts.const_str_digest_fea0e29ab0a9062174ca21449bd63f9e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__8__split_line(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__8__split_line,
        mod_consts.const_str_plain__split_line,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dab376669b8856b61290ab978dc51d17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__9__makenamedict(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_utils_impl$$$function__9__makenamedict,
        mod_consts.const_str_plain__makenamedict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23b5124b96145662ddded51bbc1bed2e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_utils_impl,
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

static function_impl_code const function_table_numpy$lib$_utils_impl[] = {
impl_numpy$lib$_utils_impl$$$function__4___call__$$$function__1_newfunc,
impl_numpy$lib$_utils_impl$$$function__10__info$$$function__1_lambda,
impl_numpy$lib$_utils_impl$$$function__1_show_runtime,
impl_numpy$lib$_utils_impl$$$function__2_get_include,
impl_numpy$lib$_utils_impl$$$function__3___init__,
impl_numpy$lib$_utils_impl$$$function__4___call__,
impl_numpy$lib$_utils_impl$$$function__5__get_indent,
impl_numpy$lib$_utils_impl$$$function__6_deprecate,
impl_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc,
impl_numpy$lib$_utils_impl$$$function__8__split_line,
impl_numpy$lib$_utils_impl$$$function__9__makenamedict,
impl_numpy$lib$_utils_impl$$$function__10__info,
impl_numpy$lib$_utils_impl$$$function__11_info,
impl_numpy$lib$_utils_impl$$$function__12_safe_eval,
impl_numpy$lib$_utils_impl$$$function__13__median_nancheck,
impl_numpy$lib$_utils_impl$$$function__14__opt_info,
impl_numpy$lib$_utils_impl$$$function__15_drop_metadata,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_utils_impl);
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
        module_numpy$lib$_utils_impl,
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
        function_table_numpy$lib$_utils_impl,
        sizeof(function_table_numpy$lib$_utils_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._utils_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_utils_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_utils_impl");

    // Store the module for future use.
    module_numpy$lib$_utils_impl = module;

    moduledict_numpy$lib$_utils_impl = MODULE_DICT(module_numpy$lib$_utils_impl);

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
        PRINT_STRING("numpy$lib$_utils_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_utils_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_utils_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._utils_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_utils_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_utils_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_utils_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_utils_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_utils_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_utils_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_utils_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_utils_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_utils_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126 = NULL;
PyObject *tmp_dictset_value;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_utils_impl = MAKE_MODULE_FRAME(code_objects_30636259ebaee7c6a44872e44062f7e5, module_numpy$lib$_utils_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_utils_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_utils_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_utils_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_utils_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_textwrap;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 7;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 9;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ndarray_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain_ndarray,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ndarray);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndarray, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$lib$_utils_impl;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 11;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_utils_impl,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST3(tstate, mod_consts.const_str_plain_get_include,mod_consts.const_str_plain_info,mod_consts.const_str_plain_show_runtime);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_utils_impl$set_module(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 18;
tmp_called_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__1_show_runtime(tstate);

frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 18;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_show_runtime, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_numpy$lib$_utils_impl$set_module(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 80;
tmp_called_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__2_get_include(tstate);

frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 80;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_get_include, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_76728a0345609fd377a64fa593c96ff4;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_3c1614694eed002c142a06ca742a7adf;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__Deprecate;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_126;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__3___init__(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__4___call__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_old_name_str_plain_new_name_str_plain_message_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain__Deprecate;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 126;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126);
locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126);
locals_numpy$lib$_utils_impl$$$class__1__Deprecate_126 = NULL;
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
exception_lineno = 126;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__Deprecate, tmp_assign_source_19);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__5__get_indent(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_indent, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__6_deprecate(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__7_deprecate_with_doc(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate_with_doc, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__8__split_line(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__split_line, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_None;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__namedict, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = Py_None;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__dictlist, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_str_plain_numpy_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__9__makenamedict(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__makenamedict, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__10__info(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__info, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_4;
tmp_called_value_7 = module_var_accessor_numpy$lib$_utils_impl$set_module(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 421;
tmp_called_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_none_int_pos_76_none_str_plain_numpy_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_3 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__11_info(tstate, tmp_defaults_4);

frame_frame_numpy$lib$_utils_impl->m_frame.f_lineno = 421;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_info, tmp_assign_source_29);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_utils_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_utils_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_utils_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_utils_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__12_safe_eval(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_safe_eval, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__13__median_nancheck(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__median_nancheck, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__14__opt_info(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__opt_info, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;

tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$_utils_impl$$$function__15_drop_metadata(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_drop_metadata, tmp_assign_source_33);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_utils_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._utils_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_utils_impl);
    return module_numpy$lib$_utils_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_utils_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_utils_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

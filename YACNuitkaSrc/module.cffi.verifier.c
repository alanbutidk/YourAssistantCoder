/* Generated code for Python module 'cffi$verifier'
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



/* The "module_cffi$verifier" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cffi$verifier;
PyDictObject *moduledict_cffi$verifier;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_importlib;
PyObject *const_str_plain_machinery;
PyObject *const_str_plain_EXTENSION_SUFFIXES;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain__parser;
PyObject *const_str_plain__uses_new_feature;
PyObject *const_str_plain_VerificationError;
PyObject *const_str_digest_859a2117f18669c97208b0cf78e1f672;
PyObject *const_str_plain_ffi;
PyObject *const_str_plain_preamble;
PyObject *const_str_plain_ffiplatform;
PyObject *const_str_plain_flatten;
PyObject *const_str_plain__locate_engine_class;
PyObject *const_str_plain__vengine;
PyObject *const_str_plain_patch_extension_kwds;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_make_relative_to;
PyObject *const_str_plain_kwds;
PyObject *const_str_digest_5d9b9d790859e39aed48d4ddb2581b54;
PyObject *const_str_null;
PyObject *const_str_digest_ab32fb99c4fdef84eca9775c418ffb32;
PyObject *const_str_plain___version_verifier_modules__;
PyObject *const_str_plain_flattened_kwds;
PyObject *const_str_plain__cdefsources;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain_binascii;
PyObject *const_str_plain_crc32;
PyObject *const_slice_int_0_none_int_pos_2;
PyObject *const_int_hex_ffffffff;
PyObject *const_str_plain_0x;
PyObject *const_str_plain_L;
PyObject *const_slice_int_pos_1_none_int_pos_2;
PyObject *const_str_plain_0;
PyObject *const_str_digest_06600652ab876708ce9ae20d76c547c3;
PyObject *const_str_plain__class_key;
PyObject *const_str_plain__get_so_suffixes;
PyObject *const_str_plain__caller_dir_pycache;
PyObject *const_str_plain_tmpdir;
PyObject *const_str_plain_join;
PyObject *const_str_plain_sourcefilename;
PyObject *const_str_plain_modulefilename;
PyObject *const_str_plain_ext_package;
PyObject *const_str_plain__has_source;
PyObject *const_str_plain__has_module;
PyObject *const_str_plain__lock;
PyObject *const_tuple_str_digest_ce895bc0ef87e5809107b8b594b6ac43_tuple;
PyObject *const_str_plain__write_source;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_18379c2bd737bf61f38264c0c28a4853;
PyObject *const_tuple_str_digest_e67dd3ee04ee7a80fdf451a64ddc1057_tuple;
PyObject *const_str_plain__compile_module;
PyObject *const_str_digest_5f756d2f918f8874cc0267b32bfd34c3;
PyObject *const_str_plain__locate_module;
PyObject *const_str_plain__load_library;
PyObject *const_str_digest_d8f5f91aca7dcc239b573507e17fc01d;
PyObject *const_tuple_str_dot_int_pos_1_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_plain__d_tuple;
PyObject *const_str_plain_gettotalrefcount;
PyObject *const_slice_none_int_neg_2_none;
PyObject *const_str_plain_maybe_relative_path;
PyObject *const_str_plain_get_module_name;
PyObject *const_str_plain_get_extension;
PyObject *const_str_plain__gen_python_module;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_LIST_OF_FILE_NAMES;
PyObject *const_tuple_type_list_type_tuple_tuple;
PyObject *const_str_digest_f7246d78d9c3d2c6907bd01a0de4cabe;
PyObject *const_str_plain_find_module;
PyObject *const_str_plain_collect_types;
PyObject *const_str_plain__f;
PyObject *const_str_plain_write_source_to_f;
PyObject *const_str_plain__write_source_to;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain_getvalue;
PyObject *const_str_plain_needs_written;
PyObject *const_str_plain__ensure_dir;
PyObject *const_str_plain_write;
PyObject *const_str_plain_samefile;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_move;
PyObject *const_str_plain_load_library;
PyObject *const_str_plain__FORCE_GENERIC_ENGINE;
PyObject *const_str_plain__cffi_backend;
PyObject *const_str_chr_63;
PyObject *const_str_plain__backend;
PyObject *const_tuple_str_plain_vengine_gen_tuple;
PyObject *const_str_plain_vengine_gen;
PyObject *const_str_plain_VGenericEngine;
PyObject *const_tuple_str_plain_vengine_cpy_tuple;
PyObject *const_str_plain_vengine_cpy;
PyObject *const_str_plain_VCPythonEngine;
PyObject *const_str_plain__TMPDIR;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_CFFI_TMPDIR_tuple;
PyObject *const_str_plain__getframe;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_f_code;
PyObject *const_str_plain_co_filename;
PyObject *const_str_plain___pycache__;
PyObject *const_str_digest_7fc9b4823d044cb54eb0869d69d9bda7;
PyObject *const_str_digest_7c95b4955d628deb60ad3cbb673717f7;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain__cffi__tuple;
PyObject *const_str_plain_suffix;
PyObject *const_tuple_str_digest_7c95b4955d628deb60ad3cbb673717f7_tuple;
PyObject *const_str_plain_unlink;
PyObject *const_str_plain_build;
PyObject *const_str_plain_dir;
PyObject *const_str_plain_clean_dir;
PyObject *const_str_plain_append;
PyObject *const_str_digest_0708fee7d6fe6c73725d59fdee4b93f7;
PyObject *const_str_plain__extension_suffixes;
PyObject *const_str_digest_c2a6768b2648906cf62c19bd4d5b3e87;
PyObject *const_str_plain_makedirs;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_os;
PyObject *const_str_plain_io;
PyObject *const_tuple_str_plain___version_verifier_modules___tuple;
PyObject *const_tuple_str_plain_ffiplatform_tuple;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_plain_VerificationError_tuple;
PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
PyObject *const_str_plain_NativeIO;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Verifier;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_53a9e8b6a5ed893b144c85e7eed75cc8;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_30;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_394e59f6dad0050fe7204bd1213bb4c4_tuple;
PyObject *const_str_digest_eae5c68f5206bbe9783880f3613cb739;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_write_source;
PyObject *const_str_digest_e7ea279a8202f62881e118eeee9644cb;
PyObject *const_str_plain_compile_module;
PyObject *const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c;
PyObject *const_str_digest_43e4f57990c6ffbbfc613f8932545020;
PyObject *const_str_digest_54d770a0a742a31555225675816af917;
PyObject *const_str_digest_d94a9e71973a7ed119944ac8acf562b4;
PyObject *const_str_plain_generates_python_module;
PyObject *const_str_digest_4e0e867229b0229996a6faa169533a37;
PyObject *const_str_digest_a43701fb1ac58136244cd761c904e81b;
PyObject *const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac;
PyObject *const_str_digest_ded736075c23c2518bd11be328d24b16;
PyObject *const_str_digest_3cdd895c47f1e85983f44e54b82df6e4;
PyObject *const_str_digest_8befd2ae4566b26a4cff02cda9ac2914;
PyObject *const_str_digest_b2cd5196aa393217de49e0630d8f4267;
PyObject *const_tuple_54f0c00ddd5548412fe0e881ed84a1cb_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_set_tmpdir;
PyObject *const_tuple_none_false_tuple;
PyObject *const_str_plain_cleanup_tmpdir;
PyObject *const_str_digest_e0759ab86c361074e3046b45ab256e54;
PyObject *const_str_digest_bc7013275cf3727e09607fcc47a8f3f7;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_b27a477a3a657f58e1896aa60269847f_tuple;
PyObject *const_tuple_str_plain_result_str_plain_filename_tuple;
PyObject *const_tuple_12a8dbe4f94c01353fa3d0690d888ad2_tuple;
PyObject *const_tuple_str_plain_filename_str_plain_dirname_tuple;
PyObject *const_tuple_str_plain_suffixes_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2cae58ead6c66b2cb2d9d40a2b9e2160_tuple;
PyObject *const_tuple_b3ae8ed0a645a1c053420c57116eb19b_tuple;
PyObject *const_tuple_4b0513af7d45aa7d8057f8e5a515b3b3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_file_tuple;
PyObject *const_tuple_cedcea9602749abb0210213454c7c7a5_tuple;
PyObject *const_tuple_str_plain_self_str_plain_sourcename_str_plain_modname_tuple;
PyObject *const_tuple_str_plain_self_str_plain_basename_tuple;
PyObject *const_tuple_4058f59e9af6ef4ec46f030be9360e73_tuple;
PyObject *const_tuple_str_plain_dirname_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[178];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cffi.verifier"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_importlib);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_machinery);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENSION_SUFFIXES);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__parser);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__uses_new_feature);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_859a2117f18669c97208b0cf78e1f672);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_preamble);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffiplatform);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_flatten);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__locate_engine_class);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__vengine);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_patch_extension_kwds);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_relative_to);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwds);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d9b9d790859e39aed48d4ddb2581b54);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_null);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab32fb99c4fdef84eca9775c418ffb32);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___version_verifier_modules__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_flattened_kwds);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__cdefsources);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_binascii);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_crc32);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_slice_int_0_none_int_pos_2);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_0x);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_int_pos_2);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_0);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_06600652ab876708ce9ae20d76c547c3);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__class_key);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_so_suffixes);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__caller_dir_pycache);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmpdir);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_sourcefilename);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_modulefilename);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_ext_package);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_source);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_module);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__lock);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce895bc0ef87e5809107b8b594b6ac43_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__write_source);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_18379c2bd737bf61f38264c0c28a4853);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e67dd3ee04ee7a80fdf451a64ddc1057_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__compile_module);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f756d2f918f8874cc0267b32bfd34c3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__locate_module);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_library);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8f5f91aca7dcc239b573507e17fc01d);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_int_pos_1_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__d_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettotalrefcount);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_2_none);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_relative_path);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_module_name);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_extension);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__gen_python_module);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIST_OF_FILE_NAMES);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7246d78d9c3d2c6907bd01a0de4cabe);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_module);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_collect_types);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__f);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_source_to_f);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__write_source_to);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_needs_written);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_dir);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_samefile);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutil);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_move);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_library);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__cffi_backend);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__backend);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vengine_gen_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_vengine_gen);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_VGenericEngine);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vengine_cpy_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_vengine_cpy);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_VCPythonEngine);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__TMPDIR);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CFFI_TMPDIR_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__getframe);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_code);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_filename);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___pycache__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fc9b4823d044cb54eb0869d69d9bda7);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c95b4955d628deb60ad3cbb673717f7);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cffi__tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_suffix);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c95b4955d628deb60ad3cbb673717f7_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_unlink);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_build);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_dir);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_clean_dir);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_0708fee7d6fe6c73725d59fdee4b93f7);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__extension_suffixes);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2a6768b2648906cf62c19bd4d5b3e87);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version_verifier_modules___tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffiplatform_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VerificationError_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_NativeIO);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_53a9e8b6a5ed893b144c85e7eed75cc8);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_394e59f6dad0050fe7204bd1213bb4c4_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae5c68f5206bbe9783880f3613cb739);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_source);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7ea279a8202f62881e118eeee9644cb);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_compile_module);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_43e4f57990c6ffbbfc613f8932545020);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_54d770a0a742a31555225675816af917);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_d94a9e71973a7ed119944ac8acf562b4);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_generates_python_module);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e0e867229b0229996a6faa169533a37);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_a43701fb1ac58136244cd761c904e81b);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_ded736075c23c2518bd11be328d24b16);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cdd895c47f1e85983f44e54b82df6e4);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_8befd2ae4566b26a4cff02cda9ac2914);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2cd5196aa393217de49e0630d8f4267);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_54f0c00ddd5548412fe0e881ed84a1cb_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_tmpdir);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleanup_tmpdir);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0759ab86c361074e3046b45ab256e54);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc7013275cf3727e09607fcc47a8f3f7);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_b27a477a3a657f58e1896aa60269847f_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_result_str_plain_filename_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_12a8dbe4f94c01353fa3d0690d888ad2_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_dirname_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suffixes_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_2cae58ead6c66b2cb2d9d40a2b9e2160_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_b3ae8ed0a645a1c053420c57116eb19b_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_4b0513af7d45aa7d8057f8e5a515b3b3_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_cedcea9602749abb0210213454c7c7a5_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sourcename_str_plain_modname_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_basename_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_4058f59e9af6ef4ec46f030be9360e73_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dirname_tuple);
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
void checkModuleConstants_cffi$verifier(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_importlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_importlib);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_machinery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_machinery);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENSION_SUFFIXES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXTENSION_SUFFIXES);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parser);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__uses_new_feature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__uses_new_feature);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerificationError);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_859a2117f18669c97208b0cf78e1f672));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_859a2117f18669c97208b0cf78e1f672);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_preamble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_preamble);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffiplatform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffiplatform);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_flatten));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flatten);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__locate_engine_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__locate_engine_class);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__vengine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__vengine);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_patch_extension_kwds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_patch_extension_kwds);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_relative_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_relative_to);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwds);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d9b9d790859e39aed48d4ddb2581b54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d9b9d790859e39aed48d4ddb2581b54);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_null);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab32fb99c4fdef84eca9775c418ffb32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab32fb99c4fdef84eca9775c418ffb32);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___version_verifier_modules__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version_verifier_modules__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_flattened_kwds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flattened_kwds);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__cdefsources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cdefsources);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_binascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_binascii);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_crc32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crc32);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_slice_int_0_none_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_0_none_int_pos_2);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_ffffffff);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_0x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_0x);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_L));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_L);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_int_pos_2);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_0);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_06600652ab876708ce9ae20d76c547c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06600652ab876708ce9ae20d76c547c3);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__class_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__class_key);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_so_suffixes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_so_suffixes);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__caller_dir_pycache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__caller_dir_pycache);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_tmpdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tmpdir);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_sourcefilename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sourcefilename);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_modulefilename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modulefilename);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_ext_package));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ext_package);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_source);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_module);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lock);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce895bc0ef87e5809107b8b594b6ac43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ce895bc0ef87e5809107b8b594b6ac43_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__write_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__write_source);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_18379c2bd737bf61f38264c0c28a4853));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18379c2bd737bf61f38264c0c28a4853);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e67dd3ee04ee7a80fdf451a64ddc1057_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e67dd3ee04ee7a80fdf451a64ddc1057_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__compile_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compile_module);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f756d2f918f8874cc0267b32bfd34c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f756d2f918f8874cc0267b32bfd34c3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__locate_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__locate_module);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_library);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8f5f91aca7dcc239b573507e17fc01d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8f5f91aca7dcc239b573507e17fc01d);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_int_pos_1_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__d_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettotalrefcount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gettotalrefcount);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_2_none);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_relative_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_relative_path);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_module_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_module_name);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_extension));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_extension);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__gen_python_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__gen_python_module);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIST_OF_FILE_NAMES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIST_OF_FILE_NAMES);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_type_tuple_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7246d78d9c3d2c6907bd01a0de4cabe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7246d78d9c3d2c6907bd01a0de4cabe);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_module);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_collect_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collect_types);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__f);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_source_to_f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_source_to_f);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__write_source_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__write_source_to);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_needs_written));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_needs_written);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ensure_dir);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_samefile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_samefile);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shutil);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_move));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_library);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__FORCE_GENERIC_ENGINE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__cffi_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cffi_backend);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__backend);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vengine_gen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_vengine_gen_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_vengine_gen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vengine_gen);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_VGenericEngine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VGenericEngine);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vengine_cpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_vengine_cpy_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_vengine_cpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vengine_cpy);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_VCPythonEngine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VCPythonEngine);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__TMPDIR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TMPDIR);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CFFI_TMPDIR_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CFFI_TMPDIR_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__getframe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getframe);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_code);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_filename);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___pycache__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pycache__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fc9b4823d044cb54eb0869d69d9bda7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fc9b4823d044cb54eb0869d69d9bda7);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c95b4955d628deb60ad3cbb673717f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c95b4955d628deb60ad3cbb673717f7);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cffi__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cffi__tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_suffix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suffix);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c95b4955d628deb60ad3cbb673717f7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7c95b4955d628deb60ad3cbb673717f7_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_unlink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unlink);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_build));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dir);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_clean_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clean_dir);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_0708fee7d6fe6c73725d59fdee4b93f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0708fee7d6fe6c73725d59fdee4b93f7);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__extension_suffixes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extension_suffixes);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2a6768b2648906cf62c19bd4d5b3e87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2a6768b2648906cf62c19bd4d5b3e87);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_makedirs);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version_verifier_modules___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___version_verifier_modules___tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffiplatform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ffiplatform_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VerificationError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VerificationError_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_NativeIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NativeIO);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Verifier);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_53a9e8b6a5ed893b144c85e7eed75cc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53a9e8b6a5ed893b144c85e7eed75cc8);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_394e59f6dad0050fe7204bd1213bb4c4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_394e59f6dad0050fe7204bd1213bb4c4_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae5c68f5206bbe9783880f3613cb739));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eae5c68f5206bbe9783880f3613cb739);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_source);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7ea279a8202f62881e118eeee9644cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7ea279a8202f62881e118eeee9644cb);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_compile_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compile_module);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_43e4f57990c6ffbbfc613f8932545020));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43e4f57990c6ffbbfc613f8932545020);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_54d770a0a742a31555225675816af917));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54d770a0a742a31555225675816af917);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_d94a9e71973a7ed119944ac8acf562b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d94a9e71973a7ed119944ac8acf562b4);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_generates_python_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generates_python_module);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e0e867229b0229996a6faa169533a37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e0e867229b0229996a6faa169533a37);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_a43701fb1ac58136244cd761c904e81b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a43701fb1ac58136244cd761c904e81b);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_ded736075c23c2518bd11be328d24b16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ded736075c23c2518bd11be328d24b16);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cdd895c47f1e85983f44e54b82df6e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3cdd895c47f1e85983f44e54b82df6e4);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_8befd2ae4566b26a4cff02cda9ac2914));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8befd2ae4566b26a4cff02cda9ac2914);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2cd5196aa393217de49e0630d8f4267));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2cd5196aa393217de49e0630d8f4267);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_54f0c00ddd5548412fe0e881ed84a1cb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_54f0c00ddd5548412fe0e881ed84a1cb_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_tmpdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_tmpdir);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleanup_tmpdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleanup_tmpdir);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0759ab86c361074e3046b45ab256e54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0759ab86c361074e3046b45ab256e54);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc7013275cf3727e09607fcc47a8f3f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc7013275cf3727e09607fcc47a8f3f7);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_b27a477a3a657f58e1896aa60269847f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b27a477a3a657f58e1896aa60269847f_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_result_str_plain_filename_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_result_str_plain_filename_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_12a8dbe4f94c01353fa3d0690d888ad2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_12a8dbe4f94c01353fa3d0690d888ad2_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_dirname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_str_plain_dirname_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suffixes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_suffixes_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_2cae58ead6c66b2cb2d9d40a2b9e2160_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2cae58ead6c66b2cb2d9d40a2b9e2160_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_b3ae8ed0a645a1c053420c57116eb19b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b3ae8ed0a645a1c053420c57116eb19b_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_4b0513af7d45aa7d8057f8e5a515b3b3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b0513af7d45aa7d8057f8e5a515b3b3_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_file_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_cedcea9602749abb0210213454c7c7a5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cedcea9602749abb0210213454c7c7a5_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sourcename_str_plain_modname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_sourcename_str_plain_modname_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_basename_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_basename_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_4058f59e9af6ef4ec46f030be9360e73_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4058f59e9af6ef4ec46f030be9360e73_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dirname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dirname_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 14
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
static PyObject *module_var_accessor_cffi$verifier$VerificationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerificationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerificationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerificationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerificationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_FORCE_GENERIC_ENGINE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FORCE_GENERIC_ENGINE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FORCE_GENERIC_ENGINE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_TMPDIR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TMPDIR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TMPDIR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TMPDIR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TMPDIR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$__version_verifier_modules__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain___version_verifier_modules__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version_verifier_modules__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version_verifier_modules__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version_verifier_modules__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version_verifier_modules__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain___version_verifier_modules__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain___version_verifier_modules__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___version_verifier_modules__);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_caller_dir_pycache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__caller_dir_pycache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__caller_dir_pycache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__caller_dir_pycache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__caller_dir_pycache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__caller_dir_pycache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__caller_dir_pycache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__caller_dir_pycache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__caller_dir_pycache);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_ensure_dir(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_dir);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_dir);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_dir, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_dir);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_dir, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_dir);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_dir);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_dir);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_extension_suffixes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__extension_suffixes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extension_suffixes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extension_suffixes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extension_suffixes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extension_suffixes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__extension_suffixes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__extension_suffixes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extension_suffixes);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_get_so_suffixes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__get_so_suffixes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_so_suffixes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_so_suffixes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_so_suffixes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_so_suffixes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__get_so_suffixes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__get_so_suffixes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_so_suffixes);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$_locate_engine_class(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__locate_engine_class);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__locate_engine_class);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__locate_engine_class, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__locate_engine_class);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__locate_engine_class, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__locate_engine_class);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__locate_engine_class);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__locate_engine_class);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$binascii(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$ffiplatform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_ffiplatform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffiplatform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffiplatform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffiplatform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffiplatform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_ffiplatform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_ffiplatform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ffiplatform);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$importlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_importlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_importlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_importlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_importlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
    }

    return result;
}

static PyObject *module_var_accessor_cffi$verifier$shutil(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cffi$verifier->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cffi$verifier->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cffi$verifier->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shutil);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shutil, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shutil);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shutil, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3e053851bc82d2e3e7bb9e661676bded;
static PyCodeObject *code_objects_c8f5761b12df8f2682a382391f31906b;
static PyCodeObject *code_objects_ed77f8341f9cbddfabc657973f1614da;
static PyCodeObject *code_objects_65df84c295baf0f71e6f5e47cf5d38d1;
static PyCodeObject *code_objects_e817152df5a0f9ae3d493603a2914cae;
static PyCodeObject *code_objects_5f76d0adeeb03ba851eda5302c40e231;
static PyCodeObject *code_objects_383c2d4592881aaef8f5854ef6c4d3db;
static PyCodeObject *code_objects_232326080e8c9570469d3a1141b5195c;
static PyCodeObject *code_objects_642a278a2d7b68b359e594ea55c21885;
static PyCodeObject *code_objects_d1352550f2225ada67d3dc44d2138d9d;
static PyCodeObject *code_objects_b9d630f42ec8c871e723381ea1319a29;
static PyCodeObject *code_objects_e8c65b181e6cbae207e1af2f4bbcb357;
static PyCodeObject *code_objects_26178261e9333fb81f88065a67aa364b;
static PyCodeObject *code_objects_ebc91a208dffd585f637b4aecdd3066c;
static PyCodeObject *code_objects_711c86c674acf7cb5dc6c3236a142efc;
static PyCodeObject *code_objects_5ea1fdc65baab26f3bc571cb82b4c438;
static PyCodeObject *code_objects_b085ad5c50c776665ed7f8e6f29781d4;
static PyCodeObject *code_objects_9bb040eb676b7d2526f0be3da7134932;
static PyCodeObject *code_objects_a681500fde5f7a9467df544ec0889c81;
static PyCodeObject *code_objects_4242cfe4f2f1cbb98ecd877d8e8636ad;
static PyCodeObject *code_objects_222ce224baf1c533429430b54536f4da;
static PyCodeObject *code_objects_ef2d043e93210dfc5064d9b3c7896154;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e0759ab86c361074e3046b45ab256e54); CHECK_OBJECT(module_filename_obj);
code_objects_3e053851bc82d2e3e7bb9e661676bded = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_bc7013275cf3727e09607fcc47a8f3f7, mod_consts.const_str_digest_bc7013275cf3727e09607fcc47a8f3f7, NULL, NULL, 0, 0, 0);
code_objects_c8f5761b12df8f2682a382391f31906b = MAKE_CODE_OBJECT(module_filename_obj, 30, 0, mod_consts.const_str_plain_Verifier, mod_consts.const_str_plain_Verifier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ed77f8341f9cbddfabc657973f1614da = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_eae5c68f5206bbe9783880f3613cb739, mod_consts.const_tuple_b27a477a3a657f58e1896aa60269847f_tuple, NULL, 11, 0, 0);
code_objects_65df84c295baf0f71e6f5e47cf5d38d1 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__caller_dir_pycache, mod_consts.const_str_plain__caller_dir_pycache, mod_consts.const_tuple_str_plain_result_str_plain_filename_tuple, NULL, 0, 0, 0);
code_objects_e817152df5a0f9ae3d493603a2914cae = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__compile_module, mod_consts.const_str_digest_8befd2ae4566b26a4cff02cda9ac2914, mod_consts.const_tuple_12a8dbe4f94c01353fa3d0690d888ad2_tuple, NULL, 1, 0, 0);
code_objects_5f76d0adeeb03ba851eda5302c40e231 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ensure_dir, mod_consts.const_str_plain__ensure_dir, mod_consts.const_tuple_str_plain_filename_str_plain_dirname_tuple, NULL, 1, 0, 0);
code_objects_383c2d4592881aaef8f5854ef6c4d3db = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__extension_suffixes, mod_consts.const_str_plain__extension_suffixes, NULL, NULL, 0, 0, 0);
code_objects_232326080e8c9570469d3a1141b5195c = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_so_suffixes, mod_consts.const_str_plain__get_so_suffixes, mod_consts.const_tuple_str_plain_suffixes_tuple, NULL, 0, 0, 0);
code_objects_642a278a2d7b68b359e594ea55c21885 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_library, mod_consts.const_str_digest_b2cd5196aa393217de49e0630d8f4267, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d1352550f2225ada67d3dc44d2138d9d = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__locate_engine_class, mod_consts.const_str_plain__locate_engine_class, mod_consts.const_tuple_2cae58ead6c66b2cb2d9d40a2b9e2160_tuple, NULL, 2, 0, 0);
code_objects_b9d630f42ec8c871e723381ea1319a29 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__locate_module, mod_consts.const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac, mod_consts.const_tuple_b3ae8ed0a645a1c053420c57116eb19b_tuple, NULL, 1, 0, 0);
code_objects_e8c65b181e6cbae207e1af2f4bbcb357 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__write_source, mod_consts.const_str_digest_3cdd895c47f1e85983f44e54b82df6e4, mod_consts.const_tuple_4b0513af7d45aa7d8057f8e5a515b3b3_tuple, NULL, 2, 0, 0);
code_objects_26178261e9333fb81f88065a67aa364b = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__write_source_to, mod_consts.const_str_digest_ded736075c23c2518bd11be328d24b16, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple, NULL, 2, 0, 0);
code_objects_ebc91a208dffd585f637b4aecdd3066c = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cleanup_tmpdir, mod_consts.const_str_plain_cleanup_tmpdir, mod_consts.const_tuple_cedcea9602749abb0210213454c7c7a5_tuple, NULL, 2, 0, 0);
code_objects_711c86c674acf7cb5dc6c3236a142efc = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_compile_module, mod_consts.const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5ea1fdc65baab26f3bc571cb82b4c438 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_generates_python_module, mod_consts.const_str_digest_4e0e867229b0229996a6faa169533a37, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b085ad5c50c776665ed7f8e6f29781d4 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_extension, mod_consts.const_str_digest_d94a9e71973a7ed119944ac8acf562b4, mod_consts.const_tuple_str_plain_self_str_plain_sourcename_str_plain_modname_tuple, NULL, 1, 0, 0);
code_objects_9bb040eb676b7d2526f0be3da7134932 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_module_name, mod_consts.const_str_digest_54d770a0a742a31555225675816af917, mod_consts.const_tuple_str_plain_self_str_plain_basename_tuple, NULL, 1, 0, 0);
code_objects_a681500fde5f7a9467df544ec0889c81 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_library, mod_consts.const_str_digest_43e4f57990c6ffbbfc613f8932545020, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4242cfe4f2f1cbb98ecd877d8e8636ad = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_make_relative_to, mod_consts.const_str_digest_a43701fb1ac58136244cd761c904e81b, mod_consts.const_tuple_4058f59e9af6ef4ec46f030be9360e73_tuple, NULL, 3, 0, 0);
code_objects_222ce224baf1c533429430b54536f4da = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_tmpdir, mod_consts.const_str_plain_set_tmpdir, mod_consts.const_tuple_str_plain_dirname_tuple, NULL, 1, 0, 0);
code_objects_ef2d043e93210dfc5064d9b3c7896154 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_write_source, mod_consts.const_str_digest_e7ea279a8202f62881e118eeee9644cb, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__10_generates_python_module(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__11_make_relative_to(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__12__locate_module(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__13__write_source_to(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__14__write_source(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__15__compile_module(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__16__load_library(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__17__locate_engine_class(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__18__caller_dir_pycache(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__19_set_tmpdir(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__1__extension_suffixes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__20_cleanup_tmpdir(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__21__get_so_suffixes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__22__ensure_dir(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__4___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__5_write_source(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__6_compile_module(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__7_load_library(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__8_get_module_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__9_get_extension(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_cffi$verifier$$$function__1__extension_suffixes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__1__extension_suffixes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes = MAKE_FUNCTION_FRAME(tstate, code_objects_383c2d4592881aaef8f5854ef6c4d3db, module_cffi$verifier, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__1__extension_suffixes = cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__1__extension_suffixes);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__1__extension_suffixes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = module_var_accessor_cffi$verifier$importlib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_importlib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_machinery);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_EXTENSION_SUFFIXES);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_none_none;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__1__extension_suffixes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__1__extension_suffixes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__1__extension_suffixes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__1__extension_suffixes,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__1__extension_suffixes == cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes);
    cache_frame_frame_cffi$verifier$$$function__1__extension_suffixes = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__1__extension_suffixes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_cffi$verifier$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ffi = python_pars[1];
PyObject *par_preamble = python_pars[2];
PyObject *par_tmpdir = python_pars[3];
PyObject *par_modulename = python_pars[4];
PyObject *par_ext_package = python_pars[5];
PyObject *par_tag = python_pars[6];
PyObject *par_force_generic_engine = python_pars[7];
PyObject *par_source_extension = python_pars[8];
PyObject *par_flags = python_pars[9];
PyObject *par_relative_to = python_pars[10];
PyObject *par_kwds = python_pars[11];
PyObject *var_flattened_kwds = NULL;
PyObject *var_vengine_class = NULL;
PyObject *var_key = NULL;
PyObject *var_k1 = NULL;
PyObject *var_k2 = NULL;
PyObject *var_suffix = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ed77f8341f9cbddfabc657973f1614da, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__4___init__->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__4___init__ = cache_frame_frame_cffi$verifier$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__4___init__);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__4___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_ffi);
tmp_expression_value_2 = par_ffi;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__parser);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__uses_new_feature);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 35;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_cffi$verifier$VerificationError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_859a2117f18669c97208b0cf78e1f672;
CHECK_OBJECT(par_ffi);
tmp_expression_value_4 = par_ffi;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__parser);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__uses_new_feature);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 36;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_ffi);
tmp_assattr_value_1 = par_ffi;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_ffi, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_preamble);
tmp_assattr_value_2 = par_preamble;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_preamble, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_modulename);
tmp_operand_value_1 = par_modulename;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwds);
tmp_args_element_value_2 = par_kwds;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 42;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_flatten, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_flattened_kwds == NULL);
var_flattened_kwds = tmp_assign_source_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_cffi$verifier$_locate_engine_class(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__locate_engine_class);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ffi);
tmp_args_element_value_3 = par_ffi;
CHECK_OBJECT(par_force_generic_engine);
tmp_args_element_value_4 = par_force_generic_engine;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_vengine_class == NULL);
var_vengine_class = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_vengine_class);
tmp_called_value_3 = var_vengine_class;
CHECK_OBJECT(par_self);
tmp_args_element_value_5 = par_self;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 44;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__vengine, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__vengine);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwds);
tmp_args_element_value_6 = par_kwds;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 45;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_patch_extension_kwds, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_flags);
tmp_assattr_value_4 = par_flags;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_flags, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_kwds);
tmp_args_element_value_7 = par_kwds;
CHECK_OBJECT(par_relative_to);
tmp_args_element_value_8 = par_relative_to;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assattr_value_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_make_relative_to,
        call_args
    );
}

if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_kwds, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_modulename);
tmp_truth_name_2 = CHECK_IF_TRUE(par_modulename);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
CHECK_OBJECT(par_tag);
tmp_truth_name_3 = CHECK_IF_TRUE(par_tag);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_5d9b9d790859e39aed48d4ddb2581b54;
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 51;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 51;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_6;
tmp_str_arg_value_1 = mod_consts.const_str_null;
tmp_list_element_1 = mod_consts.const_str_digest_ab32fb99c4fdef84eca9775c418ffb32;
tmp_add_expr_left_1 = MAKE_LIST_EMPTY(tstate, 4);
PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_cffi$verifier$__version_verifier_modules__(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___version_verifier_modules__);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_add_expr_left_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_preamble);
tmp_list_element_1 = par_preamble;
PyList_SET_ITEM0(tmp_add_expr_left_1, 2, tmp_list_element_1);
if (var_flattened_kwds == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_flattened_kwds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "oooooooooooooooooo";
    goto list_build_exception_1;
}

tmp_list_element_1 = var_flattened_kwds;
PyList_SET_ITEM0(tmp_add_expr_left_1, 3, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_add_expr_left_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(par_ffi);
tmp_expression_value_6 = par_ffi;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__cdefsources);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 56;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iterable_value_1 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key == NULL);
var_key = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_encoding_value_1;
CHECK_OBJECT(var_key);
tmp_str_arg_value_2 = var_key;
tmp_encoding_value_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_4 = UNICODE_ENCODE2(tstate, tmp_str_arg_value_2, tmp_encoding_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_hex_arg_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
tmp_expression_value_7 = module_var_accessor_cffi$verifier$binascii(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binascii);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_crc32);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_expression_value_8 = var_key;
tmp_subscript_value_1 = mod_consts.const_slice_int_0_none_int_pos_2;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 59;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_hex_ffffffff;
tmp_hex_arg_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_hex_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BUILTIN_HEX(tstate, tmp_hex_arg_1);
CHECK_OBJECT(tmp_hex_arg_1);
Py_DECREF(tmp_hex_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_k1 == NULL);
var_k1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_str_arg_value_4;
PyObject *tmp_chars_value_1;
PyObject *tmp_chars_value_2;
CHECK_OBJECT(var_k1);
tmp_str_arg_value_4 = var_k1;
tmp_chars_value_1 = mod_consts.const_str_plain_0x;
tmp_str_arg_value_3 = UNICODE_LSTRIP2(tstate, tmp_str_arg_value_4, tmp_chars_value_1);
if (tmp_str_arg_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_chars_value_2 = mod_consts.const_str_plain_L;
tmp_assign_source_6 = UNICODE_RSTRIP2(tstate, tmp_str_arg_value_3, tmp_chars_value_2);
CHECK_OBJECT(tmp_str_arg_value_3);
Py_DECREF(tmp_str_arg_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_k1;
    assert(old != NULL);
    var_k1 = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_hex_arg_2;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
tmp_expression_value_9 = module_var_accessor_cffi$verifier$binascii(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binascii);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_crc32);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_expression_value_10 = var_key;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_int_pos_2;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 61;
tmp_bitand_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_bitand_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_2 = mod_consts.const_int_hex_ffffffff;
tmp_hex_arg_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_left_2);
Py_DECREF(tmp_bitand_expr_left_2);
if (tmp_hex_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = BUILTIN_HEX(tstate, tmp_hex_arg_2);
CHECK_OBJECT(tmp_hex_arg_2);
Py_DECREF(tmp_hex_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_k2 == NULL);
var_k2 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_str_arg_value_5;
PyObject *tmp_str_arg_value_6;
PyObject *tmp_chars_value_3;
PyObject *tmp_chars_value_4;
CHECK_OBJECT(var_k2);
tmp_str_arg_value_6 = var_k2;
tmp_chars_value_3 = mod_consts.const_str_plain_0;
tmp_str_arg_value_5 = UNICODE_LSTRIP2(tstate, tmp_str_arg_value_6, tmp_chars_value_3);
if (tmp_str_arg_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_chars_value_4 = mod_consts.const_str_plain_L;
tmp_assign_source_8 = UNICODE_RSTRIP2(tstate, tmp_str_arg_value_5, tmp_chars_value_4);
CHECK_OBJECT(tmp_str_arg_value_5);
Py_DECREF(tmp_str_arg_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_k2;
    assert(old != NULL);
    var_k2 = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_06600652ab876708ce9ae20d76c547c3;
CHECK_OBJECT(par_tag);
tmp_tuple_element_2 = par_tag;
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__vengine);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__class_key);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_k1);
tmp_tuple_element_2 = var_k1;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_k2);
tmp_tuple_element_2 = var_k2;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_modulename;
    assert(old != NULL);
    par_modulename = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_6;
PyObject *tmp_subscript_value_3;
tmp_called_value_6 = module_var_accessor_cffi$verifier$_get_so_suffixes(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_so_suffixes);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 65;
tmp_expression_value_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_suffix == NULL);
var_suffix = tmp_assign_source_10;
}
{
PyObject *tmp_assattr_value_6;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_tmpdir);
tmp_or_left_value_1 = par_tmpdir;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_7 = module_var_accessor_cffi$verifier$_caller_dir_pycache(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__caller_dir_pycache);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 66;
tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_6 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_tmpdir, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_assattr_target_7;
tmp_expression_value_14 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_14 == NULL));
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_join);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_tmpdir);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modulename);
tmp_add_expr_left_2 = par_modulename;
CHECK_OBJECT(par_source_extension);
tmp_add_expr_right_2 = par_source_extension;
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_sourcefilename, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_14;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_assattr_target_8;
tmp_expression_value_16 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_16 == NULL));
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_join);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_tmpdir);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modulename);
tmp_add_expr_left_3 = par_modulename;
CHECK_OBJECT(var_suffix);
tmp_add_expr_right_3 = var_suffix;
tmp_args_element_value_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__4___init__->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assattr_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_modulefilename, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_ext_package);
tmp_assattr_value_9 = par_ext_package;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_ext_package, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__has_source, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__has_module, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__4___init__,
    type_description_1,
    par_self,
    par_ffi,
    par_preamble,
    par_tmpdir,
    par_modulename,
    par_ext_package,
    par_tag,
    par_force_generic_engine,
    par_source_extension,
    par_flags,
    par_relative_to,
    par_kwds,
    var_flattened_kwds,
    var_vengine_class,
    var_key,
    var_k1,
    var_k2,
    var_suffix
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__4___init__ == cache_frame_frame_cffi$verifier$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__4___init__);
    cache_frame_frame_cffi$verifier$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__4___init__);

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
CHECK_OBJECT(par_modulename);
CHECK_OBJECT(par_modulename);
Py_DECREF(par_modulename);
par_modulename = NULL;
Py_XDECREF(var_flattened_kwds);
var_flattened_kwds = NULL;
CHECK_OBJECT(var_vengine_class);
CHECK_OBJECT(var_vengine_class);
Py_DECREF(var_vengine_class);
var_vengine_class = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_k1);
var_k1 = NULL;
Py_XDECREF(var_k2);
var_k2 = NULL;
CHECK_OBJECT(var_suffix);
CHECK_OBJECT(var_suffix);
Py_DECREF(var_suffix);
var_suffix = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_modulename);
par_modulename = NULL;
Py_XDECREF(var_flattened_kwds);
var_flattened_kwds = NULL;
Py_XDECREF(var_vengine_class);
var_vengine_class = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_k1);
var_k1 = NULL;
Py_XDECREF(var_k2);
var_k2 = NULL;
Py_XDECREF(var_suffix);
var_suffix = NULL;
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
CHECK_OBJECT(par_ffi);
Py_DECREF(par_ffi);
CHECK_OBJECT(par_preamble);
Py_DECREF(par_preamble);
CHECK_OBJECT(par_tmpdir);
Py_DECREF(par_tmpdir);
CHECK_OBJECT(par_ext_package);
Py_DECREF(par_ext_package);
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_force_generic_engine);
Py_DECREF(par_force_generic_engine);
CHECK_OBJECT(par_source_extension);
Py_DECREF(par_source_extension);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
CHECK_OBJECT(par_relative_to);
Py_DECREF(par_relative_to);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ffi);
Py_DECREF(par_ffi);
CHECK_OBJECT(par_preamble);
Py_DECREF(par_preamble);
CHECK_OBJECT(par_tmpdir);
Py_DECREF(par_tmpdir);
CHECK_OBJECT(par_ext_package);
Py_DECREF(par_ext_package);
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_force_generic_engine);
Py_DECREF(par_force_generic_engine);
CHECK_OBJECT(par_source_extension);
Py_DECREF(par_source_extension);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
CHECK_OBJECT(par_relative_to);
Py_DECREF(par_relative_to);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__5_write_source(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__5_write_source;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__5_write_source = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__5_write_source)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__5_write_source);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__5_write_source == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__5_write_source = MAKE_FUNCTION_FRAME(tstate, code_objects_ef2d043e93210dfc5064d9b3c7896154, module_cffi$verifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__5_write_source->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__5_write_source = cache_frame_frame_cffi$verifier$$$function__5_write_source;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__5_write_source);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__5_write_source) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ffi);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__lock);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 76;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
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
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__has_source);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_file);
tmp_cmp_expr_left_1 = par_file;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_cffi$verifier$VerificationError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 78;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_ce895bc0ef87e5809107b8b594b6ac43_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_3;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_file);
tmp_args_element_value_1 = par_file;
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 80;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__write_source, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__5_write_source, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__5_write_source, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_4;
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
    exception_lineno = 76;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__5_write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 76;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__5_write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
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
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 76;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__5_write_source->m_frame.f_lineno = 76;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__5_write_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__5_write_source->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__5_write_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__5_write_source,
    type_description_1,
    par_self,
    par_file
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__5_write_source == cache_frame_frame_cffi$verifier$$$function__5_write_source) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__5_write_source);
    cache_frame_frame_cffi$verifier$$$function__5_write_source = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__5_write_source);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__6_compile_module(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__6_compile_module;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
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
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__6_compile_module = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__6_compile_module)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__6_compile_module);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__6_compile_module == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__6_compile_module = MAKE_FUNCTION_FRAME(tstate, code_objects_711c86c674acf7cb5dc6c3236a142efc, module_cffi$verifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__6_compile_module->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__6_compile_module = cache_frame_frame_cffi$verifier$$$function__6_compile_module;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__6_compile_module);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__6_compile_module) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ffi);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__lock);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 85;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
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
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__has_module);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 86;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_cffi$verifier$VerificationError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 87;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_e67dd3ee04ee7a80fdf451a64ddc1057_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 87;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_3;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__has_source);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto try_except_handler_3;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__write_source);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 90;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__compile_module);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__6_compile_module, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__6_compile_module, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__6_compile_module->m_frame)) {
        frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__6_compile_module->m_frame)) {
        frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
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
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 85;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__6_compile_module->m_frame.f_lineno = 85;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__6_compile_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__6_compile_module->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__6_compile_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__6_compile_module,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__6_compile_module == cache_frame_frame_cffi$verifier$$$function__6_compile_module) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__6_compile_module);
    cache_frame_frame_cffi$verifier$$$function__6_compile_module = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__6_compile_module);

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


static PyObject *impl_cffi$verifier$$$function__7_load_library(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__7_load_library;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
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
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__7_load_library = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__7_load_library)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__7_load_library);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__7_load_library == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__7_load_library = MAKE_FUNCTION_FRAME(tstate, code_objects_a681500fde5f7a9467df544ec0889c81, module_cffi$verifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__7_load_library->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__7_load_library = cache_frame_frame_cffi$verifier$$$function__7_load_library;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__7_load_library);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__7_load_library) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ffi);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__lock);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 99;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
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
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__has_module);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto try_except_handler_3;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 101;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__locate_module);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__has_module);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto try_except_handler_3;
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
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__has_source);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto try_except_handler_3;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 104;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__write_source);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 105;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__compile_module);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 106;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain__load_library);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__7_load_library, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__7_load_library, exception_keeper_lineno_1);
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
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__7_load_library->m_frame)) {
        frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__7_load_library->m_frame)) {
        frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_end_4:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 99;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
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
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__7_load_library->m_frame.f_lineno = 99;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 99;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__7_load_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__7_load_library->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__7_load_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__7_load_library,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__7_load_library == cache_frame_frame_cffi$verifier$$$function__7_load_library) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__7_load_library);
    cache_frame_frame_cffi$verifier$$$function__7_load_library = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__7_load_library);

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


static PyObject *impl_cffi$verifier$$$function__8_get_module_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_basename = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__8_get_module_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__8_get_module_name = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__8_get_module_name)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__8_get_module_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__8_get_module_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__8_get_module_name = MAKE_FUNCTION_FRAME(tstate, code_objects_9bb040eb676b7d2526f0be3da7134932, module_cffi$verifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__8_get_module_name->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__8_get_module_name = cache_frame_frame_cffi$verifier$$$function__8_get_module_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__8_get_module_name);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__8_get_module_name) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_path_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modulefilename);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_BASENAME(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_basename == NULL);
var_basename = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_basename);
tmp_expression_value_3 = var_basename;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__8_get_module_name->m_frame.f_lineno = 112;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_basename;
    assert(old != NULL);
    var_basename = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_basename);
tmp_expression_value_4 = var_basename;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_endswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__8_get_module_name->m_frame.f_lineno = 115;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__d_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_5 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_5 == NULL));
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain_gettotalrefcount);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_basename);
tmp_expression_value_6 = var_basename;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_neg_2_none;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_basename;
    assert(old != NULL);
    var_basename = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
if (var_basename == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_basename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_basename;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__8_get_module_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__8_get_module_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__8_get_module_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__8_get_module_name,
    type_description_1,
    par_self,
    var_basename
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__8_get_module_name == cache_frame_frame_cffi$verifier$$$function__8_get_module_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__8_get_module_name);
    cache_frame_frame_cffi$verifier$$$function__8_get_module_name = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__8_get_module_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_basename);
var_basename = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_basename);
var_basename = NULL;
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


static PyObject *impl_cffi$verifier$$$function__9_get_extension(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_sourcename = NULL;
PyObject *var_modname = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__9_get_extension;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__9_get_extension = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__9_get_extension)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__9_get_extension);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__9_get_extension == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__9_get_extension = MAKE_FUNCTION_FRAME(tstate, code_objects_b085ad5c50c776665ed7f8e6f29781d4, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__9_get_extension->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__9_get_extension = cache_frame_frame_cffi$verifier$$$function__9_get_extension;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__9_get_extension);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__9_get_extension) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__has_source);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ffi);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__lock);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 121;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__has_source);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto try_except_handler_4;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 123;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__write_source);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__9_get_extension, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__9_get_extension, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 121;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__9_get_extension->m_frame)) {
        frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 121;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__9_get_extension->m_frame)) {
        frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_end_3:;
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
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 121;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 121;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
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
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
tmp_expression_value_7 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_maybe_relative_path);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sourcefilename);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 124;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_sourcename == NULL);
var_sourcename = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_cffi$verifier$$$function__9_get_extension->m_frame.f_lineno = 125;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_module_name);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_modname == NULL);
var_modname = tmp_assign_source_7;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_get_extension);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sourcename);
tmp_tuple_element_1 = var_sourcename;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_modname);
tmp_tuple_element_1 = var_modname;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_direct_call_arg3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_kwds);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 126;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__9_get_extension, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__9_get_extension->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__9_get_extension, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__9_get_extension,
    type_description_1,
    par_self,
    var_sourcename,
    var_modname
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__9_get_extension == cache_frame_frame_cffi$verifier$$$function__9_get_extension) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__9_get_extension);
    cache_frame_frame_cffi$verifier$$$function__9_get_extension = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__9_get_extension);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sourcename);
CHECK_OBJECT(var_sourcename);
Py_DECREF(var_sourcename);
var_sourcename = NULL;
CHECK_OBJECT(var_modname);
CHECK_OBJECT(var_modname);
Py_DECREF(var_modname);
var_modname = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sourcename);
var_sourcename = NULL;
Py_XDECREF(var_modname);
var_modname = NULL;
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


static PyObject *impl_cffi$verifier$$$function__10_generates_python_module(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__10_generates_python_module;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__10_generates_python_module = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__10_generates_python_module)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__10_generates_python_module);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__10_generates_python_module == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__10_generates_python_module = MAKE_FUNCTION_FRAME(tstate, code_objects_5ea1fdc65baab26f3bc571cb82b4c438, module_cffi$verifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__10_generates_python_module->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__10_generates_python_module = cache_frame_frame_cffi$verifier$$$function__10_generates_python_module;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__10_generates_python_module);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__10_generates_python_module) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__vengine);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gen_python_module);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__10_generates_python_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__10_generates_python_module->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__10_generates_python_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__10_generates_python_module,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__10_generates_python_module == cache_frame_frame_cffi$verifier$$$function__10_generates_python_module) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__10_generates_python_module);
    cache_frame_frame_cffi$verifier$$$function__10_generates_python_module = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__10_generates_python_module);

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


static PyObject *impl_cffi$verifier$$$function__11_make_relative_to(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwds = python_pars[1];
PyObject *par_relative_to = python_pars[2];
PyObject *var_dirname = NULL;
PyObject *var_key = NULL;
PyObject *var_lst = NULL;
PyObject *outline_0_var_fn = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__11_make_relative_to;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__11_make_relative_to = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__11_make_relative_to)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__11_make_relative_to);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__11_make_relative_to == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__11_make_relative_to = MAKE_FUNCTION_FRAME(tstate, code_objects_4242cfe4f2f1cbb98ecd877d8e8636ad, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__11_make_relative_to->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__11_make_relative_to = cache_frame_frame_cffi$verifier$$$function__11_make_relative_to;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__11_make_relative_to);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__11_make_relative_to) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_relative_to);
tmp_truth_name_1 = CHECK_IF_TRUE(par_relative_to);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_relative_to);
tmp_path_arg_1 = par_relative_to;
tmp_capi_result_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
PyObject *tmp_path_arg_2;
CHECK_OBJECT(par_relative_to);
tmp_path_arg_2 = par_relative_to;
tmp_assign_source_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_dirname == NULL);
var_dirname = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_kwds);
tmp_expression_value_1 = par_kwds;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__11_make_relative_to->m_frame.f_lineno = 134;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_kwds;
    assert(old != NULL);
    par_kwds = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_LIST_OF_FILE_NAMES);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 135;
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_5;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
if (par_kwds == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = par_kwds;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_kwds == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 137;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_kwds;
CHECK_OBJECT(var_key);
tmp_subscript_value_1 = var_key;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_lst;
    var_lst = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_lst);
tmp_isinstance_inst_1 = var_lst;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_f7246d78d9c3d2c6907bd01a0de4cabe;
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_cffi$verifier$$$function__11_make_relative_to->m_frame.f_lineno = 139;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 139;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_3:;
{
PyObject *tmp_assign_source_7;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_lst);
tmp_iter_arg_2 = var_lst;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 141;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_fn;
    outline_0_var_fn = tmp_assign_source_11;
    Py_INCREF(outline_0_var_fn);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (var_dirname == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_dirname);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_1 = var_dirname;
CHECK_OBJECT(outline_0_var_fn);
tmp_args_element_value_2 = outline_0_var_fn;
frame_frame_cffi$verifier$$$function__11_make_relative_to->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_7 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_7);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_fn);
outline_0_var_fn = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_fn);
outline_0_var_fn = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 141;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_lst;
    assert(old != NULL);
    var_lst = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_lst);
tmp_ass_subvalue_1 = var_lst;
if (par_kwds == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = par_kwds;
CHECK_OBJECT(var_key);
tmp_ass_subscript_1 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_1:;
if (par_kwds == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_kwds;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__11_make_relative_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__11_make_relative_to->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__11_make_relative_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__11_make_relative_to,
    type_description_1,
    par_self,
    par_kwds,
    par_relative_to,
    var_dirname,
    var_key,
    var_lst
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__11_make_relative_to == cache_frame_frame_cffi$verifier$$$function__11_make_relative_to) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__11_make_relative_to);
    cache_frame_frame_cffi$verifier$$$function__11_make_relative_to = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__11_make_relative_to);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_kwds);
par_kwds = NULL;
Py_XDECREF(var_dirname);
var_dirname = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_lst);
var_lst = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_kwds);
par_kwds = NULL;
Py_XDECREF(var_dirname);
var_dirname = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_lst);
var_lst = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_relative_to);
Py_DECREF(par_relative_to);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_relative_to);
Py_DECREF(par_relative_to);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__12__locate_module(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_pkg = NULL;
PyObject *var_path = NULL;
PyObject *var_filename = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__12__locate_module;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__12__locate_module = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__12__locate_module)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__12__locate_module);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__12__locate_module == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__12__locate_module = MAKE_FUNCTION_FRAME(tstate, code_objects_b9d630f42ec8c871e723381ea1319a29, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__12__locate_module->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__12__locate_module = cache_frame_frame_cffi$verifier$$$function__12__locate_module;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__12__locate_module);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__12__locate_module) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isfile_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_isfile_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modulefilename);
if (tmp_isfile_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_1);
CHECK_OBJECT(tmp_isfile_arg_1);
Py_DECREF(tmp_isfile_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ext_package);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 149;
type_description_1 = "oooo";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ext_package);
if (tmp_name_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_globals_arg_value_1 = Py_None;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = MAKE_LIST1(tstate, const_str_plain___doc__);
frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = 151;
tmp_assign_source_1 = IMPORT_MODULE4(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
CHECK_OBJECT(tmp_fromlist_value_1);
Py_DECREF(tmp_fromlist_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_pkg == NULL);
var_pkg = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__12__locate_module, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__12__locate_module, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 150;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__12__locate_module->m_frame)) {
        frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_pkg);
tmp_expression_value_4 = var_pkg;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___path__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_path == NULL);
Py_INCREF(tmp_assign_source_3);
var_path = tmp_assign_source_3;
}
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__vengine);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_find_module);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = 158;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_module_name);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_2 = var_path;
tmp_called_value_2 = module_var_accessor_cffi$verifier$_get_so_suffixes(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_so_suffixes);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 159;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = 159;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 159;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_filename);
tmp_cmp_expr_left_2 = var_filename;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_filename);
tmp_assattr_value_1 = var_filename;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_modulefilename, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__vengine);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__12__locate_module->m_frame.f_lineno = 163;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_collect_types);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__has_module, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__12__locate_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__12__locate_module->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__12__locate_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__12__locate_module,
    type_description_1,
    par_self,
    var_pkg,
    var_path,
    var_filename
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__12__locate_module == cache_frame_frame_cffi$verifier$$$function__12__locate_module) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__12__locate_module);
    cache_frame_frame_cffi$verifier$$$function__12__locate_module = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__12__locate_module);

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
Py_XDECREF(var_pkg);
var_pkg = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pkg);
var_pkg = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_cffi$verifier$$$function__13__write_source_to(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__13__write_source_to;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__13__write_source_to = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__13__write_source_to)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__13__write_source_to);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__13__write_source_to == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__13__write_source_to = MAKE_FUNCTION_FRAME(tstate, code_objects_26178261e9333fb81f88065a67aa364b, module_cffi$verifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__13__write_source_to->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__13__write_source_to = cache_frame_frame_cffi$verifier$$$function__13__write_source_to;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__13__write_source_to);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__13__write_source_to) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_file);
tmp_assattr_value_1 = par_file;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vengine);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__f, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__vengine);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_cffi$verifier$$$function__13__write_source_to->m_frame.f_lineno = 169;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write_source_to_f);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__13__write_source_to, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__13__write_source_to, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_attrdel_target_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attrdel_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__vengine);
if (tmp_attrdel_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts.const_str_plain__f);
CHECK_OBJECT(tmp_attrdel_target_1);
Py_DECREF(tmp_attrdel_target_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 168;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__13__write_source_to->m_frame)) {
        frame_frame_cffi$verifier$$$function__13__write_source_to->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
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
try_end_1:;
{
PyObject *tmp_attrdel_target_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attrdel_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__vengine);
if (tmp_attrdel_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts.const_str_plain__f);
CHECK_OBJECT(tmp_attrdel_target_2);
Py_DECREF(tmp_attrdel_target_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__13__write_source_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__13__write_source_to->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__13__write_source_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__13__write_source_to,
    type_description_1,
    par_self,
    par_file
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__13__write_source_to == cache_frame_frame_cffi$verifier$$$function__13__write_source_to) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__13__write_source_to);
    cache_frame_frame_cffi$verifier$$$function__13__write_source_to = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__13__write_source_to);

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
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__14__write_source(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *var_f = NULL;
PyObject *var_source_data = NULL;
PyObject *var_fp = NULL;
nuitka_bool var_needs_written = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__14__write_source;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__14__write_source = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__14__write_source)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__14__write_source);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__14__write_source == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__14__write_source = MAKE_FUNCTION_FRAME(tstate, code_objects_e8c65b181e6cbae207e1af2f4bbcb357, module_cffi$verifier, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__14__write_source->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__14__write_source = cache_frame_frame_cffi$verifier$$$function__14__write_source;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__14__write_source);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__14__write_source) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_file);
tmp_cmp_expr_left_1 = par_file;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_file);
tmp_args_element_value_1 = par_file;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 175;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__write_source_to, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_1 == NULL));
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 178;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
assert(var_f == NULL);
var_f = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_f);
tmp_args_element_value_2 = var_f;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 179;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__write_source_to, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_f);
tmp_called_instance_3 = var_f;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 180;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getvalue);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
assert(var_source_data == NULL);
var_source_data = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_exists_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sourcefilename);
if (tmp_exists_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
CHECK_OBJECT(tmp_exists_arg_1);
Py_DECREF(tmp_exists_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 183;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sourcefilename);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
tmp_open_mode_1 = const_str_plain_r;
tmp_assign_source_3 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 184;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
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
assert(var_fp == NULL);
Py_INCREF(tmp_assign_source_7);
var_fp = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_assign_source_8;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_fp);
tmp_called_instance_4 = var_fp;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 185;
tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain_read);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooob";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_source_data);
tmp_cmp_expr_right_2 = var_source_data;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooob";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooob";
    goto try_except_handler_4;
}
tmp_assign_source_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_needs_written = tmp_assign_source_8;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__14__write_source, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__14__write_source, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 184;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 184;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__14__write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooob";
goto try_except_handler_5;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 184;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__14__write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooob";
goto try_except_handler_5;
branch_end_3:;
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
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 184;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 184;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooob";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
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
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_TRUE;
var_needs_written = tmp_assign_source_10;
}
branch_end_2:;
{
nuitka_bool tmp_condition_result_7;
if (var_needs_written == NUITKA_BOOL_UNASSIGNED) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_needs_written);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}

tmp_condition_result_7 = var_needs_written;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
tmp_called_value_6 = module_var_accessor_cffi$verifier$_ensure_dir(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_dir);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_sourcefilename);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 191;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_open_filename_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_open_mode_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_open_filename_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sourcefilename);
if (tmp_open_filename_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
tmp_open_mode_2 = const_str_plain_w;
tmp_assign_source_11 = BUILTIN_OPEN(tstate, tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_2);
Py_DECREF(tmp_open_filename_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_7 = tmp_with_2__source;
tmp_called_value_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___enter__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 192;
tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_8 = tmp_with_2__source;
tmp_assign_source_13 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___exit__);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_13;
}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_15 = tmp_with_2__enter;
{
    PyObject *old = var_fp;
    var_fp = tmp_assign_source_15;
    Py_INCREF(var_fp);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_fp);
tmp_called_instance_5 = var_fp;
CHECK_OBJECT(var_source_data);
tmp_args_element_value_7 = var_source_data;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 193;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_write, tmp_args_element_value_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooob";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__14__write_source, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__14__write_source, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_8 = tmp_with_2__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_9;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 192;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__14__write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooob";
goto try_except_handler_9;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 192;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__14__write_source->m_frame)) {
        frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooob";
goto try_except_handler_9;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_9 = tmp_with_2__exit;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 192;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_10:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
try_end_7:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_8;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
frame_frame_cffi$verifier$$$function__14__write_source->m_frame.f_lineno = 192;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooob";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
branch_no_7:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__has_source, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooob";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__14__write_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__14__write_source->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__14__write_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__14__write_source,
    type_description_1,
    par_self,
    par_file,
    var_f,
    var_source_data,
    var_fp,
    (int)var_needs_written
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__14__write_source == cache_frame_frame_cffi$verifier$$$function__14__write_source) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__14__write_source);
    cache_frame_frame_cffi$verifier$$$function__14__write_source = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__14__write_source);

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
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_source_data);
var_source_data = NULL;
Py_XDECREF(var_fp);
var_fp = NULL;
var_needs_written = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_source_data);
var_source_data = NULL;
Py_XDECREF(var_fp);
var_fp = NULL;
var_needs_written = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__15__compile_module(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_tmpdir = NULL;
PyObject *var_outputfilename = NULL;
PyObject *var_same = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__15__compile_module;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__15__compile_module = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__15__compile_module)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__15__compile_module);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__15__compile_module == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__15__compile_module = MAKE_FUNCTION_FRAME(tstate, code_objects_e817152df5a0f9ae3d493603a2914cae, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__15__compile_module->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__15__compile_module = cache_frame_frame_cffi$verifier$$$function__15__compile_module;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__15__compile_module);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__15__compile_module) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_path_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sourcefilename);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_tmpdir == NULL);
var_tmpdir = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
tmp_expression_value_2 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tmpdir);
tmp_args_element_value_1 = var_tmpdir;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = 201;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_extension);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 201;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = 201;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_outputfilename == NULL);
var_outputfilename = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_cffi$verifier$ffiplatform(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffiplatform);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_samefile);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_outputfilename);
tmp_args_element_value_3 = var_outputfilename;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_modulefilename);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 203;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = 203;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_same == NULL);
var_same = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__15__compile_module, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__15__compile_module, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_False;
assert(var_same == NULL);
Py_INCREF(tmp_assign_source_4);
var_same = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 202;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__15__compile_module->m_frame)) {
        frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_same);
tmp_operand_value_1 = var_same;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
tmp_called_value_3 = module_var_accessor_cffi$verifier$_ensure_dir(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_dir);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_modulefilename);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = 207;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_cffi$verifier$shutil(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_move);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outputfilename);
tmp_args_element_value_6 = var_outputfilename;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_modulefilename);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__15__compile_module->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__has_module, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__15__compile_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__15__compile_module->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__15__compile_module, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__15__compile_module,
    type_description_1,
    par_self,
    var_tmpdir,
    var_outputfilename,
    var_same
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__15__compile_module == cache_frame_frame_cffi$verifier$$$function__15__compile_module) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__15__compile_module);
    cache_frame_frame_cffi$verifier$$$function__15__compile_module = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__15__compile_module);

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
CHECK_OBJECT(var_tmpdir);
CHECK_OBJECT(var_tmpdir);
Py_DECREF(var_tmpdir);
var_tmpdir = NULL;
CHECK_OBJECT(var_outputfilename);
CHECK_OBJECT(var_outputfilename);
Py_DECREF(var_outputfilename);
var_outputfilename = NULL;
CHECK_OBJECT(var_same);
CHECK_OBJECT(var_same);
Py_DECREF(var_same);
var_same = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tmpdir);
var_tmpdir = NULL;
Py_XDECREF(var_outputfilename);
var_outputfilename = NULL;
Py_XDECREF(var_same);
var_same = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_cffi$verifier$$$function__16__load_library(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__16__load_library;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__16__load_library = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__16__load_library)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__16__load_library);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__16__load_library == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__16__load_library = MAKE_FUNCTION_FRAME(tstate, code_objects_642a278a2d7b68b359e594ea55c21885, module_cffi$verifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__16__load_library->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__16__load_library = cache_frame_frame_cffi$verifier$$$function__16__load_library;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__16__load_library);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__16__load_library) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__has_module);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
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
frame_frame_cffi$verifier$$$function__16__load_library->m_frame.f_lineno = 212;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_flags);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__vengine);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_load_library);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_flags);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__16__load_library->m_frame.f_lineno = 214;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__vengine);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__16__load_library->m_frame.f_lineno = 216;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load_library);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__16__load_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__16__load_library->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__16__load_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__16__load_library,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__16__load_library == cache_frame_frame_cffi$verifier$$$function__16__load_library) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__16__load_library);
    cache_frame_frame_cffi$verifier$$$function__16__load_library = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__16__load_library);

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


static PyObject *impl_cffi$verifier$$$function__17__locate_engine_class(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ffi = python_pars[0];
PyObject *par_force_generic_engine = python_pars[1];
PyObject *var__cffi_backend = NULL;
PyObject *var_vengine_gen = NULL;
PyObject *var_vengine_cpy = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__17__locate_engine_class;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class = MAKE_FUNCTION_FRAME(tstate, code_objects_d1352550f2225ada67d3dc44d2138d9d, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__17__locate_engine_class = cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__17__locate_engine_class);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__17__locate_engine_class) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_cffi$verifier$_FORCE_GENERIC_ENGINE(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FORCE_GENERIC_ENGINE);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooo";
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
tmp_assign_source_1 = Py_True;
{
    PyObject *old = par_force_generic_engine;
    assert(old != NULL);
    par_force_generic_engine = tmp_assign_source_1;
    Py_INCREF(par_force_generic_engine);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_force_generic_engine);
tmp_operand_value_1 = par_force_generic_engine;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__cffi_backend;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame.f_lineno = 230;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var__cffi_backend == NULL);
var__cffi_backend = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__17__locate_engine_class, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__17__locate_engine_class, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = mod_consts.const_str_chr_63;
assert(var__cffi_backend == NULL);
Py_INCREF(tmp_assign_source_3);
var__cffi_backend = tmp_assign_source_3;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 229;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame)) {
        frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_ffi);
tmp_expression_value_1 = par_ffi;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__backend);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__cffi_backend);
tmp_cmp_expr_right_2 = var__cffi_backend;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_True;
{
    PyObject *old = par_force_generic_engine;
    assert(old != NULL);
    par_force_generic_engine = tmp_assign_source_4;
    Py_INCREF(par_force_generic_engine);
    Py_DECREF(old);
}

}
branch_no_4:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(par_force_generic_engine);
tmp_truth_name_2 = CHECK_IF_TRUE(par_force_generic_engine);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_vengine_gen_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame.f_lineno = 236;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cffi$verifier,
        mod_consts.const_str_plain_vengine_gen,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_vengine_gen);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_vengine_gen == NULL);
var_vengine_gen = tmp_assign_source_5;
}
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_vengine_gen);
tmp_expression_value_2 = var_vengine_gen;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_VGenericEngine);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_vengine_cpy_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame.f_lineno = 239;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cffi$verifier,
        mod_consts.const_str_plain_vengine_cpy,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_vengine_cpy);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_vengine_cpy == NULL);
var_vengine_cpy = tmp_assign_source_6;
}
{
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_vengine_cpy);
tmp_expression_value_3 = var_vengine_cpy;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_VCPythonEngine);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__17__locate_engine_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__17__locate_engine_class->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__17__locate_engine_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__17__locate_engine_class,
    type_description_1,
    par_ffi,
    par_force_generic_engine,
    var__cffi_backend,
    var_vengine_gen,
    var_vengine_cpy
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__17__locate_engine_class == cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class);
    cache_frame_frame_cffi$verifier$$$function__17__locate_engine_class = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__17__locate_engine_class);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_force_generic_engine);
CHECK_OBJECT(par_force_generic_engine);
Py_DECREF(par_force_generic_engine);
par_force_generic_engine = NULL;
Py_XDECREF(var__cffi_backend);
var__cffi_backend = NULL;
Py_XDECREF(var_vengine_gen);
var_vengine_gen = NULL;
Py_XDECREF(var_vengine_cpy);
var_vengine_cpy = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_force_generic_engine);
CHECK_OBJECT(par_force_generic_engine);
Py_DECREF(par_force_generic_engine);
par_force_generic_engine = NULL;
Py_XDECREF(var__cffi_backend);
var__cffi_backend = NULL;
Py_XDECREF(var_vengine_gen);
var_vengine_gen = NULL;
Py_XDECREF(var_vengine_cpy);
var_vengine_cpy = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ffi);
Py_DECREF(par_ffi);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ffi);
Py_DECREF(par_ffi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__18__caller_dir_pycache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_result = NULL;
PyObject *var_filename = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__18__caller_dir_pycache;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache = MAKE_FUNCTION_FRAME(tstate, code_objects_65df84c295baf0f71e6f5e47cf5d38d1, module_cffi$verifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__18__caller_dir_pycache = cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__18__caller_dir_pycache);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__18__caller_dir_pycache) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_cffi$verifier$_TMPDIR(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TMPDIR);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
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
tmp_return_value = module_var_accessor_cffi$verifier$_TMPDIR(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TMPDIR);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__18__caller_dir_pycache->m_frame.f_lineno = 249;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CFFI_TMPDIR_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_result);
tmp_truth_name_2 = CHECK_IF_TRUE(var_result);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_SYS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_cffi$verifier$$$function__18__caller_dir_pycache->m_frame.f_lineno = 252;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain__getframe,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_f_code);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_co_filename);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_2;
}
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_path_arg_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_filename);
tmp_path_arg_2 = var_filename;
tmp_args_element_value_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain___pycache__;
frame_frame_cffi$verifier$$$function__18__caller_dir_pycache->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_path_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_ABSPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__18__caller_dir_pycache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__18__caller_dir_pycache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__18__caller_dir_pycache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__18__caller_dir_pycache,
    type_description_1,
    var_result,
    var_filename
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__18__caller_dir_pycache == cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache);
    cache_frame_frame_cffi$verifier$$$function__18__caller_dir_pycache = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__18__caller_dir_pycache);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
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


static PyObject *impl_cffi$verifier$$$function__19_set_tmpdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dirname = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_dirname);
tmp_assign_source_1 = par_dirname;
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dirname);
Py_DECREF(par_dirname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__20_cleanup_tmpdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tmpdir = python_pars[0];
PyObject *par_keep_so = python_pars[1];
PyObject *var_filelist = NULL;
PyObject *var_suffix = NULL;
PyObject *var_fn = NULL;
PyObject *var_clean_dir = NULL;
PyObject *var_dir = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir = MAKE_FUNCTION_FRAME(tstate, code_objects_ebc91a208dffd585f637b4aecdd3066c, module_cffi$verifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir = cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(par_tmpdir);
tmp_or_left_value_1 = par_tmpdir;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_1 = module_var_accessor_cffi$verifier$_caller_dir_pycache(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__caller_dir_pycache);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 264;
tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_tmpdir;
    assert(old != NULL);
    par_tmpdir = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(par_tmpdir);
tmp_path_arg_1 = par_tmpdir;
tmp_assign_source_2 = OS_LISTDIR(tstate, tmp_path_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_filelist == NULL);
var_filelist = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 265;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame)) {
        frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
try_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_keep_so);
tmp_truth_name_1 = CHECK_IF_TRUE(par_keep_so);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = mod_consts.const_str_digest_7c95b4955d628deb60ad3cbb673717f7;
assert(var_suffix == NULL);
Py_INCREF(tmp_assign_source_3);
var_suffix = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_3 = module_var_accessor_cffi$verifier$_get_so_suffixes(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_so_suffixes);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 272;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 272;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_suffix == NULL);
var_suffix = tmp_assign_source_4;
}
branch_end_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_filelist);
tmp_iter_arg_1 = var_filelist;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooo";
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
type_description_1 = "ooooooo";
exception_lineno = 273;
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
    PyObject *old = var_fn;
    var_fn = tmp_assign_source_7;
    Py_INCREF(var_fn);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_3;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(var_fn);
tmp_expression_value_4 = var_fn;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 274;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 274;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain__cffi__tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_fn);
tmp_expression_value_6 = var_fn;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_lower);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 275;
tmp_expression_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_endswith);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
if (var_suffix == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suffix);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_1 = var_suffix;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 275;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_fn);
tmp_expression_value_8 = var_fn;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_lower);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 275;
tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_endswith);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 275;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_7c95b4955d628deb60ad3cbb673717f7_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 275;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
// Tried code:
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_9 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_9 == NULL));
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_unlink);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_10 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_join);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 277;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
if (par_tmpdir == NULL) {
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmpdir);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_3 = par_tmpdir;
CHECK_OBJECT(var_fn);
tmp_args_element_value_4 = var_fn;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 277;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 277;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 277;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 276;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame)) {
        frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_6;
branch_no_4:;
goto try_end_3;
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

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
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
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_11 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_11 == NULL));
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_join);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (par_tmpdir == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmpdir);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = par_tmpdir;
tmp_args_element_value_6 = mod_consts.const_str_plain_build;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_8, 0, tmp_list_element_1);
assert(var_clean_dir == NULL);
var_clean_dir = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_clean_dir);
tmp_iter_arg_2 = var_clean_dir;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 281;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_11 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_dir;
    var_dir = tmp_assign_source_11;
    Py_INCREF(var_dir);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_path_arg_2;
CHECK_OBJECT(var_dir);
tmp_path_arg_2 = var_dir;
tmp_iter_arg_3 = OS_LISTDIR(tstate, tmp_path_arg_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 283;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_14 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_fn;
    var_fn = tmp_assign_source_14;
    Py_INCREF(var_fn);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_12 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_12 == NULL));
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_join);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
if (var_dir == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dir);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_7 = var_dir;
CHECK_OBJECT(var_fn);
tmp_args_element_value_8 = var_fn;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 284;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_fn;
    assert(old != NULL);
    var_fn = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isdir_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_5;
CHECK_OBJECT(var_fn);
tmp_isdir_arg_1 = var_fn;
tmp_capi_result_1 = OS_PATH_FILE_ISDIR(tstate, tmp_isdir_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 285;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_9;
if (var_clean_dir == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clean_dir);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 286;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_13 = var_clean_dir;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_fn);
tmp_args_element_value_9 = var_fn;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 286;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_10;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_fn);
tmp_args_element_value_10 = var_fn;
frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = 288;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_unlink, tmp_args_element_value_10);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_end_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
goto loop_start_3;
loop_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
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
    exception_lineno = 282;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame)) {
        frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_10;
branch_no_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_7;
// End of try:
try_end_7:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir,
    type_description_1,
    par_tmpdir,
    par_keep_so,
    var_filelist,
    var_suffix,
    var_fn,
    var_clean_dir,
    var_dir
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir == cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir);
    cache_frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__20_cleanup_tmpdir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_tmpdir);
par_tmpdir = NULL;
Py_XDECREF(var_filelist);
var_filelist = NULL;
Py_XDECREF(var_suffix);
var_suffix = NULL;
Py_XDECREF(var_fn);
var_fn = NULL;
Py_XDECREF(var_clean_dir);
var_clean_dir = NULL;
Py_XDECREF(var_dir);
var_dir = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_tmpdir);
par_tmpdir = NULL;
Py_XDECREF(var_filelist);
var_filelist = NULL;
Py_XDECREF(var_suffix);
var_suffix = NULL;
Py_XDECREF(var_fn);
var_fn = NULL;
Py_XDECREF(var_clean_dir);
var_clean_dir = NULL;
Py_XDECREF(var_dir);
var_dir = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keep_so);
Py_DECREF(par_keep_so);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keep_so);
Py_DECREF(par_keep_so);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cffi$verifier$$$function__21__get_so_suffixes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_suffixes = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__21__get_so_suffixes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes = MAKE_FUNCTION_FRAME(tstate, code_objects_232326080e8c9570469d3a1141b5195c, module_cffi$verifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__21__get_so_suffixes = cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__21__get_so_suffixes);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__21__get_so_suffixes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_cffi$verifier$_extension_suffixes(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extension_suffixes);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cffi$verifier$$$function__21__get_so_suffixes->m_frame.f_lineno = 293;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(var_suffixes == NULL);
var_suffixes = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_suffixes);
tmp_operand_value_1 = var_suffixes;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST1(tstate, mod_consts.const_str_digest_c2a6768b2648906cf62c19bd4d5b3e87);
{
    PyObject *old = var_suffixes;
    assert(old != NULL);
    var_suffixes = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__21__get_so_suffixes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__21__get_so_suffixes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__21__get_so_suffixes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__21__get_so_suffixes,
    type_description_1,
    var_suffixes
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__21__get_so_suffixes == cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes);
    cache_frame_frame_cffi$verifier$$$function__21__get_so_suffixes = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__21__get_so_suffixes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_suffixes);
tmp_return_value = var_suffixes;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_suffixes);
CHECK_OBJECT(var_suffixes);
Py_DECREF(var_suffixes);
var_suffixes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_suffixes);
var_suffixes = NULL;
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


static PyObject *impl_cffi$verifier$$$function__22__ensure_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
PyObject *var_dirname = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$function__22__ensure_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_cffi$verifier$$$function__22__ensure_dir = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cffi$verifier$$$function__22__ensure_dir)) {
    Py_XDECREF(cache_frame_frame_cffi$verifier$$$function__22__ensure_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cffi$verifier$$$function__22__ensure_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cffi$verifier$$$function__22__ensure_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_5f76d0adeeb03ba851eda5302c40e231, module_cffi$verifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cffi$verifier$$$function__22__ensure_dir->m_type_description == NULL);
frame_frame_cffi$verifier$$$function__22__ensure_dir = cache_frame_frame_cffi$verifier$$$function__22__ensure_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$function__22__ensure_dir);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$function__22__ensure_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(par_filename);
tmp_path_arg_1 = par_filename;
tmp_assign_source_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_dirname == NULL);
var_dirname = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isdir_arg_1;
CHECK_OBJECT(var_dirname);
tmp_truth_name_1 = CHECK_IF_TRUE(var_dirname);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_dirname);
tmp_isdir_arg_1 = var_dirname;
tmp_operand_value_1 = OS_PATH_FILE_ISDIR(tstate, tmp_isdir_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_dirname);
tmp_args_element_value_1 = var_dirname;
frame_frame_cffi$verifier$$$function__22__ensure_dir->m_frame.f_lineno = 306;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_makedirs, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$function__22__ensure_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$function__22__ensure_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$function__22__ensure_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$function__22__ensure_dir,
    type_description_1,
    par_filename,
    var_dirname
);


// Release cached frame if used for exception.
if (frame_frame_cffi$verifier$$$function__22__ensure_dir == cache_frame_frame_cffi$verifier$$$function__22__ensure_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cffi$verifier$$$function__22__ensure_dir);
    cache_frame_frame_cffi$verifier$$$function__22__ensure_dir = NULL;
}

assertFrameObject(frame_frame_cffi$verifier$$$function__22__ensure_dir);

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
CHECK_OBJECT(var_dirname);
CHECK_OBJECT(var_dirname);
Py_DECREF(var_dirname);
var_dirname = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dirname);
var_dirname = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__10_generates_python_module(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__10_generates_python_module,
        mod_consts.const_str_plain_generates_python_module,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4e0e867229b0229996a6faa169533a37,
#endif
        code_objects_5ea1fdc65baab26f3bc571cb82b4c438,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__11_make_relative_to(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__11_make_relative_to,
        mod_consts.const_str_plain_make_relative_to,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a43701fb1ac58136244cd761c904e81b,
#endif
        code_objects_4242cfe4f2f1cbb98ecd877d8e8636ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__12__locate_module(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__12__locate_module,
        mod_consts.const_str_plain__locate_module,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7300ed898db51fc8f67dbcefebf6c9ac,
#endif
        code_objects_b9d630f42ec8c871e723381ea1319a29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__13__write_source_to(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__13__write_source_to,
        mod_consts.const_str_plain__write_source_to,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ded736075c23c2518bd11be328d24b16,
#endif
        code_objects_26178261e9333fb81f88065a67aa364b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__14__write_source(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__14__write_source,
        mod_consts.const_str_plain__write_source,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3cdd895c47f1e85983f44e54b82df6e4,
#endif
        code_objects_e8c65b181e6cbae207e1af2f4bbcb357,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__15__compile_module(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__15__compile_module,
        mod_consts.const_str_plain__compile_module,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8befd2ae4566b26a4cff02cda9ac2914,
#endif
        code_objects_e817152df5a0f9ae3d493603a2914cae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__16__load_library(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__16__load_library,
        mod_consts.const_str_plain__load_library,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b2cd5196aa393217de49e0630d8f4267,
#endif
        code_objects_642a278a2d7b68b359e594ea55c21885,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__17__locate_engine_class(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__17__locate_engine_class,
        mod_consts.const_str_plain__locate_engine_class,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1352550f2225ada67d3dc44d2138d9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__18__caller_dir_pycache(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__18__caller_dir_pycache,
        mod_consts.const_str_plain__caller_dir_pycache,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_65df84c295baf0f71e6f5e47cf5d38d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__19_set_tmpdir(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__19_set_tmpdir,
        mod_consts.const_str_plain_set_tmpdir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_222ce224baf1c533429430b54536f4da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        mod_consts.const_str_digest_7fc9b4823d044cb54eb0869d69d9bda7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__1__extension_suffixes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__1__extension_suffixes,
        mod_consts.const_str_plain__extension_suffixes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_383c2d4592881aaef8f5854ef6c4d3db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__20_cleanup_tmpdir(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__20_cleanup_tmpdir,
        mod_consts.const_str_plain_cleanup_tmpdir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ebc91a208dffd585f637b4aecdd3066c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        mod_consts.const_str_digest_0708fee7d6fe6c73725d59fdee4b93f7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__21__get_so_suffixes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__21__get_so_suffixes,
        mod_consts.const_str_plain__get_so_suffixes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_232326080e8c9570469d3a1141b5195c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__22__ensure_dir(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__22__ensure_dir,
        mod_consts.const_str_plain__ensure_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f76d0adeeb03ba851eda5302c40e231,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__4___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eae5c68f5206bbe9783880f3613cb739,
#endif
        code_objects_ed77f8341f9cbddfabc657973f1614da,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__5_write_source(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__5_write_source,
        mod_consts.const_str_plain_write_source,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7ea279a8202f62881e118eeee9644cb,
#endif
        code_objects_ef2d043e93210dfc5064d9b3c7896154,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        mod_consts.const_str_digest_18379c2bd737bf61f38264c0c28a4853,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__6_compile_module(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__6_compile_module,
        mod_consts.const_str_plain_compile_module,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54cfae830ce0a5dc0b79e3b13376c86c,
#endif
        code_objects_711c86c674acf7cb5dc6c3236a142efc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        mod_consts.const_str_digest_5f756d2f918f8874cc0267b32bfd34c3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__7_load_library(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__7_load_library,
        mod_consts.const_str_plain_load_library,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43e4f57990c6ffbbfc613f8932545020,
#endif
        code_objects_a681500fde5f7a9467df544ec0889c81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        mod_consts.const_str_digest_d8f5f91aca7dcc239b573507e17fc01d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__8_get_module_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__8_get_module_name,
        mod_consts.const_str_plain_get_module_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54d770a0a742a31555225675816af917,
#endif
        code_objects_9bb040eb676b7d2526f0be3da7134932,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cffi$verifier$$$function__9_get_extension(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$verifier$$$function__9_get_extension,
        mod_consts.const_str_plain_get_extension,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d94a9e71973a7ed119944ac8acf562b4,
#endif
        code_objects_b085ad5c50c776665ed7f8e6f29781d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cffi$verifier,
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

static function_impl_code const function_table_cffi$verifier[] = {
impl_cffi$verifier$$$function__1__extension_suffixes,
impl_cffi$verifier$$$function__4___init__,
impl_cffi$verifier$$$function__5_write_source,
impl_cffi$verifier$$$function__6_compile_module,
impl_cffi$verifier$$$function__7_load_library,
impl_cffi$verifier$$$function__8_get_module_name,
impl_cffi$verifier$$$function__9_get_extension,
impl_cffi$verifier$$$function__10_generates_python_module,
impl_cffi$verifier$$$function__11_make_relative_to,
impl_cffi$verifier$$$function__12__locate_module,
impl_cffi$verifier$$$function__13__write_source_to,
impl_cffi$verifier$$$function__14__write_source,
impl_cffi$verifier$$$function__15__compile_module,
impl_cffi$verifier$$$function__16__load_library,
impl_cffi$verifier$$$function__17__locate_engine_class,
impl_cffi$verifier$$$function__18__caller_dir_pycache,
impl_cffi$verifier$$$function__19_set_tmpdir,
impl_cffi$verifier$$$function__20_cleanup_tmpdir,
impl_cffi$verifier$$$function__21__get_so_suffixes,
impl_cffi$verifier$$$function__22__ensure_dir,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cffi$verifier);
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
        module_cffi$verifier,
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
        function_table_cffi$verifier,
        sizeof(function_table_cffi$verifier) / sizeof(function_impl_code)
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
static char const *module_full_name = "cffi.verifier";
#endif

// Internal entry point for module code.
PyObject *module_code_cffi$verifier(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cffi$verifier");

    // Store the module for future use.
    module_cffi$verifier = module;

    moduledict_cffi$verifier = MODULE_DICT(module_cffi$verifier);

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
        PRINT_STRING("cffi$verifier: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cffi$verifier: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cffi$verifier: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cffi.verifier" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcffi$verifier\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cffi$verifier,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cffi$verifier,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cffi$verifier,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cffi$verifier,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cffi$verifier,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cffi$verifier);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cffi$verifier);
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

        UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_cffi$verifier;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_cffi$verifier$$$class__2_Verifier_30 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cffi$verifier$$$class__2_Verifier_2;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cffi$verifier = MAKE_MODULE_FRAME(code_objects_3e053851bc82d2e3e7bb9e661676bded, module_cffi$verifier);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier);
assert(Py_REFCNT(frame_frame_cffi$verifier) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_cffi$verifier$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_cffi$verifier$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_binascii;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cffi$verifier->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_cffi$verifier->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain___version_verifier_modules___tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_cffi$verifier->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cffi$verifier,
        mod_consts.const_str_plain___version_verifier_modules__,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain___version_verifier_modules__);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain___version_verifier_modules__, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ffiplatform_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_cffi$verifier->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cffi$verifier,
        mod_consts.const_str_plain_ffiplatform,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ffiplatform);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_ffiplatform, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_error;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_VerificationError_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_cffi$verifier->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cffi$verifier,
        mod_consts.const_str_plain_VerificationError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_VerificationError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cffi$verifier;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_cffi$verifier->m_frame.f_lineno = 10;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION_cffi$verifier$$$function__1__extension_suffixes(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__extension_suffixes, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_NativeIO, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_15 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_17;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_Verifier;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cffi$verifier->m_frame.f_lineno = 30;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 30;

    goto try_except_handler_1;
}
frame_frame_cffi$verifier->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
}
branch_end_1:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_2__prepared;
locals_cffi$verifier$$$class__2_Verifier_30 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_53a9e8b6a5ed893b144c85e7eed75cc8;
tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Verifier;
tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
frame_frame_cffi$verifier$$$class__2_Verifier_2 = MAKE_CLASS_FRAME(tstate, code_objects_c8f5761b12df8f2682a382391f31906b, module_cffi$verifier, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cffi$verifier$$$class__2_Verifier_2);
assert(Py_REFCNT(frame_frame_cffi$verifier$$$class__2_Verifier_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_394e59f6dad0050fe7204bd1213bb4c4_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__4___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__5_write_source(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_write_source, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__6_compile_module(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_compile_module, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__7_load_library(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_load_library, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__8_get_module_name(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_get_module_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__9_get_extension(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_get_extension, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__10_generates_python_module(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_generates_python_module, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__11_make_relative_to(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain_make_relative_to, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__12__locate_module(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain__locate_module, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__13__write_source_to(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain__write_source_to, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__14__write_source(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain__write_source, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__15__compile_module(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain__compile_module, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_cffi$verifier$$$function__16__load_library(tstate);

tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain__load_library, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier$$$class__2_Verifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier$$$class__2_Verifier_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier$$$class__2_Verifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cffi$verifier$$$class__2_Verifier_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cffi$verifier$$$class__2_Verifier_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_54f0c00ddd5548412fe0e881ed84a1cb_tuple;
tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_cffi$verifier$$$class__2_Verifier_30, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_Verifier;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_cffi$verifier$$$class__2_Verifier_30;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cffi$verifier->m_frame.f_lineno = 30;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_20 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_cffi$verifier$$$class__2_Verifier_30);
locals_cffi$verifier$$$class__2_Verifier_30 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cffi$verifier$$$class__2_Verifier_30);
locals_cffi$verifier$$$class__2_Verifier_30 = NULL;
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
exception_lineno = 30;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_Verifier, tmp_assign_source_20);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cffi$verifier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cffi$verifier->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cffi$verifier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cffi$verifier);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = Py_False;
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__FORCE_GENERIC_ENGINE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_cffi$verifier$$$function__17__locate_engine_class(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__locate_engine_class, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_None;
UPDATE_STRING_DICT0(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__TMPDIR, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_cffi$verifier$$$function__18__caller_dir_pycache(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__caller_dir_pycache, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_cffi$verifier$$$function__19_set_tmpdir(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_set_tmpdir, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_false_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_27 = MAKE_FUNCTION_cffi$verifier$$$function__20_cleanup_tmpdir(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain_cleanup_tmpdir, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_cffi$verifier$$$function__21__get_so_suffixes(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__get_so_suffixes, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_cffi$verifier$$$function__22__ensure_dir(tstate);

UPDATE_STRING_DICT1(moduledict_cffi$verifier, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_dir, tmp_assign_source_29);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cffi$verifier", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cffi.verifier" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cffi$verifier);
    return module_cffi$verifier;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cffi$verifier, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cffi$verifier", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'jaraco$context'
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



/* The "module_jaraco$context" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jaraco$context;
PyDictObject *moduledict_jaraco$context;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_ae96e26aee76bba4cbb539d9edaf63ef;
PyObject *const_str_plain_getcwd;
PyObject *const_str_plain_chdir;
PyObject *const_str_plain_dir;
PyObject *const_str_plain_pushd;
PyObject *const_str_digest_6740b97c74af872b3d8abf377f5f620e;
PyObject *const_str_plain_target_dir;
PyObject *const_str_plain_url;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_digest_57967cd8914ecc86cbd110019732bfd8_str_empty_tuple;
PyObject *const_tuple_str_digest_159a7e3b180adf8c19c4989bf78375af_str_empty_tuple;
PyObject *const_str_plain_mkdir;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_request;
PyObject *const_str_plain_urlopen;
PyObject *const_str_plain_tarfile;
PyObject *const_str_digest_718d2d88d247f1d46a7db731d51ed998;
PyObject *const_tuple_str_plain_fileobj_str_plain_mode_tuple;
PyObject *const_str_plain_extractall;
PyObject *const_str_plain__default_filter;
PyObject *const_tuple_str_plain_path_str_plain_filter_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_rmtree;
PyObject *const_str_plain_tarball;
PyObject *const_str_plain_compose_two;
PyObject *const_str_digest_30665e588ec9ac76c38ee28fe9f81956;
PyObject *const_str_plain_reduce;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_115215a4067f4057e467c3205efb1003;
PyObject *const_str_digest_a1089d6281afb433efdefa34da7acf17;
PyObject *const_str_plain_f1;
PyObject *const_str_plain_f2;
PyObject *const_tuple_str_slash_int_pos_1_tuple;
PyObject *const_dict_c00478af86b234665719e19f7fc632fc;
PyObject *const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2;
PyObject *const_str_digest_86b5aef584a560389187355ac517e1cf;
PyObject *const_dict_f3f3d46bfbc1f813581cf212c414d5b3;
PyObject *const_str_plain_composed;
PyObject *const_str_digest_dc5aa55b220dd52cc4c5c10af980a406;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_inner;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_outer;
PyObject *const_str_plain_rmdir;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_unlink;
PyObject *const_str_plain_errno;
PyObject *const_str_plain_EACCES;
PyObject *const_str_plain_chmod;
PyObject *const_str_plain_S_IRWXU;
PyObject *const_str_plain_S_IRWXG;
PyObject *const_str_plain_S_IRWXO;
PyObject *const_str_digest_e1624e1d23e4b225570c05cacb8ae2dc;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_system;
PyObject *const_str_plain_Windows;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_f502ef01fd50a4a03e4dc10e91dcef95;
PyObject *const_str_plain_remove_readonly;
PyObject *const_tuple_str_plain_onerror_tuple;
PyObject *const_str_digest_1de25cd6a3e678c4d4abb1743af857df;
PyObject *const_str_plain_tempfile;
PyObject *const_str_plain_mkdtemp;
PyObject *const_str_plain_remover;
PyObject *const_str_plain_temp_dir;
PyObject *const_str_digest_c77d89e33654c9373d1f50f66d0c5c09;
PyObject *const_str_plain_git;
PyObject *const_str_plain_hg;
PyObject *const_str_plain_dest_ctx;
PyObject *const_str_plain_clone;
PyObject *const_str_digest_c8465d336e8e3499a7c97651616cb767;
PyObject *const_str_plain_branch;
PyObject *const_str_plain_quiet;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_DEVNULL;
PyObject *const_str_plain_check_call;
PyObject *const_tuple_str_plain_stdout_str_plain_stderr_tuple;
PyObject *const_str_plain_repo_context;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_exc_info;
PyObject *const_int_pos_2;
PyObject *const_str_plain_wraps;
PyObject *const_dict_ded4d2a1dba2ccb0c95bf0b248661621;
PyObject *const_str_plain_wrapper;
PyObject *const_str_digest_c5be0f7e9d337427fc2f4082d09b119e;
PyObject *const_str_digest_18badf6f282e95c409777af2d2a035fa;
PyObject *const_str_plain_ExceptionTrap;
PyObject *const_str_plain_self;
PyObject *const_str_plain_func;
PyObject *const_str_plain__test;
PyObject *const_str_plain_raises;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_not_;
PyObject *const_tuple_str_plain__test_tuple;
PyObject *const_str_digest_acbcf54a530e68443cd1f4fd7d5e9879;
PyObject *const_str_plain_action;
PyObject *const_str_plain_code;
PyObject *const_str_plain_ignore;
PyObject *const_str_plain_error;
PyObject *const_str_plain_suppress;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_fdee6c9bad138da5e83de5732f6e0456_tuple;
PyObject *const_str_plain_context;
PyObject *const_tuple_a5913e19bcd1adc9fbc54f27215f4f08_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_builtins;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Callable_str_plain_Generator_str_plain_Iterator_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeVar;
PyObject *const_uniontype_tuple_48fe693bdd117d1f0d831fedc42bbc96_tuple;
PyObject *const_uniontype_tuple_type_BaseException_anon_NoneType_tuple;
PyObject *const_str_plain__UnpackableOptExcInfo;
PyObject *const_str_plain_TypeAlias;
PyObject *const_tuple_str_plain__R_tuple;
PyObject *const_str_plain__R;
PyObject *const_tuple_str_plain__T1_co_true_tuple;
PyObject *const_tuple_str_plain_covariant_tuple;
PyObject *const_str_plain__T1_co;
PyObject *const_tuple_str_plain__T2_co_true_tuple;
PyObject *const_str_plain__T2_co;
PyObject *const_dict_5003a2cb1f4de01494853eeb71e31ee4;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_deb9da4cf9ba08dfeb06e2aa51511465;
PyObject *const_str_plain__compose_tarfile_filters;
PyObject *const_dict_cf3aa826ef4434338000ed0fa4b44f40;
PyObject *const_str_plain_strip_first_component;
PyObject *const_str_plain_data_filter;
PyObject *const_dict_77af5ac3c9f831eb6c09d7cde4b51285;
PyObject *const_str_plain__compose;
PyObject *const_str_plain_tarball_cwd;
PyObject *const_dict_9316a2a3ee16e7fef7f14c26cf58aa0d;
PyObject *const_dict_2c07a6d971c76f0ab028fb3373421ee3;
PyObject *const_str_plain_robust_remover;
PyObject *const_dict_20d218f85282cb9e405712b33e77acab;
PyObject *const_tuple_str_plain_remover_tuple;
PyObject *const_str_plain_robust_temp_dir;
PyObject *const_dict_55384783217a5b7eee373d3e95a2c6bb;
PyObject *const_str_digest_aad53f1bd79f95821813351ca232841a;
PyObject *const_str_digest_e99a3e4f06655d59e488ed8d4b59a3e5;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_263;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_OptExcInfo;
PyObject *const_tuple_tuple_type_Exception_tuple_tuple;
PyObject *const_dict_4010b2785c002d4d976747a1ac91e1cc;
PyObject *const_str_digest_35a54bd9189417586f8ba9f188072b7c;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_digest_6bff8190d9f7da0cdb42c2f77d415109;
PyObject *const_dict_6a827e102704e1b06e6910c35dc0a80e;
PyObject *const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3;
PyObject *const_dict_9886bc989bd4ef336593ffab967f448c;
PyObject *const_str_plain_value;
PyObject *const_str_digest_6176f19a0710731585292692f747cdbe;
PyObject *const_dict_310de40e1a65ecc7d0b0c7281e3023d1;
PyObject *const_str_plain_tb;
PyObject *const_str_digest_3c592624747f168381bed14a62250143;
PyObject *const_dict_6836646641c29ad4a48bd0a599a72fd1;
PyObject *const_str_digest_98854c7d5088e9742683ac9409d50c00;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain___bool__;
PyObject *const_str_digest_a69599b32ea96f06b8a900413f0f89e6;
PyObject *const_dict_5b43a9f5728244a370dc293216b028f7;
PyObject *const_dict_4209e1ec099879cdf7a155028d28dd18;
PyObject *const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f;
PyObject *const_dict_fe2e146e451cf94328fc976063fbc65a;
PyObject *const_str_plain_passes;
PyObject *const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73;
PyObject *const_tuple_str_plain_exceptions_str_plain_exc_info_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_ContextDecorator;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_4ac9924b02cd9e2b7413484b94415dfe;
PyObject *const_int_pos_371;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_on_interrupt;
PyObject *const_str_digest_67ed9a6490adca428693b23a1213ed50;
PyObject *const_int_pos_382;
PyObject *const_tuple_str_plain_error_int_pos_1_tuple;
PyObject *const_dict_c9b7b16f07482dc090d0d76d48dcb413;
PyObject *const_str_digest_3103bbf9391792dcf11af8816fb01f93;
PyObject *const_str_digest_edf8c61efbfe721a006f3a1e21112584;
PyObject *const_dict_d72ca34d510b3e01d04c37e69f6c78e4;
PyObject *const_str_digest_0233fa9304eb0d6bebea534823e8c536;
PyObject *const_tuple_str_plain_action_str_plain_code_tuple;
PyObject *const_str_digest_099d0dd01d009e885c415053019acd52;
PyObject *const_tuple_str_plain_member_str_plain_path_tuple;
PyObject *const_tuple_str_plain_member_str_plain_path_str_plain_f1_str_plain_f2_tuple;
PyObject *const_tuple_str_plain_f1_str_plain_f2_tuple;
PyObject *const_str_digest_2c0c6c30f773ac76c2f612e016ca796a;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_fd530112e29f490c0f525c2dd1ea3619_tuple;
PyObject *const_tuple_7b3d388a553c47f52835463197dbad6d_tuple;
PyObject *const_tuple_str_plain_self_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_self_str_plain_action_str_plain_code_tuple;
PyObject *const_tuple_str_plain_cmgrs_str_plain_compose_two_tuple;
PyObject *const_tuple_str_plain_filters_str_plain_compose_two_tuple;
PyObject *const_tuple_str_plain_inner_str_plain_outer_str_plain_composed_tuple;
PyObject *const_tuple_ed15dd805a9a6a5c6c59b3e7598accb8_tuple;
PyObject *const_tuple_str_plain_inner_str_plain_outer_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_tuple;
PyObject *const_tuple_str_plain_dir_str_plain_orig_tuple;
PyObject *const_tuple_3dc822ea6f153957a810444ff4ee95a7_tuple;
PyObject *const_tuple_4fd5be99ed5a73680c489c8210bc9ebb_tuple;
PyObject *const_tuple_f966663d45f1638c4628a97325ee4cc0_tuple;
PyObject *const_tuple_str_plain_member_str_plain_path_str_underscore_tuple;
PyObject *const_tuple_6754ab683fdcbaf813fdbc59fcd15d55_tuple;
PyObject *const_tuple_str_plain_remover_str_plain_temp_dir_tuple;
PyObject *const_tuple_47a75299380fec838c874d5ee40229c7_tuple;
PyObject *const_tuple_str_plain__test_str_plain_func_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[230];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("jaraco.context"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae96e26aee76bba4cbb539d9edaf63ef);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_getcwd);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_chdir);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_dir);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_pushd);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_6740b97c74af872b3d8abf377f5f620e);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_target_dir);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57967cd8914ecc86cbd110019732bfd8_str_empty_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_159a7e3b180adf8c19c4989bf78375af_str_empty_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_tarfile);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_718d2d88d247f1d46a7db731d51ed998);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileobj_str_plain_mode_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_extractall);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_filter);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_filter_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutil);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_rmtree);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_tarball);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose_two);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_30665e588ec9ac76c38ee28fe9f81956);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_115215a4067f4057e467c3205efb1003);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1089d6281afb433efdefa34da7acf17);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_f1);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_f2);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_int_pos_1_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_c00478af86b234665719e19f7fc632fc);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_86b5aef584a560389187355ac517e1cf);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_f3f3d46bfbc1f813581cf212c414d5b3);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_composed);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_inner);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_outer);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_rmdir);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_unlink);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_EACCES);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_chmod);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXU);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXG);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXO);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1624e1d23e4b225570c05cacb8ae2dc);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_system);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Windows);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_f502ef01fd50a4a03e4dc10e91dcef95);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_readonly);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_onerror_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_1de25cd6a3e678c4d4abb1743af857df);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_remover);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_temp_dir);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_c77d89e33654c9373d1f50f66d0c5c09);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_git);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_hg);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_dest_ctx);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_clone);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8465d336e8e3499a7c97651616cb767);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_branch);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_quiet);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEVNULL);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_call);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_repo_context);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc_info);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_ded4d2a1dba2ccb0c95bf0b248661621);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5be0f7e9d337427fc2f4082d09b119e);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_18badf6f282e95c409777af2d2a035fa);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExceptionTrap);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__test);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_raises);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__test_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_acbcf54a530e68443cd1f4fd7d5e9879);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_fdee6c9bad138da5e83de5732f6e0456_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_context);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_a5913e19bcd1adc9fbc54f27215f4f08_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtins);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Generator_str_plain_Iterator_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_48fe693bdd117d1f0d831fedc42bbc96_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_type_BaseException_anon_NoneType_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__UnpackableOptExcInfo);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__R_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__R);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T1_co_true_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__T1_co);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T2_co_true_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain__T2_co);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_5003a2cb1f4de01494853eeb71e31ee4);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_deb9da4cf9ba08dfeb06e2aa51511465);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__compose_tarfile_filters);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_cf3aa826ef4434338000ed0fa4b44f40);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_first_component);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_filter);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_77af5ac3c9f831eb6c09d7cde4b51285);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain__compose);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_tarball_cwd);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_9316a2a3ee16e7fef7f14c26cf58aa0d);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_2c07a6d971c76f0ab028fb3373421ee3);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_robust_remover);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_20d218f85282cb9e405712b33e77acab);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remover_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_robust_temp_dir);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_55384783217a5b7eee373d3e95a2c6bb);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_e99a3e4f06655d59e488ed8d4b59a3e5);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_263);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptExcInfo);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_type_Exception_tuple_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_4010b2785c002d4d976747a1ac91e1cc);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_35a54bd9189417586f8ba9f188072b7c);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bff8190d9f7da0cdb42c2f77d415109);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_6a827e102704e1b06e6910c35dc0a80e);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_6176f19a0710731585292692f747cdbe);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_310de40e1a65ecc7d0b0c7281e3023d1);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_tb);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c592624747f168381bed14a62250143);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_6836646641c29ad4a48bd0a599a72fd1);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_98854c7d5088e9742683ac9409d50c00);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain___bool__);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_a69599b32ea96f06b8a900413f0f89e6);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_5b43a9f5728244a370dc293216b028f7);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_4209e1ec099879cdf7a155028d28dd18);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_fe2e146e451cf94328fc976063fbc65a);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_passes);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_str_plain_exc_info_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContextDecorator);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ac9924b02cd9e2b7413484b94415dfe);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_371);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_interrupt);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_67ed9a6490adca428693b23a1213ed50);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_int_pos_382);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_int_pos_1_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_c9b7b16f07482dc090d0d76d48dcb413);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_3103bbf9391792dcf11af8816fb01f93);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_edf8c61efbfe721a006f3a1e21112584);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_d72ca34d510b3e01d04c37e69f6c78e4);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_0233fa9304eb0d6bebea534823e8c536);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_action_str_plain_code_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_099d0dd01d009e885c415053019acd52);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_str_plain_f1_str_plain_f2_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f1_str_plain_f2_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c0c6c30f773ac76c2f612e016ca796a);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_fd530112e29f490c0f525c2dd1ea3619_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_7b3d388a553c47f52835463197dbad6d_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exceptions_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_action_str_plain_code_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cmgrs_str_plain_compose_two_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filters_str_plain_compose_two_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inner_str_plain_outer_str_plain_composed_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_ed15dd805a9a6a5c6c59b3e7598accb8_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inner_str_plain_outer_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dir_str_plain_orig_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_3dc822ea6f153957a810444ff4ee95a7_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_4fd5be99ed5a73680c489c8210bc9ebb_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_f966663d45f1638c4628a97325ee4cc0_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_str_underscore_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_6754ab683fdcbaf813fdbc59fcd15d55_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remover_str_plain_temp_dir_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_47a75299380fec838c874d5ee40229c7_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__test_str_plain_func_str_plain_self_tuple);
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
void checkModuleConstants_jaraco$context(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae96e26aee76bba4cbb539d9edaf63ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae96e26aee76bba4cbb539d9edaf63ef);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_getcwd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getcwd);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_chdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chdir);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dir);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_pushd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pushd);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_6740b97c74af872b3d8abf377f5f620e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6740b97c74af872b3d8abf377f5f620e);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_target_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_target_dir);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57967cd8914ecc86cbd110019732bfd8_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_57967cd8914ecc86cbd110019732bfd8_str_empty_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_159a7e3b180adf8c19c4989bf78375af_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_159a7e3b180adf8c19c4989bf78375af_str_empty_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdir);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_tarfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tarfile);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_718d2d88d247f1d46a7db731d51ed998));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_718d2d88d247f1d46a7db731d51ed998);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileobj_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fileobj_str_plain_mode_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_extractall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extractall);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_filter);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_filter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_path_str_plain_filter_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shutil);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_rmtree));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rmtree);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_tarball));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tarball);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose_two));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose_two);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_30665e588ec9ac76c38ee28fe9f81956));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30665e588ec9ac76c38ee28fe9f81956);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_115215a4067f4057e467c3205efb1003));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_115215a4067f4057e467c3205efb1003);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1089d6281afb433efdefa34da7acf17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1089d6281afb433efdefa34da7acf17);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f1);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f2);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_int_pos_1_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_c00478af86b234665719e19f7fc632fc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c00478af86b234665719e19f7fc632fc);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_86b5aef584a560389187355ac517e1cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86b5aef584a560389187355ac517e1cf);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_f3f3d46bfbc1f813581cf212c414d5b3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3f3d46bfbc1f813581cf212c414d5b3);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_composed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_composed);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_inner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inner);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_outer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outer);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_rmdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rmdir);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_unlink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unlink);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errno);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_EACCES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EACCES);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_chmod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chmod);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXU));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S_IRWXU);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S_IRWXG);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_S_IRWXO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S_IRWXO);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1624e1d23e4b225570c05cacb8ae2dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1624e1d23e4b225570c05cacb8ae2dc);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_system));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Windows);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_f502ef01fd50a4a03e4dc10e91dcef95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f502ef01fd50a4a03e4dc10e91dcef95);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_readonly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove_readonly);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_onerror_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_onerror_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_1de25cd6a3e678c4d4abb1743af857df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1de25cd6a3e678c4d4abb1743af857df);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdtemp);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_remover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remover);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_temp_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temp_dir);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_c77d89e33654c9373d1f50f66d0c5c09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c77d89e33654c9373d1f50f66d0c5c09);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_git));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_git);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_hg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hg);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_dest_ctx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dest_ctx);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_clone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clone);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8465d336e8e3499a7c97651616cb767));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8465d336e8e3499a7c97651616cb767);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_branch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_branch);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_quiet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quiet);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEVNULL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEVNULL);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_call);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_repo_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_repo_context);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc_info);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_ded4d2a1dba2ccb0c95bf0b248661621));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ded4d2a1dba2ccb0c95bf0b248661621);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapper);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5be0f7e9d337427fc2f4082d09b119e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5be0f7e9d337427fc2f4082d09b119e);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_18badf6f282e95c409777af2d2a035fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18badf6f282e95c409777af2d2a035fa);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExceptionTrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExceptionTrap);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__test);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_raises));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raises);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__test_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__test_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_acbcf54a530e68443cd1f4fd7d5e9879));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acbcf54a530e68443cd1f4fd7d5e9879);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_fdee6c9bad138da5e83de5732f6e0456_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fdee6c9bad138da5e83de5732f6e0456_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_context);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_a5913e19bcd1adc9fbc54f27215f4f08_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a5913e19bcd1adc9fbc54f27215f4f08_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtins));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_builtins);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Generator_str_plain_Iterator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Callable_str_plain_Generator_str_plain_Iterator_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_48fe693bdd117d1f0d831fedc42bbc96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_uniontype_tuple_48fe693bdd117d1f0d831fedc42bbc96_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_type_BaseException_anon_NoneType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_uniontype_tuple_type_BaseException_anon_NoneType_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__UnpackableOptExcInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UnpackableOptExcInfo);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__R_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__R_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__R));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__R);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T1_co_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T1_co_true_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_covariant_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__T1_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T1_co);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T2_co_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T2_co_true_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain__T2_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T2_co);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_5003a2cb1f4de01494853eeb71e31ee4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5003a2cb1f4de01494853eeb71e31ee4);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_deb9da4cf9ba08dfeb06e2aa51511465));
CHECK_OBJECT_DEEP(mod_consts.const_dict_deb9da4cf9ba08dfeb06e2aa51511465);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__compose_tarfile_filters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compose_tarfile_filters);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_cf3aa826ef4434338000ed0fa4b44f40));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cf3aa826ef4434338000ed0fa4b44f40);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_first_component));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_first_component);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_filter);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_77af5ac3c9f831eb6c09d7cde4b51285));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77af5ac3c9f831eb6c09d7cde4b51285);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain__compose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compose);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_tarball_cwd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tarball_cwd);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_9316a2a3ee16e7fef7f14c26cf58aa0d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9316a2a3ee16e7fef7f14c26cf58aa0d);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_2c07a6d971c76f0ab028fb3373421ee3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2c07a6d971c76f0ab028fb3373421ee3);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_robust_remover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_robust_remover);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_20d218f85282cb9e405712b33e77acab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20d218f85282cb9e405712b33e77acab);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remover_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_remover_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_robust_temp_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_robust_temp_dir);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_55384783217a5b7eee373d3e95a2c6bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_55384783217a5b7eee373d3e95a2c6bb);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_e99a3e4f06655d59e488ed8d4b59a3e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e99a3e4f06655d59e488ed8d4b59a3e5);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_263));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_263);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptExcInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptExcInfo);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_type_Exception_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_type_Exception_tuple_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_4010b2785c002d4d976747a1ac91e1cc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4010b2785c002d4d976747a1ac91e1cc);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_35a54bd9189417586f8ba9f188072b7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35a54bd9189417586f8ba9f188072b7c);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bff8190d9f7da0cdb42c2f77d415109));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bff8190d9f7da0cdb42c2f77d415109);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_6a827e102704e1b06e6910c35dc0a80e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a827e102704e1b06e6910c35dc0a80e);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_6176f19a0710731585292692f747cdbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6176f19a0710731585292692f747cdbe);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_310de40e1a65ecc7d0b0c7281e3023d1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_310de40e1a65ecc7d0b0c7281e3023d1);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_tb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tb);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c592624747f168381bed14a62250143));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c592624747f168381bed14a62250143);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_6836646641c29ad4a48bd0a599a72fd1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6836646641c29ad4a48bd0a599a72fd1);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_98854c7d5088e9742683ac9409d50c00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98854c7d5088e9742683ac9409d50c00);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain___bool__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bool__);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_a69599b32ea96f06b8a900413f0f89e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a69599b32ea96f06b8a900413f0f89e6);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_5b43a9f5728244a370dc293216b028f7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5b43a9f5728244a370dc293216b028f7);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_4209e1ec099879cdf7a155028d28dd18));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4209e1ec099879cdf7a155028d28dd18);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_fe2e146e451cf94328fc976063fbc65a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fe2e146e451cf94328fc976063fbc65a);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_passes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_passes);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_str_plain_exc_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_str_plain_exc_info_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContextDecorator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContextDecorator);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ac9924b02cd9e2b7413484b94415dfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ac9924b02cd9e2b7413484b94415dfe);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_371));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_371);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_interrupt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_interrupt);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_67ed9a6490adca428693b23a1213ed50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67ed9a6490adca428693b23a1213ed50);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_int_pos_382));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_382);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_int_pos_1_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_c9b7b16f07482dc090d0d76d48dcb413));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c9b7b16f07482dc090d0d76d48dcb413);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_3103bbf9391792dcf11af8816fb01f93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3103bbf9391792dcf11af8816fb01f93);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_edf8c61efbfe721a006f3a1e21112584));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edf8c61efbfe721a006f3a1e21112584);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_d72ca34d510b3e01d04c37e69f6c78e4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d72ca34d510b3e01d04c37e69f6c78e4);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_0233fa9304eb0d6bebea534823e8c536));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0233fa9304eb0d6bebea534823e8c536);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_action_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_action_str_plain_code_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_099d0dd01d009e885c415053019acd52));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_099d0dd01d009e885c415053019acd52);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_member_str_plain_path_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_str_plain_f1_str_plain_f2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_member_str_plain_path_str_plain_f1_str_plain_f2_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f1_str_plain_f2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_f1_str_plain_f2_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c0c6c30f773ac76c2f612e016ca796a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c0c6c30f773ac76c2f612e016ca796a);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_fd530112e29f490c0f525c2dd1ea3619_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fd530112e29f490c0f525c2dd1ea3619_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_7b3d388a553c47f52835463197dbad6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7b3d388a553c47f52835463197dbad6d_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_exceptions_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_action_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_action_str_plain_code_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cmgrs_str_plain_compose_two_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cmgrs_str_plain_compose_two_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filters_str_plain_compose_two_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filters_str_plain_compose_two_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inner_str_plain_outer_str_plain_composed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_inner_str_plain_outer_str_plain_composed_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_ed15dd805a9a6a5c6c59b3e7598accb8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ed15dd805a9a6a5c6c59b3e7598accb8_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inner_str_plain_outer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_inner_str_plain_outer_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dir_str_plain_orig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dir_str_plain_orig_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_3dc822ea6f153957a810444ff4ee95a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3dc822ea6f153957a810444ff4ee95a7_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_4fd5be99ed5a73680c489c8210bc9ebb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4fd5be99ed5a73680c489c8210bc9ebb_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_f966663d45f1638c4628a97325ee4cc0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f966663d45f1638c4628a97325ee4cc0_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_member_str_plain_path_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_member_str_plain_path_str_underscore_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_6754ab683fdcbaf813fdbc59fcd15d55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6754ab683fdcbaf813fdbc59fcd15d55_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remover_str_plain_temp_dir_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_remover_str_plain_temp_dir_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_47a75299380fec838c874d5ee40229c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_47a75299380fec838c874d5ee40229c7_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__test_str_plain_func_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__test_str_plain_func_str_plain_self_tuple);
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
static PyObject *module_var_accessor_jaraco$context$ExceptionTrap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExceptionTrap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExceptionTrap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExceptionTrap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExceptionTrap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$TracebackType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TracebackType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TracebackType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TracebackType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TracebackType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$_compose(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compose);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compose, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compose);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compose, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__compose);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$_compose_tarfile_filters(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose_tarfile_filters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compose_tarfile_filters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compose_tarfile_filters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__compose_tarfile_filters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__compose_tarfile_filters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose_tarfile_filters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose_tarfile_filters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__compose_tarfile_filters);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$_default_filter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__default_filter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_filter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_filter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_filter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_filter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__default_filter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__default_filter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_filter);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$errno(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$operator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$platform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$pushd(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_pushd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pushd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pushd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pushd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pushd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_pushd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_pushd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pushd);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$remove_readonly(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_readonly);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_readonly);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_readonly, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_readonly);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_readonly, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_readonly);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_readonly);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_readonly);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$robust_remover(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_remover);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_robust_remover);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_robust_remover, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_robust_remover);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_robust_remover, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_remover);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_remover);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_remover);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$robust_temp_dir(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_temp_dir);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_robust_temp_dir);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_robust_temp_dir, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_robust_temp_dir);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_robust_temp_dir, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_temp_dir);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_temp_dir);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_temp_dir);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$shutil(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$stat(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain_stat);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_stat);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_stat, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_stat);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_stat, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain_stat);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain_stat);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_stat);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$strip_first_component(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_first_component);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_first_component);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_first_component, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_first_component);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_first_component, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_first_component);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_first_component);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_first_component);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$tarball(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tarball);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tarball, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tarball);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tarball, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$tarfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tarfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tarfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tarfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tarfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tarfile);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$temp_dir(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_temp_dir);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_temp_dir);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_temp_dir, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_temp_dir);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_temp_dir, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_temp_dir);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_temp_dir);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_temp_dir);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$tempfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }

    return result;
}

static PyObject *module_var_accessor_jaraco$context$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jaraco$context->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jaraco$context->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jaraco$context->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b03f06cad54340ea9ba18913cda59eda;
static PyCodeObject *code_objects_95ea1bec811767d6b1f5d26bf483ed72;
static PyCodeObject *code_objects_e8c082f62828968dfe6df4ffa780ba8a;
static PyCodeObject *code_objects_d5d21fe9d908c063387a8a50111bf1df;
static PyCodeObject *code_objects_b28d83eaa4c0860070e9c408cfe059e9;
static PyCodeObject *code_objects_871f014cb5ddf45b5cadaaac8d44425d;
static PyCodeObject *code_objects_0b05286dbb850bfec360daf9dba7c7c8;
static PyCodeObject *code_objects_7d09aba51ce5d608d8dbea1d73e76939;
static PyCodeObject *code_objects_632ec77c37f069ffbe714a56b80e6bf7;
static PyCodeObject *code_objects_e6aa87cda7d5ebb8065f60c744825950;
static PyCodeObject *code_objects_ecce339742aeb0d788c5a7a9c315ebd2;
static PyCodeObject *code_objects_55821bcbafe7da091ef99468c01aef39;
static PyCodeObject *code_objects_ea0ce6a4b53a95554eaa93b31f4d433a;
static PyCodeObject *code_objects_8300e5dbada51a423be9c3540a48a331;
static PyCodeObject *code_objects_c059fe1125362b2344e500bf3d7c20f0;
static PyCodeObject *code_objects_710889e2ee6968906f7b090a886a277d;
static PyCodeObject *code_objects_ce340d386323cfc66983f0909e9c2337;
static PyCodeObject *code_objects_8942f832affef9abfa537989540513c6;
static PyCodeObject *code_objects_95f6cc566a752d07ced74a93162a0f15;
static PyCodeObject *code_objects_bf61c7538e75edd4e65c6e721ab685c4;
static PyCodeObject *code_objects_65ec0a9ab42da059608f5b8ab9d4b8b4;
static PyCodeObject *code_objects_e7a60fc0229e3b163e3b6e47da6024f7;
static PyCodeObject *code_objects_65e84089f0fac3a6aa4579c325ddcf6a;
static PyCodeObject *code_objects_7b2e26fc55d5f82df802c127ada49179;
static PyCodeObject *code_objects_324115d85bb1b63539745483c8f2d433;
static PyCodeObject *code_objects_aeb035dbf9884575784c32287e70d4b5;
static PyCodeObject *code_objects_1f0c85584e9cd88d20b4ae314a2ad454;
static PyCodeObject *code_objects_436bb4f1c912e364ea6754fe16cd1bf9;
static PyCodeObject *code_objects_ee3ab0ad4bd5a22039e7ff9c43f72622;
static PyCodeObject *code_objects_4bc52e70f390d06f63991af6abe6c20a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_099d0dd01d009e885c415053019acd52); CHECK_OBJECT(module_filename_obj);
code_objects_b03f06cad54340ea9ba18913cda59eda = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_115215a4067f4057e467c3205efb1003, mod_consts.const_tuple_str_plain_member_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_95ea1bec811767d6b1f5d26bf483ed72 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_a1089d6281afb433efdefa34da7acf17, mod_consts.const_tuple_str_plain_member_str_plain_path_str_plain_f1_str_plain_f2_tuple, mod_consts.const_tuple_str_plain_f1_str_plain_f2_tuple, 2, 0, 0);
code_objects_e8c082f62828968dfe6df4ffa780ba8a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2c0c6c30f773ac76c2f612e016ca796a, mod_consts.const_str_digest_2c0c6c30f773ac76c2f612e016ca796a, NULL, NULL, 0, 0, 0);
code_objects_d5d21fe9d908c063387a8a50111bf1df = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ExceptionTrap, mod_consts.const_str_plain_ExceptionTrap, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b28d83eaa4c0860070e9c408cfe059e9 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___bool__, mod_consts.const_str_digest_a69599b32ea96f06b8a900413f0f89e6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_871f014cb5ddf45b5cadaaac8d44425d = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_6bff8190d9f7da0cdb42c2f77d415109, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0b05286dbb850bfec360daf9dba7c7c8 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_edf8c61efbfe721a006f3a1e21112584, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7d09aba51ce5d608d8dbea1d73e76939 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_98854c7d5088e9742683ac9409d50c00, mod_consts.const_tuple_fd530112e29f490c0f525c2dd1ea3619_tuple, NULL, 1, 0, 0);
code_objects_632ec77c37f069ffbe714a56b80e6bf7 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_0233fa9304eb0d6bebea534823e8c536, mod_consts.const_tuple_7b3d388a553c47f52835463197dbad6d_tuple, NULL, 4, 0, 0);
code_objects_e6aa87cda7d5ebb8065f60c744825950 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_35a54bd9189417586f8ba9f188072b7c, mod_consts.const_tuple_str_plain_self_str_plain_exceptions_tuple, NULL, 2, 0, 0);
code_objects_ecce339742aeb0d788c5a7a9c315ebd2 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_3103bbf9391792dcf11af8816fb01f93, mod_consts.const_tuple_str_plain_self_str_plain_action_str_plain_code_tuple, NULL, 3, 0, 2);
code_objects_55821bcbafe7da091ef99468c01aef39 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__compose, mod_consts.const_str_plain__compose, mod_consts.const_tuple_str_plain_cmgrs_str_plain_compose_two_tuple, NULL, 0, 0, 0);
code_objects_ea0ce6a4b53a95554eaa93b31f4d433a = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__compose_tarfile_filters, mod_consts.const_str_plain__compose_tarfile_filters, mod_consts.const_tuple_str_plain_filters_str_plain_compose_two_tuple, NULL, 0, 0, 0);
code_objects_8300e5dbada51a423be9c3540a48a331 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compose_two, mod_consts.const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2, mod_consts.const_tuple_str_plain_inner_str_plain_outer_str_plain_composed_tuple, NULL, 2, 0, 0);
code_objects_c059fe1125362b2344e500bf3d7c20f0 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compose_two, mod_consts.const_str_digest_30665e588ec9ac76c38ee28fe9f81956, mod_consts.const_tuple_str_plain_f1_str_plain_f2_tuple, NULL, 2, 0, 0);
code_objects_710889e2ee6968906f7b090a886a277d = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_composed, mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406, mod_consts.const_tuple_ed15dd805a9a6a5c6c59b3e7598accb8_tuple, mod_consts.const_tuple_str_plain_inner_str_plain_outer_tuple, 0, 0, 0);
code_objects_ce340d386323cfc66983f0909e9c2337 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_interrupt, mod_consts.const_str_plain_on_interrupt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8942f832affef9abfa537989540513c6 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_passes, mod_consts.const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_95f6cc566a752d07ced74a93162a0f15 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pushd, mod_consts.const_str_plain_pushd, mod_consts.const_tuple_str_plain_dir_str_plain_orig_tuple, NULL, 1, 0, 0);
code_objects_bf61c7538e75edd4e65c6e721ab685c4 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raises, mod_consts.const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f, mod_consts.const_tuple_3dc822ea6f153957a810444ff4ee95a7_tuple, NULL, 2, 1, 0);
code_objects_65ec0a9ab42da059608f5b8ab9d4b8b4 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_remove_readonly, mod_consts.const_str_plain_remove_readonly, mod_consts.const_tuple_4fd5be99ed5a73680c489c8210bc9ebb_tuple, NULL, 3, 0, 0);
code_objects_e7a60fc0229e3b163e3b6e47da6024f7 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_repo_context, mod_consts.const_str_plain_repo_context, mod_consts.const_tuple_f966663d45f1638c4628a97325ee4cc0_tuple, NULL, 4, 0, 0);
code_objects_65e84089f0fac3a6aa4579c325ddcf6a = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_robust_remover, mod_consts.const_str_plain_robust_remover, NULL, NULL, 0, 0, 0);
code_objects_7b2e26fc55d5f82df802c127ada49179 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_strip_first_component, mod_consts.const_str_plain_strip_first_component, mod_consts.const_tuple_str_plain_member_str_plain_path_str_underscore_tuple, NULL, 2, 0, 0);
code_objects_324115d85bb1b63539745483c8f2d433 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tarball, mod_consts.const_str_plain_tarball, mod_consts.const_tuple_6754ab683fdcbaf813fdbc59fcd15d55_tuple, NULL, 2, 0, 0);
code_objects_aeb035dbf9884575784c32287e70d4b5 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tb, mod_consts.const_str_digest_3c592624747f168381bed14a62250143, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1f0c85584e9cd88d20b4ae314a2ad454 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_temp_dir, mod_consts.const_str_plain_temp_dir, mod_consts.const_tuple_str_plain_remover_str_plain_temp_dir_tuple, NULL, 1, 0, 0);
code_objects_436bb4f1c912e364ea6754fe16cd1bf9 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_type, mod_consts.const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ee3ab0ad4bd5a22039e7ff9c43f72622 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_value, mod_consts.const_str_digest_6176f19a0710731585292692f747cdbe, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4bc52e70f390d06f63991af6abe6c20a = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapper, mod_consts.const_str_digest_c5be0f7e9d337427fc2f4082d09b119e, mod_consts.const_tuple_47a75299380fec838c874d5ee40229c7_tuple, mod_consts.const_tuple_str_plain__test_str_plain_func_str_plain_self_tuple, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_jaraco$context$$$function__1_pushd$$$genobj__1_pushd(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_jaraco$context$$$function__2_tarball$$$genobj__1_tarball(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__10___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__11___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__12_type(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__13_value(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__14_tb(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__15___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__16___bool__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__17_raises(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__17_raises$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__18_passes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__19___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__1_pushd(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__20___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__21___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__2_tarball(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__4_strip_first_component(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__6_remove_readonly(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__7_robust_remover(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__8_temp_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_jaraco$context$$$function__9_repo_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_jaraco$context$$$function__1_pushd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_dir = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_dir;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_jaraco$context$$$function__1_pushd$$$genobj__1_pushd(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct jaraco$context$$$function__1_pushd$$$genobj__1_pushd_locals {
PyObject *var_orig;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *jaraco$context$$$function__1_pushd$$$genobj__1_pushd_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct jaraco$context$$$function__1_pushd$$$genobj__1_pushd_locals *generator_heap = (struct jaraco$context$$$function__1_pushd$$$genobj__1_pushd_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_orig = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_95f6cc566a752d07ced74a93162a0f15, module_jaraco$context, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
generator->m_frame->m_frame.f_lineno = 61;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getcwd);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_orig == NULL);
generator_heap->var_orig = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_chdir);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 62;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(generator_heap->var_orig);
tmp_args_element_value_2 = generator_heap->var_orig;
generator->m_frame->m_frame.f_lineno = 66;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_chdir, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(generator_heap->var_orig);
tmp_args_element_value_3 = generator_heap->var_orig;
generator->m_frame->m_frame.f_lineno = 66;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_chdir, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}

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
    generator->m_closure[0],
    generator_heap->var_orig
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_orig);
generator_heap->var_orig = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_orig);
CHECK_OBJECT(generator_heap->var_orig);
Py_DECREF(generator_heap->var_orig);
generator_heap->var_orig = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jaraco$context$$$function__1_pushd$$$genobj__1_pushd(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jaraco$context$$$function__1_pushd$$$genobj__1_pushd_context,
        module_jaraco$context,
        mod_consts.const_str_plain_pushd,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_95f6cc566a752d07ced74a93162a0f15,
        closure,
        1,
#if 1
        sizeof(struct jaraco$context$$$function__1_pushd$$$genobj__1_pushd_locals)
#else
        0
#endif
    );
}


static PyObject *impl_jaraco$context$$$function__2_tarball(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_target_dir = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_target_dir;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_url;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_jaraco$context$$$function__2_tarball$$$genobj__1_tarball(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_target_dir);
CHECK_OBJECT(par_target_dir);
Py_DECREF(par_target_dir);
par_target_dir = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct jaraco$context$$$function__2_tarball$$$genobj__1_tarball_locals {
PyObject *var_req;
PyObject *var_tf;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *jaraco$context$$$function__2_tarball$$$genobj__1_tarball_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct jaraco$context$$$function__2_tarball$$$genobj__1_tarball_locals *generator_heap = (struct jaraco$context$$$function__2_tarball$$$genobj__1_tarball_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_req = NULL;
generator_heap->var_tf = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_324115d85bb1b63539745483c8f2d433, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_path_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_path_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_2 = OS_PATH_BASENAME(tstate, tmp_path_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 102;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_57967cd8914ecc86cbd110019732bfd8_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 102;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_159a7e3b180adf8c19c4989bf78375af_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 102;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[0]);
    Nuitka_Cell_SET(generator->m_closure[0], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mkdir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 103;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 103;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 103;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 103;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = module_var_accessor_jaraco$context$urllib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_request);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 105;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
assert(generator_heap->var_req == NULL);
generator_heap->var_req = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_6 = module_var_accessor_jaraco$context$tarfile(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tarfile);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_open);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_req);
tmp_kw_call_value_0_1 = generator_heap->var_req;
tmp_kw_call_value_1_1 = mod_consts.const_str_digest_718d2d88d247f1d46a7db731d51ed998;
generator->m_frame->m_frame.f_lineno = 106;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_fileobj_str_plain_mode_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_7 = generator_heap->tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 106;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_8 = generator_heap->tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_7 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_tf == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_tf = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
CHECK_OBJECT(generator_heap->var_tf);
tmp_expression_value_9 = generator_heap->var_tf;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_extractall);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_kw_call_value_1_2 = module_var_accessor_jaraco$context$_default_filter(tstate);
if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__default_filter);
}

if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_7);

generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 107;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_path_str_plain_filter_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
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
generator_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_8 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_6;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoo";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoo";
goto try_except_handler_6;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_9 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 106;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_10 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 106;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_10);
generator->m_yield_return_index = 1;
return tmp_expression_value_10;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 108;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_5);
// Tried code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_11 = module_var_accessor_jaraco$context$shutil(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_rmtree);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 110;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 104;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoo";
goto try_except_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_12 = module_var_accessor_jaraco$context$shutil(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_rmtree);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_target_dir);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 110;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_req,
    generator_heap->var_tf
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
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_req);
generator_heap->var_req = NULL;
Py_XDECREF(generator_heap->var_tf);
generator_heap->var_tf = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:
try_end_6:;
CHECK_OBJECT(generator_heap->var_req);
CHECK_OBJECT(generator_heap->var_req);
Py_DECREF(generator_heap->var_req);
generator_heap->var_req = NULL;
CHECK_OBJECT(generator_heap->var_tf);
CHECK_OBJECT(generator_heap->var_tf);
Py_DECREF(generator_heap->var_tf);
generator_heap->var_tf = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jaraco$context$$$function__2_tarball$$$genobj__1_tarball(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jaraco$context$$$function__2_tarball$$$genobj__1_tarball_context,
        module_jaraco$context,
        mod_consts.const_str_plain_tarball,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_324115d85bb1b63539745483c8f2d433,
        closure,
        2,
#if 1
        sizeof(struct jaraco$context$$$function__2_tarball$$$genobj__1_tarball_locals)
#else
        0
#endif
    );
}


static PyObject *impl_jaraco$context$$$function__3__compose_tarfile_filters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filters = python_pars[0];
PyObject *var_compose_two = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__3__compose_tarfile_filters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;

tmp_assign_source_1 = MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two(tstate);

assert(var_compose_two == NULL);
var_compose_two = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters = MAKE_FUNCTION_FRAME(tstate, code_objects_ea0ce6a4b53a95554eaa93b31f4d433a, module_jaraco$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters->m_type_description == NULL);
frame_frame_jaraco$context$$$function__3__compose_tarfile_filters = cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__3__compose_tarfile_filters);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_compose_two);
tmp_args_element_value_1 = var_compose_two;
CHECK_OBJECT(par_filters);
tmp_args_element_value_2 = par_filters;

tmp_args_element_value_3 = MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda(tstate);

frame_frame_jaraco$context$$$function__3__compose_tarfile_filters->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_reduce,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__3__compose_tarfile_filters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__3__compose_tarfile_filters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__3__compose_tarfile_filters,
    type_description_1,
    par_filters,
    var_compose_two
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__3__compose_tarfile_filters == cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters);
    cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_compose_two);
CHECK_OBJECT(var_compose_two);
Py_DECREF(var_compose_two);
var_compose_two = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_compose_two);
CHECK_OBJECT(var_compose_two);
Py_DECREF(var_compose_two);
var_compose_two = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filters);
Py_DECREF(par_filters);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filters);
Py_DECREF(par_filters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_f1 = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_f2 = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_f1;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_f2;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_f1);
CHECK_OBJECT(par_f1);
Py_DECREF(par_f1);
par_f1 = NULL;
CHECK_OBJECT(par_f2);
CHECK_OBJECT(par_f2);
Py_DECREF(par_f2);
par_f2 = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_member = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_95ea1bec811767d6b1f5d26bf483ed72, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda->m_type_description == NULL);
frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda = cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_f1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_f2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_member);
tmp_args_element_value_2 = par_member;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_4 = par_path;
frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda,
    type_description_1,
    par_member,
    par_path,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda == cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda);
    cache_frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_member);
Py_DECREF(par_member);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_member);
Py_DECREF(par_member);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_member = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_member);
tmp_return_value = par_member;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_member);
Py_DECREF(par_member);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__4_strip_first_component(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_member = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__4_strip_first_component;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__4_strip_first_component = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__4_strip_first_component)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__4_strip_first_component);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__4_strip_first_component == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__4_strip_first_component = MAKE_FUNCTION_FRAME(tstate, code_objects_7b2e26fc55d5f82df802c127ada49179, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__4_strip_first_component->m_type_description == NULL);
frame_frame_jaraco$context$$$function__4_strip_first_component = cache_frame_frame_jaraco$context$$$function__4_strip_first_component;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__4_strip_first_component);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__4_strip_first_component) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_member);
tmp_expression_value_2 = par_member;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_jaraco$context$$$function__4_strip_first_component->m_frame.f_lineno = 124;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
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



exception_lineno = 124;
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



exception_lineno = 124;
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



exception_lineno = 124;
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_4);
var__ = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_member);
tmp_assattr_target_1 = par_member;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__4_strip_first_component, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__4_strip_first_component->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__4_strip_first_component, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__4_strip_first_component,
    type_description_1,
    par_member,
    par_path,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__4_strip_first_component == cache_frame_frame_jaraco$context$$$function__4_strip_first_component) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__4_strip_first_component);
    cache_frame_frame_jaraco$context$$$function__4_strip_first_component = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__4_strip_first_component);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(par_member);
tmp_return_value = par_member;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_member);
Py_DECREF(par_member);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_member);
Py_DECREF(par_member);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__5__compose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cmgrs = python_pars[0];
PyObject *var_compose_two = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__5__compose;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__5__compose = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c00478af86b234665719e19f7fc632fc);

tmp_assign_source_1 = MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two(tstate, tmp_annotations_1);

assert(var_compose_two == NULL);
var_compose_two = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__5__compose)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__5__compose);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__5__compose == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__5__compose = MAKE_FUNCTION_FRAME(tstate, code_objects_55821bcbafe7da091ef99468c01aef39, module_jaraco$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__5__compose->m_type_description == NULL);
frame_frame_jaraco$context$$$function__5__compose = cache_frame_frame_jaraco$context$$$function__5__compose;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__5__compose);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__5__compose) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_reduce);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_compose_two);
tmp_args_element_value_1 = var_compose_two;
tmp_called_value_2 = (PyObject *)&PyReversed_Type;
CHECK_OBJECT(par_cmgrs);
tmp_args_element_value_3 = par_cmgrs;
frame_frame_jaraco$context$$$function__5__compose->m_frame.f_lineno = 173;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 173;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__5__compose->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__5__compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__5__compose->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__5__compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__5__compose,
    type_description_1,
    par_cmgrs,
    var_compose_two
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__5__compose == cache_frame_frame_jaraco$context$$$function__5__compose) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__5__compose);
    cache_frame_frame_jaraco$context$$$function__5__compose = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__5__compose);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_compose_two);
CHECK_OBJECT(var_compose_two);
Py_DECREF(var_compose_two);
var_compose_two = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_compose_two);
CHECK_OBJECT(var_compose_two);
Py_DECREF(var_compose_two);
var_compose_two = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cmgrs);
Py_DECREF(par_cmgrs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cmgrs);
Py_DECREF(par_cmgrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__5__compose$$$function__1_compose_two(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_inner = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_outer = Nuitka_Cell_New1(python_pars[1]);
PyObject *var_composed = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f3f3d46bfbc1f813581cf212c414d5b3);
tmp_closure_1[0] = par_inner;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_outer;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_composed == NULL);
var_composed = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two = MAKE_FUNCTION_FRAME(tstate, code_objects_8300e5dbada51a423be9c3540a48a331, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two->m_type_description == NULL);
frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two = cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_composed);
tmp_args_element_value_1 = var_composed;
frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two->m_frame.f_lineno = 167;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "cco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two,
    type_description_1,
    par_inner,
    par_outer,
    var_composed
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two == cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two);
    cache_frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__5__compose$$$function__1_compose_two);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_inner);
CHECK_OBJECT(par_inner);
Py_DECREF(par_inner);
par_inner = NULL;
CHECK_OBJECT(par_outer);
CHECK_OBJECT(par_outer);
Py_DECREF(par_outer);
par_outer = NULL;
CHECK_OBJECT(var_composed);
CHECK_OBJECT(var_composed);
Py_DECREF(var_composed);
var_composed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_inner);
CHECK_OBJECT(par_inner);
Py_DECREF(par_inner);
par_inner = NULL;
CHECK_OBJECT(par_outer);
CHECK_OBJECT(par_outer);
Py_DECREF(par_outer);
par_outer = NULL;
CHECK_OBJECT(var_composed);
CHECK_OBJECT(var_composed);
Py_DECREF(var_composed);
var_composed = NULL;
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


static PyObject *impl_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = self->m_closure[1];
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_GENERATOR_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_locals {
PyObject *var_saved;
PyObject *var_res;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_locals *generator_heap = (struct jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_saved = NULL;
generator_heap->var_res = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
generator_heap->tmp_with_2__enter = NULL;
generator_heap->tmp_with_2__exit = NULL;
generator_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_2__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_710889e2ee6968906f7b090a886a277d, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_inner);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}

tmp_direct_call_arg2_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(generator->m_closure[2]);
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__source == NULL);
generator_heap->tmp_with_2__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_1 = generator_heap->tmp_with_2__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 164;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__enter == NULL);
generator_heap->tmp_with_2__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_2 = generator_heap->tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__exit == NULL);
generator_heap->tmp_with_2__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
tmp_assign_source_5 = generator_heap->tmp_with_2__enter;
assert(generator_heap->var_saved == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_saved = tmp_assign_source_5;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_outer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}

tmp_called_value_2 = Nuitka_Cell_GET(generator->m_closure[3]);
CHECK_OBJECT(generator_heap->var_saved);
tmp_args_element_value_1 = generator_heap->var_saved;
generator->m_frame->m_frame.f_lineno = 164;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_3 = generator_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 164;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_4 = generator_heap->tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_res == NULL);
Py_INCREF(tmp_assign_source_10);
generator_heap->var_res = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_res);
tmp_expression_value_5 = generator_heap->var_res;
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 1;
return tmp_expression_value_5;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 165;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_7;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_8;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_8;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 164;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoocc";
goto try_except_handler_8;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 164;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoocc";
goto try_except_handler_8;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 164;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 164;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_12;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_7 = generator_heap->tmp_with_2__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_9;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_9;
}
tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 164;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoocc";
goto try_except_handler_9;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 164;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoocc";
goto try_except_handler_9;
branch_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_8 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 164;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_7);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_9 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 164;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "ccoocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_2__source);
generator_heap->tmp_with_2__source = NULL;
Py_XDECREF(generator_heap->tmp_with_2__enter);
generator_heap->tmp_with_2__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_2__exit);
generator_heap->tmp_with_2__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;

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
    generator->m_closure[0],
    generator->m_closure[2],
    generator_heap->var_saved,
    generator_heap->var_res,
    generator->m_closure[1],
    generator->m_closure[3]
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
goto try_end_9;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_saved);
generator_heap->var_saved = NULL;
Py_XDECREF(generator_heap->var_res);
generator_heap->var_res = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:
try_end_9:;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
CHECK_OBJECT(generator_heap->tmp_with_2__source);
Py_DECREF(generator_heap->tmp_with_2__source);
generator_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
Py_DECREF(generator_heap->tmp_with_2__enter);
generator_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
Py_DECREF(generator_heap->tmp_with_2__exit);
generator_heap->tmp_with_2__exit = NULL;
CHECK_OBJECT(generator_heap->var_saved);
CHECK_OBJECT(generator_heap->var_saved);
Py_DECREF(generator_heap->var_saved);
generator_heap->var_saved = NULL;
Py_XDECREF(generator_heap->var_res);
generator_heap->var_res = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_context,
        module_jaraco$context,
        mod_consts.const_str_plain_composed,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406,
#endif
        code_objects_710889e2ee6968906f7b090a886a277d,
        closure,
        4,
#if 1
        sizeof(struct jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed$$$genobj__1_composed_locals)
#else
        0
#endif
    );
}


static PyObject *impl_jaraco$context$$$function__6_remove_readonly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_exc_info = python_pars[2];
PyObject *var__ = NULL;
PyObject *var_exc = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__6_remove_readonly;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__6_remove_readonly = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__6_remove_readonly)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__6_remove_readonly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__6_remove_readonly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__6_remove_readonly = MAKE_FUNCTION_FRAME(tstate, code_objects_65ec0a9ab42da059608f5b8ab9d4b8b4, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__6_remove_readonly->m_type_description == NULL);
frame_frame_jaraco$context$$$function__6_remove_readonly = cache_frame_frame_jaraco$context$$$function__6_remove_readonly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__6_remove_readonly);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__6_remove_readonly) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_exc_info);
tmp_iter_arg_1 = par_exc_info;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_6);
var_exc = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_7;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_func);
tmp_cmp_expr_left_1 = par_func;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rmdir);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_remove);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_unlink);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_exc);
tmp_expression_value_4 = var_exc;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_jaraco$context$errno(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_EACCES);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_chmod);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
tmp_expression_value_7 = module_var_accessor_jaraco$context$stat(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_stat);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_S_IRWXU);
if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_jaraco$context$stat(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_stat);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_S_IRWXG);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_jaraco$context$stat(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_stat);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_S_IRWXO);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__6_remove_readonly->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_func);
tmp_called_value_2 = par_func;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_jaraco$context$$$function__6_remove_readonly->m_frame.f_lineno = 195;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 197;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_jaraco$context$$$function__6_remove_readonly->m_frame)) {
        frame_frame_jaraco$context$$$function__6_remove_readonly->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto frame_exception_exit_1;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__6_remove_readonly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__6_remove_readonly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__6_remove_readonly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__6_remove_readonly,
    type_description_1,
    par_func,
    par_path,
    par_exc_info,
    var__,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__6_remove_readonly == cache_frame_frame_jaraco$context$$$function__6_remove_readonly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__6_remove_readonly);
    cache_frame_frame_jaraco$context$$$function__6_remove_readonly = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__6_remove_readonly);

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
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_exc);
CHECK_OBJECT(var_exc);
Py_DECREF(var_exc);
var_exc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_exc);
var_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_exc_info);
Py_DECREF(par_exc_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_exc_info);
Py_DECREF(par_exc_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__7_robust_remover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__7_robust_remover;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__7_robust_remover = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__7_robust_remover)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__7_robust_remover);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__7_robust_remover == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__7_robust_remover = MAKE_FUNCTION_FRAME(tstate, code_objects_65e84089f0fac3a6aa4579c325ddcf6a, module_jaraco$context, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__7_robust_remover->m_type_description == NULL);
frame_frame_jaraco$context$$$function__7_robust_remover = cache_frame_frame_jaraco$context$$$function__7_robust_remover;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__7_robust_remover);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__7_robust_remover) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
tmp_called_instance_1 = module_var_accessor_jaraco$context$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__7_robust_remover->m_frame.f_lineno = 207;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_system);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_Windows;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_1 == NULL));
tmp_called_value_2 = module_var_accessor_jaraco$context$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_f502ef01fd50a4a03e4dc10e91dcef95;
tmp_expression_value_1 = module_var_accessor_jaraco$context$shutil(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rmtree);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 204;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__7_robust_remover->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = module_var_accessor_jaraco$context$remove_readonly(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remove_readonly);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 205;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__7_robust_remover->m_frame.f_lineno = 202;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_onerror_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_2 = module_var_accessor_jaraco$context$shutil(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rmtree);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto frame_exception_exit_1;
}
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__7_robust_remover, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__7_robust_remover->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__7_robust_remover, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__7_robust_remover,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__7_robust_remover == cache_frame_frame_jaraco$context$$$function__7_robust_remover) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__7_robust_remover);
    cache_frame_frame_jaraco$context$$$function__7_robust_remover = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__7_robust_remover);

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


static PyObject *impl_jaraco$context$$$function__8_temp_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_remover = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_remover;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_remover);
CHECK_OBJECT(par_remover);
Py_DECREF(par_remover);
par_remover = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_locals {
PyObject *var_temp_dir;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_locals *generator_heap = (struct jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_temp_dir = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1f0c85584e9cd88d20b4ae314a2ad454, module_jaraco$context, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_jaraco$context$tempfile(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 223;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_mkdtemp);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_temp_dir == NULL);
generator_heap->var_temp_dir = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_temp_dir);
tmp_expression_value_1 = generator_heap->var_temp_dir;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_remover);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_temp_dir);
tmp_args_element_value_1 = generator_heap->var_temp_dir;
generator->m_frame->m_frame.f_lineno = 227;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 224;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_remover);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_temp_dir);
tmp_args_element_value_2 = generator_heap->var_temp_dir;
generator->m_frame->m_frame.f_lineno = 227;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    generator->m_closure[0],
    generator_heap->var_temp_dir
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_temp_dir);
generator_heap->var_temp_dir = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_temp_dir);
CHECK_OBJECT(generator_heap->var_temp_dir);
Py_DECREF(generator_heap->var_temp_dir);
generator_heap->var_temp_dir = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_context,
        module_jaraco$context,
        mod_consts.const_str_plain_temp_dir,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_1f0c85584e9cd88d20b4ae314a2ad454,
        closure,
        1,
#if 1
        sizeof(struct jaraco$context$$$function__8_temp_dir$$$genobj__1_temp_dir_locals)
#else
        0
#endif
    );
}


static PyObject *impl_jaraco$context$$$function__9_repo_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_branch = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_quiet = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_dest_ctx = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_branch;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_dest_ctx;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_quiet;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_url;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_GENERATOR_jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_branch);
CHECK_OBJECT(par_branch);
Py_DECREF(par_branch);
par_branch = NULL;
CHECK_OBJECT(par_quiet);
CHECK_OBJECT(par_quiet);
Py_DECREF(par_quiet);
par_quiet = NULL;
CHECK_OBJECT(par_dest_ctx);
CHECK_OBJECT(par_dest_ctx);
Py_DECREF(par_dest_ctx);
par_dest_ctx = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_locals {
PyObject *var_exe;
PyObject *var_repo_dir;
PyObject *var_cmd;
PyObject *var_stream;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_locals *generator_heap = (struct jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_exe = NULL;
generator_heap->var_repo_dir = NULL;
generator_heap->var_cmd = NULL;
generator_heap->var_stream = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e7a60fc0229e3b163e3b6e47da6024f7, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_git;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[3]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_git;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_hg;
condexpr_end_1:;
assert(generator_heap->var_exe == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_exe = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_dest_ctx);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 255;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_1 = generator_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 255;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_6 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_repo_dir == NULL);
Py_INCREF(tmp_assign_source_6);
generator_heap->var_repo_dir = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_list_element_1;
CHECK_OBJECT(generator_heap->var_exe);
tmp_list_element_1 = generator_heap->var_exe;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 4);
PyList_SET_ITEM0(tmp_assign_source_7, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_plain_clone;
PyList_SET_ITEM0(tmp_assign_source_7, 1, tmp_list_element_1);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "ccccoooo";
    goto list_build_exception_1;
}

tmp_list_element_1 = Nuitka_Cell_GET(generator->m_closure[3]);
PyList_SET_ITEM0(tmp_assign_source_7, 2, tmp_list_element_1);
CHECK_OBJECT(generator_heap->var_repo_dir);
tmp_list_element_1 = generator_heap->var_repo_dir;
PyList_SET_ITEM0(tmp_assign_source_7, 3, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_7);
goto try_except_handler_4;
// Finished with no exception for list_build:
list_build_no_exception_1:;
assert(generator_heap->var_cmd == NULL);
generator_heap->var_cmd = tmp_assign_source_7;
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_list_element_2;
PyObject *tmp_value_value_2;
CHECK_OBJECT(generator_heap->var_cmd);
tmp_list_arg_value_1 = generator_heap->var_cmd;
tmp_list_element_2 = mod_consts.const_str_digest_c8465d336e8e3499a7c97651616cb767;
tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_branch);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccccoooo";
    goto list_build_exception_2;
}

tmp_list_element_2 = Nuitka_Cell_GET(generator->m_closure[0]);
PyList_SET_ITEM0(tmp_mult_expr_left_1, 1, tmp_list_element_2);
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_mult_expr_left_1);
goto try_except_handler_4;
// Finished with no exception for list_build:
list_build_no_exception_2:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_mult_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_branch);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}

tmp_value_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_mult_expr_left_1);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
tmp_mult_expr_right_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
tmp_value_value_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
assert(!(tmp_value_value_1 == NULL));
generator_heap->tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
}
{
PyObject *tmp_assign_source_8;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_quiet);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_expression_value_3 = module_var_accessor_jaraco$context$subprocess(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DEVNULL);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_8 = Py_None;
Py_INCREF(tmp_assign_source_8);
condexpr_end_2:;
assert(generator_heap->var_stream == NULL);
generator_heap->var_stream = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_4 = module_var_accessor_jaraco$context$subprocess(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_check_call);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_cmd);
tmp_kw_call_arg_value_0_1 = generator_heap->var_cmd;
CHECK_OBJECT(generator_heap->var_stream);
tmp_kw_call_dict_value_0_1 = generator_heap->var_stream;
CHECK_OBJECT(generator_heap->var_stream);
tmp_kw_call_dict_value_1_1 = generator_heap->var_stream;
generator->m_frame->m_frame.f_lineno = 259;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_repo_dir);
tmp_expression_value_5 = generator_heap->var_repo_dir;
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 1;
return tmp_expression_value_5;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_5;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 255;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccoooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 255;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccoooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 255;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 255;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccccoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

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
    generator->m_closure[3],
    generator->m_closure[0],
    generator->m_closure[2],
    generator->m_closure[1],
    generator_heap->var_exe,
    generator_heap->var_repo_dir,
    generator_heap->var_cmd,
    generator_heap->var_stream
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exe);
generator_heap->var_exe = NULL;
Py_XDECREF(generator_heap->var_repo_dir);
generator_heap->var_repo_dir = NULL;
Py_XDECREF(generator_heap->var_cmd);
generator_heap->var_cmd = NULL;
Py_XDECREF(generator_heap->var_stream);
generator_heap->var_stream = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
CHECK_OBJECT(generator_heap->var_exe);
CHECK_OBJECT(generator_heap->var_exe);
Py_DECREF(generator_heap->var_exe);
generator_heap->var_exe = NULL;
CHECK_OBJECT(generator_heap->var_repo_dir);
CHECK_OBJECT(generator_heap->var_repo_dir);
Py_DECREF(generator_heap->var_repo_dir);
generator_heap->var_repo_dir = NULL;
Py_XDECREF(generator_heap->var_cmd);
generator_heap->var_cmd = NULL;
Py_XDECREF(generator_heap->var_stream);
generator_heap->var_stream = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_context,
        module_jaraco$context,
        mod_consts.const_str_plain_repo_context,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_e7a60fc0229e3b163e3b6e47da6024f7,
        closure,
        4,
#if 1
        sizeof(struct jaraco$context$$$function__9_repo_context$$$genobj__1_repo_context_locals)
#else
        0
#endif
    );
}


static PyObject *impl_jaraco$context$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exceptions = python_pars[1];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e6aa87cda7d5ebb8065f60c744825950, module_jaraco$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__10___init__->m_type_description == NULL);
frame_frame_jaraco$context$$$function__10___init__ = cache_frame_frame_jaraco$context$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__10___init__);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__10___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_exceptions);
tmp_assattr_value_1 = par_exceptions;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_exceptions, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__10___init__,
    type_description_1,
    par_self,
    par_exceptions
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__10___init__ == cache_frame_frame_jaraco$context$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__10___init__);
    cache_frame_frame_jaraco$context$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__10___init__);

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
CHECK_OBJECT(par_exceptions);
Py_DECREF(par_exceptions);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exceptions);
Py_DECREF(par_exceptions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__11___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_jaraco$context$$$function__12_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__12_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__12_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__12_type)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__12_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__12_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__12_type = MAKE_FUNCTION_FRAME(tstate, code_objects_436bb4f1c912e364ea6754fe16cd1bf9, module_jaraco$context, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__12_type->m_type_description == NULL);
frame_frame_jaraco$context$$$function__12_type = cache_frame_frame_jaraco$context$$$function__12_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__12_type);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__12_type) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exc_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__12_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__12_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__12_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__12_type,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__12_type == cache_frame_frame_jaraco$context$$$function__12_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__12_type);
    cache_frame_frame_jaraco$context$$$function__12_type = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__12_type);

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


static PyObject *impl_jaraco$context$$$function__13_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__13_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__13_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__13_value)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__13_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__13_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__13_value = MAKE_FUNCTION_FRAME(tstate, code_objects_ee3ab0ad4bd5a22039e7ff9c43f72622, module_jaraco$context, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__13_value->m_type_description == NULL);
frame_frame_jaraco$context$$$function__13_value = cache_frame_frame_jaraco$context$$$function__13_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__13_value);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__13_value) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exc_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__13_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__13_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__13_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__13_value,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__13_value == cache_frame_frame_jaraco$context$$$function__13_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__13_value);
    cache_frame_frame_jaraco$context$$$function__13_value = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__13_value);

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


static PyObject *impl_jaraco$context$$$function__14_tb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__14_tb;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__14_tb = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__14_tb)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__14_tb);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__14_tb == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__14_tb = MAKE_FUNCTION_FRAME(tstate, code_objects_aeb035dbf9884575784c32287e70d4b5, module_jaraco$context, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__14_tb->m_type_description == NULL);
frame_frame_jaraco$context$$$function__14_tb = cache_frame_frame_jaraco$context$$$function__14_tb;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__14_tb);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__14_tb) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exc_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_int_pos_2;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 2);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__14_tb, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__14_tb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__14_tb, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__14_tb,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__14_tb == cache_frame_frame_jaraco$context$$$function__14_tb) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__14_tb);
    cache_frame_frame_jaraco$context$$$function__14_tb = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__14_tb);

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


static PyObject *impl_jaraco$context$$$function__15___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_info = python_pars[1];
PyObject *var_exc_type = NULL;
PyObject *var_matches = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__15___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__15___exit__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__15___exit__)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__15___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__15___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__15___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7d09aba51ce5d608d8dbea1d73e76939, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__15___exit__->m_type_description == NULL);
frame_frame_jaraco$context$$$function__15___exit__ = cache_frame_frame_jaraco$context$$$function__15___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__15___exit__);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__15___exit__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_exc_info);
tmp_expression_value_1 = par_exc_info;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_exc_type == NULL);
var_exc_type = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_exc_type);
tmp_and_left_value_1 = var_exc_type;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_exc_type);
tmp_issubclass_cls_1 = var_exc_type;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exceptions);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_assign_source_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_2 = tmp_and_left_value_1;
and_end_1:;
assert(var_matches == NULL);
Py_INCREF(tmp_assign_source_2);
var_matches = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_matches);
tmp_truth_name_1 = CHECK_IF_TRUE(var_matches);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_exc_info);
tmp_assattr_value_1 = par_exc_info;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_exc_info, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__15___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__15___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__15___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__15___exit__,
    type_description_1,
    par_self,
    par_exc_info,
    var_exc_type,
    var_matches
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__15___exit__ == cache_frame_frame_jaraco$context$$$function__15___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__15___exit__);
    cache_frame_frame_jaraco$context$$$function__15___exit__ = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__15___exit__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_matches);
tmp_return_value = var_matches;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_exc_type);
CHECK_OBJECT(var_exc_type);
Py_DECREF(var_exc_type);
var_exc_type = NULL;
CHECK_OBJECT(var_matches);
CHECK_OBJECT(var_matches);
Py_DECREF(var_matches);
var_matches = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc_type);
var_exc_type = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
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
CHECK_OBJECT(par_exc_info);
Py_DECREF(par_exc_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_info);
Py_DECREF(par_exc_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__16___bool__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__16___bool__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__16___bool__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__16___bool__)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__16___bool__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__16___bool__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__16___bool__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b28d83eaa4c0860070e9c408cfe059e9, module_jaraco$context, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__16___bool__->m_type_description == NULL);
frame_frame_jaraco$context$$$function__16___bool__ = cache_frame_frame_jaraco$context$$$function__16___bool__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__16___bool__);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__16___bool__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__16___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__16___bool__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__16___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__16___bool__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__16___bool__ == cache_frame_frame_jaraco$context$$$function__16___bool__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__16___bool__);
    cache_frame_frame_jaraco$context$$$function__16___bool__ = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__16___bool__);

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


static PyObject *impl_jaraco$context$$$function__17_raises(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par__test = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_wrapper = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__17_raises;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__17_raises = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__17_raises)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__17_raises);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__17_raises == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__17_raises = MAKE_FUNCTION_FRAME(tstate, code_objects_bf61c7538e75edd4e65c6e721ab685c4, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__17_raises->m_type_description == NULL);
frame_frame_jaraco$context$$$function__17_raises = cache_frame_frame_jaraco$context$$$function__17_raises;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__17_raises);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__17_raises) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
frame_frame_jaraco$context$$$function__17_raises->m_frame.f_lineno = 346;
tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wraps, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ded4d2a1dba2ccb0c95bf0b248661621);
tmp_closure_1[0] = par__test;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_func;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_args_element_value_2 = MAKE_FUNCTION_jaraco$context$$$function__17_raises$$$function__1_wrapper(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_jaraco$context$$$function__17_raises->m_frame.f_lineno = 346;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
assert(var_wrapper == NULL);
var_wrapper = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__17_raises, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__17_raises->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__17_raises, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__17_raises,
    type_description_1,
    par_self,
    par_func,
    par__test,
    var_wrapper
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__17_raises == cache_frame_frame_jaraco$context$$$function__17_raises) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__17_raises);
    cache_frame_frame_jaraco$context$$$function__17_raises = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__17_raises);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_wrapper);
tmp_return_value = var_wrapper;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(par__test);
CHECK_OBJECT(par__test);
Py_DECREF(par__test);
par__test = NULL;
CHECK_OBJECT(var_wrapper);
CHECK_OBJECT(var_wrapper);
Py_DECREF(var_wrapper);
var_wrapper = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(par__test);
CHECK_OBJECT(par__test);
Py_DECREF(par__test);
par__test = NULL;
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


static PyObject *impl_jaraco$context$$$function__17_raises$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_trap = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper = MAKE_FUNCTION_FRAME(tstate, code_objects_4bc52e70f390d06f63991af6abe6c20a, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_type_description == NULL);
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper = cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_jaraco$context$ExceptionTrap(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExceptionTrap);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exceptions);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 348;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 348;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_trap == NULL);
Py_INCREF(tmp_assign_source_5);
var_trap = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "oooccc";
    goto try_except_handler_4;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
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
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 348;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 348;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame)) {
        frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooccc";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 348;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame)) {
        frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooccc";
goto try_except_handler_5;
branch_end_1:;
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
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 348;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 348;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
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
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain__test);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 350;
type_description_1 = "oooccc";
    goto frame_exception_exit_1;
}

tmp_called_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_trap);
tmp_args_element_value_5 = var_trap;
frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame.f_lineno = 350;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper,
    type_description_1,
    par_args,
    par_kwargs,
    var_trap,
    self->m_closure[2],
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper == cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper);
    cache_frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__17_raises$$$function__1_wrapper);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_trap);
CHECK_OBJECT(var_trap);
Py_DECREF(var_trap);
var_trap = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_trap);
var_trap = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
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


static PyObject *impl_jaraco$context$$$function__18_passes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_func = python_pars[1];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__18_passes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__18_passes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__18_passes)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__18_passes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__18_passes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__18_passes = MAKE_FUNCTION_FRAME(tstate, code_objects_8942f832affef9abfa537989540513c6, module_jaraco$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__18_passes->m_type_description == NULL);
frame_frame_jaraco$context$$$function__18_passes = cache_frame_frame_jaraco$context$$$function__18_passes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__18_passes);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__18_passes) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_raises);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_kw_call_arg_value_0_1 = par_func;
tmp_expression_value_2 = module_var_accessor_jaraco$context$operator(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_not_);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__18_passes->m_frame.f_lineno = 368;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain__test_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__18_passes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__18_passes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__18_passes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__18_passes,
    type_description_1,
    par_self,
    par_func
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__18_passes == cache_frame_frame_jaraco$context$$$function__18_passes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__18_passes);
    cache_frame_frame_jaraco$context$$$function__18_passes = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__18_passes);

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
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_action = python_pars[1];
PyObject *par_code = python_pars[2];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ecce339742aeb0d788c5a7a9c315ebd2, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__19___init__->m_type_description == NULL);
frame_frame_jaraco$context$$$function__19___init__ = cache_frame_frame_jaraco$context$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__19___init__);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_action);
tmp_assattr_value_1 = par_action;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_action, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_code);
tmp_assattr_value_2 = par_code;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_code, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__19___init__,
    type_description_1,
    par_self,
    par_action,
    par_code
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__19___init__ == cache_frame_frame_jaraco$context$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__19___init__);
    cache_frame_frame_jaraco$context$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__19___init__);

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
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jaraco$context$$$function__20___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_jaraco$context$$$function__21___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exctype = python_pars[1];
PyObject *par_excinst = python_pars[2];
PyObject *par_exctb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$function__21___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_jaraco$context$$$function__21___exit__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_jaraco$context$$$function__21___exit__)) {
    Py_XDECREF(cache_frame_frame_jaraco$context$$$function__21___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_jaraco$context$$$function__21___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_jaraco$context$$$function__21___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_632ec77c37f069ffbe714a56b80e6bf7, module_jaraco$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_jaraco$context$$$function__21___exit__->m_type_description == NULL);
frame_frame_jaraco$context$$$function__21___exit__ = cache_frame_frame_jaraco$context$$$function__21___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$function__21___exit__);
assert(Py_REFCNT(frame_frame_jaraco$context$$$function__21___exit__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_exctype);
tmp_cmp_expr_left_1 = par_exctype;
tmp_cmp_expr_right_1 = PyExc_KeyboardInterrupt;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_ignore;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_error;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_code);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_jaraco$context$$$function__21___exit__->m_frame.f_lineno = 421;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SystemExit, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(par_excinst);
tmp_raise_cause_1 = par_excinst;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 421;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_suppress;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$function__21___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$function__21___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$function__21___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$function__21___exit__,
    type_description_1,
    par_self,
    par_exctype,
    par_excinst,
    par_exctb
);


// Release cached frame if used for exception.
if (frame_frame_jaraco$context$$$function__21___exit__ == cache_frame_frame_jaraco$context$$$function__21___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_jaraco$context$$$function__21___exit__);
    cache_frame_frame_jaraco$context$$$function__21___exit__ = NULL;
}

assertFrameObject(frame_frame_jaraco$context$$$function__21___exit__);

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
CHECK_OBJECT(par_exctype);
Py_DECREF(par_exctype);
CHECK_OBJECT(par_excinst);
Py_DECREF(par_excinst);
CHECK_OBJECT(par_exctb);
Py_DECREF(par_exctb);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exctype);
Py_DECREF(par_exctype);
CHECK_OBJECT(par_excinst);
Py_DECREF(par_excinst);
CHECK_OBJECT(par_exctb);
Py_DECREF(par_exctb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__10___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_35a54bd9189417586f8ba9f188072b7c,
#endif
        code_objects_e6aa87cda7d5ebb8065f60c744825950,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__11___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__11___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6bff8190d9f7da0cdb42c2f77d415109,
#endif
        code_objects_871f014cb5ddf45b5cadaaac8d44425d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__12_type(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__12_type,
        const_str_plain_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b386b430e226ec8b0f35dea0e5a38c3,
#endif
        code_objects_436bb4f1c912e364ea6754fe16cd1bf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__13_value(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__13_value,
        mod_consts.const_str_plain_value,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6176f19a0710731585292692f747cdbe,
#endif
        code_objects_ee3ab0ad4bd5a22039e7ff9c43f72622,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__14_tb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__14_tb,
        mod_consts.const_str_plain_tb,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3c592624747f168381bed14a62250143,
#endif
        code_objects_aeb035dbf9884575784c32287e70d4b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__15___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__15___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_98854c7d5088e9742683ac9409d50c00,
#endif
        code_objects_7d09aba51ce5d608d8dbea1d73e76939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__16___bool__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__16___bool__,
        mod_consts.const_str_plain___bool__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a69599b32ea96f06b8a900413f0f89e6,
#endif
        code_objects_b28d83eaa4c0860070e9c408cfe059e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__17_raises(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__17_raises,
        mod_consts.const_str_plain_raises,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0f8f4aa8cad0f7bcbc7bb0ea43d3a4f,
#endif
        code_objects_bf61c7538e75edd4e65c6e721ab685c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_18badf6f282e95c409777af2d2a035fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__17_raises$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__17_raises$$$function__1_wrapper,
        mod_consts.const_str_plain_wrapper,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5be0f7e9d337427fc2f4082d09b119e,
#endif
        code_objects_4bc52e70f390d06f63991af6abe6c20a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__18_passes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__18_passes,
        mod_consts.const_str_plain_passes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ff7ddc6dfbf54221f92df27acfb64b73,
#endif
        code_objects_8942f832affef9abfa537989540513c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_acbcf54a530e68443cd1f4fd7d5e9879,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__19___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3103bbf9391792dcf11af8816fb01f93,
#endif
        code_objects_ecce339742aeb0d788c5a7a9c315ebd2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__1_pushd(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__1_pushd,
        mod_consts.const_str_plain_pushd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95f6cc566a752d07ced74a93162a0f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_ae96e26aee76bba4cbb539d9edaf63ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__20___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__20___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edf8c61efbfe721a006f3a1e21112584,
#endif
        code_objects_0b05286dbb850bfec360daf9dba7c7c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__21___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__21___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0233fa9304eb0d6bebea534823e8c536,
#endif
        code_objects_632ec77c37f069ffbe714a56b80e6bf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__2_tarball(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__2_tarball,
        mod_consts.const_str_plain_tarball,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_324115d85bb1b63539745483c8f2d433,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_6740b97c74af872b3d8abf377f5f620e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__3__compose_tarfile_filters,
        mod_consts.const_str_plain__compose_tarfile_filters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ea0ce6a4b53a95554eaa93b31f4d433a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two,
        mod_consts.const_str_plain_compose_two,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30665e588ec9ac76c38ee28fe9f81956,
#endif
        code_objects_c059fe1125362b2344e500bf3d7c20f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1089d6281afb433efdefa34da7acf17,
#endif
        code_objects_95ea1bec811767d6b1f5d26bf483ed72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jaraco$context,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_115215a4067f4057e467c3205efb1003,
#endif
        code_objects_b03f06cad54340ea9ba18913cda59eda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__4_strip_first_component(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__4_strip_first_component,
        mod_consts.const_str_plain_strip_first_component,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b2e26fc55d5f82df802c127ada49179,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__5__compose,
        mod_consts.const_str_plain__compose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_55821bcbafe7da091ef99468c01aef39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_86b5aef584a560389187355ac517e1cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__5__compose$$$function__1_compose_two,
        mod_consts.const_str_plain_compose_two,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6ceb05b4c3efb2125311dea8e5119dc2,
#endif
        code_objects_8300e5dbada51a423be9c3540a48a331,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed,
        mod_consts.const_str_plain_composed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc5aa55b220dd52cc4c5c10af980a406,
#endif
        code_objects_710889e2ee6968906f7b090a886a277d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__6_remove_readonly(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__6_remove_readonly,
        mod_consts.const_str_plain_remove_readonly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_65ec0a9ab42da059608f5b8ab9d4b8b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_e1624e1d23e4b225570c05cacb8ae2dc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__7_robust_remover(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__7_robust_remover,
        mod_consts.const_str_plain_robust_remover,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_65e84089f0fac3a6aa4579c325ddcf6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__8_temp_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__8_temp_dir,
        mod_consts.const_str_plain_temp_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f0c85584e9cd88d20b4ae314a2ad454,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_1de25cd6a3e678c4d4abb1743af857df,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jaraco$context$$$function__9_repo_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jaraco$context$$$function__9_repo_context,
        mod_consts.const_str_plain_repo_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7a60fc0229e3b163e3b6e47da6024f7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jaraco$context,
        mod_consts.const_str_digest_c77d89e33654c9373d1f50f66d0c5c09,
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

static function_impl_code const function_table_jaraco$context[] = {
impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two,
impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__2_lambda,
impl_jaraco$context$$$function__3__compose_tarfile_filters$$$function__1_compose_two$$$function__1_lambda,
impl_jaraco$context$$$function__5__compose$$$function__1_compose_two,
impl_jaraco$context$$$function__5__compose$$$function__1_compose_two$$$function__1_composed,
impl_jaraco$context$$$function__17_raises$$$function__1_wrapper,
impl_jaraco$context$$$function__1_pushd,
impl_jaraco$context$$$function__2_tarball,
impl_jaraco$context$$$function__3__compose_tarfile_filters,
impl_jaraco$context$$$function__4_strip_first_component,
impl_jaraco$context$$$function__5__compose,
impl_jaraco$context$$$function__6_remove_readonly,
impl_jaraco$context$$$function__7_robust_remover,
impl_jaraco$context$$$function__8_temp_dir,
impl_jaraco$context$$$function__9_repo_context,
impl_jaraco$context$$$function__10___init__,
impl_jaraco$context$$$function__11___enter__,
impl_jaraco$context$$$function__12_type,
impl_jaraco$context$$$function__13_value,
impl_jaraco$context$$$function__14_tb,
impl_jaraco$context$$$function__15___exit__,
impl_jaraco$context$$$function__16___bool__,
impl_jaraco$context$$$function__17_raises,
impl_jaraco$context$$$function__18_passes,
impl_jaraco$context$$$function__19___init__,
impl_jaraco$context$$$function__20___enter__,
impl_jaraco$context$$$function__21___exit__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_jaraco$context);
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
        module_jaraco$context,
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
        function_table_jaraco$context,
        sizeof(function_table_jaraco$context) / sizeof(function_impl_code)
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
static char const *module_full_name = "jaraco.context";
#endif

// Internal entry point for module code.
PyObject *module_code_jaraco$context(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("jaraco$context");

    // Store the module for future use.
    module_jaraco$context = module;

    moduledict_jaraco$context = MODULE_DICT(module_jaraco$context);

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
        PRINT_STRING("jaraco$context: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("jaraco$context: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("jaraco$context: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "jaraco.context" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initjaraco$context\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jaraco$context,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jaraco$context,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jaraco$context,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jaraco$context,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jaraco$context,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jaraco$context);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_jaraco$context);
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

        UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_jaraco$context$$$class__1_ExceptionTrap_263 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$class__1_ExceptionTrap_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
int tmp_res;
PyObject *locals_jaraco$context$$$class__2_suppress_371 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_jaraco$context$$$class__3_on_interrupt_382 = NULL;
struct Nuitka_FrameObject *frame_frame_jaraco$context$$$class__3_on_interrupt_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_jaraco$context = MAKE_MODULE_FRAME(code_objects_e8c082f62828968dfe6df4ffa780ba8a, module_jaraco$context);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context);
assert(Py_REFCNT(frame_frame_jaraco$context) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_jaraco$context->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_jaraco$context->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_jaraco$context->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_fdee6c9bad138da5e83de5732f6e0456_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_context;
frame_frame_jaraco$context->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_jaraco$context->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_a5913e19bcd1adc9fbc54f27215f4f08_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_jaraco$context$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_jaraco$context$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_jaraco$context$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_jaraco$context$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_BUILTINS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_builtins, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 4;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_errno;
tmp_globals_arg_value_2 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 5;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_errno, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_3 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 7;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_operator, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_4 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 9;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_5 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 10;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_plain_stat;
tmp_globals_arg_value_6 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 11;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain_stat, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_7 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 12;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_17 == NULL));
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_8 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 14;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42;
tmp_globals_arg_value_9 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = Py_None;
tmp_level_value_9 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 15;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_10 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Callable_str_plain_Generator_str_plain_Iterator_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 16;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_25 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_25);
tmp_import_from_2__module = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = Py_False;
UPDATE_STRING_DICT0(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_26);
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_jaraco$context,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_29);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_tarfile;
tmp_globals_arg_value_11 = (PyObject *)moduledict_jaraco$context;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = Py_None;
tmp_level_value_11 = const_int_0;
frame_frame_jaraco$context->m_frame.f_lineno = 27;
tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarfile, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_5 = (PyObject *)&PyTuple_Type;
tmp_tuple_element_1 = mod_consts.const_uniontype_tuple_48fe693bdd117d1f0d831fedc42bbc96_tuple;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_uniontype_tuple_type_BaseException_anon_NoneType_tuple;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_bitor_expr_left_1 = module_var_accessor_jaraco$context$TracebackType(tstate);
assert(!(tmp_bitor_expr_left_1 == NULL));
tmp_bitor_expr_right_1 = Py_None;
tmp_tuple_element_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__UnpackableOptExcInfo, tmp_assign_source_31);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_jaraco$context$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__UnpackableOptExcInfo;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_jaraco$context$TypeVar(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 47;
tmp_assign_source_32 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain__R_tuple);

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__R, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_jaraco$context$TypeVar(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 48;
tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__T1_co_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__T1_co, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_jaraco$context$TypeVar(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 49;
tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__T2_co_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__T2_co, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_1;
tmp_called_instance_1 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5003a2cb1f4de01494853eeb71e31ee4);

tmp_args_element_value_4 = MAKE_FUNCTION_jaraco$context$$$function__1_pushd(tstate, tmp_annotations_1);

frame_frame_jaraco$context->m_frame.f_lineno = 52;
tmp_assign_source_35 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_pushd, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_called_instance_2 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_deb9da4cf9ba08dfeb06e2aa51511465);
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_5 = MAKE_FUNCTION_jaraco$context$$$function__2_tarball(tstate, tmp_defaults_1, tmp_annotations_2);

frame_frame_jaraco$context->m_frame.f_lineno = 69;
tmp_assign_source_36 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_jaraco$context$$$function__3__compose_tarfile_filters(tstate);

UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose_tarfile_filters, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_cf3aa826ef4434338000ed0fa4b44f40);

tmp_assign_source_38 = MAKE_FUNCTION_jaraco$context$$$function__4_strip_first_component(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_first_component, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = module_var_accessor_jaraco$context$_compose_tarfile_filters(tstate);
assert(!(tmp_called_value_8 == NULL));
tmp_expression_value_6 = module_var_accessor_jaraco$context$tarfile(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tarfile);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data_filter);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_jaraco$context$strip_first_component(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_first_component);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 128;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__default_filter, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_77af5ac3c9f831eb6c09d7cde4b51285);

tmp_assign_source_40 = MAKE_FUNCTION_jaraco$context$$$function__5__compose(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain__compose, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_9 = module_var_accessor_jaraco$context$_compose(tstate);
assert(!(tmp_called_value_9 == NULL));
tmp_args_element_value_8 = module_var_accessor_jaraco$context$pushd(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pushd);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_jaraco$context$tarball(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tarball);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_tarball_cwd, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_9316a2a3ee16e7fef7f14c26cf58aa0d);

tmp_assign_source_42 = MAKE_FUNCTION_jaraco$context$$$function__6_remove_readonly(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_readonly, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_2c07a6d971c76f0ab028fb3373421ee3);

tmp_assign_source_43 = MAKE_FUNCTION_jaraco$context$$$function__7_robust_remover(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_remover, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_10;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_annotations_7;
tmp_expression_value_7 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;

    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_contextmanager);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_jaraco$context$shutil(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shutil);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rmtree);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_2);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_20d218f85282cb9e405712b33e77acab);

tmp_args_element_value_10 = MAKE_FUNCTION_jaraco$context$$$function__8_temp_dir(tstate, tmp_defaults_2, tmp_annotations_7);

frame_frame_jaraco$context->m_frame.f_lineno = 212;
tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_temp_dir, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_12;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_11 == NULL));
tmp_kw_call_arg_value_0_1 = module_var_accessor_jaraco$context$temp_dir(tstate);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_12 = module_var_accessor_jaraco$context$robust_remover(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_robust_remover);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 230;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 230;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 230;

    goto frame_exception_exit_1;
}
frame_frame_jaraco$context->m_frame.f_lineno = 230;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_remover_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_robust_temp_dir, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_annotations_8;
tmp_expression_value_9 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;

    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_contextmanager);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = Py_None;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_jaraco$context$robust_temp_dir(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_robust_temp_dir);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_55384783217a5b7eee373d3e95a2c6bb);

tmp_args_element_value_11 = MAKE_FUNCTION_jaraco$context$$$function__9_repo_context(tstate, tmp_defaults_3, tmp_annotations_8);

frame_frame_jaraco$context->m_frame.f_lineno = 233;
tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_repo_context, tmp_assign_source_46);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_48;
}
// Tried code:
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_jaraco$context$$$class__1_ExceptionTrap_263 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_e99a3e4f06655d59e488ed8d4b59a3e5;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ExceptionTrap;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_263;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_none_none_none_tuple;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain_exc_info, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_jaraco$context$$$class__1_ExceptionTrap_2 = MAKE_CLASS_FRAME(tstate, code_objects_d5d21fe9d908c063387a8a50111bf1df, module_jaraco$context, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$class__1_ExceptionTrap_2);
assert(Py_REFCNT(frame_frame_jaraco$context$$$class__1_ExceptionTrap_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_OptExcInfo;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_exc_info;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_9;
tmp_defaults_4 = mod_consts.const_tuple_tuple_type_Exception_tuple_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_4010b2785c002d4d976747a1ac91e1cc);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__10___init__(tstate, tmp_defaults_4, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__11___enter__(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_11;
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_6a827e102704e1b06e6910c35dc0a80e);

tmp_args_element_value_12 = MAKE_FUNCTION_jaraco$context$$$function__12_type(tstate, tmp_annotations_11);

frame_frame_jaraco$context$$$class__1_ExceptionTrap_2->m_frame.f_lineno = 305;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_12;
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);

tmp_args_element_value_13 = MAKE_FUNCTION_jaraco$context$$$function__13_value(tstate, tmp_annotations_12);

frame_frame_jaraco$context$$$class__1_ExceptionTrap_2->m_frame.f_lineno = 309;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain_value, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_13;
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_310de40e1a65ecc7d0b0c7281e3023d1);

tmp_args_element_value_14 = MAKE_FUNCTION_jaraco$context$$$function__14_tb(tstate, tmp_annotations_13);

frame_frame_jaraco$context$$$class__1_ExceptionTrap_2->m_frame.f_lineno = 313;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain_tb, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$class__1_ExceptionTrap_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$class__1_ExceptionTrap_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$class__1_ExceptionTrap_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$class__1_ExceptionTrap_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_jaraco$context$$$class__1_ExceptionTrap_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6836646641c29ad4a48bd0a599a72fd1);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__15___exit__(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__16___bool__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain___bool__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_16;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_5b43a9f5728244a370dc293216b028f7);
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_4209e1ec099879cdf7a155028d28dd18);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__17_raises(tstate, tmp_kw_defaults_1, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain_raises, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_fe2e146e451cf94328fc976063fbc65a);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__18_passes(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain_passes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_exceptions_str_plain_exc_info_tuple;
tmp_result = DICT_SET_ITEM(locals_jaraco$context$$$class__1_ExceptionTrap_263, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
tmp_called_value_17 = (PyObject *)&PyType_Type;
tmp_tuple_element_4 = mod_consts.const_str_plain_ExceptionTrap;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_jaraco$context$$$class__1_ExceptionTrap_263;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_jaraco$context->m_frame.f_lineno = 263;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_49 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_jaraco$context$$$class__1_ExceptionTrap_263);
locals_jaraco$context$$$class__1_ExceptionTrap_263 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_jaraco$context$$$class__1_ExceptionTrap_263);
locals_jaraco$context$$$class__1_ExceptionTrap_263 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 263;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap, tmp_assign_source_49);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_suppress);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_assign_source_51, 0, tmp_tuple_element_5);
tmp_expression_value_11 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;

    goto tuple_build_exception_3;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ContextDecorator);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_51, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_51);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_12 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_suppress;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_jaraco$context->m_frame.f_lineno = 371;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_6;
}
frame_frame_jaraco$context->m_frame.f_lineno = 371;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 371;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_56;
}
branch_end_1:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_jaraco$context$$$class__2_suppress_371 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_4ac9924b02cd9e2b7413484b94415dfe;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_suppress;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_371;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
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


exception_lineno = 371;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__2_suppress_371, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_suppress;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_jaraco$context$$$class__2_suppress_371;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_jaraco$context->m_frame.f_lineno = 371;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_57 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_jaraco$context$$$class__2_suppress_371);
locals_jaraco$context$$$class__2_suppress_371 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_jaraco$context$$$class__2_suppress_371);
locals_jaraco$context$$$class__2_suppress_371 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 371;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress, tmp_assign_source_57);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = module_var_accessor_jaraco$context$contextlib(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ContextDecorator);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_on_interrupt;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_jaraco$context->m_frame.f_lineno = 382;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_9;
}
frame_frame_jaraco$context->m_frame.f_lineno = 382;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 382;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_64;
}
branch_end_4:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_jaraco$context$$$class__3_on_interrupt_382 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_67ed9a6490adca428693b23a1213ed50;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_on_interrupt;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_382;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
frame_frame_jaraco$context$$$class__3_on_interrupt_3 = MAKE_CLASS_FRAME(tstate, code_objects_ce340d386323cfc66983f0909e9c2337, module_jaraco$context, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_jaraco$context$$$class__3_on_interrupt_3);
assert(Py_REFCNT(frame_frame_jaraco$context$$$class__3_on_interrupt_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_18;
tmp_defaults_5 = mod_consts.const_tuple_str_plain_error_int_pos_1_tuple;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_c9b7b16f07482dc090d0d76d48dcb413);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__19___init__(tstate, tmp_defaults_5, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__20___enter__(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_d72ca34d510b3e01d04c37e69f6c78e4);

tmp_dictset_value = MAKE_FUNCTION_jaraco$context$$$function__21___exit__(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context$$$class__3_on_interrupt_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context$$$class__3_on_interrupt_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context$$$class__3_on_interrupt_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_jaraco$context$$$class__3_on_interrupt_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_jaraco$context$$$class__3_on_interrupt_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_action_str_plain_code_tuple;
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
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


exception_lineno = 382;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_jaraco$context$$$class__3_on_interrupt_382, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_on_interrupt;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_jaraco$context$$$class__3_on_interrupt_382;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_jaraco$context->m_frame.f_lineno = 382;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_65 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_jaraco$context$$$class__3_on_interrupt_382);
locals_jaraco$context$$$class__3_on_interrupt_382 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_jaraco$context$$$class__3_on_interrupt_382);
locals_jaraco$context$$$class__3_on_interrupt_382 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 382;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_jaraco$context, (Nuitka_StringObject *)mod_consts.const_str_plain_on_interrupt, tmp_assign_source_65);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_jaraco$context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_jaraco$context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jaraco$context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_jaraco$context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("jaraco$context", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "jaraco.context" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_jaraco$context);
    return module_jaraco$context;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jaraco$context, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("jaraco$context", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

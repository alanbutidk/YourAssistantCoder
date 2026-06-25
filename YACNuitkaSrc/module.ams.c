/* Generated code for Python module 'ams'
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



/* The "module_ams" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ams;
PyDictObject *moduledict_ams;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_log_path;
PyObject *const_str_plain_mkdir;
PyObject *const_tuple_true_true_tuple;
PyObject *const_tuple_str_plain_parents_str_plain_exist_ok_tuple;
PyObject *const_str_plain_time;
PyObject *const_str_plain_strftime;
PyObject *const_tuple_str_digest_f4190f2feb4881e48f7782b13c0974e5_tuple;
PyObject *const_str_chr_91;
PyObject *const_str_digest_73234f221c719a9bb5a6cb10c67b1808;
PyObject *const_str_digest_cbd56c48c4f2be7bf73b4e670c7af695;
PyObject *const_str_digest_5cee1bd2ef92c017e511a244dfd7100f;
PyObject *const_str_newline;
PyObject *const_str_plain_a;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain_write;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_pfps;
PyObject *const_str_plain_console;
PyObject *const_str_plain_session_id;
PyObject *const_str_plain_AMSLogger;
PyObject *const_str_plain_AMSLocation;
PyObject *const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple;
PyObject *const_str_digest_7a72cfbef352f6d1a96a53a9022dd875;
PyObject *const_str_plain_logger;
PyObject *const_str_plain__working;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Event;
PyObject *const_str_plain__stop_event;
PyObject *const_str_plain__current_token;
PyObject *const_str_plain_Permissions;
PyObject *const_str_plain_Read;
PyObject *const_str_plain_Viewer;
PyObject *const_str_plain_ReadWrite;
PyObject *const_str_plain_Editor;
PyObject *const_str_plain_ReadWriteDelete;
PyObject *const_str_plain_Owner;
PyObject *const_str_plain_SpecialUse;
PyObject *const_str_plain_issue_token;
PyObject *const_str_plain_CHECKOUT;
PyObject *const_str_digest_5051da46cc0b9d5fab325804cf1cd5c5;
PyObject *const_str_chr_41;
PyObject *const_str_digest_e96e264b917a6271087e8501203651fe;
PyObject *const_str_plain_ALLOWED_TOOLS;
PyObject *const_str_plain_BLOCKED;
PyObject *const_str_digest_8ae86bf1d7fdfc4e99cc6c406d4d9cb7;
PyObject *const_str_digest_a918417152888087bf3624b4df376b16;
PyObject *const_str_digest_8acafee58ba7ea70a4b46bc3b4c184ef;
PyObject *const_str_plain_expired;
PyObject *const_str_digest_4a201342e94c6711bf1b00ffb928c9a6;
PyObject *const_str_digest_9834ed512f6327dbd3c5c58465b69427;
PyObject *const_str_plain_USETOOL;
PyObject *const_str_digest_3e12364e6eae797aad5331e1f9618e84;
PyObject *const_str_plain_read_chunk;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3;
PyObject *const_str_plain_write_chunk;
PyObject *const_str_plain_append_chunk;
PyObject *const_str_plain_create_file;
PyObject *const_str_plain_delete_file;
PyObject *const_str_plain_list_files;
PyObject *const_str_plain__prompt_terminate;
PyObject *const_tuple_str_plain_filename_str_plain_unknown_tuple;
PyObject *const_str_digest_d11f3415c387bb3e9e46326e2beb9de1;
PyObject *const_str_plain_self;
PyObject *const_str_plain_ReadChunk;
PyObject *const_str_plain_token;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_filename;
PyObject *const_str_plain_chunk_key;
PyObject *const_str_plain_WriteChunk;
PyObject *const_str_plain_content;
PyObject *const_str_plain_AppendChunk;
PyObject *const_str_plain_CreateFile;
PyObject *const_tuple_str_plain_content_str_empty_tuple;
PyObject *const_str_plain_DeleteFile;
PyObject *const_tuple_str_plain_chunk_key_str_empty_tuple;
PyObject *const_str_plain_ListFiles;
PyObject *const_tuple_str_plain_subpath_str_dot_tuple;
PyObject *const_str_plain_SPECIAL;
PyObject *const_str_digest_107b51cf04afbeb43a9f2f63a946e940;
PyObject *const_tuple_str_digest_cd2cd5d7e382568478c79069a660e18b_tuple;
PyObject *const_str_digest_e8e03e0a2cb88289a64c21cd4be03f4d;
PyObject *const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyObject *const_str_plain_input;
PyObject *const_tuple_str_digest_86483e3113b4a9f88929b3a94edbfe90_tuple;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_y;
PyObject *const_tuple_e739b5bd32fed6a6396c0c02cd97d031_tuple;
PyObject *const_str_plain_DENIED;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_run;
PyObject *const_str_plain_root;
PyObject *const_int_pos_30;
PyObject *const_tuple_31b2e1f935d28c6eb1cf1305c607239d_tuple;
PyObject *const_str_plain_stdout;
PyObject *const_str_plain_stderr;
PyObject *const_str_digest_2f1f8b5af8d94e8a56866128cc5d636e;
PyObject *const_slice_none_int_pos_100_none;
PyObject *const_str_plain_TimeoutExpired;
PyObject *const_str_plain_TIMEOUT;
PyObject *const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b;
PyObject *const_str_digest_bda529dc3d1120a3252a32dfb692f5fa;
PyObject *const_tuple_str_digest_84adc33577d660cfc0a6d00a55a187c2_tuple;
PyObject *const_str_digest_b2f762b20cfa8eaae8aabf8427b7e2da;
PyObject *const_tuple_str_digest_dc4f3051ae387ffcb8c990cbfbdcab34_tuple;
PyObject *const_str_plain_TERMINATE;
PyObject *const_str_digest_6fda1af18dabd321eec9734bd04e8086;
PyObject *const_str_plain_revoke;
PyObject *const_str_plain_set;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_WORKING;
PyObject *const_str_digest_05801f4515b5cdfdd95ae2f7e277aeb2;
PyObject *const_str_digest_51e07f0f03451d9993f9043a72dbd83f;
PyObject *const_tuple_30ec296c53c8f7f7d6f35fc5f0004de1_tuple;
PyObject *const_tuple_str_digest_58c75757917b7bf83f1b4ae28f0634ba_tuple;
PyObject *const_str_plain_commit_session;
PyObject *const_str_plain_is_set;
PyObject *const_str_plain_re;
PyObject *const_str_plain_sub;
PyObject *const_str_digest_94a8117ccedd69f1637f5da01beea9c2;
PyObject *const_slice_none_int_pos_2000_none;
PyObject *const_str_plain_CONSOLE;
PyObject *const_slice_none_int_pos_80_none;
PyObject *const_str_digest_c3eea2fa8fbfbc8e08007724bec8297a;
PyObject *const_str_plain___globals__;
PyObject *const_str_plain_PathSandboxed;
PyObject *const_str_plain_SandboxPath;
PyObject *const_str_plain_AMSlocation;
PyObject *const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca;
PyObject *const_str_plain_CheckOut;
PyObject *const_str_plain_UseTool;
PyObject *const_str_plain_Working;
PyObject *const_str_plain_WorkingStop;
PyObject *const_str_plain_printtoconsole;
PyObject *const_str_plain_PFPS;
PyObject *const_str_plain_config;
PyObject *const_tuple_str_plain_allow_print_false_tuple;
PyObject *const_str_digest_c4c1f67c83fa80f2f71cf47ac13b53b1;
PyObject *const_str_digest_5b6f2ab193e9e5906b687ee9e81ae872;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_permissions;
PyObject *const_tuple_5cbe6730e26f9d9a3feaa4fc202ee805_tuple;
PyObject *const_str_plain_AllowToken;
PyObject *const_str_plain_notify;
PyObject *const_tuple_str_plain_PFPSNotify_tuple;
PyObject *const_str_plain_PFPSNotify;
PyObject *const_str_plain_ams;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_e4f14bf19b87682e83a6939d4753f47e;
PyObject *const_dict_6558aa25dbc88a1f8fd1ee3694b28c93;
PyObject *const_str_digest_60881ad50df844aefa32b73e6add1dc1;
PyObject *const_tuple_str_plain_log_path_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_AMS;
PyObject *const_int_pos_32;
PyObject *const_set_36f4e1e3b55d3de422225c03f8d4529e;
PyObject *const_dict_b6e39d0a35e583f64c4625cd294acb81;
PyObject *const_str_digest_3f86617073f7025a616a801b5ea5095c;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_permission_level;
PyObject *const_str_plain_files;
PyObject *const_str_plain_return;
PyObject *const_str_digest_efbcd68bb135995df8d92349779c23bd;
PyObject *const_str_plain_toolname;
PyObject *const_str_digest_8114c776294dc4ece636a48af276c1ff;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_c322582a94be6f1c83dc6b16a0bc8dc2;
PyObject *const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a;
PyObject *const_dict_bd8762a12a80f6543bcd756a7ff48ef3;
PyObject *const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0;
PyObject *const_tuple_true_str_empty_tuple;
PyObject *const_dict_bb6f45c364091b3d2867eec06a56bb6a;
PyObject *const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_5f8aeb6eefa3aac2ce2dceb335f3167e;
PyObject *const_str_digest_b12ee0543cdd9180e35479c29df0d6df;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_plain_should_stop;
PyObject *const_str_digest_950d91986dfc57dd9fc05b0d5ac93304;
PyObject *const_dict_e1769a7d1dc070a8e464bb43cd440650;
PyObject *const_str_digest_258a075e1035b29414e92d85bd8dac96;
PyObject *const_dict_ee14cdf8ba1ae0be46e973d8bd958445;
PyObject *const_str_plain_build_globals;
PyObject *const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5;
PyObject *const_tuple_12fe2b597c965d127e9cacf730222a6b_tuple;
PyObject *const_str_digest_75f9b5787a665bdee0fab7d0508b15df;
PyObject *const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple;
PyObject *const_str_digest_6ceaad0413baea1287f15b9138a4c4ba;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_4f0b5c25476b2134d3d8aa96b23bd978_tuple;
PyObject *const_tuple_62b12d8e3c14c665bc7aeb294d7a0826_tuple;
PyObject *const_tuple_80c2acb0a17ccd6630a3192c3fb99898_tuple;
PyObject *const_tuple_str_plain_self_str_plain_Yes_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_Yes_tuple;
PyObject *const_tuple_0a3e32dd83f640ab375585165f80eac3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_log_path_tuple;
PyObject *const_tuple_str_plain_self_str_plain_filename_str_plain_answer_tuple;
PyObject *const_tuple_str_plain_self_str_plain_builtins_str_plain_g_tuple;
PyObject *const_tuple_8a4794cf35eccf401b20c1fae5a364fb_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_0143f3763ca859a897012fe7f8fa00c3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[209];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("ams"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_log_path);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_strftime);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f4190f2feb4881e48f7782b13c0974e5_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_73234f221c719a9bb5a6cb10c67b1808);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbd56c48c4f2be7bf73b4e670c7af695);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_pfps);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_console);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_id);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLogger);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLocation);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__working);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__stop_event);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__current_token);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Permissions);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Read);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Viewer);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadWrite);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Editor);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadWriteDelete);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Owner);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_SpecialUse);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_issue_token);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHECKOUT);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_5051da46cc0b9d5fab325804cf1cd5c5);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_e96e264b917a6271087e8501203651fe);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOWED_TOOLS);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLOCKED);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ae86bf1d7fdfc4e99cc6c406d4d9cb7);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_a918417152888087bf3624b4df376b16);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_8acafee58ba7ea70a4b46bc3b4c184ef);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_expired);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a201342e94c6711bf1b00ffb928c9a6);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_9834ed512f6327dbd3c5c58465b69427);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_USETOOL);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_chunk);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_chunk);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_chunk);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_file);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_file);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_files);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_terminate);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_unknown_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_d11f3415c387bb3e9e46326e2beb9de1);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadChunk);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_key);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteChunk);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_AppendChunk);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFile);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_content_str_empty_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeleteFile);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunk_key_str_empty_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subpath_str_dot_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_107b51cf04afbeb43a9f2f63a946e940);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd2cd5d7e382568478c79069a660e18b_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8e03e0a2cb88289a64c21cd4be03f4d);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_input);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_86483e3113b4a9f88929b3a94edbfe90_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_e739b5bd32fed6a6396c0c02cd97d031_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_DENIED);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_root);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_31b2e1f935d28c6eb1cf1305c607239d_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdout);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f1f8b5af8d94e8a56866128cc5d636e);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_100_none);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutExpired);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIMEOUT);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_bda529dc3d1120a3252a32dfb692f5fa);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_84adc33577d660cfc0a6d00a55a187c2_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2f762b20cfa8eaae8aabf8427b7e2da);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dc4f3051ae387ffcb8c990cbfbdcab34_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_TERMINATE);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fda1af18dabd321eec9734bd04e8086);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_revoke);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_WORKING);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_05801f4515b5cdfdd95ae2f7e277aeb2);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_51e07f0f03451d9993f9043a72dbd83f);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_30ec296c53c8f7f7d6f35fc5f0004de1_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_58c75757917b7bf83f1b4ae28f0634ba_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_commit_session);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_set);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_94a8117ccedd69f1637f5da01beea9c2);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2000_none);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONSOLE);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3eea2fa8fbfbc8e08007724bec8297a);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___globals__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathSandboxed);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_SandboxPath);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMSlocation);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_CheckOut);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_UseTool);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Working);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_printtoconsole);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allow_print_false_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4c1f67c83fa80f2f71cf47ac13b53b1);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b6f2ab193e9e5906b687ee9e81ae872);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_permissions);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_5cbe6730e26f9d9a3feaa4fc202ee805_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_AllowToken);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPSNotify_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_PFPSNotify);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_ams);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4f14bf19b87682e83a6939d4753f47e);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_6558aa25dbc88a1f8fd1ee3694b28c93);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_60881ad50df844aefa32b73e6add1dc1);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_path_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMS);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_set_36f4e1e3b55d3de422225c03f8d4529e);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f86617073f7025a616a801b5ea5095c);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_permission_level);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_efbcd68bb135995df8d92349779c23bd);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_toolname);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_8114c776294dc4ece636a48af276c1ff);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_c322582a94be6f1c83dc6b16a0bc8dc2);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_true_str_empty_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_bb6f45c364091b3d2867eec06a56bb6a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_5f8aeb6eefa3aac2ce2dceb335f3167e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_b12ee0543cdd9180e35479c29df0d6df);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_stop);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_950d91986dfc57dd9fc05b0d5ac93304);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_e1769a7d1dc070a8e464bb43cd440650);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_258a075e1035b29414e92d85bd8dac96);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_ee14cdf8ba1ae0be46e973d8bd958445);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_globals);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_12fe2b597c965d127e9cacf730222a6b_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_75f9b5787a665bdee0fab7d0508b15df);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ceaad0413baea1287f15b9138a4c4ba);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_4f0b5c25476b2134d3d8aa96b23bd978_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_62b12d8e3c14c665bc7aeb294d7a0826_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_80c2acb0a17ccd6630a3192c3fb99898_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Yes_str_plain_message_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Yes_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_0a3e32dd83f640ab375585165f80eac3_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_log_path_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_filename_str_plain_answer_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_builtins_str_plain_g_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_8a4794cf35eccf401b20c1fae5a364fb_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_0143f3763ca859a897012fe7f8fa00c3_tuple);
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
void checkModuleConstants_ams(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_log_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log_path);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdir);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_true_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_strftime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strftime);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f4190f2feb4881e48f7782b13c0974e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f4190f2feb4881e48f7782b13c0974e5_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_73234f221c719a9bb5a6cb10c67b1808));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73234f221c719a9bb5a6cb10c67b1808);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbd56c48c4f2be7bf73b4e670c7af695));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbd56c48c4f2be7bf73b4e670c7af695);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_pfps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pfps);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_console);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_id);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMSLogger);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLocation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMSLocation);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__working));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__working);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__stop_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stop_event);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__current_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__current_token);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Permissions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Permissions);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Read));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Read);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Viewer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Viewer);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadWrite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadWrite);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Editor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Editor);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadWriteDelete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadWriteDelete);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Owner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Owner);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_SpecialUse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SpecialUse);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_issue_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issue_token);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHECKOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHECKOUT);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_5051da46cc0b9d5fab325804cf1cd5c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5051da46cc0b9d5fab325804cf1cd5c5);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_e96e264b917a6271087e8501203651fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e96e264b917a6271087e8501203651fe);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOWED_TOOLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALLOWED_TOOLS);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLOCKED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLOCKED);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ae86bf1d7fdfc4e99cc6c406d4d9cb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ae86bf1d7fdfc4e99cc6c406d4d9cb7);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_a918417152888087bf3624b4df376b16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a918417152888087bf3624b4df376b16);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_8acafee58ba7ea70a4b46bc3b4c184ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8acafee58ba7ea70a4b46bc3b4c184ef);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expired);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a201342e94c6711bf1b00ffb928c9a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a201342e94c6711bf1b00ffb928c9a6);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_9834ed512f6327dbd3c5c58465b69427));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9834ed512f6327dbd3c5c58465b69427);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_USETOOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USETOOL);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_chunk);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_chunk);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append_chunk);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_file);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_file);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list_files);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_terminate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prompt_terminate);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_unknown_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_str_plain_unknown_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_d11f3415c387bb3e9e46326e2beb9de1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d11f3415c387bb3e9e46326e2beb9de1);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadChunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadChunk);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filename);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_key);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteChunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteChunk);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_AppendChunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AppendChunk);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateFile);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_content_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_content_str_empty_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeleteFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeleteFile);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunk_key_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_chunk_key_str_empty_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ListFiles);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subpath_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_subpath_str_dot_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SPECIAL);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_107b51cf04afbeb43a9f2f63a946e940));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_107b51cf04afbeb43a9f2f63a946e940);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd2cd5d7e382568478c79069a660e18b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_cd2cd5d7e382568478c79069a660e18b_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8e03e0a2cb88289a64c21cd4be03f4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8e03e0a2cb88289a64c21cd4be03f4d);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_86483e3113b4a9f88929b3a94edbfe90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_86483e3113b4a9f88929b3a94edbfe90_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_y);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_e739b5bd32fed6a6396c0c02cd97d031_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e739b5bd32fed6a6396c0c02cd97d031_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_DENIED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DENIED);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_31b2e1f935d28c6eb1cf1305c607239d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_31b2e1f935d28c6eb1cf1305c607239d_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdout);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f1f8b5af8d94e8a56866128cc5d636e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f1f8b5af8d94e8a56866128cc5d636e);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_100_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_100_none);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutExpired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutExpired);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TIMEOUT);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_bda529dc3d1120a3252a32dfb692f5fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bda529dc3d1120a3252a32dfb692f5fa);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_84adc33577d660cfc0a6d00a55a187c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_84adc33577d660cfc0a6d00a55a187c2_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2f762b20cfa8eaae8aabf8427b7e2da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2f762b20cfa8eaae8aabf8427b7e2da);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dc4f3051ae387ffcb8c990cbfbdcab34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_dc4f3051ae387ffcb8c990cbfbdcab34_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_TERMINATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TERMINATE);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fda1af18dabd321eec9734bd04e8086));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fda1af18dabd321eec9734bd04e8086);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_revoke));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_revoke);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_WORKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WORKING);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_05801f4515b5cdfdd95ae2f7e277aeb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05801f4515b5cdfdd95ae2f7e277aeb2);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_51e07f0f03451d9993f9043a72dbd83f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51e07f0f03451d9993f9043a72dbd83f);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_30ec296c53c8f7f7d6f35fc5f0004de1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_30ec296c53c8f7f7d6f35fc5f0004de1_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_58c75757917b7bf83f1b4ae28f0634ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_58c75757917b7bf83f1b4ae28f0634ba_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_commit_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_commit_session);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_set);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_94a8117ccedd69f1637f5da01beea9c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94a8117ccedd69f1637f5da01beea9c2);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2000_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2000_none);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONSOLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONSOLE);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_80_none);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3eea2fa8fbfbc8e08007724bec8297a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3eea2fa8fbfbc8e08007724bec8297a);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___globals__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___globals__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathSandboxed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PathSandboxed);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_SandboxPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SandboxPath);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMSlocation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMSlocation);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_CheckOut));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CheckOut);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_UseTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UseTool);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Working));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Working);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkingStop);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_printtoconsole));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_printtoconsole);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PFPS);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allow_print_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_allow_print_false_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4c1f67c83fa80f2f71cf47ac13b53b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4c1f67c83fa80f2f71cf47ac13b53b1);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b6f2ab193e9e5906b687ee9e81ae872));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b6f2ab193e9e5906b687ee9e81ae872);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_permissions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permissions);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_5cbe6730e26f9d9a3feaa4fc202ee805_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5cbe6730e26f9d9a3feaa4fc202ee805_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_AllowToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AllowToken);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPSNotify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PFPSNotify_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_PFPSNotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PFPSNotify);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_ams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ams);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_18));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_18);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4f14bf19b87682e83a6939d4753f47e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4f14bf19b87682e83a6939d4753f47e);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_6558aa25dbc88a1f8fd1ee3694b28c93));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6558aa25dbc88a1f8fd1ee3694b28c93);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_60881ad50df844aefa32b73e6add1dc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60881ad50df844aefa32b73e6add1dc1);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_log_path_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMS);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_set_36f4e1e3b55d3de422225c03f8d4529e));
CHECK_OBJECT_DEEP(mod_consts.const_set_36f4e1e3b55d3de422225c03f8d4529e);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f86617073f7025a616a801b5ea5095c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f86617073f7025a616a801b5ea5095c);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_permission_level));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permission_level);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_efbcd68bb135995df8d92349779c23bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efbcd68bb135995df8d92349779c23bd);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_toolname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toolname);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_8114c776294dc4ece636a48af276c1ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8114c776294dc4ece636a48af276c1ff);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_c322582a94be6f1c83dc6b16a0bc8dc2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c322582a94be6f1c83dc6b16a0bc8dc2);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_true_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_str_empty_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_bb6f45c364091b3d2867eec06a56bb6a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bb6f45c364091b3d2867eec06a56bb6a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_5f8aeb6eefa3aac2ce2dceb335f3167e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f8aeb6eefa3aac2ce2dceb335f3167e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_b12ee0543cdd9180e35479c29df0d6df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b12ee0543cdd9180e35479c29df0d6df);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_stop);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_950d91986dfc57dd9fc05b0d5ac93304));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_950d91986dfc57dd9fc05b0d5ac93304);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_e1769a7d1dc070a8e464bb43cd440650));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e1769a7d1dc070a8e464bb43cd440650);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_258a075e1035b29414e92d85bd8dac96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_258a075e1035b29414e92d85bd8dac96);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_ee14cdf8ba1ae0be46e973d8bd958445));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ee14cdf8ba1ae0be46e973d8bd958445);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_globals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_globals);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_12fe2b597c965d127e9cacf730222a6b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_12fe2b597c965d127e9cacf730222a6b_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_75f9b5787a665bdee0fab7d0508b15df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75f9b5787a665bdee0fab7d0508b15df);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ceaad0413baea1287f15b9138a4c4ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ceaad0413baea1287f15b9138a4c4ba);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_4f0b5c25476b2134d3d8aa96b23bd978_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f0b5c25476b2134d3d8aa96b23bd978_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_62b12d8e3c14c665bc7aeb294d7a0826_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_62b12d8e3c14c665bc7aeb294d7a0826_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_80c2acb0a17ccd6630a3192c3fb99898_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_80c2acb0a17ccd6630a3192c3fb99898_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Yes_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_Yes_str_plain_message_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Yes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_Yes_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_0a3e32dd83f640ab375585165f80eac3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a3e32dd83f640ab375585165f80eac3_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_log_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_log_path_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_filename_str_plain_answer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_filename_str_plain_answer_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_builtins_str_plain_g_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_builtins_str_plain_g_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_8a4794cf35eccf401b20c1fae5a364fb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8a4794cf35eccf401b20c1fae5a364fb_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_0143f3763ca859a897012fe7f8fa00c3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0143f3763ca859a897012fe7f8fa00c3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_ams$AMSLogger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AMSLogger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AMSLogger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AMSLogger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AMSLogger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AMSLogger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AMSLogger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AMSLogger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AMSLogger);
    }

    return result;
}

static PyObject *module_var_accessor_ams$AllowToken(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AllowToken);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AllowToken);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AllowToken, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AllowToken);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AllowToken, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AllowToken);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AllowToken);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AllowToken);
    }

    return result;
}

static PyObject *module_var_accessor_ams$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_ams$Permissions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Permissions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Permissions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Permissions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Permissions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
    }

    return result;
}

static PyObject *module_var_accessor_ams$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_ams$issue_token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_issue_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_issue_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_issue_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_issue_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_issue_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_issue_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_issue_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_issue_token);
    }

    return result;
}

static PyObject *module_var_accessor_ams$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_ams$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_ams->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_ams->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_ams->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_30a0c80c8ce06046173373d1607a567f;
static PyCodeObject *code_objects_64302019226d35b275df9d8e85a8a36e;
static PyCodeObject *code_objects_def8c9188bb5ee669d3437f7369d574f;
static PyCodeObject *code_objects_635a98b230e5dcebeab8c39d9a016d9c;
static PyCodeObject *code_objects_a241dc4b4debd70bb1cd156e7ac001be;
static PyCodeObject *code_objects_8c12332ce1748f025631692699be9346;
static PyCodeObject *code_objects_7d009488a8c79a31c2496e753095a3dd;
static PyCodeObject *code_objects_f744634bf02a4ce09d77914c0f433f9d;
static PyCodeObject *code_objects_cb169250c21e90acbec763661cef8f17;
static PyCodeObject *code_objects_3f0060290ea0ff746ad17dc7ed22e7de;
static PyCodeObject *code_objects_19e06ed9a1fba758c0716021bf66dd06;
static PyCodeObject *code_objects_a1782aabdf51e352ad8f3c243098e810;
static PyCodeObject *code_objects_29d92b909196374edde56652c569750e;
static PyCodeObject *code_objects_9614ced17b43441794246f52f60cd5d5;
static PyCodeObject *code_objects_584962212fa3346efb0b5818041afbb6;
static PyCodeObject *code_objects_8c7d0a932d8d16e0889553856df4e8f0;
static PyCodeObject *code_objects_1f80e58179c2811f56354b424c5db155;
static PyCodeObject *code_objects_c05d1127827a5c327f2efec74edb1977;
static PyCodeObject *code_objects_1a1f8d3cb189288a1df12fffdbc1dfc5;
static PyCodeObject *code_objects_3c419f0c51f68485392044d7b1134d5d;
static PyCodeObject *code_objects_1bfbfe674b3924ee112be8bde6092761;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_75f9b5787a665bdee0fab7d0508b15df); CHECK_OBJECT(module_filename_obj);
code_objects_30a0c80c8ce06046173373d1607a567f = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_64302019226d35b275df9d8e85a8a36e = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_def8c9188bb5ee669d3437f7369d574f = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_635a98b230e5dcebeab8c39d9a016d9c = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_a241dc4b4debd70bb1cd156e7ac001be = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_8c12332ce1748f025631692699be9346 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_kwargs_tuple, mod_consts.const_tuple_str_plain_kwargs_str_plain_self_str_plain_token_tuple, 0, 0, 0);
code_objects_7d009488a8c79a31c2496e753095a3dd = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6ceaad0413baea1287f15b9138a4c4ba, mod_consts.const_str_digest_6ceaad0413baea1287f15b9138a4c4ba, NULL, NULL, 0, 0, 0);
code_objects_f744634bf02a4ce09d77914c0f433f9d = MAKE_CODE_OBJECT(module_filename_obj, 32, 0, mod_consts.const_str_plain_AMS, mod_consts.const_str_plain_AMS, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cb169250c21e90acbec763661cef8f17 = MAKE_CODE_OBJECT(module_filename_obj, 18, 0, mod_consts.const_str_plain_AMSLogger, mod_consts.const_str_plain_AMSLogger, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3f0060290ea0ff746ad17dc7ed22e7de = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_CheckOut, mod_consts.const_str_digest_efbcd68bb135995df8d92349779c23bd, mod_consts.const_tuple_4f0b5c25476b2134d3d8aa96b23bd978_tuple, NULL, 3, 0, 0);
code_objects_19e06ed9a1fba758c0716021bf66dd06 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_SpecialUse, mod_consts.const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a, mod_consts.const_tuple_62b12d8e3c14c665bc7aeb294d7a0826_tuple, NULL, 3, 0, 0);
code_objects_a1782aabdf51e352ad8f3c243098e810 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_UseTool, mod_consts.const_str_digest_8114c776294dc4ece636a48af276c1ff, mod_consts.const_tuple_80c2acb0a17ccd6630a3192c3fb99898_tuple, NULL, 3, 0, 0);
code_objects_29d92b909196374edde56652c569750e = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_Working, mod_consts.const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524, mod_consts.const_tuple_str_plain_self_str_plain_Yes_str_plain_message_tuple, NULL, 3, 0, 0);
code_objects_9614ced17b43441794246f52f60cd5d5 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_WorkingStop, mod_consts.const_str_digest_b12ee0543cdd9180e35479c29df0d6df, mod_consts.const_tuple_str_plain_self_str_plain_Yes_tuple, NULL, 2, 0, 0);
code_objects_584962212fa3346efb0b5818041afbb6 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_3f86617073f7025a616a801b5ea5095c, mod_consts.const_tuple_0a3e32dd83f640ab375585165f80eac3_tuple, NULL, 4, 0, 0);
code_objects_8c7d0a932d8d16e0889553856df4e8f0 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_e4f14bf19b87682e83a6939d4753f47e, mod_consts.const_tuple_str_plain_self_str_plain_log_path_tuple, NULL, 2, 0, 0);
code_objects_1f80e58179c2811f56354b424c5db155 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__prompt_terminate, mod_consts.const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0, mod_consts.const_tuple_str_plain_self_str_plain_filename_str_plain_answer_tuple, NULL, 2, 0, 0);
code_objects_c05d1127827a5c327f2efec74edb1977 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_build_globals, mod_consts.const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5, mod_consts.const_tuple_str_plain_self_str_plain_builtins_str_plain_g_tuple, NULL, 1, 0, 0);
code_objects_1a1f8d3cb189288a1df12fffdbc1dfc5 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_printtoconsole, mod_consts.const_str_digest_258a075e1035b29414e92d85bd8dac96, mod_consts.const_tuple_8a4794cf35eccf401b20c1fae5a364fb_tuple, NULL, 2, 0, 0);
code_objects_3c419f0c51f68485392044d7b1134d5d = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_should_stop, mod_consts.const_str_digest_950d91986dfc57dd9fc05b0d5ac93304, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1bfbfe674b3924ee112be8bde6092761 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_60881ad50df844aefa32b73e6add1dc1, mod_consts.const_tuple_0143f3763ca859a897012fe7f8fa00c3_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_ams$$$function__10_should_stop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__11_printtoconsole(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__12_build_globals(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__2_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__4_CheckOut(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ams$$$function__6_SpecialUse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__7__prompt_terminate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__8_Working(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_ams$$$function__9_WorkingStop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_ams$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_log_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_ams$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8c7d0a932d8d16e0889553856df4e8f0, module_ams, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__1___init__->m_type_description == NULL);
frame_frame_ams$$$function__1___init__ = cache_frame_frame_ams$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__1___init__);
assert(Py_REFCNT(frame_frame_ams$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_log_path);
tmp_assattr_value_1 = par_log_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_log_path, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_log_path);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_parent);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mkdir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__1___init__->m_frame.f_lineno = 21;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_true_tuple, 0), mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__1___init__,
    type_description_1,
    par_self,
    par_log_path
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__1___init__ == cache_frame_frame_ams$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__1___init__);
    cache_frame_frame_ams$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_ams$$$function__1___init__);

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
CHECK_OBJECT(par_log_path);
Py_DECREF(par_log_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_log_path);
Py_DECREF(par_log_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__2_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *par_detail = python_pars[2];
PyObject *var_ts = NULL;
PyObject *var_line = NULL;
PyObject *var_f = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__2_write;
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
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__2_write = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__2_write)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__2_write);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__2_write == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__2_write = MAKE_FUNCTION_FRAME(tstate, code_objects_1bfbfe674b3924ee112be8bde6092761, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__2_write->m_type_description == NULL);
frame_frame_ams$$$function__2_write = cache_frame_frame_ams$$$function__2_write;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__2_write);
assert(Py_REFCNT(frame_frame_ams$$$function__2_write) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_ams$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 24;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_strftime,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f4190f2feb4881e48f7782b13c0974e5_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_ts == NULL);
var_ts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_91;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_ts);
tmp_format_value_1 = var_ts;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_73234f221c719a9bb5a6cb10c67b1808;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_event);
tmp_format_value_2 = par_event;
tmp_format_spec_2 = mod_consts.const_str_digest_cbd56c48c4f2be7bf73b4e670c7af695;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_detail);
tmp_format_value_3 = par_detail;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_newline;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_line == NULL);
var_line = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_log_path);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_open_mode_1 = mod_consts.const_str_plain_a;
tmp_open_encoding_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_3 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 26;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
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


exception_lineno = 26;
type_description_1 = "oooooo";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_f);
tmp_called_instance_2 = var_f;
CHECK_OBJECT(var_line);
tmp_args_element_value_1 = var_line;
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 27;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_write, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__2_write, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__2_write, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
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
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ams$$$function__2_write->m_frame)) {
        frame_frame_ams$$$function__2_write->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ams$$$function__2_write->m_frame)) {
        frame_frame_ams$$$function__2_write->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 26;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 26;
type_description_1 = "oooooo";
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_ams$$$function__2_write->m_frame.f_lineno = 26;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__2_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__2_write->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__2_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__2_write,
    type_description_1,
    par_self,
    par_event,
    par_detail,
    var_ts,
    var_line,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__2_write == cache_frame_frame_ams$$$function__2_write) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__2_write);
    cache_frame_frame_ams$$$function__2_write = NULL;
}

assertFrameObject(frame_frame_ams$$$function__2_write);

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
CHECK_OBJECT(var_ts);
CHECK_OBJECT(var_ts);
Py_DECREF(var_ts);
var_ts = NULL;
CHECK_OBJECT(var_line);
CHECK_OBJECT(var_line);
Py_DECREF(var_line);
var_line = NULL;
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

Py_XDECREF(var_ts);
var_ts = NULL;
Py_XDECREF(var_line);
var_line = NULL;
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
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
CHECK_OBJECT(par_detail);
Py_DECREF(par_detail);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
CHECK_OBJECT(par_detail);
Py_DECREF(par_detail);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pfps = python_pars[1];
PyObject *par_console = python_pars[2];
PyObject *par_session_id = python_pars[3];
struct Nuitka_FrameObject *frame_frame_ams$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_584962212fa3346efb0b5818041afbb6, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__3___init__->m_type_description == NULL);
frame_frame_ams$$$function__3___init__ = cache_frame_frame_ams$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__3___init__);
assert(Py_REFCNT(frame_frame_ams$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_pfps);
tmp_assattr_value_1 = par_pfps;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pfps, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_console);
tmp_assattr_value_2 = par_console;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_console, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_session_id);
tmp_assattr_value_3 = par_session_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_session_id, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_4;
tmp_called_value_1 = module_var_accessor_ams$AMSLogger(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AMSLogger);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pfps);
tmp_called_instance_1 = par_pfps;
frame_frame_ams$$$function__3___init__->m_frame.f_lineno = 47;
tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_AMSLocation,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple, 0)
);

if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875;
tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__3___init__->m_frame.f_lineno = 47;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_logger, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__working, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_6;
tmp_called_instance_2 = module_var_accessor_ams$threading(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__3___init__->m_frame.f_lineno = 49;
tmp_assattr_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Event);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__stop_event, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__current_token, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__3___init__,
    type_description_1,
    par_self,
    par_pfps,
    par_console,
    par_session_id
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__3___init__ == cache_frame_frame_ams$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__3___init__);
    cache_frame_frame_ams$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_ams$$$function__3___init__);

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
CHECK_OBJECT(par_pfps);
Py_DECREF(par_pfps);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pfps);
Py_DECREF(par_pfps);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__4_CheckOut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_permission_level = python_pars[1];
PyObject *par_files = python_pars[2];
PyObject *var_role_map = NULL;
PyObject *var_role = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__4_CheckOut;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__4_CheckOut = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__4_CheckOut)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__4_CheckOut);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__4_CheckOut == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__4_CheckOut = MAKE_FUNCTION_FRAME(tstate, code_objects_3f0060290ea0ff746ad17dc7ed22e7de, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__4_CheckOut->m_type_description == NULL);
frame_frame_ams$$$function__4_CheckOut = cache_frame_frame_ams$$$function__4_CheckOut;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__4_CheckOut);
assert(Py_REFCNT(frame_frame_ams$$$function__4_CheckOut) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_ams$Permissions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Read);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_Viewer;
tmp_assign_source_1 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_2 = module_var_accessor_ams$Permissions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ReadWrite);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_Editor;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_ams$Permissions(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ReadWriteDelete);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_Owner;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_4 = module_var_accessor_ams$Permissions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SpecialUse);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_Owner;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_role_map == NULL);
var_role_map = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_role_map);
tmp_dict_arg_value_1 = var_role_map;
CHECK_OBJECT(par_permission_level);
tmp_key_value_1 = par_permission_level;
tmp_default_value_1 = mod_consts.const_str_plain_Viewer;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = tmp_default_value_1;
    Py_INCREF(tmp_assign_source_2);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_role == NULL);
var_role = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_ams$issue_token(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_issue_token);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_role);
tmp_args_element_value_1 = var_role;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_session_id);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_args_element_value_3 = par_files;
frame_frame_ams$$$function__4_CheckOut->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_token);
tmp_assattr_value_1 = var_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__current_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_logger);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_CHECKOUT;
CHECK_OBJECT(par_permission_level);
tmp_operand_value_1 = par_permission_level;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5051da46cc0b9d5fab325804cf1cd5c5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_role);
tmp_format_value_2 = var_role;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_ams$$$function__4_CheckOut->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__4_CheckOut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__4_CheckOut->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__4_CheckOut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__4_CheckOut,
    type_description_1,
    par_self,
    par_permission_level,
    par_files,
    var_role_map,
    var_role,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__4_CheckOut == cache_frame_frame_ams$$$function__4_CheckOut) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__4_CheckOut);
    cache_frame_frame_ams$$$function__4_CheckOut = NULL;
}

assertFrameObject(frame_frame_ams$$$function__4_CheckOut);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_token);
tmp_return_value = var_token;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_role_map);
CHECK_OBJECT(var_role_map);
Py_DECREF(var_role_map);
var_role_map = NULL;
CHECK_OBJECT(var_role);
CHECK_OBJECT(var_role);
Py_DECREF(var_role);
var_role = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_role_map);
var_role_map = NULL;
Py_XDECREF(var_role);
var_role = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_permission_level);
Py_DECREF(par_permission_level);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_permission_level);
Py_DECREF(par_permission_level);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__5_UseTool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_toolname = python_pars[1];
struct Nuitka_CellObject *par_token = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[3]);
PyObject *var_dispatch = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool = MAKE_FUNCTION_FRAME(tstate, code_objects_a1782aabdf51e352ad8f3c243098e810, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool = cache_frame_frame_ams$$$function__5_UseTool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_toolname);
tmp_cmp_expr_left_1 = par_toolname;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ALLOWED_TOOLS);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "coccoo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_BLOCKED;
tmp_tuple_element_1 = mod_consts.const_str_digest_8ae86bf1d7fdfc4e99cc6c406d4d9cb7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_toolname);
tmp_operand_value_1 = par_toolname;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "coccoo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "coccoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 78;
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


exception_lineno = 78;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_a918417152888087bf3624b4df376b16;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_toolname);
tmp_operand_value_2 = par_toolname;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "coccoo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "coccoo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_8acafee58ba7ea70a4b46bc3b4c184ef;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 79;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coccoo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_token));
tmp_expression_value_4 = Nuitka_Cell_GET(par_token);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_expired);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 81;
type_description_1 = "coccoo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_logger);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_BLOCKED;
tmp_tuple_element_3 = mod_consts.const_str_digest_4a201342e94c6711bf1b00ffb928c9a6;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_toolname);
tmp_operand_value_3 = par_toolname;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "coccoo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "coccoo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_9834ed512f6327dbd3c5c58465b69427;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_toolname);
tmp_operand_value_4 = par_toolname;
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "coccoo";
    goto tuple_build_exception_4;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "coccoo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 83;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_PermissionError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coccoo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_logger);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_USETOOL;
CHECK_OBJECT(par_toolname);
tmp_format_value_5 = par_toolname;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 85;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
tmp_format_value_6 = Nuitka_Cell_GET(par_kwargs);
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "coccoo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_string_concat_values_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_args_element_value_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_dict_key_1 = mod_consts.const_str_plain_read_chunk;
tmp_closure_1[0] = par_kwargs;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_token;
Py_INCREF(tmp_closure_1[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__1_lambda(tstate, tmp_closure_1);

tmp_assign_source_1 = _PyDict_NewPresized( 6 );
{
struct Nuitka_CellObject *tmp_closure_2[3];
struct Nuitka_CellObject *tmp_closure_3[3];
struct Nuitka_CellObject *tmp_closure_4[3];
struct Nuitka_CellObject *tmp_closure_5[3];
struct Nuitka_CellObject *tmp_closure_6[3];
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_write_chunk;
tmp_closure_2[0] = par_kwargs;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = par_self;
Py_INCREF(tmp_closure_2[1]);
tmp_closure_2[2] = par_token;
Py_INCREF(tmp_closure_2[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__2_lambda(tstate, tmp_closure_2);

tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_append_chunk;
tmp_closure_3[0] = par_kwargs;
Py_INCREF(tmp_closure_3[0]);
tmp_closure_3[1] = par_self;
Py_INCREF(tmp_closure_3[1]);
tmp_closure_3[2] = par_token;
Py_INCREF(tmp_closure_3[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__3_lambda(tstate, tmp_closure_3);

tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_create_file;
tmp_closure_4[0] = par_kwargs;
Py_INCREF(tmp_closure_4[0]);
tmp_closure_4[1] = par_self;
Py_INCREF(tmp_closure_4[1]);
tmp_closure_4[2] = par_token;
Py_INCREF(tmp_closure_4[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__4_lambda(tstate, tmp_closure_4);

tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_delete_file;
tmp_closure_5[0] = par_kwargs;
Py_INCREF(tmp_closure_5[0]);
tmp_closure_5[1] = par_self;
Py_INCREF(tmp_closure_5[1]);
tmp_closure_5[2] = par_token;
Py_INCREF(tmp_closure_5[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__5_lambda(tstate, tmp_closure_5);

tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_list_files;
tmp_closure_6[0] = par_kwargs;
Py_INCREF(tmp_closure_6[0]);
tmp_closure_6[1] = par_self;
Py_INCREF(tmp_closure_6[1]);
tmp_closure_6[2] = par_token;
Py_INCREF(tmp_closure_6[2]);
tmp_dict_value_1 = MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__6_lambda(tstate, tmp_closure_6);

tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
assert(var_dispatch == NULL);
var_dispatch = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
CHECK_OBJECT(var_dispatch);
tmp_dict_arg_value_1 = var_dispatch;
CHECK_OBJECT(par_toolname);
tmp_key_value_1 = par_toolname;
tmp_called_value_4 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 97;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_2 = var_result;
tmp_cmp_expr_right_2 = Py_False;
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
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__prompt_terminate);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
tmp_expression_value_10 = Nuitka_Cell_GET(par_kwargs);
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
assert(!(tmp_called_value_6 == NULL));
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 101;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_filename_str_plain_unknown_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 101;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool->m_frame.f_lineno = 101;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "coccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool,
    type_description_1,
    par_self,
    par_toolname,
    par_token,
    par_kwargs,
    var_dispatch,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool == cache_frame_frame_ams$$$function__5_UseTool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool);
    cache_frame_frame_ams$$$function__5_UseTool = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool);

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
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_token);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
par_token = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
CHECK_OBJECT(var_dispatch);
CHECK_OBJECT(var_dispatch);
Py_DECREF(var_dispatch);
var_dispatch = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_token);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
par_token = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
Py_XDECREF(var_dispatch);
var_dispatch = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_toolname);
Py_DECREF(par_toolname);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_toolname);
Py_DECREF(par_toolname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__5_UseTool$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_30a0c80c8ce06046173373d1607a567f, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__1_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ReadChunk);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_2 = mod_consts.const_str_plain_chunk_key;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 89;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__1_lambda->m_frame.f_lineno = 89;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__1_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__1_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__1_lambda);

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


static PyObject *impl_ams$$$function__5_UseTool$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__2_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_64302019226d35b275df9d8e85a8a36e, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__2_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__2_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__2_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_WriteChunk);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_2 = mod_consts.const_str_plain_chunk_key;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_3 = mod_consts.const_str_plain_content;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 90;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__2_lambda->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__2_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__2_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__2_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__2_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__2_lambda);

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


static PyObject *impl_ams$$$function__5_UseTool$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__3_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_def8c9188bb5ee669d3437f7369d574f, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__3_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__3_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__3_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_AppendChunk);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_2 = mod_consts.const_str_plain_content;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 91;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__3_lambda->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__3_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__3_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__3_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__3_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__3_lambda);

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


static PyObject *impl_ams$$$function__5_UseTool$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__4_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_635a98b230e5dcebeab8c39d9a016d9c, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__4_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__4_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__4_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CreateFile);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__4_lambda->m_frame.f_lineno = 92;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_content_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 92;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__4_lambda->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__4_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__4_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__4_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__4_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__4_lambda);

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


static PyObject *impl_ams$$$function__5_UseTool$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__5_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_a241dc4b4debd70bb1cd156e7ac001be, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__5_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__5_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__5_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DeleteFile);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__5_lambda->m_frame.f_lineno = 93;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_chunk_key_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 93;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__5_lambda->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__5_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__5_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__5_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__5_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__5_lambda);

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


static PyObject *impl_ams$$$function__5_UseTool$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_ams$$$function__5_UseTool$$$function__6_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_8c12332ce1748f025631692699be9346, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda->m_type_description == NULL);
frame_frame_ams$$$function__5_UseTool$$$function__6_lambda = cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__5_UseTool$$$function__6_lambda);
assert(Py_REFCNT(frame_frame_ams$$$function__5_UseTool$$$function__6_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ListFiles);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__6_lambda->m_frame.f_lineno = 94;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_subpath_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__5_UseTool$$$function__6_lambda->m_frame.f_lineno = 94;
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


exception_lineno = 94;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__5_UseTool$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__5_UseTool$$$function__6_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__5_UseTool$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__5_UseTool$$$function__6_lambda,
    type_description_1,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__5_UseTool$$$function__6_lambda == cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda);
    cache_frame_frame_ams$$$function__5_UseTool$$$function__6_lambda = NULL;
}

assertFrameObject(frame_frame_ams$$$function__5_UseTool$$$function__6_lambda);

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


static PyObject *impl_ams$$$function__6_SpecialUse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_String = python_pars[1];
PyObject *par_ask_confirm = python_pars[2];
PyObject *var_answer = NULL;
PyObject *var_subprocess = NULL;
PyObject *var_result = NULL;
PyObject *var_output = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__6_SpecialUse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__6_SpecialUse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__6_SpecialUse)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__6_SpecialUse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__6_SpecialUse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__6_SpecialUse = MAKE_FUNCTION_FRAME(tstate, code_objects_19e06ed9a1fba758c0716021bf66dd06, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__6_SpecialUse->m_type_description == NULL);
frame_frame_ams$$$function__6_SpecialUse = cache_frame_frame_ams$$$function__6_SpecialUse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__6_SpecialUse);
assert(Py_REFCNT(frame_frame_ams$$$function__6_SpecialUse) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_logger);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_SPECIAL;
CHECK_OBJECT(par_String);
tmp_operand_value_1 = par_String;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_107b51cf04afbeb43a9f2f63a946e940;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_ask_confirm);
tmp_format_value_2 = par_ask_confirm;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 113;
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


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_ask_confirm);
tmp_truth_name_1 = CHECK_IF_TRUE(par_ask_confirm);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_console);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 116;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_cd2cd5d7e382568478c79069a660e18b_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_console);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_print);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_e8e03e0a2cb88289a64c21cd4be03f4d;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_String);
tmp_format_value_3 = par_String;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 117;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_console);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 118;
tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_input,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_86483e3113b4a9f88929b3a94edbfe90_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 118;
tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 118;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_answer == NULL);
var_answer = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_answer);
tmp_cmp_expr_left_1 = var_answer;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_y;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
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
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_logger);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 120;
tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_write,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_e739b5bd32fed6a6396c0c02cd97d031_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_return_value = mod_consts.const_str_plain_DENIED;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_1 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 124;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_subprocess == NULL);
var_subprocess = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_10 = var_subprocess;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_run);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_String);
tmp_kw_call_arg_value_0_1 = par_String;
tmp_kw_call_dict_value_0_1 = Py_True;
tmp_kw_call_dict_value_1_1 = Py_True;
tmp_kw_call_dict_value_2_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 131;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_root);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 131;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_3_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 131;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_4_1 = mod_consts.const_int_pos_30;
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 126;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_31b2e1f935d28c6eb1cf1305c607239d_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_result);
tmp_expression_value_13 = var_result;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_stdout);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_result);
tmp_expression_value_14 = var_result;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_stderr);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 134;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(var_output == NULL);
var_output = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_logger);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_SPECIAL;
tmp_tuple_element_3 = mod_consts.const_str_digest_2f1f8b5af8d94e8a56866128cc5d636e;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_1;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_output);
tmp_expression_value_17 = var_output;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_100_none;
tmp_format_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__6_SpecialUse, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__6_SpecialUse, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_18;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
CHECK_OBJECT(var_subprocess);
tmp_expression_value_18 = var_subprocess;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_TimeoutExpired);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = mod_consts.const_str_plain_TIMEOUT;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_5);
var_e = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_e);
tmp_format_value_5 = var_e;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_return_value == NULL));
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 125;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_ams$$$function__6_SpecialUse->m_frame)) {
        frame_frame_ams$$$function__6_SpecialUse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_3;
branch_end_4:;
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
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__6_SpecialUse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__6_SpecialUse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__6_SpecialUse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__6_SpecialUse,
    type_description_1,
    par_self,
    par_String,
    par_ask_confirm,
    var_answer,
    var_subprocess,
    var_result,
    var_output,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__6_SpecialUse == cache_frame_frame_ams$$$function__6_SpecialUse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__6_SpecialUse);
    cache_frame_frame_ams$$$function__6_SpecialUse = NULL;
}

assertFrameObject(frame_frame_ams$$$function__6_SpecialUse);

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
Py_XDECREF(var_answer);
var_answer = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_answer);
var_answer = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_output);
var_output = NULL;
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
CHECK_OBJECT(par_String);
Py_DECREF(par_String);
CHECK_OBJECT(par_ask_confirm);
Py_DECREF(par_ask_confirm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_String);
Py_DECREF(par_String);
CHECK_OBJECT(par_ask_confirm);
Py_DECREF(par_ask_confirm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__7__prompt_terminate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *var_answer = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__7__prompt_terminate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__7__prompt_terminate = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__7__prompt_terminate)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__7__prompt_terminate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__7__prompt_terminate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__7__prompt_terminate = MAKE_FUNCTION_FRAME(tstate, code_objects_1f80e58179c2811f56354b424c5db155, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__7__prompt_terminate->m_type_description == NULL);
frame_frame_ams$$$function__7__prompt_terminate = cache_frame_frame_ams$$$function__7__prompt_terminate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__7__prompt_terminate);
assert(Py_REFCNT(frame_frame_ams$$$function__7__prompt_terminate) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_console);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 145;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_84adc33577d660cfc0a6d00a55a187c2_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_console);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_print);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_b2f762b20cfa8eaae8aabf8427b7e2da;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_filename);
tmp_format_value_1 = par_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 146;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_console);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 147;
tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_input,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_dc4f3051ae387ffcb8c990cbfbdcab34_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 147;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 147;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_answer == NULL);
var_answer = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_answer);
tmp_cmp_expr_left_1 = var_answer;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_y;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_logger);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_TERMINATE;
tmp_tuple_element_2 = mod_consts.const_str_digest_6fda1af18dabd321eec9734bd04e8086;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_filename);
tmp_format_value_2 = par_filename;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__current_token);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 150;
type_description_1 = "ooo";
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
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__current_token);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 151;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_revoke);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_2:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_5;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__stop_event);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__7__prompt_terminate->m_frame.f_lineno = 152;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_set);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__7__prompt_terminate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__7__prompt_terminate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__7__prompt_terminate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__7__prompt_terminate,
    type_description_1,
    par_self,
    par_filename,
    var_answer
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__7__prompt_terminate == cache_frame_frame_ams$$$function__7__prompt_terminate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__7__prompt_terminate);
    cache_frame_frame_ams$$$function__7__prompt_terminate = NULL;
}

assertFrameObject(frame_frame_ams$$$function__7__prompt_terminate);

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
CHECK_OBJECT(var_answer);
CHECK_OBJECT(var_answer);
Py_DECREF(var_answer);
var_answer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_answer);
var_answer = NULL;
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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__8_Working(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_Yes = python_pars[1];
PyObject *par_message = python_pars[2];
struct Nuitka_FrameObject *frame_frame_ams$$$function__8_Working;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__8_Working = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__8_Working)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__8_Working);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__8_Working == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__8_Working = MAKE_FUNCTION_FRAME(tstate, code_objects_29d92b909196374edde56652c569750e, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__8_Working->m_type_description == NULL);
frame_frame_ams$$$function__8_Working = cache_frame_frame_ams$$$function__8_Working;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__8_Working);
assert(Py_REFCNT(frame_frame_ams$$$function__8_Working) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_Yes);
tmp_operand_value_1 = par_Yes;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__working, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stop_event);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__8_Working->m_frame.f_lineno = 160;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_WORKING;
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
frame_frame_ams$$$function__8_Working->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_write,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_console);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_print);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_05801f4515b5cdfdd95ae2f7e277aeb2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_message);
tmp_format_value_1 = par_message;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_51e07f0f03451d9993f9043a72dbd83f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_ams$$$function__8_Working->m_frame.f_lineno = 162;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__8_Working, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__8_Working->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__8_Working, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__8_Working,
    type_description_1,
    par_self,
    par_Yes,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__8_Working == cache_frame_frame_ams$$$function__8_Working) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__8_Working);
    cache_frame_frame_ams$$$function__8_Working = NULL;
}

assertFrameObject(frame_frame_ams$$$function__8_Working);

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
CHECK_OBJECT(par_Yes);
Py_DECREF(par_Yes);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_Yes);
Py_DECREF(par_Yes);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__9_WorkingStop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_Yes = python_pars[1];
struct Nuitka_FrameObject *frame_frame_ams$$$function__9_WorkingStop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__9_WorkingStop = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__9_WorkingStop)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__9_WorkingStop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__9_WorkingStop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__9_WorkingStop = MAKE_FUNCTION_FRAME(tstate, code_objects_9614ced17b43441794246f52f60cd5d5, module_ams, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__9_WorkingStop->m_type_description == NULL);
frame_frame_ams$$$function__9_WorkingStop = cache_frame_frame_ams$$$function__9_WorkingStop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__9_WorkingStop);
assert(Py_REFCNT(frame_frame_ams$$$function__9_WorkingStop) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_Yes);
tmp_operand_value_1 = par_Yes;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__working, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_logger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__9_WorkingStop->m_frame.f_lineno = 168;
tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_write,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_30ec296c53c8f7f7d6f35fc5f0004de1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_console);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__9_WorkingStop->m_frame.f_lineno = 169;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_58c75757917b7bf83f1b4ae28f0634ba_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pfps);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__9_WorkingStop->m_frame.f_lineno = 170;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_commit_session);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__9_WorkingStop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__9_WorkingStop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__9_WorkingStop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__9_WorkingStop,
    type_description_1,
    par_self,
    par_Yes
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__9_WorkingStop == cache_frame_frame_ams$$$function__9_WorkingStop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__9_WorkingStop);
    cache_frame_frame_ams$$$function__9_WorkingStop = NULL;
}

assertFrameObject(frame_frame_ams$$$function__9_WorkingStop);

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
CHECK_OBJECT(par_Yes);
Py_DECREF(par_Yes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_Yes);
Py_DECREF(par_Yes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__10_should_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_ams$$$function__10_should_stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__10_should_stop = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_ams$$$function__10_should_stop)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__10_should_stop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__10_should_stop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__10_should_stop = MAKE_FUNCTION_FRAME(tstate, code_objects_3c419f0c51f68485392044d7b1134d5d, module_ams, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__10_should_stop->m_type_description == NULL);
frame_frame_ams$$$function__10_should_stop = cache_frame_frame_ams$$$function__10_should_stop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__10_should_stop);
assert(Py_REFCNT(frame_frame_ams$$$function__10_should_stop) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__stop_event);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__10_should_stop->m_frame.f_lineno = 174;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_set);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__10_should_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__10_should_stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__10_should_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__10_should_stop,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__10_should_stop == cache_frame_frame_ams$$$function__10_should_stop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__10_should_stop);
    cache_frame_frame_ams$$$function__10_should_stop = NULL;
}

assertFrameObject(frame_frame_ams$$$function__10_should_stop);

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


static PyObject *impl_ams$$$function__11_printtoconsole(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *var_re = NULL;
PyObject *var_clean = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__11_printtoconsole;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__11_printtoconsole = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__11_printtoconsole)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__11_printtoconsole);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__11_printtoconsole == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__11_printtoconsole = MAKE_FUNCTION_FRAME(tstate, code_objects_1a1f8d3cb189288a1df12fffdbc1dfc5, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__11_printtoconsole->m_type_description == NULL);
frame_frame_ams$$$function__11_printtoconsole = cache_frame_frame_ams$$$function__11_printtoconsole;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__11_printtoconsole);
assert(Py_REFCNT(frame_frame_ams$$$function__11_printtoconsole) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_ams$$$function__11_printtoconsole->m_frame.f_lineno = 184;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_re == NULL);
var_re = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_re);
tmp_called_instance_1 = var_re;
tmp_args_element_value_1 = mod_consts.const_str_digest_94a8117ccedd69f1637f5da01beea9c2;
tmp_args_element_value_2 = const_str_empty;
CHECK_OBJECT(par_message);
tmp_args_element_value_3 = par_message;
frame_frame_ams$$$function__11_printtoconsole->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_sub,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_clean == NULL);
var_clean = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_clean);
tmp_expression_value_1 = var_clean;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2000_none;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_clean;
    assert(old != NULL);
    var_clean = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_CONSOLE;
CHECK_OBJECT(var_clean);
tmp_expression_value_4 = var_clean;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_80_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 188;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__11_printtoconsole->m_frame.f_lineno = 188;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_console);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_clean);
tmp_args_element_value_6 = var_clean;
frame_frame_ams$$$function__11_printtoconsole->m_frame.f_lineno = 189;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, const_str_plain_print, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__11_printtoconsole, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__11_printtoconsole->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__11_printtoconsole, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__11_printtoconsole,
    type_description_1,
    par_self,
    par_message,
    var_re,
    var_clean
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__11_printtoconsole == cache_frame_frame_ams$$$function__11_printtoconsole) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__11_printtoconsole);
    cache_frame_frame_ams$$$function__11_printtoconsole = NULL;
}

assertFrameObject(frame_frame_ams$$$function__11_printtoconsole);

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
CHECK_OBJECT(var_re);
CHECK_OBJECT(var_re);
Py_DECREF(var_re);
var_re = NULL;
CHECK_OBJECT(var_clean);
CHECK_OBJECT(var_clean);
Py_DECREF(var_clean);
var_clean = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_re);
var_re = NULL;
Py_XDECREF(var_clean);
var_clean = NULL;
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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ams$$$function__12_build_globals(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_builtins = NULL;
PyObject *var_g = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$function__12_build_globals;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_ams$$$function__12_build_globals = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = IMPORT_HARD_BUILTINS();
assert(!(tmp_assign_source_1 == NULL));
assert(var_builtins == NULL);
Py_INCREF(tmp_assign_source_1);
var_builtins = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_ams$$$function__12_build_globals)) {
    Py_XDECREF(cache_frame_frame_ams$$$function__12_build_globals);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_ams$$$function__12_build_globals == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_ams$$$function__12_build_globals = MAKE_FUNCTION_FRAME(tstate, code_objects_c05d1127827a5c327f2efec74edb1977, module_ams, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_ams$$$function__12_build_globals->m_type_description == NULL);
frame_frame_ams$$$function__12_build_globals = cache_frame_frame_ams$$$function__12_build_globals;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$function__12_build_globals);
assert(Py_REFCNT(frame_frame_ams$$$function__12_build_globals) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain___globals__;
tmp_dict_key_2 = mod_consts.const_str_plain_PathSandboxed;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SandboxPath);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_AMSlocation;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pfps);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
frame_frame_ams$$$function__12_build_globals->m_frame.f_lineno = 203;
tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_AMSLocation,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca;
tmp_expression_value_4 = module_var_accessor_ams$Permissions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ReadWrite);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_dict_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_assign_source_2 = _PyDict_NewPresized( 8 );
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_CheckOut;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_CheckOut);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UseTool;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_UseTool);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SpecialUse;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SpecialUse);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Working;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Working);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WorkingStop;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_WorkingStop);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_printtoconsole;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_printtoconsole);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PFPS;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_pfps);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
assert(var_g == NULL);
var_g = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_config);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_ams$$$function__12_build_globals->m_frame.f_lineno = 220;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_allow_print_false_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = IMPORT_HARD_BUILTINS();
assert(!(tmp_expression_value_15 == NULL));
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_print);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_g);
tmp_dictset_dict = var_g;
tmp_dictset_key = const_str_plain_print;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$function__12_build_globals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$function__12_build_globals->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$function__12_build_globals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$function__12_build_globals,
    type_description_1,
    par_self,
    var_builtins,
    var_g
);


// Release cached frame if used for exception.
if (frame_frame_ams$$$function__12_build_globals == cache_frame_frame_ams$$$function__12_build_globals) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_ams$$$function__12_build_globals);
    cache_frame_frame_ams$$$function__12_build_globals = NULL;
}

assertFrameObject(frame_frame_ams$$$function__12_build_globals);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_g);
tmp_return_value = var_g;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_builtins);
CHECK_OBJECT(var_builtins);
Py_DECREF(var_builtins);
var_builtins = NULL;
CHECK_OBJECT(var_g);
CHECK_OBJECT(var_g);
Py_DECREF(var_g);
var_g = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_builtins);
CHECK_OBJECT(var_builtins);
Py_DECREF(var_builtins);
var_builtins = NULL;
Py_XDECREF(var_g);
var_g = NULL;
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



static PyObject *MAKE_FUNCTION_ams$$$function__10_should_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__10_should_stop,
        mod_consts.const_str_plain_should_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_950d91986dfc57dd9fc05b0d5ac93304,
#endif
        code_objects_3c419f0c51f68485392044d7b1134d5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__11_printtoconsole(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__11_printtoconsole,
        mod_consts.const_str_plain_printtoconsole,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_258a075e1035b29414e92d85bd8dac96,
#endif
        code_objects_1a1f8d3cb189288a1df12fffdbc1dfc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        mod_consts.const_str_digest_c3eea2fa8fbfbc8e08007724bec8297a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__12_build_globals(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__12_build_globals,
        mod_consts.const_str_plain_build_globals,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f4549fcda5a4ef77b897eb869f5dc7e5,
#endif
        code_objects_c05d1127827a5c327f2efec74edb1977,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        mod_consts.const_str_digest_c4c1f67c83fa80f2f71cf47ac13b53b1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e4f14bf19b87682e83a6939d4753f47e,
#endif
        code_objects_8c7d0a932d8d16e0889553856df4e8f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__2_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__2_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_60881ad50df844aefa32b73e6add1dc1,
#endif
        code_objects_1bfbfe674b3924ee112be8bde6092761,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f86617073f7025a616a801b5ea5095c,
#endif
        code_objects_584962212fa3346efb0b5818041afbb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__4_CheckOut(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__4_CheckOut,
        mod_consts.const_str_plain_CheckOut,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_efbcd68bb135995df8d92349779c23bd,
#endif
        code_objects_3f0060290ea0ff746ad17dc7ed22e7de,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        mod_consts.const_str_digest_e96e264b917a6271087e8501203651fe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool,
        mod_consts.const_str_plain_UseTool,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8114c776294dc4ece636a48af276c1ff,
#endif
        code_objects_a1782aabdf51e352ad8f3c243098e810,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        mod_consts.const_str_digest_d11f3415c387bb3e9e46326e2beb9de1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_30a0c80c8ce06046173373d1607a567f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__2_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_64302019226d35b275df9d8e85a8a36e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__3_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_def8c9188bb5ee669d3437f7369d574f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__4_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_635a98b230e5dcebeab8c39d9a016d9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__5_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_a241dc4b4debd70bb1cd156e7ac001be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__5_UseTool$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__5_UseTool$$$function__6_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20a4fdc785d0bf89d3f95664f0898b3,
#endif
        code_objects_8c12332ce1748f025631692699be9346,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ams,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__6_SpecialUse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__6_SpecialUse,
        mod_consts.const_str_plain_SpecialUse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eaf6d93b3377e6ea9eae6c973bb6b12a,
#endif
        code_objects_19e06ed9a1fba758c0716021bf66dd06,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        mod_consts.const_str_digest_bda529dc3d1120a3252a32dfb692f5fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__7__prompt_terminate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__7__prompt_terminate,
        mod_consts.const_str_plain__prompt_terminate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fda9c2461b2333388f6c4dd3dcc85fd0,
#endif
        code_objects_1f80e58179c2811f56354b424c5db155,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__8_Working(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__8_Working,
        mod_consts.const_str_plain_Working,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2feebaa3ba422d0e1f82f76ebc1f2524,
#endif
        code_objects_29d92b909196374edde56652c569750e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ams$$$function__9_WorkingStop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ams$$$function__9_WorkingStop,
        mod_consts.const_str_plain_WorkingStop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b12ee0543cdd9180e35479c29df0d6df,
#endif
        code_objects_9614ced17b43441794246f52f60cd5d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_ams,
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

static function_impl_code const function_table_ams[] = {
impl_ams$$$function__5_UseTool$$$function__1_lambda,
impl_ams$$$function__5_UseTool$$$function__2_lambda,
impl_ams$$$function__5_UseTool$$$function__3_lambda,
impl_ams$$$function__5_UseTool$$$function__4_lambda,
impl_ams$$$function__5_UseTool$$$function__5_lambda,
impl_ams$$$function__5_UseTool$$$function__6_lambda,
impl_ams$$$function__1___init__,
impl_ams$$$function__2_write,
impl_ams$$$function__3___init__,
impl_ams$$$function__4_CheckOut,
impl_ams$$$function__5_UseTool,
impl_ams$$$function__6_SpecialUse,
impl_ams$$$function__7__prompt_terminate,
impl_ams$$$function__8_Working,
impl_ams$$$function__9_WorkingStop,
impl_ams$$$function__10_should_stop,
impl_ams$$$function__11_printtoconsole,
impl_ams$$$function__12_build_globals,
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

    return Nuitka_Function_GetFunctionState(function, function_table_ams);
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
        module_ams,
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
        function_table_ams,
        sizeof(function_table_ams) / sizeof(function_impl_code)
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
static char const *module_full_name = "ams";
#endif

// Internal entry point for module code.
PyObject *module_code_ams(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("ams");

    // Store the module for future use.
    module_ams = module;

    moduledict_ams = MODULE_DICT(module_ams);

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
        PRINT_STRING("ams: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("ams: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("ams: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "ams" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initams\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ams,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ams,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ams,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ams,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ams,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ams);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_ams);
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

        UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_ams;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_ams$$$class__1_AMSLogger_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_ams$$$class__1_AMSLogger_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_ams$$$class__2_AMS_32 = NULL;
struct Nuitka_FrameObject *frame_frame_ams$$$class__2_AMS_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_5b6f2ab193e9e5906b687ee9e81ae872;
UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_ams = MAKE_MODULE_FRAME(code_objects_7d009488a8c79a31c2496e753095a3dd, module_ams);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams);
assert(Py_REFCNT(frame_frame_ams) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_ams$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_ams$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_ams, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_1 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_ams->m_frame.f_lineno = 7;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_2 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_ams->m_frame.f_lineno = 8;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_ams->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_permissions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_5cbe6730e26f9d9a3feaa4fc202ee805_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_ams->m_frame.f_lineno = 12;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_AllowToken,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AllowToken);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AllowToken, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_Permissions,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Permissions);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_issue_token,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_issue_token);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_issue_token, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_notify;
tmp_globals_arg_value_5 = (PyObject *)moduledict_ams;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_PFPSNotify_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_ams->m_frame.f_lineno = 13;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_ams,
        mod_consts.const_str_plain_PFPSNotify,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PFPSNotify);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_ams$$$class__1_AMSLogger_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_plain_ams;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AMSLogger;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_ams$$$class__1_AMSLogger_2 = MAKE_CLASS_FRAME(tstate, code_objects_cb169250c21e90acbec763661cef8f17, module_ams, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$class__1_AMSLogger_2);
assert(Py_REFCNT(frame_frame_ams$$$class__1_AMSLogger_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_log_path;
tmp_dict_value_1 = module_var_accessor_ams$Path(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$class__1_AMSLogger_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$class__1_AMSLogger_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$class__1_AMSLogger_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$class__1_AMSLogger_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_ams$$$class__1_AMSLogger_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6558aa25dbc88a1f8fd1ee3694b28c93);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__2_write(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_log_path_tuple;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__1_AMSLogger_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AMSLogger;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_ams$$$class__1_AMSLogger_18;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_ams->m_frame.f_lineno = 18;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_16;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_15 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_ams$$$class__1_AMSLogger_18);
locals_ams$$$class__1_AMSLogger_18 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_ams$$$class__1_AMSLogger_18);
locals_ams$$$class__1_AMSLogger_18 = NULL;
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
exception_lineno = 18;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AMSLogger, tmp_assign_source_15);
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
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_ams$$$class__2_AMS_32 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_plain_ams;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AMS;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = PySet_New(mod_consts.const_set_36f4e1e3b55d3de422225c03f8d4529e);
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_ALLOWED_TOOLS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__3___init__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_ams$$$class__2_AMS_3 = MAKE_CLASS_FRAME(tstate, code_objects_f744634bf02a4ce09d77914c0f433f9d, module_ams, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_ams$$$class__2_AMS_3);
assert(Py_REFCNT(frame_frame_ams$$$class__2_AMS_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_permission_level;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_annotations_4 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_files;
tmp_dict_value_2 = (PyObject *)&PyList_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_ams$AllowToken(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AllowToken);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__4_CheckOut(tstate, tmp_defaults_1, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_CheckOut, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_toolname;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_token;
tmp_dict_value_3 = module_var_accessor_ams$AllowToken(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AllowToken);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__5_UseTool(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_UseTool, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c322582a94be6f1c83dc6b16a0bc8dc2);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__6_SpecialUse(tstate, tmp_defaults_2, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_SpecialUse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__7__prompt_terminate(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain__prompt_terminate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_8;
tmp_defaults_3 = mod_consts.const_tuple_true_str_empty_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_bb6f45c364091b3d2867eec06a56bb6a);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__8_Working(tstate, tmp_defaults_3, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_Working, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_9;
tmp_defaults_4 = mod_consts.const_tuple_true_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_5f8aeb6eefa3aac2ce2dceb335f3167e);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__9_WorkingStop(tstate, tmp_defaults_4, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_WorkingStop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_10;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_args_element_value_1 = MAKE_FUNCTION_ams$$$function__10_should_stop(tstate, tmp_annotations_10);

frame_frame_ams$$$class__2_AMS_3->m_frame.f_lineno = 172;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_should_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_ams$$$class__2_AMS_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams$$$class__2_AMS_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams$$$class__2_AMS_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_ams$$$class__2_AMS_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_ams$$$class__2_AMS_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e1769a7d1dc070a8e464bb43cd440650);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__11_printtoconsole(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_printtoconsole, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_ee14cdf8ba1ae0be46e973d8bd958445);

tmp_dictset_value = MAKE_FUNCTION_ams$$$function__12_build_globals(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain_build_globals, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_12fe2b597c965d127e9cacf730222a6b_tuple;
tmp_result = DICT_SET_ITEM(locals_ams$$$class__2_AMS_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_AMS;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_ams$$$class__2_AMS_32;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_ams->m_frame.f_lineno = 32;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_19 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_ams$$$class__2_AMS_32);
locals_ams$$$class__2_AMS_32 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_ams$$$class__2_AMS_32);
locals_ams$$$class__2_AMS_32 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 32;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_ams, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_ams, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_ams->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_ams, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_ams);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("ams", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "ams" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_ams);
    return module_ams;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ams, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("ams", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

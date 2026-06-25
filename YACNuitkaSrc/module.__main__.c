/* Generated code for Python module '__main__'
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



/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Path;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain_current;
PyObject *const_str_digest_d6ebc10db7cf6b910362e1de256127db;
PyObject *const_str_digest_28135e6d1ddba714cfe636a5b27a579b;
PyObject *const_str_digest_5c7f21c13d94d64077694c537cd35497;
PyObject *const_str_plain_pfps;
PyObject *const_tuple_str_plain_PFPS_tuple;
PyObject *const_str_plain_PFPS;
PyObject *const_str_plain_console;
PyObject *const_tuple_str_plain_console_tuple;
PyObject *const_str_plain_json;
PyObject *const_str_plain_cwd;
PyObject *const_str_plain_makedirs;
PyObject *const_dict_38cc759624a6ffddab8d9f1c49c4ccac;
PyObject *const_str_plain_RegisterProject;
PyObject *const_str_plain_role;
PyObject *const_str_plain_allow_print;
PyObject *const_list_0afdb5bab122199141914962fd1d7da1_list;
PyObject *const_list_f7aca363a93505afbfee4c432aeda97a_list;
PyObject *const_tuple_4037ea0aad7dbe3ce49ba64c618f3179_tuple;
PyObject *const_str_plain_model;
PyObject *const_str_plain_config;
PyObject *const_str_plain_sandbox_json;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain_dump;
PyObject *const_dict_38a1dad6291f8c2b00664c08bdb18de6;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_e47240192221cfdbdfbbd246dcd68301;
PyObject *const_str_digest_35e705edfe5cc2b3a95891bff64b5086;
PyObject *const_str_digest_6f5563786e35eb344b95a004dbf98717;
PyObject *const_str_digest_83e7908ff56c999da4e850fa06ca758e;
PyObject *const_str_plain_agent;
PyObject *const_tuple_str_plain_run_agent_tuple;
PyObject *const_str_plain_run_agent;
PyObject *const_tuple_str_plain_console_str_plain_print_banner_tuple;
PyObject *const_str_plain_print_banner;
PyObject *const_str_plain_find_project_root;
PyObject *const_str_plain_LoadProject;
PyObject *const_tuple_str_plain_model_str_plain_claude_tuple;
PyObject *const_str_plain_prompt;
PyObject *const_tuple_str_plain_role_str_plain_Editor_tuple;
PyObject *const_tuple_str_plain_role_str_plain_model_tuple;
PyObject *const_str_plain_AMSLocation;
PyObject *const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple;
PyObject *const_str_digest_7a72cfbef352f6d1a96a53a9022dd875;
PyObject *const_tuple_str_digest_d1f167911b60039d6c46f814e964f2e5_tuple;
PyObject *const_str_plain_read_text;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_str_plain_encoding_tuple;
PyObject *const_str_plain_permissions;
PyObject *const_tuple_str_plain_issue_token_tuple;
PyObject *const_str_plain_issue_token;
PyObject *const_str_plain_ListFiles;
PyObject *const_tuple_str_plain_Viewer_str_plain_status_tuple;
PyObject *const_str_digest_4b960c851c227f58a58b43484d81d4fd;
PyObject *const_str_digest_77efc332079aff8d9c4e4e7e0aec79f5;
PyObject *const_str_digest_da24e1f59a0590be257f7a4f69d3329a;
PyObject *const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyObject *const_str_plain_Rollback;
PyObject *const_str_digest_0bd44a155b6d72e1380616294a702c95;
PyObject *const_tuple_str_digest_21d85fcaef5e5fcd197c40a73f9f2d15_tuple;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_write_text;
PyObject *const_str_plain_dumps;
PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
PyObject *const_str_digest_a43487be909ba62f09d61016b03ad06a;
PyObject *const_str_digest_7af63cc7791923ded38d5710216c8b8a;
PyObject *const_tuple_str_plain_clear_api_key_tuple;
PyObject *const_str_plain_clear_api_key;
PyObject *const_str_plain_provider;
PyObject *const_str_plain_argv;
PyObject *const_str_plain_tui;
PyObject *const_tuple_str_plain_run_tui_tuple;
PyObject *const_str_plain_run_tui;
PyObject *const_str_plain_argparse;
PyObject *const_str_plain_ArgumentParser;
PyObject *const_tuple_str_plain_yac_str_plain_YourAssistantCoder_tuple;
PyObject *const_tuple_str_plain_prog_str_plain_description_tuple;
PyObject *const_str_plain_add_subparsers;
PyObject *const_tuple_str_plain_command_tuple;
PyObject *const_tuple_str_plain_dest_tuple;
PyObject *const_str_plain_add_parser;
PyObject *const_tuple_str_plain_init_tuple;
PyObject *const_str_plain_add_argument;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_none_tuple;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_tuple_74bfa6194ad2c25b2f9d1c2631abb3d3_tuple;
PyObject *const_tuple_str_plain_default_str_plain_choices_tuple;
PyObject *const_tuple_ed948dfef325e8b8ca03628eb5e3407d_tuple;
PyObject *const_tuple_e9b71edccddbe17fa81c642d2e0f8687_tuple;
PyObject *const_tuple_str_plain_action_tuple;
PyObject *const_tuple_str_plain_run_tuple;
PyObject *const_tuple_str_plain_prompt_tuple;
PyObject *const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple;
PyObject *const_tuple_cfff2c27c33fad6cbe835b12d750e863_tuple;
PyObject *const_tuple_str_plain_log_tuple;
PyObject *const_tuple_str_plain_status_tuple;
PyObject *const_tuple_str_plain_rollback_tuple;
PyObject *const_tuple_str_plain_file_tuple;
PyObject *const_tuple_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67_tuple;
PyObject *const_tuple_81702dbdce45a0f67a78d35b78feab01_tuple;
PyObject *const_tuple_0ded9061cfbd5123dfdea87aae1a4f4c_tuple;
PyObject *const_tuple_str_plain_help_tuple;
PyObject *const_tuple_str_plain_model_list_1fda540c9694bd9de50dfc3384bd7186_list_tuple;
PyObject *const_tuple_str_plain_choices_tuple;
PyObject *const_tuple_0beae99a7b61acf7552cb2493c14ca0f_tuple;
PyObject *const_str_plain_parse_args;
PyObject *const_str_plain_init;
PyObject *const_str_plain_cmd_init;
PyObject *const_str_plain_run;
PyObject *const_str_plain_cmd_run;
PyObject *const_str_plain_log;
PyObject *const_str_plain_cmd_log;
PyObject *const_str_plain_status;
PyObject *const_str_plain_cmd_status;
PyObject *const_str_plain_rollback;
PyObject *const_str_plain_cmd_rollback;
PyObject *const_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67;
PyObject *const_str_plain_cmd_key_clear;
PyObject *const_str_digest_2aa2a7d97d95fb59b892cb9a37375d78;
PyObject *const_str_plain_cmd_edit_role;
PyObject *const_str_plain_command;
PyObject *const_str_plain___mro_entries__;
PyObject *const_str_plain_bases;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
PyObject *const_str_plain_called;
PyObject *const_str_plain_star_arg_dict;
PyObject *const_str_plain_kw;
PyObject *const_str_digest_8a6c35ba3b096ed9004e3c14a471c221;
PyObject *const_str_digest_a5b388d0466ac5679e81bebee5445fa7;
PyObject *const_str_plain_star_arg_list;
PyObject *const_str_digest_b43288cd02ecaa696bf885c646efd9ff;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_os;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_dict_c91f895e826ff6e18cd6b1523a708a49;
PyObject *const_str_plain_return;
PyObject *const_str_plain_get_script_dir;
PyObject *const_str_plain_main;
PyObject *const_str_digest_9277b276eed6e9b02dca3edb00af9bab;
PyObject *const_str_angle_module;
PyObject *const_tuple_c31862296ce5fd207febbaaf4af838e6_tuple;
PyObject *const_tuple_83601331964a8cd92588d598ab657a65_tuple;
PyObject *const_tuple_str_plain_args_str_plain_clear_api_key_tuple;
PyObject *const_tuple_cf428fc895dce25e3a3ff1fb75bf41fd_tuple;
PyObject *const_tuple_bc092fa1085fea56fe52dedb388f42e9_tuple;
PyObject *const_tuple_da331bc60ccbada78ad3789ab2d50ac7_tuple;
PyObject *const_tuple_711de3b5f206af39e51fd762a2b2c238_tuple;
PyObject *const_tuple_str_plain_start_str_plain_current_str_plain_parent_tuple;
PyObject *const_tuple_0565aeec7976601f421f72e5ca99afed_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[157];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("__main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_current);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6ebc10db7cf6b910362e1de256127db);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_28135e6d1ddba714cfe636a5b27a579b);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c7f21c13d94d64077694c537cd35497);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_pfps);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPS_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_console);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_cwd);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_38cc759624a6ffddab8d9f1c49c4ccac);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_RegisterProject);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_print);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_list_0afdb5bab122199141914962fd1d7da1_list);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_list_f7aca363a93505afbfee4c432aeda97a_list);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_4037ea0aad7dbe3ce49ba64c618f3179_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_sandbox_json);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_38a1dad6291f8c2b00664c08bdb18de6);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_e47240192221cfdbdfbbd246dcd68301);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_35e705edfe5cc2b3a95891bff64b5086);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f5563786e35eb344b95a004dbf98717);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_83e7908ff56c999da4e850fa06ca758e);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_agent);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_agent_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_agent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_str_plain_print_banner_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_print_banner);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_project_root);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadProject);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_claude_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_Editor_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_model_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLocation);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1f167911b60039d6c46f814e964f2e5_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_text);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_permissions);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_issue_token_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_issue_token);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Viewer_str_plain_status_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b960c851c227f58a58b43484d81d4fd);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_77efc332079aff8d9c4e4e7e0aec79f5);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_da24e1f59a0590be257f7a4f69d3329a);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Rollback);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bd44a155b6d72e1380616294a702c95);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21d85fcaef5e5fcd197c40a73f9f2d15_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_text);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_a43487be909ba62f09d61016b03ad06a);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_7af63cc7791923ded38d5710216c8b8a);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clear_api_key_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_api_key);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_provider);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_argv);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_tui);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_tui_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_tui);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_argparse);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArgumentParser);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_yac_str_plain_YourAssistantCoder_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prog_str_plain_description_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_subparsers);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dest_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_parser);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_argument);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_none_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_74bfa6194ad2c25b2f9d1c2631abb3d3_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_ed948dfef325e8b8ca03628eb5e3407d_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_e9b71edccddbe17fa81c642d2e0f8687_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_action_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_cfff2c27c33fad6cbe835b12d750e863_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rollback_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_81702dbdce45a0f67a78d35b78feab01_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_0ded9061cfbd5123dfdea87aae1a4f4c_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_list_1fda540c9694bd9de50dfc3384bd7186_list_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_choices_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_0beae99a7b61acf7552cb2493c14ca0f_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_args);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_init);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_init);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_run);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_log);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_status);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_rollback);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_rollback);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_key_clear);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aa2a7d97d95fb59b892cb9a37375d78);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_edit_role);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_command);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___mro_entries__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_bases);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_9816e8d1552296af90d250823c964059);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_called);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_dict);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_kw);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a6c35ba3b096ed9004e3c14a471c221);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5b388d0466ac5679e81bebee5445fa7);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_list);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_b43288cd02ecaa696bf885c646efd9ff);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_c91f895e826ff6e18cd6b1523a708a49);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_script_dir);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_main);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_9277b276eed6e9b02dca3edb00af9bab);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_angle_module);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_c31862296ce5fd207febbaaf4af838e6_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_83601331964a8cd92588d598ab657a65_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_clear_api_key_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_cf428fc895dce25e3a3ff1fb75bf41fd_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_bc092fa1085fea56fe52dedb388f42e9_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_da331bc60ccbada78ad3789ab2d50ac7_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_711de3b5f206af39e51fd762a2b2c238_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_current_str_plain_parent_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_0565aeec7976601f421f72e5ca99afed_tuple);
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_current));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6ebc10db7cf6b910362e1de256127db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6ebc10db7cf6b910362e1de256127db);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_28135e6d1ddba714cfe636a5b27a579b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28135e6d1ddba714cfe636a5b27a579b);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c7f21c13d94d64077694c537cd35497));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c7f21c13d94d64077694c537cd35497);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_pfps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pfps);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PFPS_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PFPS);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_console);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_console_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_cwd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cwd);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_makedirs);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_38cc759624a6ffddab8d9f1c49c4ccac));
CHECK_OBJECT_DEEP(mod_consts.const_dict_38cc759624a6ffddab8d9f1c49c4ccac);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_RegisterProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RegisterProject);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_print));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow_print);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_list_0afdb5bab122199141914962fd1d7da1_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_0afdb5bab122199141914962fd1d7da1_list);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_list_f7aca363a93505afbfee4c432aeda97a_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_f7aca363a93505afbfee4c432aeda97a_list);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_4037ea0aad7dbe3ce49ba64c618f3179_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4037ea0aad7dbe3ce49ba64c618f3179_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_sandbox_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sandbox_json);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_38a1dad6291f8c2b00664c08bdb18de6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_38a1dad6291f8c2b00664c08bdb18de6);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_e47240192221cfdbdfbbd246dcd68301));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e47240192221cfdbdfbbd246dcd68301);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_35e705edfe5cc2b3a95891bff64b5086));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35e705edfe5cc2b3a95891bff64b5086);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f5563786e35eb344b95a004dbf98717));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f5563786e35eb344b95a004dbf98717);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_83e7908ff56c999da4e850fa06ca758e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83e7908ff56c999da4e850fa06ca758e);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_agent);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_agent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_run_agent_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_agent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_str_plain_print_banner_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_console_str_plain_print_banner_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_print_banner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_print_banner);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_project_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_project_root);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadProject);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_claude_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_str_plain_claude_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_Editor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_role_str_plain_Editor_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_role_str_plain_model_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMSLocation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMSLocation);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1f167911b60039d6c46f814e964f2e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d1f167911b60039d6c46f814e964f2e5_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_text);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encoding_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_permissions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permissions);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_issue_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_issue_token_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_issue_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issue_token);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ListFiles);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Viewer_str_plain_status_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Viewer_str_plain_status_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b960c851c227f58a58b43484d81d4fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b960c851c227f58a58b43484d81d4fd);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_77efc332079aff8d9c4e4e7e0aec79f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77efc332079aff8d9c4e4e7e0aec79f5);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_da24e1f59a0590be257f7a4f69d3329a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da24e1f59a0590be257f7a4f69d3329a);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Rollback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Rollback);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bd44a155b6d72e1380616294a702c95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bd44a155b6d72e1380616294a702c95);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21d85fcaef5e5fcd197c40a73f9f2d15_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_21d85fcaef5e5fcd197c40a73f9f2d15_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_text);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_a43487be909ba62f09d61016b03ad06a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a43487be909ba62f09d61016b03ad06a);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_7af63cc7791923ded38d5710216c8b8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7af63cc7791923ded38d5710216c8b8a);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clear_api_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_clear_api_key_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_api_key);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_provider);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_argv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argv);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_tui));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tui);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_tui_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_run_tui_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_tui));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_tui);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_argparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argparse);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArgumentParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArgumentParser);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_yac_str_plain_YourAssistantCoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_yac_str_plain_YourAssistantCoder_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prog_str_plain_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prog_str_plain_description_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_subparsers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_subparsers);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dest_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dest_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_parser);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_init_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_argument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_argument);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_none_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_74bfa6194ad2c25b2f9d1c2631abb3d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74bfa6194ad2c25b2f9d1c2631abb3d3_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_ed948dfef325e8b8ca03628eb5e3407d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ed948dfef325e8b8ca03628eb5e3407d_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_e9b71edccddbe17fa81c642d2e0f8687_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9b71edccddbe17fa81c642d2e0f8687_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_action_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_action_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_run_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prompt_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_cfff2c27c33fad6cbe835b12d750e863_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cfff2c27c33fad6cbe835b12d750e863_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_log_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_status_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rollback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rollback_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_81702dbdce45a0f67a78d35b78feab01_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_81702dbdce45a0f67a78d35b78feab01_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_0ded9061cfbd5123dfdea87aae1a4f4c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0ded9061cfbd5123dfdea87aae1a4f4c_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_help_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_list_1fda540c9694bd9de50dfc3384bd7186_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_list_1fda540c9694bd9de50dfc3384bd7186_list_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_choices_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_choices_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_0beae99a7b61acf7552cb2493c14ca0f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0beae99a7b61acf7552cb2493c14ca0f_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_args);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_init);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_init);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_run);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_log);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_status);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_rollback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rollback);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_rollback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_rollback);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_key_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_key_clear);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aa2a7d97d95fb59b892cb9a37375d78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2aa2a7d97d95fb59b892cb9a37375d78);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_edit_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cmd_edit_role);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_command);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___mro_entries__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mro_entries__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_bases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bases);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_9816e8d1552296af90d250823c964059));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9816e8d1552296af90d250823c964059);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_called));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_called);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_star_arg_dict);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_kw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kw);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a6c35ba3b096ed9004e3c14a471c221));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a6c35ba3b096ed9004e3c14a471c221);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5b388d0466ac5679e81bebee5445fa7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5b388d0466ac5679e81bebee5445fa7);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_star_arg_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_star_arg_list);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_b43288cd02ecaa696bf885c646efd9ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b43288cd02ecaa696bf885c646efd9ff);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_c91f895e826ff6e18cd6b1523a708a49));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c91f895e826ff6e18cd6b1523a708a49);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_script_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_script_dir);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_main));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_main);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_9277b276eed6e9b02dca3edb00af9bab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9277b276eed6e9b02dca3edb00af9bab);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_angle_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_module);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_c31862296ce5fd207febbaaf4af838e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c31862296ce5fd207febbaaf4af838e6_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_83601331964a8cd92588d598ab657a65_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_83601331964a8cd92588d598ab657a65_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_clear_api_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_clear_api_key_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_cf428fc895dce25e3a3ff1fb75bf41fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cf428fc895dce25e3a3ff1fb75bf41fd_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_bc092fa1085fea56fe52dedb388f42e9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bc092fa1085fea56fe52dedb388f42e9_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_da331bc60ccbada78ad3789ab2d50ac7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_da331bc60ccbada78ad3789ab2d50ac7_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_711de3b5f206af39e51fd762a2b2c238_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_711de3b5f206af39e51fd762a2b2c238_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_current_str_plain_parent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_start_str_plain_current_str_plain_parent_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_0565aeec7976601f421f72e5ca99afed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0565aeec7976601f421f72e5ca99afed_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor___main__$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor___main__$__file__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___file__);
    }

    return result;
}

static PyObject *module_var_accessor___main__$argparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_argparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_argparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_argparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_argparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_argparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_argparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_argparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_argparse);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_edit_role(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_edit_role);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_edit_role);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_edit_role, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_edit_role);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_edit_role, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_edit_role);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_edit_role);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_edit_role);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_init(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_init);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_init);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_init, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_init);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_init, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_init);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_init);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_init);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_key_clear(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_key_clear);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_key_clear);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_key_clear, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_key_clear);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_key_clear, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_key_clear);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_key_clear);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_key_clear);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_log);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_rollback(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_rollback);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_rollback);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_rollback, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_rollback);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_rollback, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_rollback);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_rollback);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_rollback);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_run(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_run);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_run);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_run, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_run);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_run, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_run);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_run);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_run);
    }

    return result;
}

static PyObject *module_var_accessor___main__$cmd_status(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_status);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_status);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_status, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cmd_status);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cmd_status, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_status);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_status);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_status);
    }

    return result;
}

static PyObject *module_var_accessor___main__$find_project_root(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_find_project_root);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_project_root);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_project_root, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_project_root);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_project_root, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_find_project_root);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_find_project_root);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_find_project_root);
    }

    return result;
}

static PyObject *module_var_accessor___main__$main(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict___main__->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict___main__->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_main);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict___main__->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_main);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_main, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_main);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_main, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_main);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_main);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_main);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1310a677e9370d74ccbe5d440ebd33bd;
static PyCodeObject *code_objects_e01c7a498e1e4a7d0036967197aa4774;
static PyCodeObject *code_objects_a94a9cb38bb0fb6a35d0ee4828358179;
static PyCodeObject *code_objects_76bbae8d1728315698316c7a074f3333;
static PyCodeObject *code_objects_c28c40d139bbca3b45eaac57491329a6;
static PyCodeObject *code_objects_20ce3c01483f85825563063487cf66ae;
static PyCodeObject *code_objects_8fe6a8bc0f9513018ec0cc4e14ca56b4;
static PyCodeObject *code_objects_9ac6167ecda31c0d0a925d5e48dc0f33;
static PyCodeObject *code_objects_287b4b142ebf66df76e90f88ccfa9d1a;
static PyCodeObject *code_objects_f40050b2e56ddfa1cbe2985430d06ebb;
static PyCodeObject *code_objects_c62c8b2f0ec35fb13941a9cfb183ac9c;
/* For use in "MainProgram.c". */
PyCodeObject *code_objects_main = NULL;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9277b276eed6e9b02dca3edb00af9bab); CHECK_OBJECT(module_filename_obj);
code_objects_1310a677e9370d74ccbe5d440ebd33bd = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_angle_module, mod_consts.const_str_angle_module, NULL, NULL, 0, 0, 0);
code_objects_main = code_objects_1310a677e9370d74ccbe5d440ebd33bd;
code_objects_e01c7a498e1e4a7d0036967197aa4774 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_edit_role, mod_consts.const_str_plain_cmd_edit_role, mod_consts.const_tuple_c31862296ce5fd207febbaaf4af838e6_tuple, NULL, 1, 0, 0);
code_objects_a94a9cb38bb0fb6a35d0ee4828358179 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_init, mod_consts.const_str_plain_cmd_init, mod_consts.const_tuple_83601331964a8cd92588d598ab657a65_tuple, NULL, 1, 0, 0);
code_objects_76bbae8d1728315698316c7a074f3333 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_key_clear, mod_consts.const_str_plain_cmd_key_clear, mod_consts.const_tuple_str_plain_args_str_plain_clear_api_key_tuple, NULL, 1, 0, 0);
code_objects_c28c40d139bbca3b45eaac57491329a6 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_log, mod_consts.const_str_plain_cmd_log, mod_consts.const_tuple_cf428fc895dce25e3a3ff1fb75bf41fd_tuple, NULL, 1, 0, 0);
code_objects_20ce3c01483f85825563063487cf66ae = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_rollback, mod_consts.const_str_plain_cmd_rollback, mod_consts.const_tuple_bc092fa1085fea56fe52dedb388f42e9_tuple, NULL, 1, 0, 0);
code_objects_8fe6a8bc0f9513018ec0cc4e14ca56b4 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_run, mod_consts.const_str_plain_cmd_run, mod_consts.const_tuple_da331bc60ccbada78ad3789ab2d50ac7_tuple, NULL, 1, 0, 0);
code_objects_9ac6167ecda31c0d0a925d5e48dc0f33 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cmd_status, mod_consts.const_str_plain_cmd_status, mod_consts.const_tuple_711de3b5f206af39e51fd762a2b2c238_tuple, NULL, 1, 0, 0);
code_objects_287b4b142ebf66df76e90f88ccfa9d1a = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_find_project_root, mod_consts.const_str_plain_find_project_root, mod_consts.const_tuple_str_plain_start_str_plain_current_str_plain_parent_tuple, NULL, 1, 0, 0);
code_objects_f40050b2e56ddfa1cbe2985430d06ebb = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_script_dir, mod_consts.const_str_plain_get_script_dir, NULL, NULL, 0, 0, 0);
code_objects_c62c8b2f0ec35fb13941a9cfb183ac9c = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_main, mod_consts.const_str_plain_main, mod_consts.const_tuple_0565aeec7976601f421f72e5ca99afed_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$helper_function_get_callable_name_desc(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_set(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION___main__$$$function__10_main(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__1_find_project_root(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION___main__$$$function__2_get_script_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION___main__$$$function__3_cmd_init(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__4_cmd_run(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__5_cmd_log(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__6_cmd_status(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__7_cmd_rollback(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__8_cmd_edit_role(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION___main__$$$function__9_cmd_key_clear(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl___main__$$$function__1_find_project_root(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_start = python_pars[0];
PyObject *var_current = NULL;
PyObject *var_parent = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__1_find_project_root;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__1_find_project_root = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__1_find_project_root)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__1_find_project_root);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__1_find_project_root == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__1_find_project_root = MAKE_FUNCTION_FRAME(tstate, code_objects_287b4b142ebf66df76e90f88ccfa9d1a, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__1_find_project_root->m_type_description == NULL);
frame_frame___main__$$$function__1_find_project_root = cache_frame_frame___main__$$$function__1_find_project_root;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__1_find_project_root);
assert(Py_REFCNT(frame_frame___main__$$$function__1_find_project_root) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_start);
tmp_args_element_value_1 = par_start;
frame_frame___main__$$$function__1_find_project_root->m_frame.f_lineno = 16;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__1_find_project_root->m_frame.f_lineno = 16;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_current == NULL);
var_current = tmp_assign_source_1;
}
loop_start_1:;
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
if (var_current == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_2 = var_current;
tmp_truediv_expr_right_2 = mod_consts.const_str_digest_d6ebc10db7cf6b910362e1de256127db;
tmp_truediv_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_28135e6d1ddba714cfe636a5b27a579b;
tmp_called_instance_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__1_find_project_root->m_frame.f_lineno = 18;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_exists);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 18;
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
PyObject *tmp_unicode_arg_1;
if (var_current == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 19;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_unicode_arg_1 = var_current;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
if (var_current == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = var_current;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_parent);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_parent;
    var_parent = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_parent);
tmp_cmp_expr_left_1 = var_parent;
if (var_current == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = var_current;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
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
PyObject *tmp_unicode_arg_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_start);
tmp_args_element_value_2 = par_start;
frame_frame___main__$$$function__1_find_project_root->m_frame.f_lineno = 22;
tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__1_find_project_root->m_frame.f_lineno = 22;
tmp_unicode_arg_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_unicode_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_2);
CHECK_OBJECT(tmp_unicode_arg_2);
Py_DECREF(tmp_unicode_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_parent);
tmp_assign_source_3 = var_parent;
{
    PyObject *old = var_current;
    var_current = tmp_assign_source_3;
    Py_INCREF(var_current);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__1_find_project_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__1_find_project_root->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__1_find_project_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__1_find_project_root,
    type_description_1,
    par_start,
    var_current,
    var_parent
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__1_find_project_root == cache_frame_frame___main__$$$function__1_find_project_root) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__1_find_project_root);
    cache_frame_frame___main__$$$function__1_find_project_root = NULL;
}

assertFrameObject(frame_frame___main__$$$function__1_find_project_root);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_parent);
var_parent = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_parent);
var_parent = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_start);
Py_DECREF(par_start);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__2_get_script_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame___main__$$$function__2_get_script_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__2_get_script_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame___main__$$$function__2_get_script_dir)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__2_get_script_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__2_get_script_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__2_get_script_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_f40050b2e56ddfa1cbe2985430d06ebb, module___main__, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__2_get_script_dir->m_type_description == NULL);
frame_frame___main__$$$function__2_get_script_dir = cache_frame_frame___main__$$$function__2_get_script_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__2_get_script_dir);
assert(Py_REFCNT(frame_frame___main__$$$function__2_get_script_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor___main__$__file__(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__2_get_script_dir->m_frame.f_lineno = 28;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__2_get_script_dir->m_frame.f_lineno = 28;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_parent);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__2_get_script_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__2_get_script_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__2_get_script_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__2_get_script_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__2_get_script_dir == cache_frame_frame___main__$$$function__2_get_script_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__2_get_script_dir);
    cache_frame_frame___main__$$$function__2_get_script_dir = NULL;
}

assertFrameObject(frame_frame___main__$$$function__2_get_script_dir);

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


static PyObject *impl___main__$$$function__3_cmd_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_PFPS = NULL;
PyObject *var_console = NULL;
PyObject *var_json = NULL;
PyObject *var_path = NULL;
PyObject *var_pfps = NULL;
PyObject *var_f = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__3_cmd_init;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__3_cmd_init = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__3_cmd_init)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__3_cmd_init);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__3_cmd_init == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__3_cmd_init = MAKE_FUNCTION_FRAME(tstate, code_objects_a94a9cb38bb0fb6a35d0ee4828358179, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__3_cmd_init->m_type_description == NULL);
frame_frame___main__$$$function__3_cmd_init = cache_frame_frame___main__$$$function__3_cmd_init;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__3_cmd_init);
assert(Py_REFCNT(frame_frame___main__$$$function__3_cmd_init) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 34;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 35;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_console == NULL);
var_console = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 36;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_json == NULL);
var_json = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 39;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 39;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_2 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 39;
tmp_unicode_arg_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
CHECK_OBJECT(tmp_unicode_arg_2);
Py_DECREF(tmp_unicode_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_path == NULL);
var_path = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_makedirs);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_tuple_element_1 = var_path;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_38cc759624a6ffddab8d9f1c49c4ccac);
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 40;
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


exception_lineno = 40;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
CHECK_OBJECT(var_PFPS);
tmp_expression_value_4 = var_PFPS;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_RegisterProject);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_5 = par_args;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 43;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_kw_call_value_1_1 = var_path;
CHECK_OBJECT(par_args);
tmp_expression_value_6 = par_args;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_role);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 45;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_7 = par_args;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_allow_print);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 46;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_1 = MAKE_LIST4(tstate, mod_consts.const_list_0afdb5bab122199141914962fd1d7da1_list);
tmp_kw_call_value_5_1 = MAKE_LIST4(tstate, mod_consts.const_list_f7aca363a93505afbfee4c432aeda97a_list);
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 42;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_4037ea0aad7dbe3ce49ba64c618f3179_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_5;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_args);
tmp_expression_value_8 = par_args;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_model);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pfps);
tmp_expression_value_9 = var_pfps;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_config);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 50;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
CHECK_OBJECT(var_pfps);
tmp_expression_value_10 = var_pfps;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sandbox_json);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_open_mode_1 = const_str_plain_w;
tmp_open_encoding_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_6 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_11 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_11, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 51;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_12 = tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_12, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_10 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_10);
var_f = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(var_json);
tmp_expression_value_13 = var_json;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_dump);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_pfps);
tmp_expression_value_14 = var_pfps;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_config);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 52;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_f);
tmp_tuple_element_2 = var_f;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_38a1dad6291f8c2b00664c08bdb18de6);
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 52;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__3_cmd_init, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__3_cmd_init, exception_keeper_lineno_1);
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
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 51;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 51;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame___main__$$$function__3_cmd_init->m_frame)) {
        frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 51;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame___main__$$$function__3_cmd_init->m_frame)) {
        frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
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
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 51;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
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
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 51;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
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
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_console);
tmp_expression_value_15 = var_console;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_print);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_e47240192221cfdbdfbbd246dcd68301;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_args);
tmp_expression_value_16 = par_args;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_35e705edfe5cc2b3a95891bff64b5086;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_path);
tmp_format_value_2 = var_path;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_6f5563786e35eb344b95a004dbf98717;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_3);
CHECK_OBJECT(par_args);
tmp_expression_value_17 = par_args;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_model);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_83e7908ff56c999da4e850fa06ca758e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame___main__$$$function__3_cmd_init->m_frame.f_lineno = 54;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__3_cmd_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__3_cmd_init->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__3_cmd_init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__3_cmd_init,
    type_description_1,
    par_args,
    var_PFPS,
    var_console,
    var_json,
    var_path,
    var_pfps,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__3_cmd_init == cache_frame_frame___main__$$$function__3_cmd_init) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__3_cmd_init);
    cache_frame_frame___main__$$$function__3_cmd_init = NULL;
}

assertFrameObject(frame_frame___main__$$$function__3_cmd_init);

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
CHECK_OBJECT(var_PFPS);
CHECK_OBJECT(var_PFPS);
Py_DECREF(var_PFPS);
var_PFPS = NULL;
CHECK_OBJECT(var_console);
CHECK_OBJECT(var_console);
Py_DECREF(var_console);
var_console = NULL;
CHECK_OBJECT(var_json);
CHECK_OBJECT(var_json);
Py_DECREF(var_json);
var_json = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_pfps);
CHECK_OBJECT(var_pfps);
Py_DECREF(var_pfps);
var_pfps = NULL;
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

Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_console);
var_console = NULL;
Py_XDECREF(var_json);
var_json = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
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


static PyObject *impl___main__$$$function__4_cmd_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_PFPS = NULL;
PyObject *var_run_agent = NULL;
PyObject *var_console = NULL;
PyObject *var_print_banner = NULL;
PyObject *var_root = NULL;
PyObject *var_pfps = NULL;
PyObject *var_model = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__4_cmd_run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__4_cmd_run = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__4_cmd_run)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__4_cmd_run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__4_cmd_run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__4_cmd_run = MAKE_FUNCTION_FRAME(tstate, code_objects_8fe6a8bc0f9513018ec0cc4e14ca56b4, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__4_cmd_run->m_type_description == NULL);
frame_frame___main__$$$function__4_cmd_run = cache_frame_frame___main__$$$function__4_cmd_run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__4_cmd_run);
assert(Py_REFCNT(frame_frame___main__$$$function__4_cmd_run) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 58;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_agent;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_run_agent_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 59;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_run_agent,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_run_agent);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_run_agent == NULL);
var_run_agent = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_console_str_plain_print_banner_tuple;
tmp_level_value_3 = const_int_0;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 60;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_console);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(var_console == NULL);
var_console = tmp_assign_source_4;
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
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_print_banner,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_print_banner);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(var_print_banner == NULL);
var_print_banner = tmp_assign_source_5;
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_print_banner);
tmp_called_value_1 = var_print_banner;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 61;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 64;
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


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_dot;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_called_value_2 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_3 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 65;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 65;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_6;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_called_instance_2;
tmp_called_value_3 = module_var_accessor___main__$find_project_root(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_project_root);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 67;
tmp_unicode_arg_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
CHECK_OBJECT(tmp_unicode_arg_2);
Py_DECREF(tmp_unicode_arg_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 67;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_7;
}
branch_end_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_PFPS);
tmp_called_instance_3 = var_PFPS;
CHECK_OBJECT(var_root);
tmp_args_element_value_3 = var_root;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 69;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_LoadProject, tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_args);
tmp_expression_value_4 = par_args;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_model);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 70;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(var_pfps);
tmp_expression_value_6 = var_pfps;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_config);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 70;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_model_str_plain_claude_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_9 = tmp_or_left_value_1;
or_end_1:;
assert(var_model == NULL);
var_model = tmp_assign_source_9;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(var_run_agent);
tmp_called_value_5 = var_run_agent;
CHECK_OBJECT(par_args);
tmp_expression_value_7 = par_args;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_prompt);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pfps);
tmp_kw_call_arg_value_1_1 = var_pfps;
CHECK_OBJECT(var_pfps);
tmp_expression_value_9 = var_pfps;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_config);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 71;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 71;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 71;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_role_str_plain_Editor_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 71;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_model);
tmp_kw_call_dict_value_1_1 = var_model;
frame_frame___main__$$$function__4_cmd_run->m_frame.f_lineno = 71;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_role_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__4_cmd_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__4_cmd_run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__4_cmd_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__4_cmd_run,
    type_description_1,
    par_args,
    var_PFPS,
    var_run_agent,
    var_console,
    var_print_banner,
    var_root,
    var_pfps,
    var_model
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__4_cmd_run == cache_frame_frame___main__$$$function__4_cmd_run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__4_cmd_run);
    cache_frame_frame___main__$$$function__4_cmd_run = NULL;
}

assertFrameObject(frame_frame___main__$$$function__4_cmd_run);

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
CHECK_OBJECT(var_PFPS);
CHECK_OBJECT(var_PFPS);
Py_DECREF(var_PFPS);
var_PFPS = NULL;
CHECK_OBJECT(var_run_agent);
CHECK_OBJECT(var_run_agent);
Py_DECREF(var_run_agent);
var_run_agent = NULL;
CHECK_OBJECT(var_console);
CHECK_OBJECT(var_console);
Py_DECREF(var_console);
var_console = NULL;
CHECK_OBJECT(var_print_banner);
CHECK_OBJECT(var_print_banner);
Py_DECREF(var_print_banner);
var_print_banner = NULL;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_pfps);
CHECK_OBJECT(var_pfps);
Py_DECREF(var_pfps);
var_pfps = NULL;
CHECK_OBJECT(var_model);
CHECK_OBJECT(var_model);
Py_DECREF(var_model);
var_model = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_run_agent);
var_run_agent = NULL;
Py_XDECREF(var_console);
var_console = NULL;
Py_XDECREF(var_print_banner);
var_print_banner = NULL;
Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
Py_XDECREF(var_model);
var_model = NULL;
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


static PyObject *impl___main__$$$function__5_cmd_log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_PFPS = NULL;
PyObject *var_console = NULL;
PyObject *var_root = NULL;
PyObject *var_pfps = NULL;
PyObject *var_log_path = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__5_cmd_log;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__5_cmd_log = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__5_cmd_log)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__5_cmd_log);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__5_cmd_log == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__5_cmd_log = MAKE_FUNCTION_FRAME(tstate, code_objects_c28c40d139bbca3b45eaac57491329a6, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__5_cmd_log->m_type_description == NULL);
frame_frame___main__$$$function__5_cmd_log = cache_frame_frame___main__$$$function__5_cmd_log;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__5_cmd_log);
assert(Py_REFCNT(frame_frame___main__$$$function__5_cmd_log) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 75;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 76;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_console == NULL);
var_console = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor___main__$find_project_root(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_project_root);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_dot;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 77;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 77;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_PFPS);
tmp_called_instance_2 = var_PFPS;
CHECK_OBJECT(var_root);
tmp_args_element_value_2 = var_root;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 78;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_LoadProject, tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_pfps);
tmp_called_instance_3 = var_pfps;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 79;
tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_AMSLocation,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_42c8ecbcd89b48a71d69b712d164092c_tuple, 0)
);

if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_7a72cfbef352f6d1a96a53a9022dd875;
tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_log_path == NULL);
var_log_path = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_log_path);
tmp_called_instance_4 = var_log_path;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 80;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_console);
tmp_called_instance_5 = var_console;
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d1f167911b60039d6c46f814e964f2e5_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_console);
tmp_expression_value_3 = var_console;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_print);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_log_path);
tmp_expression_value_4 = var_log_path;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_read_text);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 83;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__5_cmd_log->m_frame.f_lineno = 83;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__5_cmd_log, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__5_cmd_log->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__5_cmd_log, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__5_cmd_log,
    type_description_1,
    par_args,
    var_PFPS,
    var_console,
    var_root,
    var_pfps,
    var_log_path
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__5_cmd_log == cache_frame_frame___main__$$$function__5_cmd_log) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__5_cmd_log);
    cache_frame_frame___main__$$$function__5_cmd_log = NULL;
}

assertFrameObject(frame_frame___main__$$$function__5_cmd_log);

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
CHECK_OBJECT(var_PFPS);
CHECK_OBJECT(var_PFPS);
Py_DECREF(var_PFPS);
var_PFPS = NULL;
CHECK_OBJECT(var_console);
CHECK_OBJECT(var_console);
Py_DECREF(var_console);
var_console = NULL;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_pfps);
CHECK_OBJECT(var_pfps);
Py_DECREF(var_pfps);
var_pfps = NULL;
CHECK_OBJECT(var_log_path);
CHECK_OBJECT(var_log_path);
Py_DECREF(var_log_path);
var_log_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_console);
var_console = NULL;
Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
Py_XDECREF(var_log_path);
var_log_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl___main__$$$function__6_cmd_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_PFPS = NULL;
PyObject *var_issue_token = NULL;
PyObject *var_console = NULL;
PyObject *var_root = NULL;
PyObject *var_pfps = NULL;
PyObject *var_files = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__6_cmd_status;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__6_cmd_status = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__6_cmd_status)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__6_cmd_status);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__6_cmd_status == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__6_cmd_status = MAKE_FUNCTION_FRAME(tstate, code_objects_9ac6167ecda31c0d0a925d5e48dc0f33, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__6_cmd_status->m_type_description == NULL);
frame_frame___main__$$$function__6_cmd_status = cache_frame_frame___main__$$$function__6_cmd_status;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__6_cmd_status);
assert(Py_REFCNT(frame_frame___main__$$$function__6_cmd_status) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 87;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_permissions;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_issue_token_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 88;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_issue_token,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_issue_token);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_issue_token == NULL);
var_issue_token = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_3 = const_int_0;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 89;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_console == NULL);
var_console = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor___main__$find_project_root(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_project_root);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_dot;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 90;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 90;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_PFPS);
tmp_called_instance_2 = var_PFPS;
CHECK_OBJECT(var_root);
tmp_args_element_value_2 = var_root;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 91;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_LoadProject, tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_pfps);
tmp_expression_value_3 = var_pfps;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ListFiles);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_issue_token);
tmp_called_value_3 = var_issue_token;
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 92;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Viewer_str_plain_status_tuple);

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 92;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_files == NULL);
var_files = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_console);
tmp_expression_value_4 = var_console;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_print);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_4b960c851c227f58a58b43484d81d4fd;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_files);
tmp_len_arg_1 = var_files;
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_77efc332079aff8d9c4e4e7e0aec79f5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 93;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_files);
tmp_iter_arg_1 = var_files;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
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
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 94;
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
    PyObject *old = var_f;
    var_f = tmp_assign_source_9;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
if (var_console == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_console;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_print);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_da24e1f59a0590be257f7a4f69d3329a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_f);
tmp_format_value_2 = var_f;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
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
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame___main__$$$function__6_cmd_status->m_frame.f_lineno = 95;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__6_cmd_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__6_cmd_status->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__6_cmd_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__6_cmd_status,
    type_description_1,
    par_args,
    var_PFPS,
    var_issue_token,
    var_console,
    var_root,
    var_pfps,
    var_files,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__6_cmd_status == cache_frame_frame___main__$$$function__6_cmd_status) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__6_cmd_status);
    cache_frame_frame___main__$$$function__6_cmd_status = NULL;
}

assertFrameObject(frame_frame___main__$$$function__6_cmd_status);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_PFPS);
CHECK_OBJECT(var_PFPS);
Py_DECREF(var_PFPS);
var_PFPS = NULL;
CHECK_OBJECT(var_issue_token);
CHECK_OBJECT(var_issue_token);
Py_DECREF(var_issue_token);
var_issue_token = NULL;
Py_XDECREF(var_console);
var_console = NULL;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_pfps);
CHECK_OBJECT(var_pfps);
Py_DECREF(var_pfps);
var_pfps = NULL;
CHECK_OBJECT(var_files);
CHECK_OBJECT(var_files);
Py_DECREF(var_files);
var_files = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_issue_token);
var_issue_token = NULL;
Py_XDECREF(var_console);
var_console = NULL;
Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
Py_XDECREF(var_files);
var_files = NULL;
Py_XDECREF(var_f);
var_f = NULL;
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


static PyObject *impl___main__$$$function__7_cmd_rollback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_PFPS = NULL;
PyObject *var_console = NULL;
PyObject *var_root = NULL;
PyObject *var_pfps = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__7_cmd_rollback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__7_cmd_rollback = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__7_cmd_rollback)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__7_cmd_rollback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__7_cmd_rollback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__7_cmd_rollback = MAKE_FUNCTION_FRAME(tstate, code_objects_20ce3c01483f85825563063487cf66ae, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__7_cmd_rollback->m_type_description == NULL);
frame_frame___main__$$$function__7_cmd_rollback = cache_frame_frame___main__$$$function__7_cmd_rollback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__7_cmd_rollback);
assert(Py_REFCNT(frame_frame___main__$$$function__7_cmd_rollback) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 99;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 100;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_console == NULL);
var_console = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor___main__$find_project_root(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_project_root);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_dot;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 101;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 101;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_PFPS);
tmp_called_instance_2 = var_PFPS;
CHECK_OBJECT(var_root);
tmp_args_element_value_2 = var_root;
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 102;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_LoadProject, tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_pfps);
tmp_expression_value_3 = var_pfps;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Rollback);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_4 = par_args;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_file);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 103;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_console);
tmp_expression_value_5 = var_console;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_print);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_0bd44a155b6d72e1380616294a702c95;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_expression_value_6 = par_args;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_file);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame___main__$$$function__7_cmd_rollback->m_frame.f_lineno = 104;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__7_cmd_rollback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__7_cmd_rollback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__7_cmd_rollback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__7_cmd_rollback,
    type_description_1,
    par_args,
    var_PFPS,
    var_console,
    var_root,
    var_pfps
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__7_cmd_rollback == cache_frame_frame___main__$$$function__7_cmd_rollback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__7_cmd_rollback);
    cache_frame_frame___main__$$$function__7_cmd_rollback = NULL;
}

assertFrameObject(frame_frame___main__$$$function__7_cmd_rollback);

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
CHECK_OBJECT(var_PFPS);
CHECK_OBJECT(var_PFPS);
Py_DECREF(var_PFPS);
var_PFPS = NULL;
CHECK_OBJECT(var_console);
CHECK_OBJECT(var_console);
Py_DECREF(var_console);
var_console = NULL;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_pfps);
CHECK_OBJECT(var_pfps);
Py_DECREF(var_pfps);
var_pfps = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_console);
var_console = NULL;
Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl___main__$$$function__8_cmd_edit_role(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_json = NULL;
PyObject *var_root = NULL;
PyObject *var_cfg_path = NULL;
PyObject *var_cfg = NULL;
PyObject *var_console = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__8_cmd_edit_role;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__8_cmd_edit_role = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__8_cmd_edit_role)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__8_cmd_edit_role);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__8_cmd_edit_role == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__8_cmd_edit_role = MAKE_FUNCTION_FRAME(tstate, code_objects_e01c7a498e1e4a7d0036967197aa4774, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__8_cmd_edit_role->m_type_description == NULL);
frame_frame___main__$$$function__8_cmd_edit_role = cache_frame_frame___main__$$$function__8_cmd_edit_role;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__8_cmd_edit_role);
assert(Py_REFCNT(frame_frame___main__$$$function__8_cmd_edit_role) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 108;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_json == NULL);
var_json = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor___main__$find_project_root(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_project_root);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_str_dot;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 109;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cwd);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 109;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor___main__$Path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_root);
tmp_args_element_value_2 = var_root;
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 110;
tmp_truediv_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_2 = mod_consts.const_str_digest_d6ebc10db7cf6b910362e1de256127db;
tmp_truediv_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_28135e6d1ddba714cfe636a5b27a579b;
tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cfg_path == NULL);
var_cfg_path = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_cfg_path);
tmp_called_instance_2 = var_cfg_path;
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 111;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
tmp_called_value_3 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_3 != NULL);
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 112;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_21d85fcaef5e5fcd197c40a73f9f2d15_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_json);
tmp_expression_value_3 = var_json;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_loads);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cfg_path);
tmp_expression_value_4 = var_cfg_path;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_read_text);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 114;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 114;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cfg == NULL);
var_cfg = tmp_assign_source_4;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_args);
tmp_expression_value_5 = par_args;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_model);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cfg);
tmp_ass_subscribed_1 = var_cfg;
tmp_ass_subscript_1 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_args);
tmp_expression_value_6 = par_args;
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_role);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cfg);
tmp_ass_subscribed_2 = var_cfg;
tmp_ass_subscript_2 = mod_consts.const_str_plain_role;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(var_cfg_path);
tmp_expression_value_7 = var_cfg_path;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_write_text);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_json);
tmp_expression_value_8 = var_json;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dumps);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 117;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cfg);
tmp_tuple_element_2 = var_cfg;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_38a1dad6291f8c2b00664c08bdb18de6);
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 117;
tmp_tuple_element_1 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 117;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 117;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 118;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_console == NULL);
var_console = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_console);
tmp_expression_value_9 = var_console;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_print);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_a43487be909ba62f09d61016b03ad06a;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_args);
tmp_expression_value_10 = par_args;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_model);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_7af63cc7791923ded38d5710216c8b8a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_args);
tmp_expression_value_11 = par_args;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_role);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame___main__$$$function__8_cmd_edit_role->m_frame.f_lineno = 119;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__8_cmd_edit_role, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__8_cmd_edit_role->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__8_cmd_edit_role, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__8_cmd_edit_role,
    type_description_1,
    par_args,
    var_json,
    var_root,
    var_cfg_path,
    var_cfg,
    var_console
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__8_cmd_edit_role == cache_frame_frame___main__$$$function__8_cmd_edit_role) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__8_cmd_edit_role);
    cache_frame_frame___main__$$$function__8_cmd_edit_role = NULL;
}

assertFrameObject(frame_frame___main__$$$function__8_cmd_edit_role);

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
CHECK_OBJECT(var_json);
CHECK_OBJECT(var_json);
Py_DECREF(var_json);
var_json = NULL;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_cfg_path);
CHECK_OBJECT(var_cfg_path);
Py_DECREF(var_cfg_path);
var_cfg_path = NULL;
Py_XDECREF(var_cfg);
var_cfg = NULL;
Py_XDECREF(var_console);
var_console = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_json);
var_json = NULL;
Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_cfg_path);
var_cfg_path = NULL;
Py_XDECREF(var_cfg);
var_cfg = NULL;
Py_XDECREF(var_console);
var_console = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl___main__$$$function__9_cmd_key_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_clear_api_key = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__9_cmd_key_clear;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__9_cmd_key_clear = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__9_cmd_key_clear)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__9_cmd_key_clear);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__9_cmd_key_clear == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__9_cmd_key_clear = MAKE_FUNCTION_FRAME(tstate, code_objects_76bbae8d1728315698316c7a074f3333, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__9_cmd_key_clear->m_type_description == NULL);
frame_frame___main__$$$function__9_cmd_key_clear = cache_frame_frame___main__$$$function__9_cmd_key_clear;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__9_cmd_key_clear);
assert(Py_REFCNT(frame_frame___main__$$$function__9_cmd_key_clear) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_agent;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_clear_api_key_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__9_cmd_key_clear->m_frame.f_lineno = 123;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_clear_api_key,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_clear_api_key);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_clear_api_key == NULL);
var_clear_api_key = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_clear_api_key);
tmp_called_value_1 = var_clear_api_key;
CHECK_OBJECT(par_args);
tmp_expression_value_1 = par_args;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_provider);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__9_cmd_key_clear->m_frame.f_lineno = 124;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__9_cmd_key_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__9_cmd_key_clear->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__9_cmd_key_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__9_cmd_key_clear,
    type_description_1,
    par_args,
    var_clear_api_key
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__9_cmd_key_clear == cache_frame_frame___main__$$$function__9_cmd_key_clear) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__9_cmd_key_clear);
    cache_frame_frame___main__$$$function__9_cmd_key_clear = NULL;
}

assertFrameObject(frame_frame___main__$$$function__9_cmd_key_clear);

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
CHECK_OBJECT(var_clear_api_key);
CHECK_OBJECT(var_clear_api_key);
Py_DECREF(var_clear_api_key);
var_clear_api_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_clear_api_key);
var_clear_api_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl___main__$$$function__10_main(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_run_tui = NULL;
PyObject *var_parser = NULL;
PyObject *var_sub = NULL;
PyObject *var_p_init = NULL;
PyObject *var_p_run = NULL;
PyObject *var_p_log = NULL;
PyObject *var_p_st = NULL;
PyObject *var_p_rb = NULL;
PyObject *var_p_kc = NULL;
PyObject *var_p_er = NULL;
PyObject *var_args = NULL;
PyObject *var_dispatch = NULL;
struct Nuitka_FrameObject *frame_frame___main__$$$function__10_main;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame___main__$$$function__10_main = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame___main__$$$function__10_main)) {
    Py_XDECREF(cache_frame_frame___main__$$$function__10_main);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame___main__$$$function__10_main == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame___main__$$$function__10_main = MAKE_FUNCTION_FRAME(tstate, code_objects_c62c8b2f0ec35fb13941a9cfb183ac9c, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame___main__$$$function__10_main->m_type_description == NULL);
frame_frame___main__$$$function__10_main = cache_frame_frame___main__$$$function__10_main;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__$$$function__10_main);
assert(Py_REFCNT(frame_frame___main__$$$function__10_main) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_argv);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tui;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_run_tui_tuple;
tmp_level_value_1 = const_int_0;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 132;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_run_tui,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_run_tui);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_run_tui == NULL);
var_run_tui = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_run_tui);
tmp_called_value_1 = var_run_tui;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 133;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor___main__$argparse(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_argparse);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ArgumentParser);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 136;
tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_yac_str_plain_YourAssistantCoder_tuple, 0), mod_consts.const_tuple_str_plain_prog_str_plain_description_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parser == NULL);
var_parser = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_parser);
tmp_expression_value_3 = var_parser;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_add_subparsers);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 137;
tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_command_tuple, 0), mod_consts.const_tuple_str_plain_dest_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sub == NULL);
var_sub = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_sub);
tmp_called_instance_1 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 139;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_init_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_init == NULL);
var_p_init = tmp_assign_source_4;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_p_init);
tmp_called_instance_2 = var_p_init;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 140;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_add_argument,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_name_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_p_init);
tmp_expression_value_4 = var_p_init;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 141;
tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_none_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_call_args_values_1;
CHECK_OBJECT(var_p_init);
tmp_expression_value_5 = var_p_init;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_74bfa6194ad2c25b2f9d1c2631abb3d3_tuple, "iil");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 142;
tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_call_args_values_1);
Py_DECREF(tmp_call_args_values_1);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_call_args_values_2;
CHECK_OBJECT(var_p_init);
tmp_expression_value_6 = var_p_init;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_2 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_ed948dfef325e8b8ca03628eb5e3407d_tuple, "iil");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 143;
tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(tmp_call_args_values_2, 0), mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_call_args_values_2);
Py_DECREF(tmp_call_args_values_2);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_6;
CHECK_OBJECT(var_p_init);
tmp_expression_value_7 = var_p_init;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 144;
tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_e9b71edccddbe17fa81c642d2e0f8687_tuple, 0), mod_consts.const_tuple_str_plain_action_tuple);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_sub);
tmp_called_instance_3 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 146;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_run_tuple, 0)
);

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_run == NULL);
var_p_run = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_7;
CHECK_OBJECT(var_p_run);
tmp_called_instance_4 = var_p_run;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 147;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_add_argument,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_prompt_tuple, 0)
);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_8;
CHECK_OBJECT(var_p_run);
tmp_expression_value_8 = var_p_run;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 148;
tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_9;
PyObject *tmp_call_args_values_3;
CHECK_OBJECT(var_p_run);
tmp_expression_value_9 = var_p_run;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_cfff2c27c33fad6cbe835b12d750e863_tuple, "iil");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 149;
tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(tmp_call_args_values_3, 0), mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_call_args_values_3);
Py_DECREF(tmp_call_args_values_3);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_sub);
tmp_called_instance_5 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 151;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_log_tuple, 0)
);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_log == NULL);
var_p_log = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_10;
CHECK_OBJECT(var_p_log);
tmp_expression_value_10 = var_p_log;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 152;
tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_sub);
tmp_called_instance_6 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 154;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_status_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_st == NULL);
var_p_st = tmp_assign_source_7;
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_11;
CHECK_OBJECT(var_p_st);
tmp_expression_value_11 = var_p_st;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 155;
tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(var_sub);
tmp_called_instance_7 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 157;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_rollback_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_rb == NULL);
var_p_rb = tmp_assign_source_8;
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_12;
CHECK_OBJECT(var_p_rb);
tmp_called_instance_8 = var_p_rb;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 158;
tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_add_argument,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_file_tuple, 0)
);

if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_13;
CHECK_OBJECT(var_p_rb);
tmp_expression_value_12 = var_p_rb;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 159;
tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_9;
CHECK_OBJECT(var_sub);
tmp_called_instance_9 = var_sub;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 161;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_add_parser,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_kc == NULL);
var_p_kc = tmp_assign_source_9;
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_14;
PyObject *tmp_call_args_values_4;
CHECK_OBJECT(var_p_kc);
tmp_expression_value_13 = var_p_kc;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_4 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_81702dbdce45a0f67a78d35b78feab01_tuple, "iil");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 162;
tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(tmp_call_args_values_4, 0), mod_consts.const_tuple_str_plain_default_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_call_args_values_4);
Py_DECREF(tmp_call_args_values_4);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_sub);
tmp_expression_value_14 = var_sub;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_add_parser);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 165;
tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts.const_tuple_0ded9061cfbd5123dfdea87aae1a4f4c_tuple, 0), mod_consts.const_tuple_str_plain_help_tuple);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_p_er == NULL);
var_p_er = tmp_assign_source_10;
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_15;
PyObject *tmp_call_args_values_5;
CHECK_OBJECT(var_p_er);
tmp_expression_value_15 = var_p_er;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_5 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_str_plain_model_list_1fda540c9694bd9de50dfc3384bd7186_list_tuple, "il");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 166;
tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_15, &PyTuple_GET_ITEM(tmp_call_args_values_5, 0), mod_consts.const_tuple_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_call_args_values_5);
Py_DECREF(tmp_call_args_values_5);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_16;
PyObject *tmp_call_args_values_6;
CHECK_OBJECT(var_p_er);
tmp_expression_value_16 = var_p_er;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_args_values_6 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_0beae99a7b61acf7552cb2493c14ca0f_tuple, "il");
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 167;
tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(tmp_call_args_values_6, 0), mod_consts.const_tuple_str_plain_choices_tuple);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_call_args_values_6);
Py_DECREF(tmp_call_args_values_6);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_17;
CHECK_OBJECT(var_p_er);
tmp_expression_value_17 = var_p_er;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_add_argument);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 168;
tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1949105d3472e9134e59e3a5f1dbad57_str_dot_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_10;
CHECK_OBJECT(var_parser);
tmp_called_instance_10 = var_parser;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 170;
tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts.const_str_plain_parse_args);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_args == NULL);
var_args = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_init;
tmp_dict_value_1 = module_var_accessor___main__$cmd_init(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_init);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_run;
tmp_dict_value_1 = module_var_accessor___main__$cmd_run(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_run);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_log;
tmp_dict_value_1 = module_var_accessor___main__$cmd_log(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_log);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_status;
tmp_dict_value_1 = module_var_accessor___main__$cmd_status(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_status);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rollback;
tmp_dict_value_1 = module_var_accessor___main__$cmd_rollback(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_rollback);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_d2ae0b3e1100a907b1dd39f448c8bf67;
tmp_dict_value_1 = module_var_accessor___main__$cmd_key_clear(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_key_clear);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_2aa2a7d97d95fb59b892cb9a37375d78;
tmp_dict_value_1 = module_var_accessor___main__$cmd_edit_role(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cmd_edit_role);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_12);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_dispatch == NULL);
var_dispatch = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(var_args);
tmp_expression_value_18 = var_args;
tmp_key_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_command);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dispatch);
tmp_dict_arg_value_1 = var_dispatch;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_called_value_18;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_dispatch);
tmp_dict_arg_value_2 = var_dispatch;
CHECK_OBJECT(var_args);
tmp_expression_value_19 = var_args;
tmp_key_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_command);
if (tmp_key_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
CHECK_OBJECT(tmp_key_value_2);
Py_DECREF(tmp_key_value_2);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_args);
tmp_args_element_value_1 = var_args;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 182;
tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_tui;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_run_tui_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 185;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_run_tui,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_run_tui);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_run_tui == NULL);
var_run_tui = tmp_assign_source_13;
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_call_result_19;
CHECK_OBJECT(var_run_tui);
tmp_called_value_19 = var_run_tui;
frame_frame___main__$$$function__10_main->m_frame.f_lineno = 186;
tmp_call_result_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
if (tmp_call_result_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_19);
Py_DECREF(tmp_call_result_19);
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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__$$$function__10_main, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__$$$function__10_main->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__$$$function__10_main, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame___main__$$$function__10_main,
    type_description_1,
    var_run_tui,
    var_parser,
    var_sub,
    var_p_init,
    var_p_run,
    var_p_log,
    var_p_st,
    var_p_rb,
    var_p_kc,
    var_p_er,
    var_args,
    var_dispatch
);


// Release cached frame if used for exception.
if (frame_frame___main__$$$function__10_main == cache_frame_frame___main__$$$function__10_main) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame___main__$$$function__10_main);
    cache_frame_frame___main__$$$function__10_main = NULL;
}

assertFrameObject(frame_frame___main__$$$function__10_main);

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
Py_XDECREF(var_run_tui);
var_run_tui = NULL;
Py_XDECREF(var_parser);
var_parser = NULL;
Py_XDECREF(var_sub);
var_sub = NULL;
Py_XDECREF(var_p_init);
var_p_init = NULL;
Py_XDECREF(var_p_run);
var_p_run = NULL;
Py_XDECREF(var_p_log);
var_p_log = NULL;
Py_XDECREF(var_p_st);
var_p_st = NULL;
Py_XDECREF(var_p_rb);
var_p_rb = NULL;
Py_XDECREF(var_p_kc);
var_p_kc = NULL;
Py_XDECREF(var_p_er);
var_p_er = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_dispatch);
var_dispatch = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_run_tui);
var_run_tui = NULL;
Py_XDECREF(var_parser);
var_parser = NULL;
Py_XDECREF(var_sub);
var_sub = NULL;
Py_XDECREF(var_p_init);
var_p_init = NULL;
Py_XDECREF(var_p_run);
var_p_run = NULL;
Py_XDECREF(var_p_log);
var_p_log = NULL;
Py_XDECREF(var_p_st);
var_p_st = NULL;
Py_XDECREF(var_p_rb);
var_p_rb = NULL;
Py_XDECREF(var_p_kc);
var_p_kc = NULL;
Py_XDECREF(var_p_er);
var_p_er = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_dispatch);
var_dispatch = NULL;
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


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_bases = python_pars[0];
PyObject *tmp_base = NULL;
PyObject *tmp_iter = NULL;
PyObject *tmp_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_bases);
tmp_iter_arg_1 = par_bases;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_iter == NULL);
tmp_iter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_list == NULL);
tmp_list = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_iter);
tmp_next_source_1 = tmp_iter;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_base;
    tmp_base = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_type_check_cls_1;
CHECK_OBJECT(tmp_base);
tmp_type_check_cls_1 = tmp_base;
tmp_res = PyType_Check(tmp_type_check_cls_1);
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_list);
tmp_append_list_1 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_append_value_1 = tmp_base;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_base);
tmp_expression_value_1 = tmp_base;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___mro_entries__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_list);
tmp_list_arg_value_1 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_expression_value_2 = tmp_base;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___mro_entries__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_bases == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bases);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_args_element_value_1 = par_bases;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
CHECK_OBJECT(tmp_list);
tmp_append_list_2 = tmp_list;
CHECK_OBJECT(tmp_base);
tmp_append_value_2 = tmp_base;
tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(tmp_list);
tmp_tuple_arg_1 = tmp_list;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_list);
CHECK_OBJECT(tmp_list);
Py_DECREF(tmp_list);
tmp_list = NULL;
CHECK_OBJECT(tmp_iter);
CHECK_OBJECT(tmp_iter);
Py_DECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_base);
tmp_base = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_list);
tmp_list = NULL;
Py_XDECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_base);
tmp_base = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_star_arg_list = python_pars[2];
PyObject *par_star_arg_dict = python_pars[3];
PyObject *tmp_mapping_1__dict = NULL;
PyObject *tmp_mapping_1__iter = NULL;
PyObject *tmp_mapping_1__key = NULL;
PyObject *tmp_mapping_1__keys = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
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
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_3 = par_star_arg_dict;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = (PyObject *)&PyDict_Type;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_4 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_mapping_1__keys == NULL);
tmp_mapping_1__keys = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_3 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_4 = par_star_arg_dict;
tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_5 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_4;
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_4:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_mapping_1__keys);
tmp_iter_arg_1 = tmp_mapping_1__keys;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_mapping_1__iter == NULL);
tmp_mapping_1__iter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(tmp_mapping_1__dict == NULL);
tmp_mapping_1__dict = tmp_assign_source_4;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_mapping_1__iter);
tmp_next_source_1 = tmp_mapping_1__iter;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_mapping_1__key;
    tmp_mapping_1__key = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_key_value_1 = tmp_mapping_1__key;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dict_arg_value_1 = tmp_mapping_1__dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_mapping_1__key);
tmp_tuple_element_3 = tmp_mapping_1__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_5:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_6 = par_star_arg_dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_subscript_value_1 = tmp_mapping_1__key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dictset_dict = tmp_mapping_1__dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_dictset_key = tmp_mapping_1__key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_assign_source_6 = tmp_mapping_1__dict;
{
    PyObject *old = par_star_arg_dict;
    par_star_arg_dict = tmp_assign_source_6;
    Py_INCREF(par_star_arg_dict);
    Py_XDECREF(old);
}

}
branch_no_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
CHECK_OBJECT(par_args);
tmp_add_expr_left_1 = par_args;
CHECK_OBJECT(par_star_arg_list);
tmp_add_expr_right_1 = par_star_arg_list;
tmp_args_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
CHECK_OBJECT(par_star_arg_dict);
tmp_kwargs_value_1 = par_star_arg_dict;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$helper_function_get_callable_name_desc(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_func_arg_1;
CHECK_OBJECT(par_called);
tmp_func_arg_1 = par_called;
tmp_return_value = _PyObject_FunctionStr(tmp_func_arg_1);
assert(!(tmp_return_value == NULL));
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_star_arg_list = python_pars[1];
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
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
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
CHECK_OBJECT(par_called);
tmp_called_value_1 = par_called;
CHECK_OBJECT(par_star_arg_list);
tmp_args_value_1 = par_star_arg_list;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS(tstate, tmp_called_value_1, tmp_args_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_star_arg_dict = python_pars[1];
PyObject *tmp_mapping_1__dict = NULL;
PyObject *tmp_mapping_1__iter = NULL;
PyObject *tmp_mapping_1__key = NULL;
PyObject *tmp_mapping_1__keys = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_mapping_1__keys == NULL);
tmp_mapping_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_mapping_1__keys);
tmp_iter_arg_1 = tmp_mapping_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_mapping_1__iter == NULL);
tmp_mapping_1__iter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_mapping_1__dict == NULL);
tmp_mapping_1__dict = tmp_assign_source_3;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_mapping_1__iter);
tmp_next_source_1 = tmp_mapping_1__iter;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_mapping_1__key;
    tmp_mapping_1__key = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_key_value_1 = tmp_mapping_1__key;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dict_arg_value_1 = tmp_mapping_1__dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_mapping_1__key);
tmp_tuple_element_2 = tmp_mapping_1__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_subscript_value_1 = tmp_mapping_1__key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dictset_dict = tmp_mapping_1__dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_dictset_key = tmp_mapping_1__key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_assign_source_5 = tmp_mapping_1__dict;
{
    PyObject *old = par_star_arg_dict;
    par_star_arg_dict = tmp_assign_source_5;
    Py_INCREF(par_star_arg_dict);
    Py_XDECREF(old);
}

}
branch_no_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_dict_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
CHECK_OBJECT(par_star_arg_dict);
tmp_kw_dict_1 = par_star_arg_dict;
tmp_return_value = CALL_FUNCTION_WITH_KW_ARGS(tstate, tmp_called_value_2, tmp_kw_dict_1);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *tmp_iter = NULL;
PyObject *tmp_keys = NULL;
PyObject *tmp_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_iter == NULL);
tmp_iter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_list == NULL);
tmp_list = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_iter);
tmp_next_source_1 = tmp_iter;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_keys;
    tmp_keys = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_list);
tmp_list_arg_value_1 = tmp_list;
CHECK_OBJECT(tmp_keys);
tmp_value_value_1 = tmp_keys;
tmp_result = LIST_EXTEND_FOR_UNPACK(tstate, tmp_list_arg_value_1, tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_list);
tmp_return_value = tmp_list;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_list);
CHECK_OBJECT(tmp_list);
Py_DECREF(tmp_list);
tmp_list = NULL;
CHECK_OBJECT(tmp_iter);
CHECK_OBJECT(tmp_iter);
Py_DECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_list);
tmp_list = NULL;
Py_XDECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_kw = python_pars[1];
PyObject *par_star_arg_dict = python_pars[2];
PyObject *tmp_dict_1__iter = NULL;
PyObject *tmp_dict_1__key_xxx = NULL;
PyObject *tmp_dict_1__keys = NULL;
PyObject *tmp_dict_2__item = NULL;
PyObject *tmp_dict_2__iter = NULL;
PyObject *tmp_dict_2__key = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_dict_1__keys == NULL);
tmp_dict_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_dict_1__keys);
tmp_iter_arg_1 = tmp_dict_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_1__iter == NULL);
tmp_dict_1__iter = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dict_1__iter);
tmp_next_source_1 = tmp_dict_1__iter;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_1__key_xxx;
    tmp_dict_1__key_xxx = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_cmp_expr_left_3 = tmp_dict_1__key_xxx;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_3 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_tuple_element_2 = tmp_dict_1__key_xxx;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_subscript_value_1 = tmp_dict_1__key_xxx;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_1 = par_kw;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_seq_1;
CHECK_OBJECT(par_kw);
tmp_dict_seq_1 = par_kw;
tmp_assign_source_4 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = par_kw;
    assert(old != NULL);
    par_kw = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_dict_arg_1 = par_star_arg_dict;
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_2 == NULL));
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_2__iter == NULL);
tmp_dict_2__iter = tmp_assign_source_5;
}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_dict_2__iter);
tmp_next_source_2 = tmp_dict_2__iter;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_2__item;
    tmp_dict_2__item = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_4 = tmp_dict_2__item;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = tmp_dict_2__key;
    tmp_dict_2__key = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_dict_2__key);
tmp_cmp_expr_left_4 = tmp_dict_2__key;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_4 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_dict_2__key);
tmp_tuple_element_3 = tmp_dict_2__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_5 = tmp_dict_2__item;
tmp_subscript_value_3 = const_int_pos_1;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_2 = par_kw;
CHECK_OBJECT(tmp_dict_2__key);
tmp_ass_subscript_2 = tmp_dict_2__key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_2;
loop_end_2:;
branch_no_4:;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_dict_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_kw_dict_1 = par_kw;
tmp_return_value = CALL_FUNCTION_WITH_KW_ARGS(tstate, tmp_called_value_2, tmp_kw_dict_1);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_star_arg_dict = python_pars[2];
PyObject *tmp_mapping_1__dict = NULL;
PyObject *tmp_mapping_1__iter = NULL;
PyObject *tmp_mapping_1__key = NULL;
PyObject *tmp_mapping_1__keys = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_mapping_1__keys == NULL);
tmp_mapping_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_mapping_1__keys);
tmp_iter_arg_1 = tmp_mapping_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_mapping_1__iter == NULL);
tmp_mapping_1__iter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_mapping_1__dict == NULL);
tmp_mapping_1__dict = tmp_assign_source_3;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_mapping_1__iter);
tmp_next_source_1 = tmp_mapping_1__iter;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_mapping_1__key;
    tmp_mapping_1__key = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_key_value_1 = tmp_mapping_1__key;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dict_arg_value_1 = tmp_mapping_1__dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_mapping_1__key);
tmp_tuple_element_2 = tmp_mapping_1__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_subscript_value_1 = tmp_mapping_1__key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dictset_dict = tmp_mapping_1__dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_dictset_key = tmp_mapping_1__key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_assign_source_5 = tmp_mapping_1__dict;
{
    PyObject *old = par_star_arg_dict;
    par_star_arg_dict = tmp_assign_source_5;
    Py_INCREF(par_star_arg_dict);
    Py_XDECREF(old);
}

}
branch_no_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
CHECK_OBJECT(par_args);
tmp_args_value_1 = par_args;
CHECK_OBJECT(par_star_arg_dict);
tmp_kwargs_value_1 = par_star_arg_dict;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *tmp_dict = NULL;
PyObject *tmp_iter = NULL;
PyObject *tmp_keys = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictupdate_value;
PyObject *tmp_dictupdate_dict;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_iter == NULL);
tmp_iter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dict == NULL);
tmp_dict = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_iter);
tmp_next_source_1 = tmp_iter;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_keys;
    tmp_keys = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
CHECK_OBJECT(tmp_keys);
tmp_dictupdate_value = tmp_keys;
CHECK_OBJECT(tmp_dict);
tmp_dictupdate_dict = tmp_dict;
assert(PyDict_Check(tmp_dictupdate_dict));
tmp_res = PyDict_Update(tmp_dictupdate_dict, tmp_dictupdate_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_8a6c35ba3b096ed9004e3c14a471c221;
CHECK_OBJECT(tmp_keys);
tmp_type_arg_1 = tmp_keys;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_1;
branch_no_1:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_1:;
// End of try:
try_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dict);
tmp_return_value = tmp_dict;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_dict);
CHECK_OBJECT(tmp_dict);
Py_DECREF(tmp_dict);
tmp_dict = NULL;
CHECK_OBJECT(tmp_iter);
CHECK_OBJECT(tmp_iter);
Py_DECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dict);
tmp_dict = NULL;
Py_XDECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
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


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *tmp_args_item = NULL;
PyObject *tmp_dict = NULL;
PyObject *tmp_dict_iter = NULL;
PyObject *tmp_dict_key = NULL;
PyObject *tmp_dicts_iter = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dicts_iter == NULL);
tmp_dicts_iter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dict == NULL);
tmp_dict = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dicts_iter);
tmp_next_source_1 = tmp_dicts_iter;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_args_item;
    tmp_args_item = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_args_item);
tmp_expression_value_1 = tmp_args_item;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
{
    PyObject *old = tmp_dict_iter;
    tmp_dict_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_dict_iter);
tmp_next_source_2 = tmp_dict_iter;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_dict_key;
    tmp_dict_key = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(tmp_dict_key);
tmp_type_arg_1 = tmp_dict_key;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyUnicode_Type;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a5b388d0466ac5679e81bebee5445fa7;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_dict_key);
tmp_key_value_1 = tmp_dict_key;
CHECK_OBJECT(tmp_dict);
tmp_dict_arg_value_1 = tmp_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_2;
}

tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_dict_key);
tmp_tuple_element_1 = tmp_dict_key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(tmp_dict_key);
tmp_dictset38_key_1 = tmp_dict_key;
CHECK_OBJECT(tmp_args_item);
tmp_expression_value_2 = tmp_args_item;
CHECK_OBJECT(tmp_dict_key);
tmp_subscript_value_1 = tmp_dict_key;
tmp_dictset38_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_dict);
tmp_dictset38_dict_1 = tmp_dict;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




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

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
if (par_called == NULL) {

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
ADD_EXCEPTION_CONTEXT(tstate, &exception_keeper_name_1);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_args_item);
tmp_type_arg_2 = tmp_args_item;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_2);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_3;
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_3:;
// End of try:
try_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dict);
tmp_return_value = tmp_dict;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_dict);
CHECK_OBJECT(tmp_dict);
Py_DECREF(tmp_dict);
tmp_dict = NULL;
CHECK_OBJECT(tmp_dicts_iter);
CHECK_OBJECT(tmp_dicts_iter);
Py_DECREF(tmp_dicts_iter);
tmp_dicts_iter = NULL;
Py_XDECREF(tmp_args_item);
tmp_args_item = NULL;
Py_XDECREF(tmp_dict_iter);
tmp_dict_iter = NULL;
Py_XDECREF(tmp_dict_key);
tmp_dict_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dict);
tmp_dict = NULL;
Py_XDECREF(tmp_dicts_iter);
tmp_dicts_iter = NULL;
Py_XDECREF(tmp_args_item);
tmp_args_item = NULL;
Py_XDECREF(tmp_dict_iter);
tmp_dict_iter = NULL;
Py_XDECREF(tmp_dict_key);
tmp_dict_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kw = python_pars[2];
PyObject *par_star_arg_dict = python_pars[3];
PyObject *tmp_dict_1__iter = NULL;
PyObject *tmp_dict_1__key_xxx = NULL;
PyObject *tmp_dict_1__keys = NULL;
PyObject *tmp_dict_2__item = NULL;
PyObject *tmp_dict_2__iter = NULL;
PyObject *tmp_dict_2__key = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_dict_1__keys == NULL);
tmp_dict_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_dict_1__keys);
tmp_iter_arg_1 = tmp_dict_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_1__iter == NULL);
tmp_dict_1__iter = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dict_1__iter);
tmp_next_source_1 = tmp_dict_1__iter;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_1__key_xxx;
    tmp_dict_1__key_xxx = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_cmp_expr_left_3 = tmp_dict_1__key_xxx;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_3 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_tuple_element_2 = tmp_dict_1__key_xxx;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_subscript_value_1 = tmp_dict_1__key_xxx;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_1 = par_kw;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_seq_1;
CHECK_OBJECT(par_kw);
tmp_dict_seq_1 = par_kw;
tmp_assign_source_4 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = par_kw;
    assert(old != NULL);
    par_kw = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_dict_arg_1 = par_star_arg_dict;
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_2 == NULL));
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_2__iter == NULL);
tmp_dict_2__iter = tmp_assign_source_5;
}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_dict_2__iter);
tmp_next_source_2 = tmp_dict_2__iter;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_2__item;
    tmp_dict_2__item = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_4 = tmp_dict_2__item;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = tmp_dict_2__key;
    tmp_dict_2__key = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_dict_2__key);
tmp_cmp_expr_left_4 = tmp_dict_2__key;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_4 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_dict_2__key);
tmp_tuple_element_3 = tmp_dict_2__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_5 = tmp_dict_2__item;
tmp_subscript_value_3 = const_int_pos_1;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_2 = par_kw;
CHECK_OBJECT(tmp_dict_2__key);
tmp_ass_subscript_2 = tmp_dict_2__key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_2;
loop_end_2:;
branch_no_4:;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
CHECK_OBJECT(par_args);
tmp_args_value_1 = par_args;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_kwargs_value_1 = par_kw;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_star_arg_list = python_pars[1];
PyObject *par_star_arg_dict = python_pars[2];
PyObject *tmp_mapping_1__dict = NULL;
PyObject *tmp_mapping_1__iter = NULL;
PyObject *tmp_mapping_1__key = NULL;
PyObject *tmp_mapping_1__keys = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_mapping_1__keys == NULL);
tmp_mapping_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_mapping_1__keys);
tmp_iter_arg_1 = tmp_mapping_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_mapping_1__iter == NULL);
tmp_mapping_1__iter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_mapping_1__dict == NULL);
tmp_mapping_1__dict = tmp_assign_source_3;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_mapping_1__iter);
tmp_next_source_1 = tmp_mapping_1__iter;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_mapping_1__key;
    tmp_mapping_1__key = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_key_value_1 = tmp_mapping_1__key;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dict_arg_value_1 = tmp_mapping_1__dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_mapping_1__key);
tmp_tuple_element_2 = tmp_mapping_1__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_subscript_value_1 = tmp_mapping_1__key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_dictset_dict = tmp_mapping_1__dict;
CHECK_OBJECT(tmp_mapping_1__key);
tmp_dictset_key = tmp_mapping_1__key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_mapping_1__dict);
tmp_assign_source_5 = tmp_mapping_1__dict;
{
    PyObject *old = par_star_arg_dict;
    par_star_arg_dict = tmp_assign_source_5;
    Py_INCREF(par_star_arg_dict);
    Py_XDECREF(old);
}

}
branch_no_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_mapping_1__dict);
tmp_mapping_1__dict = NULL;
Py_XDECREF(tmp_mapping_1__iter);
tmp_mapping_1__iter = NULL;
Py_XDECREF(tmp_mapping_1__keys);
tmp_mapping_1__keys = NULL;
Py_XDECREF(tmp_mapping_1__key);
tmp_mapping_1__key = NULL;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_3 = par_star_arg_list;
tmp_cmp_expr_left_3 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_3 == NULL));
tmp_cmp_expr_right_3 = (PyObject *)&PyTuple_Type;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_4 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_5 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_6 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_6;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_4 = par_star_arg_list;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_3);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_5:;
branch_no_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
if (par_star_arg_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_args_value_1 = par_star_arg_list;
CHECK_OBJECT(par_star_arg_dict);
tmp_kwargs_value_1 = par_star_arg_dict;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_star_arg_list = python_pars[2];
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
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
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_called);
tmp_called_value_1 = par_called;
CHECK_OBJECT(par_args);
tmp_add_expr_left_1 = par_args;
CHECK_OBJECT(par_star_arg_list);
tmp_add_expr_right_1 = par_star_arg_list;
tmp_args_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS(tstate, tmp_called_value_1, tmp_args_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_list(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_star_arg_list = python_pars[2];
PyObject *par_kw = python_pars[3];
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
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
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_called);
tmp_called_value_1 = par_called;
CHECK_OBJECT(par_args);
tmp_add_expr_left_1 = par_args;
CHECK_OBJECT(par_star_arg_list);
tmp_add_expr_right_1 = par_star_arg_list;
tmp_args_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
CHECK_OBJECT(par_kw);
tmp_kwargs_value_1 = par_kw;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_star_arg_list = python_pars[1];
PyObject *par_kw = python_pars[2];
PyObject *par_star_arg_dict = python_pars[3];
PyObject *tmp_dict_1__iter = NULL;
PyObject *tmp_dict_1__key_xxx = NULL;
PyObject *tmp_dict_1__keys = NULL;
PyObject *tmp_dict_2__item = NULL;
PyObject *tmp_dict_2__iter = NULL;
PyObject *tmp_dict_2__key = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_1 = par_star_arg_dict;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_expression_value_1 = par_star_arg_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_2;
}
assert(tmp_dict_1__keys == NULL);
tmp_dict_1__keys = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_9816e8d1552296af90d250823c964059;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_dict);
tmp_type_arg_2 = par_star_arg_dict;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);



    goto try_except_handler_1;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_dict_1__keys);
tmp_iter_arg_1 = tmp_dict_1__keys;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_1__iter == NULL);
tmp_dict_1__iter = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dict_1__iter);
tmp_next_source_1 = tmp_dict_1__iter;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_1__key_xxx;
    tmp_dict_1__key_xxx = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_cmp_expr_left_3 = tmp_dict_1__key_xxx;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_3 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg1_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_2 = par_called;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_element_2 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_2 == NULL));
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_tuple_element_2 = tmp_dict_1__key_xxx;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (par_star_arg_dict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_expression_value_3 = par_star_arg_dict;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_subscript_value_1 = tmp_dict_1__key_xxx;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_1 = par_kw;
CHECK_OBJECT(tmp_dict_1__key_xxx);
tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_seq_1;
CHECK_OBJECT(par_kw);
tmp_dict_seq_1 = par_kw;
tmp_assign_source_4 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = par_kw;
    assert(old != NULL);
    par_kw = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_star_arg_dict);
tmp_dict_arg_1 = par_star_arg_dict;
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_2 == NULL));
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_dict_2__iter == NULL);
tmp_dict_2__iter = tmp_assign_source_5;
}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_dict_2__iter);
tmp_next_source_2 = tmp_dict_2__iter;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_dict_2__item;
    tmp_dict_2__item = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_4 = tmp_dict_2__item;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
{
    PyObject *old = tmp_dict_2__key;
    tmp_dict_2__key = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_dict_2__key);
tmp_cmp_expr_left_4 = tmp_dict_2__key;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_cmp_expr_right_4 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_fdd1f239b4f3ffd6efcccf00e4a637e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_direct_call_arg1_3 = par_called;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_tuple_element_3 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_3 == NULL));
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_dict_2__key);
tmp_tuple_element_3 = tmp_dict_2__key;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_dict_2__item);
tmp_expression_value_5 = tmp_dict_2__item;
tmp_subscript_value_3 = const_int_pos_1;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
if (par_kw == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_ass_subscribed_2 = par_kw;
CHECK_OBJECT(tmp_dict_2__key);
tmp_ass_subscript_2 = tmp_dict_2__key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_2;
loop_end_2:;
branch_no_4:;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(tmp_dict_1__iter);
tmp_dict_1__iter = NULL;
Py_XDECREF(tmp_dict_1__keys);
tmp_dict_1__keys = NULL;
Py_XDECREF(tmp_dict_1__key_xxx);
tmp_dict_1__key_xxx = NULL;
Py_XDECREF(tmp_dict_2__iter);
tmp_dict_2__iter = NULL;
Py_XDECREF(tmp_dict_2__item);
tmp_dict_2__item = NULL;
Py_XDECREF(tmp_dict_2__key);
tmp_dict_2__key = NULL;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_3 = par_star_arg_list;
tmp_cmp_expr_left_5 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_5 == NULL));
tmp_cmp_expr_right_5 = (PyObject *)&PyTuple_Type;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_6 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_7 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_8 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_direct_call_arg1_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_direct_call_arg1_4 = par_called;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_tuple_element_4 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_4 == NULL));
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_4 = par_star_arg_list;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_4);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_7:;
branch_no_6:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
if (par_called == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_called);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_called_value_2 = par_called;
if (par_star_arg_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_star_arg_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_args_value_1 = par_star_arg_list;
if (par_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto function_exception_exit;
}

tmp_kwargs_value_1 = par_kw;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
CHECK_OBJECT(par_star_arg_dict);
Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_called = python_pars[0];
PyObject *par_star_arg_list = python_pars[1];
PyObject *par_kw = python_pars[2];
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_1 = par_star_arg_list;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = (PyObject *)&PyTuple_Type;
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
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_1 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___iter__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_star_arg_list);
tmp_expression_value_2 = par_star_arg_list;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
CHECK_OBJECT(par_star_arg_list);
tmp_tuple_arg_1 = par_star_arg_list;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
{
    PyObject *old = par_star_arg_list;
    assert(old != NULL);
    par_star_arg_list = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg1_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
CHECK_OBJECT(par_called);
tmp_direct_call_arg1_1 = par_called;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_element_1 = impl___main__$$$helper_function_get_callable_name_desc(tstate, dir_call_args);
}
assert(!(tmp_tuple_element_1 == NULL));
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_star_arg_list);
tmp_type_arg_2 = par_star_arg_list;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto function_exception_exit;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto function_exception_exit;
}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_called);
tmp_called_value_1 = par_called;
CHECK_OBJECT(par_star_arg_list);
tmp_args_value_1 = par_star_arg_list;
CHECK_OBJECT(par_kw);
tmp_kwargs_value_1 = par_kw;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto function_exception_exit;
}
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_called);
Py_DECREF(par_called);
CHECK_OBJECT(par_star_arg_list);
Py_DECREF(par_star_arg_list);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_set(PyThreadState *tstate, PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *tmp_iter = NULL;
PyObject *tmp_keys = NULL;
PyObject *tmp_set = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
assert(tmp_iter == NULL);
tmp_iter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = PySet_New(NULL);
assert(tmp_set == NULL);
tmp_set = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_iter);
tmp_next_source_1 = tmp_iter;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_keys;
    tmp_keys = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_set_arg_value_1;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_set);
tmp_set_arg_value_1 = tmp_set;
CHECK_OBJECT(tmp_keys);
tmp_value_value_1 = tmp_keys;
assert(PySet_Check(tmp_set_arg_value_1));
tmp_res = _PySet_Update(tmp_set_arg_value_1, tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);




    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_set);
tmp_return_value = tmp_set;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_set);
CHECK_OBJECT(tmp_set);
Py_DECREF(tmp_set);
tmp_set = NULL;
CHECK_OBJECT(tmp_iter);
CHECK_OBJECT(tmp_iter);
Py_DECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_set);
tmp_set = NULL;
Py_XDECREF(tmp_iter);
tmp_iter = NULL;
Py_XDECREF(tmp_keys);
tmp_keys = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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



static PyObject *MAKE_FUNCTION___main__$$$function__10_main(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__10_main,
        mod_consts.const_str_plain_main,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c62c8b2f0ec35fb13941a9cfb183ac9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_find_project_root(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_find_project_root,
        mod_consts.const_str_plain_find_project_root,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_287b4b142ebf66df76e90f88ccfa9d1a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__2_get_script_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__2_get_script_dir,
        mod_consts.const_str_plain_get_script_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f40050b2e56ddfa1cbe2985430d06ebb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module___main__,
        mod_consts.const_str_digest_5c7f21c13d94d64077694c537cd35497,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_cmd_init(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_cmd_init,
        mod_consts.const_str_plain_cmd_init,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a94a9cb38bb0fb6a35d0ee4828358179,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_cmd_run(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_cmd_run,
        mod_consts.const_str_plain_cmd_run,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8fe6a8bc0f9513018ec0cc4e14ca56b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__5_cmd_log(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__5_cmd_log,
        mod_consts.const_str_plain_cmd_log,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c28c40d139bbca3b45eaac57491329a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_cmd_status(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_cmd_status,
        mod_consts.const_str_plain_cmd_status,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9ac6167ecda31c0d0a925d5e48dc0f33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__7_cmd_rollback(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__7_cmd_rollback,
        mod_consts.const_str_plain_cmd_rollback,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_20ce3c01483f85825563063487cf66ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__8_cmd_edit_role(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__8_cmd_edit_role,
        mod_consts.const_str_plain_cmd_edit_role,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e01c7a498e1e4a7d0036967197aa4774,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__9_cmd_key_clear(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__9_cmd_key_clear,
        mod_consts.const_str_plain_cmd_key_clear,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_76bbae8d1728315698316c7a074f3333,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
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

static function_impl_code const function_table___main__[] = {
impl___main__$$$function__1_find_project_root,
impl___main__$$$function__2_get_script_dir,
impl___main__$$$function__3_cmd_init,
impl___main__$$$function__4_cmd_run,
impl___main__$$$function__5_cmd_log,
impl___main__$$$function__6_cmd_status,
impl___main__$$$function__7_cmd_rollback,
impl___main__$$$function__8_cmd_edit_role,
impl___main__$$$function__9_cmd_key_clear,
impl___main__$$$function__10_main,
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

    return Nuitka_Function_GetFunctionState(function, function_table___main__);
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
        module___main__,
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
        function_table___main__,
        sizeof(function_table___main__) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 1
static char const *module_full_name = "__main__";
#endif

// Internal entry point for module code.
PyObject *module_code___main__(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    moduledict___main__ = MODULE_DICT(module___main__);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 1
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
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("__main__: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 1
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in init__main__\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 1 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame___main__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b43288cd02ecaa696bf885c646efd9ff;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
frame_frame___main__ = MAKE_MODULE_FRAME(code_objects_1310a677e9370d74ccbe5d440ebd33bd, module___main__);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame___main__);
assert(Py_REFCNT(frame_frame___main__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_argparse;
tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_argparse, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_2 = const_int_0;
frame_frame___main__->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict___main__,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_str_dot_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c91f895e826ff6e18cd6b1523a708a49);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_9 = MAKE_FUNCTION___main__$$$function__1_find_project_root(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_find_project_root, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = module_var_accessor___main__$Path(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_annotations_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_10 = MAKE_FUNCTION___main__$$$function__2_get_script_dir(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_get_script_dir, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;

tmp_assign_source_11 = MAKE_FUNCTION___main__$$$function__3_cmd_init(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_init, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;

tmp_assign_source_12 = MAKE_FUNCTION___main__$$$function__4_cmd_run(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_run, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION___main__$$$function__5_cmd_log(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_log, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION___main__$$$function__6_cmd_status(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_status, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION___main__$$$function__7_cmd_rollback(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_rollback, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION___main__$$$function__8_cmd_edit_role(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_edit_role, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION___main__$$$function__9_cmd_key_clear(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_cmd_key_clear, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION___main__$$$function__10_main(tstate);

UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts.const_str_plain_main, tmp_assign_source_18);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
tmp_called_value_1 = module_var_accessor___main__$main(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame___main__->m_frame.f_lineno = 190;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

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
        exception_tb = MAKE_TRACEBACK(frame_frame___main__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame___main__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame___main__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame___main__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

#if _NUITKA_MODULE_MODE && 1
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module___main__);
    return module___main__;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

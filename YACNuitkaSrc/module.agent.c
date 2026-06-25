/* Generated code for Python module 'agent'
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



/* The "module_agent" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_agent;
PyDictObject *moduledict_agent;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_plain_current_tuple;
PyObject *const_dict_354c61fc514c17800a1e11abbafc759c;
PyObject *const_str_plain_CheckOut;
PyObject *const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca;
PyObject *const_str_plain_current;
PyObject *const_str_digest_770785d01d9f528b248c2ebb8465acc6;
PyObject *const_str_plain_checkout;
PyObject *const_tuple_str_plain_level_str_plain_write_tuple;
PyObject *const_str_plain_ok;
PyObject *const_str_plain_list_files;
PyObject *const_str_plain__ensure_token;
PyObject *const_str_plain_UseTool;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_read_file;
PyObject *const_str_plain_filename;
PyObject *const_str_plain_pfps;
PyObject *const_tuple_str_plain_PFPS_tuple;
PyObject *const_str_plain_PFPS;
PyObject *const_str_plain_BuildVarFile;
PyObject *const_str_plain_ReadChunkVar;
PyObject *const_str_plain_values;
PyObject *const_str_plain_write_file;
PyObject *const_str_plain_write;
PyObject *const_str_plain_content;
PyObject *const_str_plain_SandboxPath;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_create_file;
PyObject *const_tuple_str_plain_content_str_empty_tuple;
PyObject *const_tuple_str_plain_filename_str_plain_content_tuple;
PyObject *const_str_plain_working;
PyObject *const_str_plain_Working;
PyObject *const_tuple_str_plain_message_str_empty_tuple;
PyObject *const_tuple_str_plain_Yes_str_plain_message_tuple;
PyObject *const_str_plain_done;
PyObject *const_str_plain_WorkingStop;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_Yes_tuple;
PyObject *const_str_plain_say;
PyObject *const_str_plain_printtoconsole;
PyObject *const_str_plain_message;
PyObject *const_tuple_490102c2621493270d9ec95194bd0a9e_tuple;
PyObject *const_str_plain_toolname;
PyObject *const_str_plain_items;
PyObject *const_tuple_type_list_type_dict_tuple;
PyObject *const_str_plain_shell;
PyObject *const_str_plain_shell_exec;
PyObject *const_tuple_str_plain_ShellExecutor_tuple;
PyObject *const_str_plain_ShellExecutor;
PyObject *const_str_plain_dispatch_tool;
PyObject *const_str_plain__shell_exec;
PyObject *const_str_plain_root;
PyObject *const_tuple_str_plain_cmd_str_empty_tuple;
PyObject *const_tuple_str_plain_reason_str_empty_tuple;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_SHELL;
PyObject *const_str_digest_1215be7a1d2665b234570e843e47b62c;
PyObject *const_str_plain_executor;
PyObject *const_str_plain_run;
PyObject *const_str_digest_d61e58315ad9dd81880ac0f3dfc78787;
PyObject *const_slice_none_int_pos_80_none;
PyObject *const_str_plain_web_search;
PyObject *const_tuple_str_plain_search_tuple;
PyObject *const_str_plain_search;
PyObject *const_tuple_str_plain_query_str_empty_tuple;
PyObject *const_str_plain_WEBSEARCH;
PyObject *const_str_digest_a74909d13b8ded279679c70f69e07543;
PyObject *const_str_digest_ada226c29df488e057994b1be63dbb03;
PyObject *const_str_digest_1d28103a8eae493247f1d05c2cdeeb71;
PyObject *const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_a63731bdd450ae785f7934f7345a469b;
PyObject *const_dict_d63284c5b6524e9285d9279f90a3f82a;
PyObject *const_str_plain_anthropic_key;
PyObject *const_str_plain_keyring;
PyObject *const_str_plain_delete_password;
PyObject *const_str_plain_KEYRING_SERVICE;
PyObject *const_str_plain_console;
PyObject *const_str_digest_2d648c509a349da8bc645b669b83dd77;
PyObject *const_str_digest_61b10941126b97b4fd05b539cb593a98;
PyObject *const_str_digest_219465d75b426fd1e4b8f88ad5c024b4;
PyObject *const_str_digest_d0c4fcc1cea52e7cd8d39c1cabfd2b11;
PyObject *const_str_plain_get_adapter;
PyObject *const_str_plain_uuid;
PyObject *const_str_plain_uuid4;
PyObject *const_str_plain_hex;
PyObject *const_slice_none_int_pos_8_none;
PyObject *const_str_plain_start_session;
PyObject *const_str_plain_AMS;
PyObject *const_str_plain_ErrorExecution;
PyObject *const_str_plain_agent;
PyObject *const_str_digest_56df6719d476a28fcf88fc22ba83bb42;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_254;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_37d012593759c8eedbca11363138ccc1;
PyObject *const_str_plain_nap;
PyObject *const_str_digest_3d941be1fd375dbebb296af6763970da;
PyObject *const_tuple_str_plain_messages_str_plain_original_prompt_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_AgentRef;
PyObject *const_str_plain_bind_agent;
PyObject *const_tuple_str_plain_print_session_start_tuple;
PyObject *const_str_plain_print_session_start;
PyObject *const_str_plain_config;
PyObject *const_tuple_str_plain_name_str_plain_unknown_tuple;
PyObject *const_str_digest_5aefba724cb59a59861ce0b12cd5a774;
PyObject *const_str_digest_48bfde6cb09c5298c361c10ed710722f;
PyObject *const_str_plain_MODEL;
PyObject *const_str_digest_34ed79348cb98bde09a3c57c5890eed0;
PyObject *const_str_plain_Permissions;
PyObject *const_str_plain_Read;
PyObject *const_str_plain_ListFiles;
PyObject *const_str_newline;
PyObject *const_str_digest_950a9486a2ce9f825df4b8c51da7d84d;
PyObject *const_str_digest_453bbf052bdd5edcae168e132db72c1a;
PyObject *const_str_digest_a4297288c4cdeaf95020906649937e20;
PyObject *const_str_digest_b45e3eb9707c27f9d2a40f9be6bb2370;
PyObject *const_str_plain_messages;
PyObject *const_str_plain_append;
PyObject *const_str_plain_role;
PyObject *const_str_plain_user;
PyObject *const_str_digest_f37452e2511a12e12e94b4f121df3943;
PyObject *const_str_digest_a41776ae1e4116ee1b7a05c6967a3a96;
PyObject *const_str_plain_ams;
PyObject *const_str_plain_should_stop;
PyObject *const_tuple_str_digest_2f7680698ac4edc421d653783f31cb2f_tuple;
PyObject *const_str_plain_adapter;
PyObject *const_str_plain_complete;
PyObject *const_str_plain_system_prompt;
PyObject *const_str_plain_CLAUDE_TOOLS;
PyObject *const_str_plain_429;
PyObject *const_str_plain_RESOURCE_EXHAUSTED;
PyObject *const_str_plain_quota;
PyObject *const_str_plain_RateLimitError;
PyObject *const_str_plain_re;
PyObject *const_str_digest_75e1742c28bca9dd21550c6dfe23dacc;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_str_digest_049d64ae13ee9be4b0a9387750f43081;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6;
PyObject *const_str_digest_cf9db1e76dcde70c18f2e26503c7546f;
PyObject *const_str_digest_8938b72399e63e441d058e6741f7c067;
PyObject *const_dict_eaff483f08ec986ed21aacb5523c1560;
PyObject *const_str_digest_141adfec59c281a78a27530de2f225d3;
PyObject *const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyObject *const_str_digest_770433a00d088ff959e7f04f26da36d2;
PyObject *const_str_plain_billing;
PyObject *const_str_plain_credit;
PyObject *const_str_plain_payment;
PyObject *const_tuple_str_digest_d33c34bdef163c98ac1710012cac3c2c_tuple;
PyObject *const_str_plain_401;
PyObject *const_str_plain_authentication;
PyObject *const_str_plain_AuthenticationError;
PyObject *const_str_digest_1f29eadbe7135a6b765eccd7e416aee7;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_str_digest_79b8e45b6909cee36d63a6d134720598_tuple;
PyObject *const_str_digest_47795d2367ab1cb4daf0e6fb51374998;
PyObject *const_str_digest_84591b50428aa5672057fd1bb08e53e5;
PyObject *const_str_plain_format_assistant_message;
PyObject *const_str_plain_assistant;
PyObject *const_str_plain_text;
PyObject *const_str_plain_stop_reason;
PyObject *const_str_plain_end_turn;
PyObject *const_str_plain_tool_calls;
PyObject *const_str_digest_6c63fa3ab865798d46bf040bb478b3ed;
PyObject *const_str_plain_inputs;
PyObject *const_str_plain_token_store;
PyObject *const_str_plain_error_exec;
PyObject *const_str_plain_tool_results;
PyObject *const_str_plain_format_tool_result;
PyObject *const_str_plain_id;
PyObject *const_tuple_str_plain_WorkingStop_str_plain_done_tuple;
PyObject *const_str_plain__working;
PyObject *const_str_plain_prompt;
PyObject *const_str_plain_original_prompt;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_c646b3344ef30ce8f12679f72faf241b;
PyObject *const_str_digest_820fd7ca05e6646ae8c0defd7873d84f;
PyObject *const_str_digest_bfc53ce9d3535ff889a13ce4f4aee84e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_tuple_str_plain_console_tuple;
PyObject *const_tuple_str_plain_AMS_tuple;
PyObject *const_str_plain_permissions;
PyObject *const_tuple_str_plain_Permissions_tuple;
PyObject *const_str_plain_error_execution;
PyObject *const_tuple_str_plain_ErrorExecution_tuple;
PyObject *const_str_plain_model_router;
PyObject *const_tuple_str_plain_get_adapter_str_plain_AgentResponse_tuple;
PyObject *const_str_plain_AgentResponse;
PyObject *const_str_plain_YourAssistantCoder;
PyObject *const_list_d5fe38ed0180e730ca3994e2b3ae38cd_list;
PyObject *const_tuple_str_plain_read_tuple;
PyObject *const_str_plain_return;
PyObject *const_tuple_str_plain_claude_tuple;
PyObject *const_dict_6e21b8f0a91db1373144f674c688be5f;
PyObject *const_str_plain_clear_api_key;
PyObject *const_tuple_str_plain_Editor_str_plain_claude_tuple;
PyObject *const_str_plain_model;
PyObject *const_str_plain_run_agent;
PyObject *const_str_digest_d73db55ba53cd6311cbd5e0b23c91264;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_f_tuple;
PyObject *const_str_digest_d8f1eda43239861f6881394e811743ea;
PyObject *const_tuple_str_plain_self_str_plain_prompt_tuple;
PyObject *const_tuple_str_plain_prompt_tuple;
PyObject *const_tuple_fa5ca8c55527b8cdf08c0fbc1138f087_tuple;
PyObject *const_tuple_str_plain_provider_str_plain_key_map_str_plain_key_name_tuple;
PyObject *const_tuple_e9568b9d92a62849b19762ebfe5e9725_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_9905f440e61bb9cdb344279d9a18b887_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[214];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("agent"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_current_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_354c61fc514c17800a1e11abbafc759c);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_CheckOut);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_current);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_770785d01d9f528b248c2ebb8465acc6);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkout);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_str_plain_write_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ok);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_files);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_token);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_UseTool);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_file);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_pfps);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPS_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_BuildVarFile);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadChunkVar);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_file);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_SandboxPath);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_file);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_content_str_empty_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_content_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_working);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Working);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_empty_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_str_plain_message_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_done);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_say);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_printtoconsole);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_490102c2621493270d9ec95194bd0a9e_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_toolname);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_dict_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_shell);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_shell_exec);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ShellExecutor_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShellExecutor);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_dispatch_tool);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__shell_exec);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_root);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cmd_str_empty_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_str_empty_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHELL);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_1215be7a1d2665b234570e843e47b62c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_executor);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_d61e58315ad9dd81880ac0f3dfc78787);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_web_search);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_search_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_query_str_empty_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_WEBSEARCH);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_a74909d13b8ded279679c70f69e07543);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_ada226c29df488e057994b1be63dbb03);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d28103a8eae493247f1d05c2cdeeb71);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_a63731bdd450ae785f7934f7345a469b);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_d63284c5b6524e9285d9279f90a3f82a);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_anthropic_key);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyring);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYRING_SERVICE);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_console);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_61b10941126b97b4fd05b539cb593a98);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_219465d75b426fd1e4b8f88ad5c024b4);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0c4fcc1cea52e7cd8d39c1cabfd2b11);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_adapter);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_8_none);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_session);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_AMS);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorExecution);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_agent);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_56df6719d476a28fcf88fc22ba83bb42);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_37d012593759c8eedbca11363138ccc1);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_nap);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d941be1fd375dbebb296af6763970da);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_messages_str_plain_original_prompt_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentRef);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_bind_agent);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_print_session_start_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_print_session_start);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_unknown_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_5aefba724cb59a59861ce0b12cd5a774);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_48bfde6cb09c5298c361c10ed710722f);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_MODEL);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_34ed79348cb98bde09a3c57c5890eed0);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_Permissions);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_Read);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_950a9486a2ce9f825df4b8c51da7d84d);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_453bbf052bdd5edcae168e132db72c1a);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4297288c4cdeaf95020906649937e20);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_b45e3eb9707c27f9d2a40f9be6bb2370);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_user);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_f37452e2511a12e12e94b4f121df3943);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_a41776ae1e4116ee1b7a05c6967a3a96);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ams);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_stop);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2f7680698ac4edc421d653783f31cb2f_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_adapter);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_complete);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_system_prompt);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLAUDE_TOOLS);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_429);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESOURCE_EXHAUSTED);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_quota);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_75e1742c28bca9dd21550c6dfe23dacc);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_049d64ae13ee9be4b0a9387750f43081);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf9db1e76dcde70c18f2e26503c7546f);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_eaff483f08ec986ed21aacb5523c1560);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_141adfec59c281a78a27530de2f225d3);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_770433a00d088ff959e7f04f26da36d2);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_billing);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_credit);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_payment);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d33c34bdef163c98ac1710012cac3c2c_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_401);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_authentication);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f29eadbe7135a6b765eccd7e416aee7);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79b8e45b6909cee36d63a6d134720598_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_47795d2367ab1cb4daf0e6fb51374998);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_84591b50428aa5672057fd1bb08e53e5);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_assistant_message);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistant);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_reason);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_end_turn);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c63fa3ab865798d46bf040bb478b3ed);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_inputs);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_store);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_exec);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_results);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_tool_result);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WorkingStop_str_plain_done_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain__working);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_original_prompt);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_c646b3344ef30ce8f12679f72faf241b);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_820fd7ca05e6646ae8c0defd7873d84f);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfc53ce9d3535ff889a13ce4f4aee84e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AMS_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_permissions);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Permissions_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_execution);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorExecution_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_router);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_adapter_str_plain_AgentResponse_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentResponse);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_YourAssistantCoder);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_list_d5fe38ed0180e730ca3994e2b3ae38cd_list);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_claude_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_6e21b8f0a91db1373144f674c688be5f);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_api_key);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Editor_str_plain_claude_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_agent);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_d73db55ba53cd6311cbd5e0b23c91264);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_f_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8f1eda43239861f6881394e811743ea);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_prompt_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_fa5ca8c55527b8cdf08c0fbc1138f087_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_provider_str_plain_key_map_str_plain_key_name_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_e9568b9d92a62849b19762ebfe5e9725_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_9905f440e61bb9cdb344279d9a18b887_tuple);
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
void checkModuleConstants_agent(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_current_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_current_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_354c61fc514c17800a1e11abbafc759c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_354c61fc514c17800a1e11abbafc759c);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_CheckOut));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CheckOut);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_current));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_770785d01d9f528b248c2ebb8465acc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_770785d01d9f528b248c2ebb8465acc6);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkout);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_str_plain_write_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_level_str_plain_write_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ok);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list_files);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ensure_token);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_UseTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UseTool);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_file);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filename);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_pfps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pfps);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PFPS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PFPS_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_PFPS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PFPS);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_BuildVarFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BuildVarFile);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadChunkVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadChunkVar);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_file);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_SandboxPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SandboxPath);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_file);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_content_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_content_str_empty_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_content_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_str_plain_content_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_working));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_working);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Working));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Working);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_message_str_empty_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Yes_str_plain_message_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_done);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkingStop);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Yes_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_say));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_say);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_printtoconsole));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_printtoconsole);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_490102c2621493270d9ec95194bd0a9e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_490102c2621493270d9ec95194bd0a9e_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_toolname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toolname);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_dict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_type_dict_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_shell));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shell);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_shell_exec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shell_exec);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ShellExecutor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ShellExecutor_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShellExecutor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShellExecutor);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_dispatch_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dispatch_tool);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__shell_exec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__shell_exec);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cmd_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cmd_str_empty_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reason_str_empty_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHELL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHELL);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_1215be7a1d2665b234570e843e47b62c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1215be7a1d2665b234570e843e47b62c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_executor);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_d61e58315ad9dd81880ac0f3dfc78787));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d61e58315ad9dd81880ac0f3dfc78787);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_80_none);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_web_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_web_search);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_search_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_search_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_query_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_query_str_empty_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_WEBSEARCH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WEBSEARCH);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_a74909d13b8ded279679c70f69e07543));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a74909d13b8ded279679c70f69e07543);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_ada226c29df488e057994b1be63dbb03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ada226c29df488e057994b1be63dbb03);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d28103a8eae493247f1d05c2cdeeb71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d28103a8eae493247f1d05c2cdeeb71);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_a63731bdd450ae785f7934f7345a469b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a63731bdd450ae785f7934f7345a469b);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_d63284c5b6524e9285d9279f90a3f82a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d63284c5b6524e9285d9279f90a3f82a);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_anthropic_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anthropic_key);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keyring);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_password);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYRING_SERVICE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEYRING_SERVICE);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_console);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_61b10941126b97b4fd05b539cb593a98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61b10941126b97b4fd05b539cb593a98);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_219465d75b426fd1e4b8f88ad5c024b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_219465d75b426fd1e4b8f88ad5c024b4);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0c4fcc1cea52e7cd8d39c1cabfd2b11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0c4fcc1cea52e7cd8d39c1cabfd2b11);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_adapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_adapter);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid4);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hex);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_8_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_8_none);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_session);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_AMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AMS);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorExecution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorExecution);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_agent);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_56df6719d476a28fcf88fc22ba83bb42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56df6719d476a28fcf88fc22ba83bb42);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_254));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_254);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_37d012593759c8eedbca11363138ccc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37d012593759c8eedbca11363138ccc1);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_nap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nap);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d941be1fd375dbebb296af6763970da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d941be1fd375dbebb296af6763970da);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_messages_str_plain_original_prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_messages_str_plain_original_prompt_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentRef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentRef);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_bind_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bind_agent);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_print_session_start_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_print_session_start_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_print_session_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_print_session_start);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_unknown_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_str_plain_unknown_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_5aefba724cb59a59861ce0b12cd5a774));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5aefba724cb59a59861ce0b12cd5a774);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_48bfde6cb09c5298c361c10ed710722f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48bfde6cb09c5298c361c10ed710722f);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_MODEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MODEL);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_34ed79348cb98bde09a3c57c5890eed0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34ed79348cb98bde09a3c57c5890eed0);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_Permissions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Permissions);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_Read));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Read);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ListFiles);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_950a9486a2ce9f825df4b8c51da7d84d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_950a9486a2ce9f825df4b8c51da7d84d);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_453bbf052bdd5edcae168e132db72c1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_453bbf052bdd5edcae168e132db72c1a);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4297288c4cdeaf95020906649937e20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4297288c4cdeaf95020906649937e20);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_b45e3eb9707c27f9d2a40f9be6bb2370));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b45e3eb9707c27f9d2a40f9be6bb2370);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_f37452e2511a12e12e94b4f121df3943));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f37452e2511a12e12e94b4f121df3943);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_a41776ae1e4116ee1b7a05c6967a3a96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a41776ae1e4116ee1b7a05c6967a3a96);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ams);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_stop);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2f7680698ac4edc421d653783f31cb2f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2f7680698ac4edc421d653783f31cb2f_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_adapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_adapter);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complete);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_system_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system_prompt);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLAUDE_TOOLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLAUDE_TOOLS);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_429));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_429);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESOURCE_EXHAUSTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESOURCE_EXHAUSTED);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_quota));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quota);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RateLimitError);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_75e1742c28bca9dd21550c6dfe23dacc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75e1742c28bca9dd21550c6dfe23dacc);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_049d64ae13ee9be4b0a9387750f43081));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_049d64ae13ee9be4b0a9387750f43081);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf9db1e76dcde70c18f2e26503c7546f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf9db1e76dcde70c18f2e26503c7546f);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_eaff483f08ec986ed21aacb5523c1560));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eaff483f08ec986ed21aacb5523c1560);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_141adfec59c281a78a27530de2f225d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_141adfec59c281a78a27530de2f225d3);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_770433a00d088ff959e7f04f26da36d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_770433a00d088ff959e7f04f26da36d2);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_billing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_billing);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_credit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credit);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_payment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_payment);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d33c34bdef163c98ac1710012cac3c2c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d33c34bdef163c98ac1710012cac3c2c_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_401));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_401);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_authentication));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authentication);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthenticationError);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f29eadbe7135a6b765eccd7e416aee7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f29eadbe7135a6b765eccd7e416aee7);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79b8e45b6909cee36d63a6d134720598_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_79b8e45b6909cee36d63a6d134720598_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_47795d2367ab1cb4daf0e6fb51374998));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47795d2367ab1cb4daf0e6fb51374998);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_84591b50428aa5672057fd1bb08e53e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84591b50428aa5672057fd1bb08e53e5);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_assistant_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_assistant_message);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistant);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_reason);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_end_turn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_end_turn);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_calls);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c63fa3ab865798d46bf040bb478b3ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c63fa3ab865798d46bf040bb478b3ed);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_inputs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inputs);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_store));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_store);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_exec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_exec);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_results));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_results);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_tool_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_tool_result);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WorkingStop_str_plain_done_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WorkingStop_str_plain_done_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain__working));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__working);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_original_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_original_prompt);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_c646b3344ef30ce8f12679f72faf241b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c646b3344ef30ce8f12679f72faf241b);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_820fd7ca05e6646ae8c0defd7873d84f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_820fd7ca05e6646ae8c0defd7873d84f);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfc53ce9d3535ff889a13ce4f4aee84e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfc53ce9d3535ff889a13ce4f4aee84e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_console_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AMS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AMS_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_permissions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permissions);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Permissions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Permissions_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_execution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_execution);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorExecution_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ErrorExecution_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_router));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_router);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_adapter_str_plain_AgentResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_adapter_str_plain_AgentResponse_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentResponse);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_YourAssistantCoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_YourAssistantCoder);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_list_d5fe38ed0180e730ca3994e2b3ae38cd_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_d5fe38ed0180e730ca3994e2b3ae38cd_list);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_read_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_claude_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_claude_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_6e21b8f0a91db1373144f674c688be5f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e21b8f0a91db1373144f674c688be5f);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_api_key);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Editor_str_plain_claude_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Editor_str_plain_claude_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_agent);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_d73db55ba53cd6311cbd5e0b23c91264));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d73db55ba53cd6311cbd5e0b23c91264);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_f_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8f1eda43239861f6881394e811743ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8f1eda43239861f6881394e811743ea);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_prompt_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prompt_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_fa5ca8c55527b8cdf08c0fbc1138f087_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa5ca8c55527b8cdf08c0fbc1138f087_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_provider_str_plain_key_map_str_plain_key_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_provider_str_plain_key_map_str_plain_key_name_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_e9568b9d92a62849b19762ebfe5e9725_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9568b9d92a62849b19762ebfe5e9725_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_9905f440e61bb9cdb344279d9a18b887_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9905f440e61bb9cdb344279d9a18b887_tuple);
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
static PyObject *module_var_accessor_agent$AMS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS);
    }

    return result;
}

static PyObject *module_var_accessor_agent$CLAUDE_TOOLS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_CLAUDE_TOOLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLAUDE_TOOLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLAUDE_TOOLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLAUDE_TOOLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLAUDE_TOOLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_CLAUDE_TOOLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_CLAUDE_TOOLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLAUDE_TOOLS);
    }

    return result;
}

static PyObject *module_var_accessor_agent$ErrorExecution(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorExecution);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorExecution, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorExecution);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorExecution, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution);
    }

    return result;
}

static PyObject *module_var_accessor_agent$KEYRING_SERVICE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYRING_SERVICE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYRING_SERVICE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYRING_SERVICE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYRING_SERVICE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYRING_SERVICE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYRING_SERVICE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYRING_SERVICE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYRING_SERVICE);
    }

    return result;
}

static PyObject *module_var_accessor_agent$PFPS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PFPS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PFPS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PFPS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PFPS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPS);
    }

    return result;
}

static PyObject *module_var_accessor_agent$Permissions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions);
    }

    return result;
}

static PyObject *module_var_accessor_agent$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_agent$_ensure_token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_token);
    }

    return result;
}

static PyObject *module_var_accessor_agent$console(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_console);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_console);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_console, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_console);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_console, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_console);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_console);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_console);
    }

    return result;
}

static PyObject *module_var_accessor_agent$dispatch_tool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_tool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dispatch_tool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dispatch_tool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dispatch_tool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dispatch_tool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_tool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_tool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_tool);
    }

    return result;
}

static PyObject *module_var_accessor_agent$get_adapter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_get_adapter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_adapter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_adapter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_adapter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_adapter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_get_adapter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_get_adapter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_adapter);
    }

    return result;
}

static PyObject *module_var_accessor_agent$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_agent$keyring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_keyring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_keyring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_keyring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_keyring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_keyring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_keyring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_keyring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_keyring);
    }

    return result;
}

static PyObject *module_var_accessor_agent$uuid(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_agent->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_agent->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_agent->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cdd5cc75daa0f7876e14b9e88486f811;
static PyCodeObject *code_objects_d1e45130eaaeb978bd18579234bde7e8;
static PyCodeObject *code_objects_c1531a4059622c47cca687a79788cfdd;
static PyCodeObject *code_objects_f8e954f44128efb64f31dad602767f0a;
static PyCodeObject *code_objects_7a94fc138455920a7eb4cac32e76c586;
static PyCodeObject *code_objects_f2c91731267d490cea791d2b8bd27d2c;
static PyCodeObject *code_objects_801ffc651ca2370bd33ff78e3d06054a;
static PyCodeObject *code_objects_dabd9329c757041d25512a79e3d8a4d6;
static PyCodeObject *code_objects_211a2a1efabc6e05d8a9f34c05bbad27;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d73db55ba53cd6311cbd5e0b23c91264); CHECK_OBJECT(module_filename_obj);
code_objects_cdd5cc75daa0f7876e14b9e88486f811 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_a63731bdd450ae785f7934f7345a469b, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_d1e45130eaaeb978bd18579234bde7e8 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_820fd7ca05e6646ae8c0defd7873d84f, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_f_tuple, NULL, 1, 0, 0);
code_objects_c1531a4059622c47cca687a79788cfdd = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_d8f1eda43239861f6881394e811743ea, mod_consts.const_str_digest_d8f1eda43239861f6881394e811743ea, NULL, NULL, 0, 0, 0);
code_objects_f8e954f44128efb64f31dad602767f0a = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_37d012593759c8eedbca11363138ccc1, mod_consts.const_tuple_str_plain_self_str_plain_prompt_tuple, mod_consts.const_tuple_str_plain_prompt_tuple, 1, 0, 0);
code_objects_7a94fc138455920a7eb4cac32e76c586 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ensure_token, mod_consts.const_str_plain__ensure_token, mod_consts.const_tuple_fa5ca8c55527b8cdf08c0fbc1138f087_tuple, NULL, 3, 0, 0);
code_objects_f2c91731267d490cea791d2b8bd27d2c = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clear_api_key, mod_consts.const_str_plain_clear_api_key, mod_consts.const_tuple_str_plain_provider_str_plain_key_map_str_plain_key_name_tuple, NULL, 1, 0, 0);
code_objects_801ffc651ca2370bd33ff78e3d06054a = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dispatch_tool, mod_consts.const_str_plain_dispatch_tool, mod_consts.const_tuple_e9568b9d92a62849b19762ebfe5e9725_tuple, NULL, 5, 0, 0);
code_objects_dabd9329c757041d25512a79e3d8a4d6 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nap, mod_consts.const_str_digest_3d941be1fd375dbebb296af6763970da, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_211a2a1efabc6e05d8a9f34c05bbad27 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_run_agent, mod_consts.const_str_plain_run_agent, mod_consts.const_tuple_9905f440e61bb9cdb344279d9a18b887_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_agent$$$function__4_run_agent$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_agent$$$function__1__ensure_token(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_agent$$$function__2_dispatch_tool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_agent$$$function__3_clear_api_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__2_nap(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_agent$$$function__1__ensure_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token_store = python_pars[0];
PyObject *par_ams = python_pars[1];
PyObject *par_level = python_pars[2];
PyObject *var_level_map = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_agent$$$function__1__ensure_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__1__ensure_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_agent$$$function__1__ensure_token)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__1__ensure_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__1__ensure_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__1__ensure_token = MAKE_FUNCTION_FRAME(tstate, code_objects_7a94fc138455920a7eb4cac32e76c586, module_agent, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__1__ensure_token->m_type_description == NULL);
frame_frame_agent$$$function__1__ensure_token = cache_frame_frame_agent$$$function__1__ensure_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__1__ensure_token);
assert(Py_REFCNT(frame_frame_agent$$$function__1__ensure_token) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_token_store);
tmp_expression_value_1 = par_token_store;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__1__ensure_token->m_frame.f_lineno = 123;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_current_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_354c61fc514c17800a1e11abbafc759c);
assert(var_level_map == NULL);
var_level_map = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_ams);
tmp_expression_value_2 = par_ams;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CheckOut);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_level_map);
tmp_dict_arg_value_1 = var_level_map;
CHECK_OBJECT(par_level);
tmp_key_value_1 = par_level;
tmp_default_value_1 = mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca;
tmp_args_element_value_1 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_args_element_value_1 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_args_element_value_1 = tmp_default_value_1;
    Py_INCREF(tmp_args_element_value_1);
}
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__1__ensure_token->m_frame.f_lineno = 125;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_token);
tmp_ass_subvalue_1 = var_token;
CHECK_OBJECT(par_token_store);
tmp_ass_subscribed_1 = par_token_store;
tmp_ass_subscript_1 = mod_consts.const_str_plain_current;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_token_store);
tmp_expression_value_3 = par_token_store;
tmp_subscript_value_1 = mod_consts.const_str_plain_current;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__1__ensure_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__1__ensure_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__1__ensure_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__1__ensure_token,
    type_description_1,
    par_token_store,
    par_ams,
    par_level,
    var_level_map,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__1__ensure_token == cache_frame_frame_agent$$$function__1__ensure_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__1__ensure_token);
    cache_frame_frame_agent$$$function__1__ensure_token = NULL;
}

assertFrameObject(frame_frame_agent$$$function__1__ensure_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_level_map);
var_level_map = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_level_map);
var_level_map = NULL;
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
CHECK_OBJECT(par_token_store);
Py_DECREF(par_token_store);
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token_store);
Py_DECREF(par_token_store);
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_agent$$$function__2_dispatch_tool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_inputs = python_pars[1];
PyObject *par_ams = python_pars[2];
PyObject *par_token_store = python_pars[3];
PyObject *par_error_exec = python_pars[4];
PyObject *var_level_map = NULL;
PyObject *var_token = NULL;
PyObject *var_files = NULL;
PyObject *var_filename = NULL;
PyObject *var_PFPS = NULL;
PyObject *var_pfps = NULL;
PyObject *var_chunks = NULL;
PyObject *var_full = NULL;
PyObject *var_content = NULL;
PyObject *var_filepath = NULL;
PyObject *var_f = NULL;
PyObject *var_result = NULL;
PyObject *var_ShellExecutor = NULL;
PyObject *var_executor = NULL;
PyObject *var_cmd = NULL;
PyObject *var_reason = NULL;
PyObject *var_search = NULL;
PyObject *var_query = NULL;
PyObject *var_e = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_agent$$$function__2_dispatch_tool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__2_dispatch_tool = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_agent$$$function__2_dispatch_tool)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__2_dispatch_tool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__2_dispatch_tool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__2_dispatch_tool = MAKE_FUNCTION_FRAME(tstate, code_objects_801ffc651ca2370bd33ff78e3d06054a, module_agent, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__2_dispatch_tool->m_type_description == NULL);
frame_frame_agent$$$function__2_dispatch_tool = cache_frame_frame_agent$$$function__2_dispatch_tool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__2_dispatch_tool);
assert(Py_REFCNT(frame_frame_agent$$$function__2_dispatch_tool) == 2);

// Framed code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_checkout;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_354c61fc514c17800a1e11abbafc759c);
assert(var_level_map == NULL);
var_level_map = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_ams);
tmp_expression_value_1 = par_ams;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CheckOut);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_level_map);
tmp_dict_arg_value_1 = var_level_map;
CHECK_OBJECT(par_inputs);
tmp_expression_value_2 = par_inputs;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 134;
tmp_key_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_level_str_plain_write_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_default_value_1 = mod_consts.const_str_digest_c9f7ad8a6fac7583b9987e003e46ddca;
tmp_args_element_value_1 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_args_element_value_1 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_args_element_value_1 = tmp_default_value_1;
    Py_INCREF(tmp_args_element_value_1);
}
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 134;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_token);
tmp_ass_subvalue_1 = var_token;
CHECK_OBJECT(par_token_store);
tmp_ass_subscribed_1 = par_token_store;
tmp_ass_subscript_1 = mod_consts.const_str_plain_current;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_list_files;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_agent$_ensure_token(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_token);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_store);
tmp_args_element_value_2 = par_token_store;
CHECK_OBJECT(par_ams);
tmp_args_element_value_3 = par_ams;
tmp_args_element_value_4 = const_str_plain_read;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_ams);
tmp_called_instance_1 = par_ams;
tmp_args_element_value_5 = mod_consts.const_str_plain_list_files;
CHECK_OBJECT(var_token);
tmp_args_element_value_6 = var_token;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_UseTool,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_files == NULL);
var_files = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_files);
tmp_isinstance_inst_1 = var_files;
tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_2 = module_var_accessor_agent$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_files);
tmp_args_element_value_7 = var_files;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 141;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_files);
tmp_unicode_arg_1 = var_files;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_3 = par_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_read_file;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_agent$_ensure_token(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_token);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_store);
tmp_args_element_value_8 = par_token_store;
CHECK_OBJECT(par_ams);
tmp_args_element_value_9 = par_ams;
tmp_args_element_value_10 = const_str_plain_read;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_inputs);
tmp_expression_value_3 = par_inputs;
tmp_subscript_value_1 = mod_consts.const_str_plain_filename;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_1 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 147;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_PFPS == NULL);
var_PFPS = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_ams);
tmp_expression_value_4 = par_ams;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pfps);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_8;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_pfps);
tmp_called_instance_3 = var_pfps;
CHECK_OBJECT(var_filename);
tmp_args_element_value_11 = var_filename;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 149;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_BuildVarFile, tmp_args_element_value_11);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_pfps);
tmp_called_instance_4 = var_pfps;
CHECK_OBJECT(var_filename);
tmp_args_element_value_12 = var_filename;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 150;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ReadChunkVar, tmp_args_element_value_12);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_chunks == NULL);
var_chunks = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_chunks);
tmp_expression_value_5 = var_chunks;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_values);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 151;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_11;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_10 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_full == NULL);
var_full = tmp_assign_source_10;
}
CHECK_OBJECT(var_full);
tmp_return_value = var_full;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_4 = par_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_write_file;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_6 = module_var_accessor_agent$_ensure_token(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_token);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_store);
tmp_args_element_value_13 = par_token_store;
CHECK_OBJECT(par_ams);
tmp_args_element_value_14 = par_ams;
tmp_args_element_value_15 = mod_consts.const_str_plain_write;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_inputs);
tmp_expression_value_6 = par_inputs;
tmp_subscript_value_2 = mod_consts.const_str_plain_filename;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_inputs);
tmp_expression_value_7 = par_inputs;
tmp_subscript_value_3 = mod_consts.const_str_plain_content;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_content == NULL);
var_content = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_ams);
tmp_expression_value_8 = par_ams;
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pfps);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_pfps == NULL);
var_pfps = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(var_pfps);
tmp_called_instance_5 = var_pfps;
CHECK_OBJECT(var_filename);
tmp_args_element_value_16 = var_filename;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 159;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_SandboxPath, tmp_args_element_value_16);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_filepath == NULL);
var_filepath = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
CHECK_OBJECT(var_filepath);
tmp_open_filename_1 = var_filepath;
tmp_open_mode_1 = const_str_plain_w;
tmp_open_encoding_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_17 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_9 = tmp_with_1__source;
tmp_called_value_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___enter__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 160;
tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_10 = tmp_with_1__source;
tmp_assign_source_19 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___exit__);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_19;
}
{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_21 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_21);
var_f = tmp_assign_source_21;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(var_f);
tmp_called_instance_6 = var_f;
CHECK_OBJECT(var_content);
tmp_args_element_value_17 = var_content;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 161;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_write, tmp_args_element_value_17);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__2_dispatch_tool, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__2_dispatch_tool, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_22;
tmp_assign_source_22 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_22;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
tmp_args_element_value_18 = EXC_TYPE(tstate);
tmp_args_element_value_19 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_19); 
tmp_args_element_value_20 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_20 == NULL) {
    tmp_args_element_value_20 = Py_None;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 160;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_agent$$$function__2_dispatch_tool->m_frame)) {
        frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooo";
goto try_except_handler_7;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 160;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_agent$$$function__2_dispatch_tool->m_frame)) {
        frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooo";
goto try_except_handler_7;
branch_end_5:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
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
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 160;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_1__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 160;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_8:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_2;
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
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_21;
CHECK_OBJECT(var_pfps);
tmp_called_instance_7 = var_pfps;
CHECK_OBJECT(var_filename);
tmp_args_element_value_21 = var_filename;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 162;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_BuildVarFile, tmp_args_element_value_21);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_8 = par_name;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_create_file;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_value_11 = module_var_accessor_agent$_ensure_token(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_token);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_store);
tmp_args_element_value_22 = par_token_store;
CHECK_OBJECT(par_ams);
tmp_args_element_value_23 = par_ams;
tmp_args_element_value_24 = mod_consts.const_str_plain_write;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 166;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_23;
}
{
PyObject *tmp_unicode_arg_2;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_ams);
tmp_expression_value_11 = par_ams;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_UseTool);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_create_file;
CHECK_OBJECT(var_token);
tmp_kw_call_arg_value_1_1 = var_token;
CHECK_OBJECT(par_inputs);
tmp_expression_value_12 = par_inputs;
tmp_subscript_value_4 = mod_consts.const_str_plain_filename;
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 168;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_inputs);
tmp_expression_value_13 = par_inputs;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 169;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 169;
tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_content_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 169;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 167;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_unicode_arg_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_filename_str_plain_content_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_unicode_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_2);
CHECK_OBJECT(tmp_unicode_arg_2);
Py_DECREF(tmp_unicode_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_9 = par_name;
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_working;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_6;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_ams);
tmp_expression_value_14 = par_ams;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Working);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_1 = Py_True;
CHECK_OBJECT(par_inputs);
tmp_expression_value_15 = par_inputs;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 172;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 172;
tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_message_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 172;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 172;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, kw_values, mod_consts.const_tuple_str_plain_Yes_str_plain_message_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_10:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_10 = par_name;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_done;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_7;
CHECK_OBJECT(par_ams);
tmp_expression_value_16 = par_ams;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_WorkingStop);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 176;
tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_Yes_tuple);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_11 = par_name;
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_say;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_ams);
tmp_expression_value_17 = par_ams;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_printtoconsole);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_inputs);
tmp_expression_value_18 = par_inputs;
tmp_subscript_value_5 = mod_consts.const_str_plain_message;
tmp_args_element_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 180;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 180;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_12:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_12 = par_name;
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_CheckOut;
tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_ams);
tmp_expression_value_19 = par_ams;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_CheckOut);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_inputs);
tmp_expression_value_20 = par_inputs;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 185;
tmp_args_element_value_26 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_19, mod_consts.const_tuple_490102c2621493270d9ec95194bd0a9e_tuple);

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 185;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_24;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_token);
tmp_ass_subvalue_2 = var_token;
CHECK_OBJECT(par_token_store);
tmp_ass_subscribed_2 = par_token_store;
tmp_ass_subscript_2 = mod_consts.const_str_plain_current;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_13:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_13 = par_name;
tmp_cmp_expr_right_13 = mod_consts.const_str_plain_Working;
tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_9;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_ams);
tmp_expression_value_21 = par_ams;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Working);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_2 = Py_True;
CHECK_OBJECT(par_inputs);
tmp_expression_value_22 = par_inputs;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_get);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 190;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 190;
tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_21, mod_consts.const_tuple_str_plain_message_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 190;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 190;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, kw_values, mod_consts.const_tuple_str_plain_Yes_str_plain_message_tuple);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_14:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_14 = par_name;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_WorkingStop;
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_10;
CHECK_OBJECT(par_ams);
tmp_expression_value_23 = par_ams;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_WorkingStop);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 194;
tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_Yes_tuple);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_15:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_15 = par_name;
tmp_cmp_expr_right_15 = mod_consts.const_str_plain_printtoconsole;
tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_ams);
tmp_expression_value_24 = par_ams;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_printtoconsole);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_inputs);
tmp_expression_value_25 = par_inputs;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_get);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 198;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 198;
tmp_args_element_value_27 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_24, mod_consts.const_tuple_str_plain_message_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 198;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 198;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
tmp_return_value = mod_consts.const_str_plain_ok;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_16:;
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_16 = par_name;
tmp_cmp_expr_right_16 = mod_consts.const_str_plain_UseTool;
tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_25 = module_var_accessor_agent$_ensure_token(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_token);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_store);
tmp_args_element_value_28 = par_token_store;
CHECK_OBJECT(par_ams);
tmp_args_element_value_29 = par_ams;
tmp_args_element_value_30 = mod_consts.const_str_plain_write;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_26;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_6;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_ams);
tmp_expression_value_26 = par_ams;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_UseTool);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_inputs);
tmp_expression_value_27 = par_inputs;
tmp_subscript_value_6 = mod_consts.const_str_plain_toolname;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 203;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_token);
tmp_tuple_element_1 = var_token;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(par_inputs);
tmp_expression_value_28 = par_inputs;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_items);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 204;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_26);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_27 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_28;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_29 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooo";
exception_lineno = 203;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_30 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_10;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_9;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_33 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_33;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_34 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_34;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(outline_0_var_k);
tmp_cmp_expr_left_17 = outline_0_var_k;
tmp_cmp_expr_right_17 = mod_consts.const_str_plain_toolname;
tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
CHECK_OBJECT(outline_0_var_v);
tmp_dictset38_value_1 = outline_0_var_v;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
branch_no_18:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_direct_call_arg3_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_direct_call_arg3_1);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 203;
goto try_except_handler_2;
outline_result_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_26 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_26;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_31;
PyObject *tmp_unicode_arg_3;
CHECK_OBJECT(var_result);
tmp_isinstance_inst_2 = var_result;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_list_type_dict_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_instance_8 = module_var_accessor_agent$json(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_result);
tmp_args_element_value_31 = var_result;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 206;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_dumps, tmp_args_element_value_31);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_result);
tmp_unicode_arg_3 = var_result;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
condexpr_end_2:;
goto frame_return_exit_1;
}
branch_no_17:;
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_18 = par_name;
tmp_cmp_expr_right_18 = mod_consts.const_str_plain_shell;
tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_shell_exec;
tmp_globals_arg_value_2 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ShellExecutor_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 209;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_ShellExecutor,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ShellExecutor);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_ShellExecutor == NULL);
var_ShellExecutor = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_2;
tmp_expression_value_29 = module_var_accessor_agent$dispatch_tool(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatch_tool);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_name_value_3 = mod_consts.const_str_plain__shell_exec;
tmp_default_value_2 = Py_None;
tmp_assign_source_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_3, tmp_default_value_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_executor == NULL);
var_executor = tmp_assign_source_36;
}
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(var_executor);
tmp_cmp_expr_left_19 = var_executor;
tmp_cmp_expr_right_19 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_32;
PyObject *tmp_unicode_arg_4;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(var_ShellExecutor);
tmp_called_value_27 = var_ShellExecutor;
CHECK_OBJECT(par_ams);
tmp_expression_value_31 = par_ams;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_pfps);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_unicode_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_root);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_unicode_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_32 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
CHECK_OBJECT(tmp_unicode_arg_4);
Py_DECREF(tmp_unicode_arg_4);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 212;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_32);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_executor;
    assert(old != NULL);
    var_executor = tmp_assign_source_37;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_executor);
tmp_assattr_value_1 = var_executor;
tmp_assattr_target_1 = module_var_accessor_agent$dispatch_tool(tstate);
if (unlikely(tmp_assattr_target_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatch_tool);
}

if (tmp_assattr_target_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__shell_exec, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
branch_no_20:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(par_inputs);
tmp_expression_value_32 = par_inputs;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_get);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 214;
tmp_assign_source_38 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_28, mod_consts.const_tuple_str_plain_cmd_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_cmd == NULL);
var_cmd = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(par_inputs);
tmp_expression_value_33 = par_inputs;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain_get);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 215;
tmp_assign_source_39 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_29, mod_consts.const_tuple_str_plain_reason_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_reason == NULL);
var_reason = tmp_assign_source_39;
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_ams);
tmp_expression_value_35 = par_ams;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_logger);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_33 = mod_consts.const_str_plain_SHELL;
tmp_tuple_element_2 = mod_consts.const_str_digest_1215be7a1d2665b234570e843e47b62c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_cmd);
tmp_format_value_1 = var_cmd;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_30);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_34 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_34 == NULL));
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 216;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
if (var_executor == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_executor);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_9 = var_executor;
CHECK_OBJECT(var_cmd);
tmp_args_element_value_35 = var_cmd;
CHECK_OBJECT(var_reason);
tmp_args_element_value_36 = var_reason;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 217;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_assign_source_40 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_9,
        mod_consts.const_str_plain_run,
        call_args
    );
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_40;
}
{
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_ams);
tmp_expression_value_37 = par_ams;
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_logger);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_37 = mod_consts.const_str_plain_SHELL;
tmp_tuple_element_3 = mod_consts.const_str_digest_d61e58315ad9dd81880ac0f3dfc78787;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_result);
tmp_expression_value_38 = var_result;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_pos_80_none;
tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_7);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_31);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_38 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_38 == NULL));
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 218;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
}

CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_19:;
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_20 = par_name;
tmp_cmp_expr_right_20 = mod_consts.const_str_plain_web_search;
tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_4 = mod_consts.const_str_plain_web_search;
tmp_globals_arg_value_3 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_search_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 222;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_search,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_search);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_search == NULL);
var_search = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(par_inputs);
tmp_expression_value_39 = par_inputs;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain_get);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 223;
tmp_assign_source_42 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_32, mod_consts.const_tuple_str_plain_query_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_query == NULL);
var_query = tmp_assign_source_42;
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_expression_value_40;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_39;
PyObject *tmp_args_element_value_40;
CHECK_OBJECT(par_ams);
tmp_expression_value_40 = par_ams;
tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_logger);
if (tmp_called_instance_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_39 = mod_consts.const_str_plain_WEBSEARCH;
CHECK_OBJECT(var_query);
tmp_args_element_value_40 = var_query;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 224;
{
    PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_call_result_14 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_10,
        mod_consts.const_str_plain_write,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_41;
CHECK_OBJECT(var_search);
tmp_called_value_33 = var_search;
CHECK_OBJECT(var_query);
tmp_args_element_value_41 = var_query;
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 225;
tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_41);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_43;
}
{
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_42;
PyObject *tmp_args_element_value_43;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(par_ams);
tmp_expression_value_42 = par_ams;
tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_logger);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_42 = mod_consts.const_str_plain_WEBSEARCH;
tmp_tuple_element_4 = mod_consts.const_str_digest_a74909d13b8ded279679c70f69e07543;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_result);
tmp_len_arg_1 = var_result;
tmp_format_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_ada226c29df488e057994b1be63dbb03;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_34);
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_43 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_43 == NULL));
frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
}

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_21:;
{
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_1d28103a8eae493247f1d05c2cdeeb71;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_name);
tmp_operand_value_2 = par_name;
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__2_dispatch_tool, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__2_dispatch_tool, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
tmp_cmp_expr_left_21 = EXC_TYPE(tstate);
tmp_cmp_expr_right_21 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
assert(!(tmp_res == -1));
tmp_condition_result_24 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_44); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_44);
var_e = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = mod_consts.const_str_digest_75c27444cf44c4d9a7235d4832bf8c0b;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_e);
tmp_format_value_5 = var_e;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_return_value == NULL));
goto try_return_handler_13;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// End of try:
goto branch_end_22;
branch_no_22:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 131;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_agent$$$function__2_dispatch_tool->m_frame)) {
        frame_frame_agent$$$function__2_dispatch_tool->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooo";
goto try_except_handler_12;
branch_end_22:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__2_dispatch_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__2_dispatch_tool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__2_dispatch_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__2_dispatch_tool,
    type_description_1,
    par_name,
    par_inputs,
    par_ams,
    par_token_store,
    par_error_exec,
    var_level_map,
    var_token,
    var_files,
    var_filename,
    var_PFPS,
    var_pfps,
    var_chunks,
    var_full,
    var_content,
    var_filepath,
    var_f,
    var_result,
    var_ShellExecutor,
    var_executor,
    var_cmd,
    var_reason,
    var_search,
    var_query,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__2_dispatch_tool == cache_frame_frame_agent$$$function__2_dispatch_tool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__2_dispatch_tool);
    cache_frame_frame_agent$$$function__2_dispatch_tool = NULL;
}

assertFrameObject(frame_frame_agent$$$function__2_dispatch_tool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_level_map);
var_level_map = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_files);
var_files = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_full);
var_full = NULL;
Py_XDECREF(var_content);
var_content = NULL;
Py_XDECREF(var_filepath);
var_filepath = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_ShellExecutor);
var_ShellExecutor = NULL;
Py_XDECREF(var_executor);
var_executor = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_search);
var_search = NULL;
Py_XDECREF(var_query);
var_query = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_level_map);
var_level_map = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_files);
var_files = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_PFPS);
var_PFPS = NULL;
Py_XDECREF(var_pfps);
var_pfps = NULL;
Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_content);
var_content = NULL;
Py_XDECREF(var_filepath);
var_filepath = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_ShellExecutor);
var_ShellExecutor = NULL;
Py_XDECREF(var_executor);
var_executor = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_search);
var_search = NULL;
Py_XDECREF(var_query);
var_query = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_inputs);
Py_DECREF(par_inputs);
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_token_store);
Py_DECREF(par_token_store);
CHECK_OBJECT(par_error_exec);
Py_DECREF(par_error_exec);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_inputs);
Py_DECREF(par_inputs);
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_token_store);
Py_DECREF(par_token_store);
CHECK_OBJECT(par_error_exec);
Py_DECREF(par_error_exec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_locals {
PyObject *var_v;
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

static PyObject *agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_locals *generator_heap = (struct agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_v = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_cdd5cc75daa0f7876e14b9e88486f811, module_agent, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 151;
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
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_v);
tmp_expression_value_2 = generator_heap->var_v;
tmp_subscript_value_1 = const_int_pos_1;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 151;
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


generator_heap->exception_lineno = 151;
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
    generator_heap->var_v
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

Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_context,
        module_agent,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a63731bdd450ae785f7934f7345a469b,
#endif
        code_objects_cdd5cc75daa0f7876e14b9e88486f811,
        closure,
        1,
#if 1
        sizeof(struct agent$$$function__2_dispatch_tool$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_agent$$$function__3_clear_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_provider = python_pars[0];
PyObject *var_key_map = NULL;
PyObject *var_key_name = NULL;
struct Nuitka_FrameObject *frame_frame_agent$$$function__3_clear_api_key;
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
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__3_clear_api_key = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_d63284c5b6524e9285d9279f90a3f82a);
assert(var_key_map == NULL);
var_key_map = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_agent$$$function__3_clear_api_key)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__3_clear_api_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__3_clear_api_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__3_clear_api_key = MAKE_FUNCTION_FRAME(tstate, code_objects_f2c91731267d490cea791d2b8bd27d2c, module_agent, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__3_clear_api_key->m_type_description == NULL);
frame_frame_agent$$$function__3_clear_api_key = cache_frame_frame_agent$$$function__3_clear_api_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__3_clear_api_key);
assert(Py_REFCNT(frame_frame_agent$$$function__3_clear_api_key) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_key_map);
tmp_dict_arg_value_1 = var_key_map;
CHECK_OBJECT(par_provider);
tmp_key_value_1 = par_provider;
tmp_default_value_1 = mod_consts.const_str_plain_anthropic_key;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = tmp_default_value_1;
    Py_INCREF(tmp_assign_source_2);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_key_name == NULL);
var_key_name = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_agent$keyring(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyring);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_delete_password);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = module_var_accessor_agent$KEYRING_SERVICE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYRING_SERVICE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 239;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key_name);
tmp_args_element_value_2 = var_key_name;
frame_frame_agent$$$function__3_clear_api_key->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_2 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_print);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_provider);
tmp_format_value_1 = par_provider;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_61b10941126b97b4fd05b539cb593a98;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_agent$$$function__3_clear_api_key->m_frame.f_lineno = 240;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__3_clear_api_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__3_clear_api_key, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_Exception;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_3 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_print);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_219465d75b426fd1e4b8f88ad5c024b4;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_provider);
tmp_format_value_2 = par_provider;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_d0c4fcc1cea52e7cd8d39c1cabfd2b11;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_agent$$$function__3_clear_api_key->m_frame.f_lineno = 242;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 238;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_agent$$$function__3_clear_api_key->m_frame)) {
        frame_frame_agent$$$function__3_clear_api_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__3_clear_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__3_clear_api_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__3_clear_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__3_clear_api_key,
    type_description_1,
    par_provider,
    var_key_map,
    var_key_name
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__3_clear_api_key == cache_frame_frame_agent$$$function__3_clear_api_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__3_clear_api_key);
    cache_frame_frame_agent$$$function__3_clear_api_key = NULL;
}

assertFrameObject(frame_frame_agent$$$function__3_clear_api_key);

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
CHECK_OBJECT(var_key_map);
CHECK_OBJECT(var_key_map);
Py_DECREF(var_key_map);
var_key_map = NULL;
CHECK_OBJECT(var_key_name);
CHECK_OBJECT(var_key_name);
Py_DECREF(var_key_name);
var_key_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_key_map);
CHECK_OBJECT(var_key_map);
Py_DECREF(var_key_map);
var_key_map = NULL;
Py_XDECREF(var_key_name);
var_key_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_provider);
Py_DECREF(par_provider);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_provider);
Py_DECREF(par_provider);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_agent$$$function__4_run_agent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_prompt = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_pfps = python_pars[1];
PyObject *par_role = python_pars[2];
PyObject *par_model = python_pars[3];
PyObject *var_token_store = NULL;
PyObject *var_adapter = NULL;
PyObject *var_session_id = NULL;
PyObject *var_ams = NULL;
PyObject *var_error_exec = NULL;
PyObject *var_AgentRef = NULL;
PyObject *var_agent_ref = NULL;
PyObject *var_print_session_start = NULL;
PyObject *var_viewer_token = NULL;
PyObject *var_file_list = NULL;
PyObject *var_files_str = NULL;
PyObject *var_system_prompt = NULL;
PyObject *var_messages = NULL;
PyObject *var_result = NULL;
PyObject *var_e = NULL;
PyObject *var_err = NULL;
PyObject *var_re = NULL;
PyObject *var_delay = NULL;
PyObject *var_delay_str = NULL;
PyObject *var_key_urls = NULL;
PyObject *var_response = NULL;
PyObject *var_raw = NULL;
PyObject *var_tool_results = NULL;
PyObject *var_done = NULL;
PyObject *var_tc = NULL;
PyObject *var_res = NULL;
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_agent$$$function__4_run_agent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254 = NULL;
PyObject *tmp_dictset_value;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__4_run_agent = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_agent$$$function__4_run_agent)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__4_run_agent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__4_run_agent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__4_run_agent = MAKE_FUNCTION_FRAME(tstate, code_objects_211a2a1efabc6e05d8a9f34c05bbad27, module_agent, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__4_run_agent->m_type_description == NULL);
frame_frame_agent$$$function__4_run_agent = cache_frame_frame_agent$$$function__4_run_agent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__4_run_agent);
assert(Py_REFCNT(frame_frame_agent$$$function__4_run_agent) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_agent$get_adapter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_adapter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_model);
tmp_args_element_value_1 = par_model;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 246;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_adapter == NULL);
var_adapter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_subscript_value_1;
tmp_called_instance_1 = module_var_accessor_agent$uuid(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uuid);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 247;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_uuid4);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hex);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_8_none;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_session_id == NULL);
var_session_id = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(var_token_store == NULL);
var_token_store = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_pfps);
tmp_called_instance_2 = par_pfps;
CHECK_OBJECT(var_session_id);
tmp_args_element_value_2 = var_session_id;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 250;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_start_session, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_agent$AMS(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AMS);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pfps);
tmp_args_element_value_3 = par_pfps;
tmp_args_element_value_4 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_session_id);
tmp_args_element_value_5 = var_session_id;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 251;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ams == NULL);
var_ams = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_agent$ErrorExecution(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ErrorExecution);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ams);
tmp_args_element_value_6 = var_ams;
tmp_args_element_value_7 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_error_exec == NULL);
var_error_exec = tmp_assign_source_5;
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_plain_agent;
tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_56df6719d476a28fcf88fc22ba83bb42;
tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_254;
tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_prompt;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__1___init__(tstate, tmp_closure_1);

tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__2_nap(tstate);

tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, mod_consts.const_str_plain_nap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_messages_str_plain_original_prompt_tuple;
tmp_result = DICT_SET_ITEM(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AgentRef;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 254;
tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_9;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_8 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_8);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254);
locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254);
locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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
exception_lineno = 254;
goto try_except_handler_2;
outline_result_2:;
assert(var_AgentRef == NULL);
var_AgentRef = tmp_assign_source_8;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
CHECK_OBJECT(var_AgentRef);
tmp_called_value_5 = var_AgentRef;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 261;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_agent_ref == NULL);
var_agent_ref = tmp_assign_source_10;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_error_exec);
tmp_called_instance_3 = var_error_exec;
CHECK_OBJECT(var_agent_ref);
tmp_args_element_value_8 = var_agent_ref;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 262;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_bind_agent, tmp_args_element_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_1 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_print_session_start_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 264;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_print_session_start,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_print_session_start);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_print_session_start == NULL);
var_print_session_start = tmp_assign_source_11;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_print_session_start);
tmp_called_value_6 = var_print_session_start;
CHECK_OBJECT(var_session_id);
tmp_args_element_value_9 = var_session_id;
CHECK_OBJECT(par_pfps);
tmp_expression_value_4 = par_pfps;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_config);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 265;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_name_str_plain_unknown_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role);
tmp_args_element_value_11 = par_role;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_12;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_expression_value_5 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_print);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_5aefba724cb59a59861ce0b12cd5a774;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
bool tmp_condition_result_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_model);
tmp_format_value_1 = par_model;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_48bfde6cb09c5298c361c10ed710722f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_adapter);
tmp_expression_value_6 = var_adapter;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MODEL);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_adapter);
tmp_expression_value_7 = var_adapter;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_MODEL);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_format_value_2 = const_str_empty;
Py_INCREF(tmp_format_value_2);
condexpr_end_1:;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_34ed79348cb98bde09a3c57c5890eed0;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_12 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 266;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_ams);
tmp_expression_value_8 = var_ams;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CheckOut);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_agent$Permissions(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Permissions);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 268;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Read);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 268;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 268;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_viewer_token == NULL);
var_viewer_token = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(par_pfps);
tmp_called_instance_4 = par_pfps;
CHECK_OBJECT(var_viewer_token);
tmp_args_element_value_14 = var_viewer_token;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 269;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ListFiles, tmp_args_element_value_14);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_file_list == NULL);
var_file_list = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_file_list);
tmp_iter_arg_1 = var_file_list;
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_15;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_agent$$$function__4_run_agent$$$genexpr__1_genexpr(tstate, tmp_closure_2);

goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_or_left_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = mod_consts.const_str_digest_950a9486a2ce9f825df4b8c51da7d84d;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_14 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_14 = tmp_or_left_value_1;
or_end_1:;
assert(var_files_str == NULL);
var_files_str = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_453bbf052bdd5edcae168e132db72c1a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_pfps);
tmp_expression_value_10 = par_pfps;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_root);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_a4297288c4cdeaf95020906649937e20;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_files_str);
tmp_format_value_4 = var_files_str;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_b45e3eb9707c27f9d2a40f9be6bb2370;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_16 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_16 == NULL));
assert(var_system_prompt == NULL);
var_system_prompt = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_agent_ref);
tmp_expression_value_11 = var_agent_ref;
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_messages);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_messages == NULL);
var_messages = tmp_assign_source_17;
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(var_messages);
tmp_expression_value_12 = var_messages;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_append);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_role;
tmp_dict_value_1 = mod_consts.const_str_plain_user;
tmp_args_element_value_15 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_content;
CHECK_OBJECT(Nuitka_Cell_GET(par_prompt));
tmp_dict_value_1 = Nuitka_Cell_GET(par_prompt);
tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 308;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_16;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_expression_value_13 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_print);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_f37452e2511a12e12e94b4f121df3943;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(Nuitka_Cell_GET(par_prompt));
tmp_format_value_5 = Nuitka_Cell_GET(par_prompt);
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_a41776ae1e4116ee1b7a05c6967a3a96;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_16 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_16 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 310;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
loop_start_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (var_ams == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ams);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_ams;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_should_stop);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 313;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_7;
tmp_called_instance_5 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 314;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2f7680698ac4edc421d653783f31cb2f_tuple, 0)
);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto loop_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
if (var_adapter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adapter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_15 = var_adapter;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_complete);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
if (var_system_prompt == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_system_prompt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_17 = var_system_prompt;
if (var_messages == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_messages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_18 = var_messages;
tmp_args_element_value_19 = module_var_accessor_agent$CLAUDE_TOOLS(tstate);
if (unlikely(tmp_args_element_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLAUDE_TOOLS);
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 318;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__4_run_agent, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__4_run_agent, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_19); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_19);
var_e = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_e);
tmp_unicode_arg_1 = var_e;
tmp_assign_source_20 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_err == NULL);
var_err = tmp_assign_source_20;
}
{
bool tmp_condition_result_4;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_or_left_truth_4;
bool tmp_or_left_value_4;
bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_16;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_1;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_429;
CHECK_OBJECT(var_err);
tmp_cmp_expr_right_2 = var_err;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_2 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_RESOURCE_EXHAUSTED;
CHECK_OBJECT(var_err);
tmp_cmp_expr_right_3 = var_err;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_3 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_quota;
CHECK_OBJECT(var_err);
tmp_expression_value_16 = var_err;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_lower);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 321;
tmp_cmp_expr_right_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_4 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_4 = tmp_or_left_value_4 != false ? 1 : 0;
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
tmp_cmp_expr_left_5 = mod_consts.const_str_plain_RateLimitError;
CHECK_OBJECT(var_e);
tmp_type_arg_1 = var_e;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_17 == NULL));
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_4 = (tmp_res == 1) ? true : false;
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_4 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 322;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_re == NULL);
var_re = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_re);
tmp_expression_value_18 = var_re;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_search);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_20 = mod_consts.const_str_digest_75e1742c28bca9dd21550c6dfe23dacc;
CHECK_OBJECT(var_err);
tmp_args_element_value_21 = var_err;
CHECK_OBJECT(var_re);
tmp_expression_value_19 = var_re;
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_IGNORECASE);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 323;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 323;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_delay == NULL);
var_delay = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(var_delay);
tmp_truth_name_2 = CHECK_IF_TRUE(var_delay);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_tuple_element_5 = mod_consts.const_str_digest_049d64ae13ee9be4b0a9387750f43081;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_called_instance_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_delay);
tmp_called_instance_6 = var_delay;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 324;
tmp_format_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_assign_source_23 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_23 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_23 = const_str_empty;
Py_INCREF(tmp_assign_source_23);
condexpr_end_2:;
assert(var_delay_str == NULL);
var_delay_str = tmp_assign_source_23;
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_23;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_6;
tmp_expression_value_20 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_print);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_6 = mod_consts.const_str_digest_cf9db1e76dcde70c18f2e26503c7546f;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_delay_str);
tmp_tuple_element_6 = var_delay_str;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_6);
tmp_args_element_value_23 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_args_element_value_23 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 325;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = DICT_COPY(tstate, mod_consts.const_dict_eaff483f08ec986ed21aacb5523c1560);
assert(var_key_urls == NULL);
var_key_urls = tmp_assign_source_24;
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_24;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_7;
tmp_expression_value_21 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_print);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_7 = mod_consts.const_str_digest_141adfec59c281a78a27530de2f225d3;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_7;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_7);
CHECK_OBJECT(var_key_urls);
tmp_dict_arg_value_1 = var_key_urls;
CHECK_OBJECT(par_model);
tmp_key_value_1 = par_model;
tmp_default_value_1 = const_str_empty;
tmp_format_value_7 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_format_value_7 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_format_value_7 = tmp_default_value_1;
    Py_INCREF(tmp_format_value_7);
}
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_16);
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_args_element_value_24 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_args_element_value_24 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 327;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_25;
PyObject *tmp_string_concat_values_7;
PyObject *tmp_tuple_element_8;
tmp_expression_value_22 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_print);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_digest_770433a00d088ff959e7f04f26da36d2;
tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_8);
CHECK_OBJECT(par_model);
tmp_format_value_8 = par_model;
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_str_digest_990b4dad07cb70528a799bb369a9a388;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_8);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_string_concat_values_7);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_args_element_value_25 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_7);
CHECK_OBJECT(tmp_string_concat_values_7);
Py_DECREF(tmp_string_concat_values_7);
assert(!(tmp_args_element_value_25 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 328;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_6;
int tmp_or_left_truth_5;
bool tmp_or_left_value_5;
bool tmp_or_right_value_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_23;
int tmp_or_left_truth_6;
bool tmp_or_left_value_6;
bool tmp_or_right_value_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_24;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_25;
tmp_cmp_expr_left_6 = mod_consts.const_str_plain_billing;
CHECK_OBJECT(var_err);
tmp_expression_value_23 = var_err;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_lower);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 329;
tmp_cmp_expr_right_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_5 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_5 = tmp_or_left_value_5 != false ? 1 : 0;
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
tmp_cmp_expr_left_7 = mod_consts.const_str_plain_credit;
CHECK_OBJECT(var_err);
tmp_expression_value_24 = var_err;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_lower);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 329;
tmp_cmp_expr_right_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_6 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_6 = tmp_or_left_value_6 != false ? 1 : 0;
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
tmp_cmp_expr_left_8 = mod_consts.const_str_plain_payment;
CHECK_OBJECT(var_err);
tmp_expression_value_25 = var_err;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_lower);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 329;
tmp_cmp_expr_right_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_6 = (tmp_res == 1) ? true : false;
tmp_or_right_value_5 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_or_right_value_5 = tmp_or_left_value_6;
or_end_6:;
tmp_condition_result_6 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_condition_result_6 = tmp_or_left_value_5;
or_end_5:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_11;
tmp_called_instance_7 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 330;
tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d33c34bdef163c98ac1710012cac3c2c_tuple, 0)
);

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_7;
int tmp_or_left_truth_7;
bool tmp_or_left_value_7;
bool tmp_or_right_value_7;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
int tmp_or_left_truth_8;
bool tmp_or_left_value_8;
bool tmp_or_right_value_8;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_26;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_2;
tmp_cmp_expr_left_9 = mod_consts.const_str_plain_401;
CHECK_OBJECT(var_err);
tmp_cmp_expr_right_9 = var_err;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_7 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_7 = tmp_or_left_value_7 != false ? 1 : 0;
if (tmp_or_left_truth_7 == 1) {
    goto or_left_7;
} else {
    goto or_right_7;
}
or_right_7:;
tmp_cmp_expr_left_10 = mod_consts.const_str_plain_authentication;
CHECK_OBJECT(var_err);
tmp_expression_value_26 = var_err;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_lower);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 331;
tmp_cmp_expr_right_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_8 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_8 = tmp_or_left_value_8 != false ? 1 : 0;
if (tmp_or_left_truth_8 == 1) {
    goto or_left_8;
} else {
    goto or_right_8;
}
or_right_8:;
tmp_cmp_expr_left_11 = mod_consts.const_str_plain_AuthenticationError;
CHECK_OBJECT(var_e);
tmp_type_arg_2 = var_e;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_27 == NULL));
tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_8 = (tmp_res == 1) ? true : false;
tmp_or_right_value_7 = tmp_or_right_value_8;
goto or_end_8;
or_left_8:;
tmp_or_right_value_7 = tmp_or_left_value_8;
or_end_8:;
tmp_condition_result_7 = tmp_or_right_value_7;
goto or_end_7;
or_left_7:;
tmp_condition_result_7 = tmp_or_left_value_7;
or_end_7:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_26;
PyObject *tmp_string_concat_values_8;
PyObject *tmp_tuple_element_9;
tmp_expression_value_28 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_print);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_9 = mod_consts.const_str_digest_1f29eadbe7135a6b765eccd7e416aee7;
tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_9);
CHECK_OBJECT(par_model);
tmp_format_value_9 = par_model;
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067;
PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_9);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_called_value_22);
Py_DECREF(tmp_string_concat_values_8);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_args_element_value_26 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_8);
CHECK_OBJECT(tmp_string_concat_values_8);
Py_DECREF(tmp_string_concat_values_8);
assert(!(tmp_args_element_value_26 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 332;
tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_29;
tmp_cmp_expr_left_12 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(var_err);
tmp_expression_value_29 = var_err;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain_lower);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 333;
tmp_cmp_expr_right_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_13;
tmp_called_instance_8 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 334;
tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_79b8e45b6909cee36d63a6d134720598_tuple, 0)
);

if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_27;
PyObject *tmp_string_concat_values_9;
PyObject *tmp_tuple_element_10;
tmp_expression_value_30 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_print);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_10 = mod_consts.const_str_digest_47795d2367ab1cb4daf0e6fb51374998;
tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_10;
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_3;
PyObject *tmp_format_spec_10;
PyObject *tmp_format_value_11;
PyObject *tmp_format_spec_11;
PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_10);
CHECK_OBJECT(var_e);
tmp_type_arg_3 = var_e;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_31 == NULL));
tmp_format_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_format_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
CHECK_OBJECT(tmp_format_value_10);
Py_DECREF(tmp_format_value_10);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_digest_84591b50428aa5672057fd1bb08e53e5;
PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_10);
CHECK_OBJECT(var_err);
tmp_format_value_11 = var_err;
tmp_format_spec_11 = const_str_empty;
tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_string_concat_values_9, 3, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067;
PyTuple_SET_ITEM0(tmp_string_concat_values_9, 4, tmp_tuple_element_10);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_string_concat_values_9);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_args_element_value_27 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_9);
CHECK_OBJECT(tmp_string_concat_values_9);
Py_DECREF(tmp_string_concat_values_9);
assert(!(tmp_args_element_value_27 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 336;
tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_end_6:;
branch_end_5:;
branch_end_4:;
branch_end_3:;
goto try_break_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// try break handler code:
try_break_handler_8:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_break_handler_7;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 317;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_agent$$$function__4_run_agent->m_frame)) {
        frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cooooooooooooooooooooooooooooo";
goto try_except_handler_7;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// try break handler code:
try_break_handler_7:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_end_1;
// End of try:
// End of try:
try_end_2:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_result);
tmp_isinstance_inst_1 = var_result;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_result);
tmp_iter_arg_2 = var_result;
tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
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



exception_lineno = 340;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_28;
    Py_INCREF(var_response);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_raw;
    var_raw = tmp_assign_source_29;
    Py_INCREF(var_raw);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_3;
PyObject *tmp_tuple_element_11;
CHECK_OBJECT(var_result);
tmp_tuple_element_11 = var_result;
tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_3, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = Py_None;
PyTuple_SET_ITEM0(tmp_iter_arg_3, 1, tmp_tuple_element_11);
tmp_assign_source_30 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
assert(!(tmp_assign_source_30 == NULL));
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_33 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_33;
    Py_INCREF(var_response);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_34 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_raw;
    var_raw = tmp_assign_source_34;
    Py_INCREF(var_raw);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_end_7:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_raw);
tmp_cmp_expr_left_13 = var_raw;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
if (var_messages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_messages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 345;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = var_messages;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_append);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_adapter == NULL) {
Py_DECREF(tmp_called_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adapter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 345;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_9 = var_adapter;
CHECK_OBJECT(var_response);
tmp_args_element_value_29 = var_response;
CHECK_OBJECT(var_raw);
tmp_args_element_value_30 = var_raw;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 345;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_args_element_value_28 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_9,
        mod_consts.const_str_plain_format_assistant_message,
        call_args
    );
}

if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 345;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 345;
tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_31;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
if (var_messages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_messages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_33 = var_messages;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_append);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_role;
tmp_dict_value_2 = mod_consts.const_str_plain_assistant;
tmp_args_element_value_31 = _PyDict_NewPresized( 2 );
{
int tmp_or_left_truth_9;
PyObject *tmp_or_left_value_9;
PyObject *tmp_or_right_value_9;
PyObject *tmp_expression_value_34;
tmp_res = PyDict_SetItem(tmp_args_element_value_31, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_content;
CHECK_OBJECT(var_response);
tmp_expression_value_34 = var_response;
tmp_or_left_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_text);
if (tmp_or_left_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
if (tmp_or_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_9);

exception_lineno = 347;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_9 == 1) {
    goto or_left_9;
} else {
    goto or_right_9;
}
or_right_9:;
CHECK_OBJECT(tmp_or_left_value_9);
Py_DECREF(tmp_or_left_value_9);
tmp_or_right_value_9 = const_str_empty;
Py_INCREF(tmp_or_right_value_9);
tmp_dict_value_2 = tmp_or_right_value_9;
goto or_end_9;
or_left_9:;
tmp_dict_value_2 = tmp_or_left_value_9;
or_end_9:;
tmp_res = PyDict_SetItem(tmp_args_element_value_31, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_26);
Py_DECREF(tmp_args_element_value_31);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 347;
tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
branch_end_8:;
{
nuitka_bool tmp_condition_result_11;
int tmp_or_left_truth_10;
nuitka_bool tmp_or_left_value_10;
nuitka_bool tmp_or_right_value_10;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_expression_value_35;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(var_response);
tmp_expression_value_35 = var_response;
tmp_cmp_expr_left_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_stop_reason);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_end_turn;
tmp_or_left_value_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
if (tmp_or_left_value_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_10 = tmp_or_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_10 == 1) {
    goto or_left_10;
} else {
    goto or_right_10;
}
or_right_10:;
CHECK_OBJECT(var_response);
tmp_expression_value_36 = var_response;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_tool_calls);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_or_right_value_10;
goto or_end_10;
or_left_10:;
tmp_condition_result_11 = tmp_or_left_value_10;
or_end_10:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_expression_value_37;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_response);
tmp_expression_value_37 = var_response;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_text);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 350;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_38;
PyObject *tmp_call_result_17;
PyObject *tmp_args_element_value_32;
PyObject *tmp_string_concat_values_10;
PyObject *tmp_tuple_element_12;
tmp_expression_value_38 = module_var_accessor_agent$console(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_console);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_print);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_12 = mod_consts.const_str_digest_6c63fa3ab865798d46bf040bb478b3ed;
tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_12;
PyObject *tmp_expression_value_39;
PyObject *tmp_format_spec_12;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_12);
CHECK_OBJECT(var_response);
tmp_expression_value_39 = var_response;
tmp_format_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_text);
if (tmp_format_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_9;
}
tmp_format_spec_12 = const_str_empty;
tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
CHECK_OBJECT(tmp_format_value_12);
Py_DECREF(tmp_format_value_12);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = mod_consts.const_str_digest_8938b72399e63e441d058e6741f7c067;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_12);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_called_value_27);
Py_DECREF(tmp_string_concat_values_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_args_element_value_32 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_10);
CHECK_OBJECT(tmp_string_concat_values_10);
Py_DECREF(tmp_string_concat_values_10);
assert(!(tmp_args_element_value_32 == NULL));
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 351;
tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
branch_no_10:;
goto loop_end_1;
branch_no_9:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_tool_results;
    var_tool_results = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = Py_False;
{
    PyObject *old = var_done;
    var_done = tmp_assign_source_36;
    Py_INCREF(var_done);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(var_response);
tmp_expression_value_40 = var_response;
tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_tool_calls);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_38 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooooooooooooooooooooooooo";
exception_lineno = 357;
        goto try_except_handler_13;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_39 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_tc;
    var_tc = tmp_assign_source_39;
    Py_INCREF(var_tc);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_33;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_28 = module_var_accessor_agent$dispatch_tool(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatch_tool);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_tc);
tmp_expression_value_41 = var_tc;
tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, const_str_plain_name);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_tc);
tmp_expression_value_42 = var_tc;
tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_inputs);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_33);

exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
if (var_ams == NULL) {
Py_DECREF(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ams);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_args_element_value_35 = var_ams;
if (var_token_store == NULL) {
Py_DECREF(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_store);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_args_element_value_36 = var_token_store;
if (var_error_exec == NULL) {
Py_DECREF(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error_exec);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_args_element_value_37 = var_error_exec;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 358;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_element_value_38;
PyObject *tmp_expression_value_44;
PyObject *tmp_args_element_value_39;
if (var_tool_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_list_arg_value_1 = var_tool_results;
if (var_adapter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adapter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_43 = var_adapter;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_format_tool_result);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_tc);
tmp_expression_value_44 = var_tc;
tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_id);
if (tmp_args_element_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 359;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_res);
tmp_args_element_value_39 = var_res;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(var_tc);
tmp_expression_value_45 = var_tc;
tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain_name);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_cmp_expr_right_15 = mod_consts.const_tuple_str_plain_WorkingStop_str_plain_done_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_15, tmp_cmp_expr_left_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_13 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = Py_True;
{
    PyObject *old = var_done;
    assert(old != NULL);
    var_done = tmp_assign_source_41;
    Py_INCREF(var_done);
    Py_DECREF(old);
}

}
goto loop_end_2;
branch_no_11:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
goto loop_start_2;
loop_end_2:;
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_46;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_40;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
if (var_messages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_messages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = var_messages;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_append);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_3 = mod_consts.const_str_plain_role;
tmp_dict_value_3 = mod_consts.const_str_plain_user;
tmp_args_element_value_40 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_40, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_content;
if (var_tool_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto dict_build_exception_2;
}

tmp_dict_value_3 = var_tool_results;
tmp_res = PyDict_SetItem(tmp_args_element_value_40, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_30);
Py_DECREF(tmp_args_element_value_40);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 364;
tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
{
nuitka_bool tmp_condition_result_14;
int tmp_or_left_truth_11;
nuitka_bool tmp_or_left_value_11;
nuitka_bool tmp_or_right_value_11;
int tmp_truth_name_4;
PyObject *tmp_expression_value_47;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_5;
CHECK_OBJECT(var_done);
tmp_truth_name_4 = CHECK_IF_TRUE(var_done);
assert(!(tmp_truth_name_4 == -1));
tmp_or_left_value_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_11 = tmp_or_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_11 == 1) {
    goto or_left_11;
} else {
    goto or_right_11;
}
or_right_11:;
if (var_ams == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ams);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 366;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_47 = var_ams;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_should_stop);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 366;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_condition_result_14 = tmp_or_right_value_11;
goto or_end_11;
or_left_11:;
tmp_condition_result_14 = tmp_or_left_value_11;
or_end_11:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_1;
branch_no_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_expression_value_48;
if (var_ams == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ams);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 369;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_48 = var_ams;
tmp_cmp_expr_left_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain__working);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_16 = Py_False;
tmp_condition_result_15 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_49;
PyObject *tmp_call_result_19;
if (var_ams == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ams);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 370;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_49 = var_ams;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_WorkingStop);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent->m_frame.f_lineno = 370;
tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_Yes_tuple);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
if (tmp_call_result_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "cooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_19);
Py_DECREF(tmp_call_result_19);
}
branch_no_13:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__4_run_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__4_run_agent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__4_run_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__4_run_agent,
    type_description_1,
    par_prompt,
    par_pfps,
    par_role,
    par_model,
    var_token_store,
    var_adapter,
    var_session_id,
    var_ams,
    var_error_exec,
    var_AgentRef,
    var_agent_ref,
    var_print_session_start,
    var_viewer_token,
    var_file_list,
    var_files_str,
    var_system_prompt,
    var_messages,
    var_result,
    var_e,
    var_err,
    var_re,
    var_delay,
    var_delay_str,
    var_key_urls,
    var_response,
    var_raw,
    var_tool_results,
    var_done,
    var_tc,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__4_run_agent == cache_frame_frame_agent$$$function__4_run_agent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__4_run_agent);
    cache_frame_frame_agent$$$function__4_run_agent = NULL;
}

assertFrameObject(frame_frame_agent$$$function__4_run_agent);

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
CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
Py_XDECREF(var_token_store);
var_token_store = NULL;
Py_XDECREF(var_adapter);
var_adapter = NULL;
CHECK_OBJECT(var_session_id);
CHECK_OBJECT(var_session_id);
Py_DECREF(var_session_id);
var_session_id = NULL;
Py_XDECREF(var_ams);
var_ams = NULL;
Py_XDECREF(var_error_exec);
var_error_exec = NULL;
CHECK_OBJECT(var_AgentRef);
CHECK_OBJECT(var_AgentRef);
Py_DECREF(var_AgentRef);
var_AgentRef = NULL;
CHECK_OBJECT(var_agent_ref);
CHECK_OBJECT(var_agent_ref);
Py_DECREF(var_agent_ref);
var_agent_ref = NULL;
CHECK_OBJECT(var_print_session_start);
CHECK_OBJECT(var_print_session_start);
Py_DECREF(var_print_session_start);
var_print_session_start = NULL;
CHECK_OBJECT(var_viewer_token);
CHECK_OBJECT(var_viewer_token);
Py_DECREF(var_viewer_token);
var_viewer_token = NULL;
CHECK_OBJECT(var_file_list);
CHECK_OBJECT(var_file_list);
Py_DECREF(var_file_list);
var_file_list = NULL;
CHECK_OBJECT(var_files_str);
CHECK_OBJECT(var_files_str);
Py_DECREF(var_files_str);
var_files_str = NULL;
Py_XDECREF(var_system_prompt);
var_system_prompt = NULL;
Py_XDECREF(var_messages);
var_messages = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_err);
var_err = NULL;
Py_XDECREF(var_re);
var_re = NULL;
Py_XDECREF(var_delay);
var_delay = NULL;
Py_XDECREF(var_delay_str);
var_delay_str = NULL;
Py_XDECREF(var_key_urls);
var_key_urls = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_raw);
var_raw = NULL;
Py_XDECREF(var_tool_results);
var_tool_results = NULL;
Py_XDECREF(var_done);
var_done = NULL;
Py_XDECREF(var_tc);
var_tc = NULL;
Py_XDECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
Py_XDECREF(var_token_store);
var_token_store = NULL;
Py_XDECREF(var_adapter);
var_adapter = NULL;
Py_XDECREF(var_session_id);
var_session_id = NULL;
Py_XDECREF(var_ams);
var_ams = NULL;
Py_XDECREF(var_error_exec);
var_error_exec = NULL;
Py_XDECREF(var_AgentRef);
var_AgentRef = NULL;
Py_XDECREF(var_agent_ref);
var_agent_ref = NULL;
Py_XDECREF(var_print_session_start);
var_print_session_start = NULL;
Py_XDECREF(var_viewer_token);
var_viewer_token = NULL;
Py_XDECREF(var_file_list);
var_file_list = NULL;
Py_XDECREF(var_files_str);
var_files_str = NULL;
Py_XDECREF(var_system_prompt);
var_system_prompt = NULL;
Py_XDECREF(var_messages);
var_messages = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_err);
var_err = NULL;
Py_XDECREF(var_re);
var_re = NULL;
Py_XDECREF(var_delay);
var_delay = NULL;
Py_XDECREF(var_delay_str);
var_delay_str = NULL;
Py_XDECREF(var_key_urls);
var_key_urls = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_raw);
var_raw = NULL;
Py_XDECREF(var_tool_results);
var_tool_results = NULL;
Py_XDECREF(var_done);
var_done = NULL;
Py_XDECREF(var_tc);
var_tc = NULL;
Py_XDECREF(var_res);
var_res = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
Py_XDECREF(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254);

CHECK_OBJECT(par_pfps);
Py_DECREF(par_pfps);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
Py_XDECREF(locals_agent$$$function__4_run_agent$$$class__1_AgentRef_254);

CHECK_OBJECT(par_pfps);
Py_DECREF(par_pfps);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_agent$$$function__4_run_agent$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_agent$$$function__4_run_agent$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f8e954f44128efb64f31dad602767f0a, module_agent, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__->m_type_description == NULL);
frame_frame_agent$$$function__4_run_agent$$$function__1___init__ = cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__4_run_agent$$$function__1___init__);
assert(Py_REFCNT(frame_frame_agent$$$function__4_run_agent$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_messages, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prompt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_assattr_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_original_prompt, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__4_run_agent$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__4_run_agent$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__4_run_agent$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__4_run_agent$$$function__1___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__4_run_agent$$$function__1___init__ == cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__);
    cache_frame_frame_agent$$$function__4_run_agent$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_agent$$$function__4_run_agent$$$function__1___init__);

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


static PyObject *impl_agent$$$function__4_run_agent$$$function__2_nap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_agent$$$function__4_run_agent$$$function__2_nap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap)) {
    Py_XDECREF(cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap = MAKE_FUNCTION_FRAME(tstate, code_objects_dabd9329c757041d25512a79e3d8a4d6, module_agent, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap->m_type_description == NULL);
frame_frame_agent$$$function__4_run_agent$$$function__2_nap = cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent$$$function__4_run_agent$$$function__2_nap);
assert(Py_REFCNT(frame_frame_agent$$$function__4_run_agent$$$function__2_nap) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_messages);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_agent$$$function__4_run_agent$$$function__2_nap->m_frame.f_lineno = 259;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_agent$$$function__4_run_agent$$$function__2_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent$$$function__4_run_agent$$$function__2_nap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent$$$function__4_run_agent$$$function__2_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_agent$$$function__4_run_agent$$$function__2_nap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_agent$$$function__4_run_agent$$$function__2_nap == cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap);
    cache_frame_frame_agent$$$function__4_run_agent$$$function__2_nap = NULL;
}

assertFrameObject(frame_frame_agent$$$function__4_run_agent$$$function__2_nap);

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



#if 1
struct agent$$$function__4_run_agent$$$genexpr__1_genexpr_locals {
PyObject *var_f;
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

static PyObject *agent$$$function__4_run_agent$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct agent$$$function__4_run_agent$$$genexpr__1_genexpr_locals *generator_heap = (struct agent$$$function__4_run_agent$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_f = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d1e45130eaaeb978bd18579234bde7e8, module_agent, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 270;
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
    PyObject *old = generator_heap->var_f;
    generator_heap->var_f = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_c646b3344ef30ce8f12679f72faf241b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_f);
tmp_format_value_1 = generator_heap->var_f;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "No";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_expression_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_expression_value_1 == NULL));
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 270;
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


generator_heap->exception_lineno = 270;
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
    generator_heap->var_f
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

Py_XDECREF(generator_heap->var_f);
generator_heap->var_f = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_f);
generator_heap->var_f = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_agent$$$function__4_run_agent$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        agent$$$function__4_run_agent$$$genexpr__1_genexpr_context,
        module_agent,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_820fd7ca05e6646ae8c0defd7873d84f,
#endif
        code_objects_d1e45130eaaeb978bd18579234bde7e8,
        closure,
        1,
#if 1
        sizeof(struct agent$$$function__4_run_agent$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_agent$$$function__1__ensure_token(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__1__ensure_token,
        mod_consts.const_str_plain__ensure_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7a94fc138455920a7eb4cac32e76c586,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_agent,
        mod_consts.const_str_digest_770785d01d9f528b248c2ebb8465acc6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_agent$$$function__2_dispatch_tool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__2_dispatch_tool,
        mod_consts.const_str_plain_dispatch_tool,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_801ffc651ca2370bd33ff78e3d06054a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_agent,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_agent$$$function__3_clear_api_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__3_clear_api_key,
        mod_consts.const_str_plain_clear_api_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f2c91731267d490cea791d2b8bd27d2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_agent,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__4_run_agent,
        mod_consts.const_str_plain_run_agent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_211a2a1efabc6e05d8a9f34c05bbad27,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_agent,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__4_run_agent$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37d012593759c8eedbca11363138ccc1,
#endif
        code_objects_f8e954f44128efb64f31dad602767f0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_agent,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_agent$$$function__4_run_agent$$$function__2_nap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_agent$$$function__4_run_agent$$$function__2_nap,
        mod_consts.const_str_plain_nap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d941be1fd375dbebb296af6763970da,
#endif
        code_objects_dabd9329c757041d25512a79e3d8a4d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_agent,
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

static function_impl_code const function_table_agent[] = {
impl_agent$$$function__4_run_agent$$$function__1___init__,
impl_agent$$$function__4_run_agent$$$function__2_nap,
impl_agent$$$function__1__ensure_token,
impl_agent$$$function__2_dispatch_tool,
impl_agent$$$function__3_clear_api_key,
impl_agent$$$function__4_run_agent,
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

    return Nuitka_Function_GetFunctionState(function, function_table_agent);
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
        module_agent,
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
        function_table_agent,
        sizeof(function_table_agent) / sizeof(function_impl_code)
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
static char const *module_full_name = "agent";
#endif

// Internal entry point for module code.
PyObject *module_code_agent(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("agent");

    // Store the module for future use.
    module_agent = module;

    moduledict_agent = MODULE_DICT(module_agent);

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
        PRINT_STRING("agent: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("agent: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("agent: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "agent" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initagent\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_agent,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_agent,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_agent,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_agent,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_agent,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_agent);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_agent);
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

        UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_agent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_bfc53ce9d3535ff889a13ce4f4aee84e;
UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_agent = MAKE_MODULE_FRAME(code_objects_c1531a4059622c47cca687a79788cfdd, module_agent);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_agent);
assert(Py_REFCNT(frame_frame_agent) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_agent$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_agent$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 6;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_uuid;
tmp_globals_arg_value_2 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_keyring;
tmp_globals_arg_value_3 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_keyring, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_console;
tmp_globals_arg_value_4 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_console_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_console,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_console);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_console, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_pfps;
tmp_globals_arg_value_5 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_PFPS_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 11;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_PFPS,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_PFPS);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPS, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_ams;
tmp_globals_arg_value_6 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_AMS_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 12;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_AMS,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AMS);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_AMS, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_permissions;
tmp_globals_arg_value_7 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Permissions_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 13;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_Permissions,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Permissions);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_Permissions, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_error_execution;
tmp_globals_arg_value_8 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ErrorExecution_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 14;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_ErrorExecution,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ErrorExecution);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_model_router;
tmp_globals_arg_value_9 = (PyObject *)moduledict_agent;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_get_adapter_str_plain_AgentResponse_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_agent->m_frame.f_lineno = 15;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_get_adapter,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_get_adapter);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_get_adapter, tmp_assign_source_13);
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
        (PyObject *)moduledict_agent,
        mod_consts.const_str_plain_AgentResponse,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AgentResponse);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_AgentResponse, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_plain_YourAssistantCoder;
UPDATE_STRING_DICT0(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYRING_SERVICE, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts.const_list_d5fe38ed0180e730ca3994e2b3ae38cd_list, "DDDDDDDDDD");
UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_CLAUDE_TOOLS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_read_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_17 = MAKE_FUNCTION_agent$$$function__1__ensure_token(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_token, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_name;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_annotations_1 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_inputs;
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ams;
tmp_dict_value_1 = module_var_accessor_agent$AMS(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AMS);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_token_store;
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_error_exec;
tmp_dict_value_1 = module_var_accessor_agent$ErrorExecution(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ErrorExecution);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_18 = MAKE_FUNCTION_agent$$$function__2_dispatch_tool(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_tool, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_str_plain_claude_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6e21b8f0a91db1373144f674c688be5f);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_19 = MAKE_FUNCTION_agent$$$function__3_clear_api_key(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_clear_api_key, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_defaults_3 = mod_consts.const_tuple_str_plain_Editor_str_plain_claude_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_prompt;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_annotations_3 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_pfps;
tmp_dict_value_2 = module_var_accessor_agent$PFPS(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPS);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_role;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_model;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_20 = MAKE_FUNCTION_agent$$$function__4_run_agent(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_agent, (Nuitka_StringObject *)mod_consts.const_str_plain_run_agent, tmp_assign_source_20);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_agent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_agent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("agent", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "agent" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_agent);
    return module_agent;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_agent, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("agent", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

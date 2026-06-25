/* Generated code for Python module 'error_execution'
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



/* The "module_error_execution" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_error_execution;
PyDictObject *moduledict_error_execution;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_ams;
PyObject *const_str_plain_console;
PyObject *const_str_plain_consecutive_failures;
PyObject *const_str_plain_last_error;
PyObject *const_str_plain__agent_ref;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain_redirect_stdout;
PyObject *const_str_plain_redirect_stderr;
PyObject *const_str_plain_self;
PyObject *const_str_plain_code;
PyObject *const_str_plain___globals__;
PyObject *const_str_plain_stdout_buf;
PyObject *const_str_plain_stderr_buf;
PyObject *const_str_plain_output;
PyObject *const_str_plain_e;
PyObject *const_str_plain_err_type;
PyObject *const_str_plain_user_cmd;
PyObject *const_str_angle_string;
PyObject *const_str_plain_exec;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_getvalue;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_write;
PyObject *const_str_plain_EXEC_OK;
PyObject *const_slice_none_int_pos_80_none;
PyObject *const_str_digest_bc4a474d787fd69a4f8ee6000c027473;
PyObject *const_str_plain_OK;
PyObject *const_str_plain_EXEC_FAIL;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_digest_3379a8cecf921ddd37cbc42de4bd7ea1;
PyObject *const_str_plain_MAX_FAILURES;
PyObject *const_str_chr_41;
PyObject *const_str_plain__detect_user_cmd;
PyObject *const_str_plain__prompt_user_cmd;
PyObject *const_tuple_str_plain_reason_tuple;
PyObject *const_str_plain_Run;
PyObject *const_str_plain__prompt_nap;
PyObject *const_str_digest_239ab0c0b6da02d0787a21dabab625bd;
PyObject *const_str_digest_f0147941391d9cf1ad9fb6f3897feacc;
PyObject *const_str_digest_1c74c54d401867c9d7f1571de0071618;
PyObject *const_tuple_str_plain_ImportError_str_plain_ModuleNotFoundError_tuple;
PyObject *const_str_chr_39;
PyObject *const_tuple_str_chr_39_tuple;
PyObject *const_str_digest_5745eedc75ded1a498fbfc2f3dccaeb3;
PyObject *const_str_plain_PermissionError;
PyObject *const_str_plain_filename;
PyObject *const_str_digest_71176bac0d79b8831f3b349a4634eb3f;
PyObject *const_str_plain_Panel;
PyObject *const_str_digest_2d648c509a349da8bc645b669b83dd77;
PyObject *const_str_digest_ecd8892e1a2c1cd9767275d366650aa5;
PyObject *const_str_digest_013df90210f6d3e13ce4e0229fce9d23;
PyObject *const_str_digest_18d8f9e64912526890cea2836ca61c19;
PyObject *const_str_plain_box;
PyObject *const_str_plain_ROUNDED;
PyObject *const_tuple_int_pos_1_int_pos_2_tuple;
PyObject *const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple;
PyObject *const_str_plain_PROMPT_CMD;
PyObject *const_str_digest_f5caf9ed622702379f2ac410fc3714b8;
PyObject *const_str_digest_308c07d6412248cc1e08dc84ecef19db;
PyObject *const_str_digest_4033e19ac55484b2dc949cc0b7fb79fd;
PyObject *const_str_digest_9edcda861d03d272c9339f6e75e7a219;
PyObject *const_tuple_82412e2fc3ee47c1ecb93d3fdaf06796_tuple;
PyObject *const_str_digest_3bffc0e09c29138cef72721dcb311772;
PyObject *const_str_plain_N;
PyObject *const_str_plain__do_nap;
PyObject *const_str_plain_A;
PyObject *const_tuple_str_plain_ABORT_str_digest_0ab28d24a0e1c52f352b1c220469b748_tuple;
PyObject *const_str_plain_WorkingStop;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_Yes_tuple;
PyObject *const_str_digest_99a103ecf3127306c28d81e2dddf852a;
PyObject *const_str_digest_af6ae68fee023f31e6e1c33b7b97cae3;
PyObject *const_str_plain_nap;
PyObject *const_tuple_str_plain_NAP_str_digest_a7eab2684842d185df5e7f300406df83_tuple;
PyObject *const_tuple_str_digest_adc649d1cfc6e1439afd533f75218b71_tuple;
PyObject *const_str_plain_NAP_TAKEN;
PyObject *const_str_digest_4bacc8cd190193a9aafd92564ab61e2d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_io;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_time;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_redirect_stdout_str_plain_redirect_stderr_tuple;
PyObject *const_str_digest_732155067944c45306e79906bf400a89;
PyObject *const_tuple_str_plain_Panel_tuple;
PyObject *const_str_digest_253339e737a94bb3cc28e8e56e99d96d;
PyObject *const_tuple_str_plain_Prompt_tuple;
PyObject *const_str_plain_Prompt;
PyObject *const_str_plain_rich;
PyObject *const_tuple_str_plain_box_tuple;
PyObject *const_str_plain_error_execution;
PyObject *const_str_plain_ErrorExecution;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_int_pos_3;
PyObject *const_dict_4bc735057b06e14608fed77f93613e2c;
PyObject *const_str_plain_INSTALL_HINTS;
PyObject *const_str_digest_2dce6d2fefb4213fa53d27ff104814e4;
PyObject *const_str_plain_bind_agent;
PyObject *const_str_digest_65342d39f78eef956de1b4b5535a89ff;
PyObject *const_dict_eb220d9eea4047477558b6c7fe385b57;
PyObject *const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1;
PyObject *const_dict_ced479034c60bf6f30f044d2c5644c66;
PyObject *const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_dict_0791411d83d79809d0a66b9fdf06ff66;
PyObject *const_str_digest_af44193610630c6f782305a48ac7c91e;
PyObject *const_dict_ba22db58249aba2a980f7e215437b978;
PyObject *const_str_digest_dfa19e87439f76e62ccc9ee232860197;
PyObject *const_str_digest_9f4b3977451a8dc41146abc8934a085b;
PyObject *const_tuple_71dfec4d79889a3277602040359dfe90_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_a627be49f171965a1e255fa52d1249a8;
PyObject *const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9;
PyObject *const_tuple_931f5e1a2eb0888d0c7e340403ab774f_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ams_str_plain_console_tuple;
PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_err_type_str_plain_pkg_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_choice_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cmd_str_plain_reason_tuple;
PyObject *const_tuple_str_plain_self_str_plain_agent_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[123];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("error_execution"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_ams);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_console);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_consecutive_failures);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_error);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__agent_ref);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_stdout);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_stderr);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___globals__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdout_buf);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr_buf);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_e);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_err_type);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cmd);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_angle_string);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_exec);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXEC_OK);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc4a474d787fd69a4f8ee6000c027473);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXEC_FAIL);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_3379a8cecf921ddd37cbc42de4bd7ea1);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_FAILURES);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__detect_user_cmd);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_user_cmd);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Run);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_nap);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_239ab0c0b6da02d0787a21dabab625bd);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0147941391d9cf1ad9fb6f3897feacc);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c74c54d401867c9d7f1571de0071618);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImportError_str_plain_ModuleNotFoundError_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_39_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_5745eedc75ded1a498fbfc2f3dccaeb3);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionError);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_71176bac0d79b8831f3b349a4634eb3f);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Panel);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_ecd8892e1a2c1cd9767275d366650aa5);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_013df90210f6d3e13ce4e0229fce9d23);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_18d8f9e64912526890cea2836ca61c19);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_box);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ROUNDED);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_2_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROMPT_CMD);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5caf9ed622702379f2ac410fc3714b8);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_308c07d6412248cc1e08dc84ecef19db);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_4033e19ac55484b2dc949cc0b7fb79fd);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_9edcda861d03d272c9339f6e75e7a219);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_82412e2fc3ee47c1ecb93d3fdaf06796_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bffc0e09c29138cef72721dcb311772);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_N);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__do_nap);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABORT_str_digest_0ab28d24a0e1c52f352b1c220469b748_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_99a103ecf3127306c28d81e2dddf852a);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_af6ae68fee023f31e6e1c33b7b97cae3);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_nap);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NAP_str_digest_a7eab2684842d185df5e7f300406df83_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_adc649d1cfc6e1439afd533f75218b71_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_NAP_TAKEN);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bacc8cd190193a9aafd92564ab61e2d);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_stdout_str_plain_redirect_stderr_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_732155067944c45306e79906bf400a89);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Panel_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_253339e737a94bb3cc28e8e56e99d96d);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Prompt_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Prompt);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_execution);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorExecution);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_4bc735057b06e14608fed77f93613e2c);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_INSTALL_HINTS);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dce6d2fefb4213fa53d27ff104814e4);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_bind_agent);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_65342d39f78eef956de1b4b5535a89ff);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_eb220d9eea4047477558b6c7fe385b57);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_ced479034c60bf6f30f044d2c5644c66);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_0791411d83d79809d0a66b9fdf06ff66);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_af44193610630c6f782305a48ac7c91e);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_dfa19e87439f76e62ccc9ee232860197);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f4b3977451a8dc41146abc8934a085b);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_71dfec4d79889a3277602040359dfe90_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_a627be49f171965a1e255fa52d1249a8);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_931f5e1a2eb0888d0c7e340403ab774f_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ams_str_plain_console_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_err_type_str_plain_pkg_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_choice_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cmd_str_plain_reason_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_agent_tuple);
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
void checkModuleConstants_error_execution(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_ams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ams);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_console);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_consecutive_failures));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_consecutive_failures);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_error);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__agent_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__agent_ref);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_redirect_stdout);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_redirect_stderr);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___globals__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___globals__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdout_buf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdout_buf);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr_buf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr_buf);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_e));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_e);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_err_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_err_type);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cmd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cmd);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_angle_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_string);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_exec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exec);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXEC_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXEC_OK);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_80_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_80_none);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc4a474d787fd69a4f8ee6000c027473));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc4a474d787fd69a4f8ee6000c027473);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXEC_FAIL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXEC_FAIL);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_3379a8cecf921ddd37cbc42de4bd7ea1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3379a8cecf921ddd37cbc42de4bd7ea1);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_FAILURES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_FAILURES);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__detect_user_cmd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__detect_user_cmd);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_user_cmd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prompt_user_cmd);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reason_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Run);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__prompt_nap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prompt_nap);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_239ab0c0b6da02d0787a21dabab625bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_239ab0c0b6da02d0787a21dabab625bd);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0147941391d9cf1ad9fb6f3897feacc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0147941391d9cf1ad9fb6f3897feacc);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c74c54d401867c9d7f1571de0071618));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c74c54d401867c9d7f1571de0071618);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImportError_str_plain_ModuleNotFoundError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImportError_str_plain_ModuleNotFoundError_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_39_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_39_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_5745eedc75ded1a498fbfc2f3dccaeb3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5745eedc75ded1a498fbfc2f3dccaeb3);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PermissionError);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filename);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_71176bac0d79b8831f3b349a4634eb3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71176bac0d79b8831f3b349a4634eb3f);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Panel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Panel);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_ecd8892e1a2c1cd9767275d366650aa5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ecd8892e1a2c1cd9767275d366650aa5);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_013df90210f6d3e13ce4e0229fce9d23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_013df90210f6d3e13ce4e0229fce9d23);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_18d8f9e64912526890cea2836ca61c19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18d8f9e64912526890cea2836ca61c19);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_box);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ROUNDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ROUNDED);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_2_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROMPT_CMD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROMPT_CMD);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5caf9ed622702379f2ac410fc3714b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5caf9ed622702379f2ac410fc3714b8);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_308c07d6412248cc1e08dc84ecef19db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_308c07d6412248cc1e08dc84ecef19db);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_4033e19ac55484b2dc949cc0b7fb79fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4033e19ac55484b2dc949cc0b7fb79fd);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_9edcda861d03d272c9339f6e75e7a219));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9edcda861d03d272c9339f6e75e7a219);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_82412e2fc3ee47c1ecb93d3fdaf06796_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_82412e2fc3ee47c1ecb93d3fdaf06796_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bffc0e09c29138cef72721dcb311772));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3bffc0e09c29138cef72721dcb311772);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_N));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_N);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__do_nap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__do_nap);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_A));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_A);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABORT_str_digest_0ab28d24a0e1c52f352b1c220469b748_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABORT_str_digest_0ab28d24a0e1c52f352b1c220469b748_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkingStop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkingStop);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Yes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Yes_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_99a103ecf3127306c28d81e2dddf852a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99a103ecf3127306c28d81e2dddf852a);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_af6ae68fee023f31e6e1c33b7b97cae3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af6ae68fee023f31e6e1c33b7b97cae3);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_nap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nap);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NAP_str_digest_a7eab2684842d185df5e7f300406df83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NAP_str_digest_a7eab2684842d185df5e7f300406df83_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_adc649d1cfc6e1439afd533f75218b71_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_adc649d1cfc6e1439afd533f75218b71_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_NAP_TAKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NAP_TAKEN);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bacc8cd190193a9aafd92564ab61e2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bacc8cd190193a9aafd92564ab61e2d);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_stdout_str_plain_redirect_stderr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_redirect_stdout_str_plain_redirect_stderr_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_732155067944c45306e79906bf400a89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_732155067944c45306e79906bf400a89);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Panel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Panel_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_253339e737a94bb3cc28e8e56e99d96d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_253339e737a94bb3cc28e8e56e99d96d);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Prompt_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Prompt);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_box_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_execution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_execution);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorExecution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorExecution);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_4bc735057b06e14608fed77f93613e2c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4bc735057b06e14608fed77f93613e2c);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_INSTALL_HINTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INSTALL_HINTS);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dce6d2fefb4213fa53d27ff104814e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2dce6d2fefb4213fa53d27ff104814e4);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_bind_agent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bind_agent);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_65342d39f78eef956de1b4b5535a89ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65342d39f78eef956de1b4b5535a89ff);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_eb220d9eea4047477558b6c7fe385b57));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eb220d9eea4047477558b6c7fe385b57);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_ced479034c60bf6f30f044d2c5644c66));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ced479034c60bf6f30f044d2c5644c66);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_0791411d83d79809d0a66b9fdf06ff66));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0791411d83d79809d0a66b9fdf06ff66);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_af44193610630c6f782305a48ac7c91e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af44193610630c6f782305a48ac7c91e);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_dfa19e87439f76e62ccc9ee232860197));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dfa19e87439f76e62ccc9ee232860197);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f4b3977451a8dc41146abc8934a085b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f4b3977451a8dc41146abc8934a085b);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_71dfec4d79889a3277602040359dfe90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_71dfec4d79889a3277602040359dfe90_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_a627be49f171965a1e255fa52d1249a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a627be49f171965a1e255fa52d1249a8);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_931f5e1a2eb0888d0c7e340403ab774f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_931f5e1a2eb0888d0c7e340403ab774f_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ams_str_plain_console_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_ams_str_plain_console_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_err_type_str_plain_pkg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_err_type_str_plain_pkg_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_choice_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_choice_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cmd_str_plain_reason_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cmd_str_plain_reason_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_agent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_agent_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_error_execution$Panel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_error_execution->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_error_execution->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_Panel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_error_execution->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Panel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Panel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Panel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Panel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_Panel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_Panel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Panel);
    }

    return result;
}

static PyObject *module_var_accessor_error_execution$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_error_execution->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_error_execution->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_error_execution->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_error_execution$box(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_error_execution->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_error_execution->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_error_execution->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_box);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_box, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_box);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_box, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
    }

    return result;
}

static PyObject *module_var_accessor_error_execution$redirect_stderr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_error_execution->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_error_execution->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stderr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_error_execution->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_redirect_stderr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_redirect_stderr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_redirect_stderr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_redirect_stderr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stderr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stderr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stderr);
    }

    return result;
}

static PyObject *module_var_accessor_error_execution$redirect_stdout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_error_execution->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_error_execution->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stdout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_error_execution->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_redirect_stdout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_redirect_stdout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_redirect_stdout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_redirect_stdout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stdout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stdout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stdout);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fa404326fae602566a5d4df5ea602d88;
static PyCodeObject *code_objects_af0a328e71b4eafdde612b0f342edf7f;
static PyCodeObject *code_objects_d4cc98fb4b2f95f5531f6c3b0995fba7;
static PyCodeObject *code_objects_0c5a23a925ee4b31df2fc73136cdb283;
static PyCodeObject *code_objects_beeb061bdf87a3affce2d8e36c47653b;
static PyCodeObject *code_objects_091dc97145e45c658b751f662685ce5d;
static PyCodeObject *code_objects_a858da59942bdea95523f6a007c63709;
static PyCodeObject *code_objects_9b3ff95a879d444676cfe94016d34a09;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a627be49f171965a1e255fa52d1249a8); CHECK_OBJECT(module_filename_obj);
code_objects_fa404326fae602566a5d4df5ea602d88 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9, mod_consts.const_str_digest_2aca7da9744d3b7df849dc5d06bd74e9, NULL, NULL, 0, 0, 0);
code_objects_af0a328e71b4eafdde612b0f342edf7f = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_Run, mod_consts.const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1, mod_consts.const_tuple_931f5e1a2eb0888d0c7e340403ab774f_tuple, NULL, 3, 0, 0);
code_objects_d4cc98fb4b2f95f5531f6c3b0995fba7 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_2dce6d2fefb4213fa53d27ff104814e4, mod_consts.const_tuple_str_plain_self_str_plain_ams_str_plain_console_tuple, NULL, 3, 0, 0);
code_objects_0c5a23a925ee4b31df2fc73136cdb283 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__detect_user_cmd, mod_consts.const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_err_type_str_plain_pkg_tuple, NULL, 2, 0, 0);
code_objects_beeb061bdf87a3affce2d8e36c47653b = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__do_nap, mod_consts.const_str_digest_9f4b3977451a8dc41146abc8934a085b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_091dc97145e45c658b751f662685ce5d = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__prompt_nap, mod_consts.const_str_digest_dfa19e87439f76e62ccc9ee232860197, mod_consts.const_tuple_str_plain_self_str_plain_choice_tuple, NULL, 1, 0, 0);
code_objects_a858da59942bdea95523f6a007c63709 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__prompt_user_cmd, mod_consts.const_str_digest_af44193610630c6f782305a48ac7c91e, mod_consts.const_tuple_str_plain_self_str_plain_cmd_str_plain_reason_tuple, NULL, 3, 0, 0);
code_objects_9b3ff95a879d444676cfe94016d34a09 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_bind_agent, mod_consts.const_str_digest_65342d39f78eef956de1b4b5535a89ff, mod_consts.const_tuple_str_plain_self_str_plain_agent_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_error_execution$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_error_execution$$$function__2_bind_agent(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_error_execution$$$function__3_Run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_error_execution$$$function__4__detect_user_cmd(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_error_execution$$$function__5__prompt_user_cmd(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_error_execution$$$function__6__prompt_nap(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_error_execution$$$function__7__do_nap(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_error_execution$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ams = python_pars[1];
PyObject *par_console = python_pars[2];
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d4cc98fb4b2f95f5531f6c3b0995fba7, module_error_execution, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__1___init__->m_type_description == NULL);
frame_frame_error_execution$$$function__1___init__ = cache_frame_frame_error_execution$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__1___init__);
assert(Py_REFCNT(frame_frame_error_execution$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_ams);
tmp_assattr_value_1 = par_ams;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_ams, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
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


exception_lineno = 27;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_consecutive_failures, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_last_error, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__agent_ref, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__1___init__,
    type_description_1,
    par_self,
    par_ams,
    par_console
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__1___init__ == cache_frame_frame_error_execution$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__1___init__);
    cache_frame_frame_error_execution$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__1___init__);

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
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ams);
Py_DECREF(par_ams);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_error_execution$$$function__2_bind_agent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_agent = python_pars[1];
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__2_bind_agent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__2_bind_agent = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__2_bind_agent)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__2_bind_agent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__2_bind_agent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__2_bind_agent = MAKE_FUNCTION_FRAME(tstate, code_objects_9b3ff95a879d444676cfe94016d34a09, module_error_execution, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__2_bind_agent->m_type_description == NULL);
frame_frame_error_execution$$$function__2_bind_agent = cache_frame_frame_error_execution$$$function__2_bind_agent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__2_bind_agent);
assert(Py_REFCNT(frame_frame_error_execution$$$function__2_bind_agent) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_agent);
tmp_assattr_value_1 = par_agent;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__agent_ref, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__2_bind_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__2_bind_agent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__2_bind_agent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__2_bind_agent,
    type_description_1,
    par_self,
    par_agent
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__2_bind_agent == cache_frame_frame_error_execution$$$function__2_bind_agent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__2_bind_agent);
    cache_frame_frame_error_execution$$$function__2_bind_agent = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__2_bind_agent);

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
CHECK_OBJECT(par_agent);
Py_DECREF(par_agent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_agent);
Py_DECREF(par_agent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_error_execution$$$function__3_Run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par___globals__ = python_pars[2];
PyObject *var_stdout_buf = NULL;
PyObject *var_stderr_buf = NULL;
PyObject *var_output = NULL;
PyObject *var_e = NULL;
PyObject *var_err_type = NULL;
PyObject *var_user_cmd = NULL;
PyObject *tmp_exec_call_1__globals = NULL;
PyObject *tmp_exec_call_1__locals = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__3_Run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_error_execution$$$function__3_Run = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__3_Run = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__3_Run)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__3_Run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__3_Run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__3_Run = MAKE_FUNCTION_FRAME(tstate, code_objects_af0a328e71b4eafdde612b0f342edf7f, module_error_execution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__3_Run->m_type_description == NULL);
frame_frame_error_execution$$$function__3_Run = cache_frame_frame_error_execution$$$function__3_Run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__3_Run);
assert(Py_REFCNT(frame_frame_error_execution$$$function__3_Run) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_1 == NULL));
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 38;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_stdout_buf == NULL);
var_stdout_buf = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 39;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_stderr_buf == NULL);
var_stderr_buf = tmp_assign_source_2;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_error_execution$redirect_stdout(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_redirect_stdout);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_stdout_buf);
tmp_args_element_value_1 = var_stdout_buf;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_1 = tmp_with_2__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_2 = tmp_with_2__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
tmp_called_value_5 = module_var_accessor_error_execution$redirect_stderr(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_redirect_stderr);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_stderr_buf);
tmp_args_element_value_2 = var_stderr_buf;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_9;
}
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(par___globals__);
tmp_assign_source_11 = par___globals__;
assert(tmp_exec_call_1__globals == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_exec_call_1__globals = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_exec_call_1__globals);
tmp_cmp_expr_left_1 = tmp_exec_call_1__globals;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (locals_error_execution$$$function__3_Run == NULL) locals_error_execution$$$function__3_Run = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_12 = locals_error_execution$$$function__3_Run;
Py_INCREF(tmp_assign_source_12);
if (par_self != NULL) {
    PyObject *value;
CHECK_OBJECT(par_self);
value = par_self;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_self, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_self) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (par_code != NULL) {
    PyObject *value;
CHECK_OBJECT(par_code);
value = par_code;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_code, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_code) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (par___globals__ != NULL) {
    PyObject *value;
CHECK_OBJECT(par___globals__);
value = par___globals__;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain___globals__, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain___globals__) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_stdout_buf != NULL) {
    PyObject *value;
CHECK_OBJECT(var_stdout_buf);
value = var_stdout_buf;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_stdout_buf, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_stdout_buf) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_stderr_buf != NULL) {
    PyObject *value;
CHECK_OBJECT(var_stderr_buf);
value = var_stderr_buf;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_stderr_buf, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_stderr_buf) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_output != NULL) {
    PyObject *value;
CHECK_OBJECT(var_output);
value = var_output;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_output, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_output) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_e != NULL) {
    PyObject *value;
CHECK_OBJECT(var_e);
value = var_e;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_e, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_e) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_err_type != NULL) {
    PyObject *value;
CHECK_OBJECT(var_err_type);
value = var_err_type;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_err_type, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_err_type) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

if (var_user_cmd != NULL) {
    PyObject *value;
CHECK_OBJECT(var_user_cmd);
value = var_user_cmd;

    UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts.const_str_plain_user_cmd, value);
} else {
    if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts.const_str_plain_user_cmd) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }
}

goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(tmp_exec_call_1__globals);
tmp_assign_source_12 = tmp_exec_call_1__globals;
Py_INCREF(tmp_assign_source_12);
condexpr_end_1:;
assert(tmp_exec_call_1__locals == NULL);
tmp_exec_call_1__locals = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_exec_call_1__globals);
tmp_cmp_expr_left_2 = tmp_exec_call_1__globals;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = (PyObject *)moduledict_error_execution;
{
    PyObject *old = tmp_exec_call_1__globals;
    assert(old != NULL);
    tmp_exec_call_1__globals = tmp_assign_source_13;
    Py_INCREF(tmp_exec_call_1__globals);
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
{
PyObject *tmp_eval_source_1;
PyObject *tmp_eval_globals_1;
PyObject *tmp_eval_locals_1;
PyObject *tmp_eval_compiled_1;
CHECK_OBJECT(par_code);
tmp_eval_source_1 = par_code;
CHECK_OBJECT(tmp_exec_call_1__globals);
tmp_eval_globals_1 = tmp_exec_call_1__globals;
CHECK_OBJECT(tmp_exec_call_1__locals);
tmp_eval_locals_1 = tmp_exec_call_1__locals;
tmp_eval_compiled_1 = COMPILE_CODE(tstate, tmp_eval_source_1, mod_consts.const_str_angle_string, mod_consts.const_str_plain_exec, NULL, NULL, NULL);
if (tmp_eval_compiled_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
tmp_outline_return_value_1 = EVAL_CODE(tstate, tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1, NULL);
CHECK_OBJECT(tmp_eval_compiled_1);
Py_DECREF(tmp_eval_compiled_1);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
goto try_return_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_exec_call_1__globals);
CHECK_OBJECT(tmp_exec_call_1__globals);
Py_DECREF(tmp_exec_call_1__globals);
tmp_exec_call_1__globals = NULL;
CHECK_OBJECT(tmp_exec_call_1__locals);
CHECK_OBJECT(tmp_exec_call_1__locals);
Py_DECREF(tmp_exec_call_1__locals);
tmp_exec_call_1__locals = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_exec_call_1__globals);
CHECK_OBJECT(tmp_exec_call_1__globals);
Py_DECREF(tmp_exec_call_1__globals);
tmp_exec_call_1__globals = NULL;
CHECK_OBJECT(tmp_exec_call_1__locals);
CHECK_OBJECT(tmp_exec_call_1__locals);
Py_DECREF(tmp_exec_call_1__locals);
tmp_exec_call_1__locals = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_14;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_error_execution$$$function__3_Run->m_frame)) {
        frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_10;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_error_execution$$$function__3_Run->m_frame)) {
        frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_10;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
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
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
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
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
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
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_15;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_11;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_error_execution$$$function__3_Run->m_frame)) {
        frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_11;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_error_execution$$$function__3_Run->m_frame)) {
        frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_11;
branch_end_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_4;
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
try_except_handler_4:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
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
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_8);

exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_3;
// End of try:
try_end_7:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 42;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_9:;
goto try_end_8;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
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
{
PyObject *tmp_assign_source_16;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_stdout_buf);
tmp_called_instance_1 = var_stdout_buf;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 45;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getvalue);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_stderr_buf);
tmp_called_instance_2 = var_stderr_buf;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 45;
tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getvalue);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 45;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_output == NULL);
var_output = tmp_assign_source_16;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_consecutive_failures, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ams);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_9 = mod_consts.const_str_plain_EXEC_OK;
CHECK_OBJECT(var_output);
tmp_expression_value_8 = var_output;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_80_none;
tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = mod_consts.const_str_digest_bc4a474d787fd69a4f8ee6000c027473;
Py_INCREF(tmp_or_right_value_1);
tmp_args_element_value_10 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_args_element_value_10 = tmp_or_left_value_1;
or_end_1:;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
CHECK_OBJECT(var_output);
tmp_or_left_value_2 = var_output;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = mod_consts.const_str_plain_OK;
tmp_return_value = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_return_value = tmp_or_left_value_2;
or_end_2:;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__3_Run, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_17); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_17);
var_e = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_consecutive_failures);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto try_except_handler_14;
}
tmp_assign_source_19 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_19;

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_2 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_consecutive_failures, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto try_except_handler_14;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_13;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_e);
tmp_unicode_arg_1 = var_e;
tmp_assattr_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_last_error, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(var_e);
tmp_type_arg_1 = var_e;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_10 == NULL));
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
assert(var_err_type == NULL);
var_err_type = tmp_assign_source_20;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ams);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_args_element_value_11 = mod_consts.const_str_plain_EXEC_FAIL;
CHECK_OBJECT(var_err_type);
tmp_format_value_1 = var_err_type;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_e);
tmp_format_value_2 = var_e;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3379a8cecf921ddd37cbc42de4bd7ea1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_consecutive_failures);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_slash;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_MAX_FAILURES);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_12 == NULL));
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 55;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_e);
tmp_args_element_value_13 = var_e;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 61;
tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__detect_user_cmd, tmp_args_element_value_13);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
assert(var_user_cmd == NULL);
var_user_cmd = tmp_assign_source_21;
}
{
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_1;
CHECK_OBJECT(var_user_cmd);
tmp_truth_name_1 = CHECK_IF_TRUE(var_user_cmd);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_12 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_unicode_arg_2;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__prompt_user_cmd);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_user_cmd);
tmp_kw_call_arg_value_0_1 = var_user_cmd;
CHECK_OBJECT(var_e);
tmp_unicode_arg_2 = var_e;
tmp_kw_call_dict_value_0_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 63;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts.const_tuple_str_plain_reason_tuple);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(par_code);
tmp_args_element_value_14 = par_code;
CHECK_OBJECT(par___globals__);
tmp_args_element_value_15 = par___globals__;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_Run,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
goto try_return_handler_13;
}
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_consecutive_failures);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_MAX_FAILURES);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_13 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = 68;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain__prompt_nap);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
goto try_return_handler_13;
}
branch_no_12:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_239ab0c0b6da02d0787a21dabab625bd;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_err_type);
tmp_format_value_5 = var_err_type;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_f0147941391d9cf1ad9fb6f3897feacc;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_e);
tmp_format_value_6 = var_e;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_1c74c54d401867c9d7f1571de0071618;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
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
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_12;
// End of try:
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 41;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_error_execution$$$function__3_Run->m_frame)) {
        frame_frame_error_execution$$$function__3_Run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_12;
branch_end_10:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__3_Run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__3_Run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__3_Run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__3_Run,
    type_description_1,
    par_self,
    par_code,
    par___globals__,
    var_stdout_buf,
    var_stderr_buf,
    var_output,
    var_e,
    var_err_type,
    var_user_cmd
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__3_Run == cache_frame_frame_error_execution$$$function__3_Run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__3_Run);
    cache_frame_frame_error_execution$$$function__3_Run = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__3_Run);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_stdout_buf);
CHECK_OBJECT(var_stdout_buf);
Py_DECREF(var_stdout_buf);
var_stdout_buf = NULL;
CHECK_OBJECT(var_stderr_buf);
CHECK_OBJECT(var_stderr_buf);
Py_DECREF(var_stderr_buf);
var_stderr_buf = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_err_type);
var_err_type = NULL;
Py_XDECREF(var_user_cmd);
var_user_cmd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_stdout_buf);
var_stdout_buf = NULL;
Py_XDECREF(var_stderr_buf);
var_stderr_buf = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_err_type);
var_err_type = NULL;
Py_XDECREF(var_user_cmd);
var_user_cmd = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
Py_XDECREF(locals_error_execution$$$function__3_Run);

CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par___globals__);
Py_DECREF(par___globals__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
Py_XDECREF(locals_error_execution$$$function__3_Run);

CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par___globals__);
Py_DECREF(par___globals__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_error_execution$$$function__4__detect_user_cmd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_e = python_pars[1];
PyObject *var_err_type = NULL;
PyObject *var_pkg = NULL;
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__4__detect_user_cmd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__4__detect_user_cmd = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__4__detect_user_cmd)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__4__detect_user_cmd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__4__detect_user_cmd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__4__detect_user_cmd = MAKE_FUNCTION_FRAME(tstate, code_objects_0c5a23a925ee4b31df2fc73136cdb283, module_error_execution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__4__detect_user_cmd->m_type_description == NULL);
frame_frame_error_execution$$$function__4__detect_user_cmd = cache_frame_frame_error_execution$$$function__4__detect_user_cmd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__4__detect_user_cmd);
assert(Py_REFCNT(frame_frame_error_execution$$$function__4__detect_user_cmd) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_e);
tmp_type_arg_1 = par_e;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_err_type == NULL);
var_err_type = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_err_type);
tmp_cmp_expr_left_1 = var_err_type;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_ImportError_str_plain_ModuleNotFoundError_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_unicode_arg_3;
PyObject *tmp_subscript_value_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_chr_39;
CHECK_OBJECT(par_e);
tmp_unicode_arg_1 = par_e;
tmp_cmp_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_e);
tmp_unicode_arg_2 = par_e;
tmp_expression_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__4__detect_user_cmd->m_frame.f_lineno = 78;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_39_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_e);
tmp_unicode_arg_3 = par_e;
tmp_expression_value_5 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__4__detect_user_cmd->m_frame.f_lineno = 78;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_neg_1;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, -1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_pkg == NULL);
var_pkg = tmp_assign_source_2;
}
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5745eedc75ded1a498fbfc2f3dccaeb3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_pkg);
tmp_format_value_1 = var_pkg;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_err_type);
tmp_cmp_expr_left_3 = var_err_type;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_PermissionError;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_e);
tmp_expression_value_6 = par_e;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain_filename);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_tuple_element_2 = mod_consts.const_str_digest_71176bac0d79b8831f3b349a4634eb3f;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_e);
tmp_expression_value_7 = par_e;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_filename);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
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
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_return_value = Py_None;
Py_INCREF(tmp_return_value);
condexpr_end_2:;
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__4__detect_user_cmd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__4__detect_user_cmd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__4__detect_user_cmd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__4__detect_user_cmd,
    type_description_1,
    par_self,
    par_e,
    var_err_type,
    var_pkg
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__4__detect_user_cmd == cache_frame_frame_error_execution$$$function__4__detect_user_cmd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__4__detect_user_cmd);
    cache_frame_frame_error_execution$$$function__4__detect_user_cmd = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__4__detect_user_cmd);

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
CHECK_OBJECT(var_err_type);
CHECK_OBJECT(var_err_type);
Py_DECREF(var_err_type);
var_err_type = NULL;
Py_XDECREF(var_pkg);
var_pkg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_err_type);
var_err_type = NULL;
Py_XDECREF(var_pkg);
var_pkg = NULL;
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
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_error_execution$$$function__5__prompt_user_cmd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cmd = python_pars[1];
PyObject *par_reason = python_pars[2];
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__5__prompt_user_cmd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__5__prompt_user_cmd = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__5__prompt_user_cmd)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__5__prompt_user_cmd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__5__prompt_user_cmd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__5__prompt_user_cmd = MAKE_FUNCTION_FRAME(tstate, code_objects_a858da59942bdea95523f6a007c63709, module_error_execution, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__5__prompt_user_cmd->m_type_description == NULL);
frame_frame_error_execution$$$function__5__prompt_user_cmd = cache_frame_frame_error_execution$$$function__5__prompt_user_cmd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__5__prompt_user_cmd);
assert(Py_REFCNT(frame_frame_error_execution$$$function__5__prompt_user_cmd) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_console);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_print);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_error_execution$Panel(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Panel);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_2d648c509a349da8bc645b669b83dd77;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_reason);
tmp_format_value_1 = par_reason;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ecd8892e1a2c1cd9767275d366650aa5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_cmd);
tmp_format_value_2 = par_cmd;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_013df90210f6d3e13ce4e0229fce9d23;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_digest_18d8f9e64912526890cea2836ca61c19;
tmp_expression_value_3 = module_var_accessor_error_execution$box(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ROUNDED);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = mod_consts.const_tuple_int_pos_1_int_pos_2_tuple;
frame_frame_error_execution$$$function__5__prompt_user_cmd->m_frame.f_lineno = 89;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__5__prompt_user_cmd->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ams);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_PROMPT_CMD;
CHECK_OBJECT(par_cmd);
tmp_args_element_value_3 = par_cmd;
frame_frame_error_execution$$$function__5__prompt_user_cmd->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
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


exception_lineno = 97;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_input_arg_1;
PyObject *tmp_capi_result_1;
tmp_input_arg_1 = mod_consts.const_str_digest_f5caf9ed622702379f2ac410fc3714b8;
tmp_capi_result_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__5__prompt_user_cmd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__5__prompt_user_cmd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__5__prompt_user_cmd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__5__prompt_user_cmd,
    type_description_1,
    par_self,
    par_cmd,
    par_reason
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__5__prompt_user_cmd == cache_frame_frame_error_execution$$$function__5__prompt_user_cmd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__5__prompt_user_cmd);
    cache_frame_frame_error_execution$$$function__5__prompt_user_cmd = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__5__prompt_user_cmd);

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
CHECK_OBJECT(par_cmd);
Py_DECREF(par_cmd);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cmd);
Py_DECREF(par_cmd);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_error_execution$$$function__6__prompt_nap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_choice = NULL;
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__6__prompt_nap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__6__prompt_nap = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__6__prompt_nap)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__6__prompt_nap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__6__prompt_nap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__6__prompt_nap = MAKE_FUNCTION_FRAME(tstate, code_objects_091dc97145e45c658b751f662685ce5d, module_error_execution, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__6__prompt_nap->m_type_description == NULL);
frame_frame_error_execution$$$function__6__prompt_nap = cache_frame_frame_error_execution$$$function__6__prompt_nap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__6__prompt_nap);
assert(Py_REFCNT(frame_frame_error_execution$$$function__6__prompt_nap) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_console);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_print);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_error_execution$Panel(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Panel);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_308c07d6412248cc1e08dc84ecef19db;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_last_error);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_4033e19ac55484b2dc949cc0b7fb79fd;
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
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_digest_9edcda861d03d272c9339f6e75e7a219;
tmp_expression_value_4 = module_var_accessor_error_execution$box(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 111;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ROUNDED);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 111;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = mod_consts.const_tuple_int_pos_1_int_pos_2_tuple;
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 103;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_title_str_plain_box_str_plain_padding_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 103;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ams);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 115;
tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_write,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_82412e2fc3ee47c1ecb93d3fdaf06796_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_input_arg_1;
tmp_input_arg_1 = mod_consts.const_str_digest_3bffc0e09c29138cef72721dcb311772;
tmp_str_arg_value_2 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
if (tmp_str_arg_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = UNICODE_STRIP1(tstate, tmp_str_arg_value_2);
CHECK_OBJECT(tmp_str_arg_value_2);
Py_DECREF(tmp_str_arg_value_2);
if (tmp_str_arg_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = UNICODE_UPPER(tstate, tmp_str_arg_value_1);
CHECK_OBJECT(tmp_str_arg_value_1);
Py_DECREF(tmp_str_arg_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_choice == NULL);
var_choice = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_choice);
tmp_cmp_expr_left_1 = var_choice;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_N;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 119;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__do_nap);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_choice);
tmp_cmp_expr_left_2 = var_choice;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_A;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ams);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 121;
tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_write,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ABORT_str_digest_0ab28d24a0e1c52f352b1c220469b748_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ams);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_WorkingStop);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__6__prompt_nap->m_frame.f_lineno = 122;
tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_Yes_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = const_int_0;
tmp_raise_type_1 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_consecutive_failures, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_99a103ecf3127306c28d81e2dddf852a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MAX_FAILURES);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_af6ae68fee023f31e6e1c33b7b97cae3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__6__prompt_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__6__prompt_nap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__6__prompt_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__6__prompt_nap,
    type_description_1,
    par_self,
    var_choice
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__6__prompt_nap == cache_frame_frame_error_execution$$$function__6__prompt_nap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__6__prompt_nap);
    cache_frame_frame_error_execution$$$function__6__prompt_nap = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__6__prompt_nap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_choice);
CHECK_OBJECT(var_choice);
Py_DECREF(var_choice);
var_choice = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_choice);
var_choice = NULL;
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


static PyObject *impl_error_execution$$$function__7__do_nap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_error_execution$$$function__7__do_nap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_error_execution$$$function__7__do_nap = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_error_execution$$$function__7__do_nap)) {
    Py_XDECREF(cache_frame_frame_error_execution$$$function__7__do_nap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_error_execution$$$function__7__do_nap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_error_execution$$$function__7__do_nap = MAKE_FUNCTION_FRAME(tstate, code_objects_beeb061bdf87a3affce2d8e36c47653b, module_error_execution, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_error_execution$$$function__7__do_nap->m_type_description == NULL);
frame_frame_error_execution$$$function__7__do_nap = cache_frame_frame_error_execution$$$function__7__do_nap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution$$$function__7__do_nap);
assert(Py_REFCNT(frame_frame_error_execution$$$function__7__do_nap) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__agent_ref);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 129;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__agent_ref);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__7__do_nap->m_frame.f_lineno = 130;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_nap);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_consecutive_failures, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ams);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__7__do_nap->m_frame.f_lineno = 132;
tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_write,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_NAP_str_digest_a7eab2684842d185df5e7f300406df83_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_console);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_error_execution$$$function__7__do_nap->m_frame.f_lineno = 133;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_print,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_adc649d1cfc6e1439afd533f75218b71_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution$$$function__7__do_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution$$$function__7__do_nap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution$$$function__7__do_nap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_error_execution$$$function__7__do_nap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_error_execution$$$function__7__do_nap == cache_frame_frame_error_execution$$$function__7__do_nap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_error_execution$$$function__7__do_nap);
    cache_frame_frame_error_execution$$$function__7__do_nap = NULL;
}

assertFrameObject(frame_frame_error_execution$$$function__7__do_nap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = mod_consts.const_str_plain_NAP_TAKEN;
Py_INCREF(tmp_return_value);
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



static PyObject *MAKE_FUNCTION_error_execution$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2dce6d2fefb4213fa53d27ff104814e4,
#endif
        code_objects_d4cc98fb4b2f95f5531f6c3b0995fba7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__2_bind_agent(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__2_bind_agent,
        mod_consts.const_str_plain_bind_agent,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65342d39f78eef956de1b4b5535a89ff,
#endif
        code_objects_9b3ff95a879d444676cfe94016d34a09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__3_Run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__3_Run,
        mod_consts.const_str_plain_Run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc52ce6647c9f2b9f5b83fb7689408f1,
#endif
        code_objects_af0a328e71b4eafdde612b0f342edf7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__4__detect_user_cmd(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__4__detect_user_cmd,
        mod_consts.const_str_plain__detect_user_cmd,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_676ea1c5e3a1de030d4dcbe0f1133eda,
#endif
        code_objects_0c5a23a925ee4b31df2fc73136cdb283,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__5__prompt_user_cmd(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__5__prompt_user_cmd,
        mod_consts.const_str_plain__prompt_user_cmd,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af44193610630c6f782305a48ac7c91e,
#endif
        code_objects_a858da59942bdea95523f6a007c63709,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__6__prompt_nap(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__6__prompt_nap,
        mod_consts.const_str_plain__prompt_nap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dfa19e87439f76e62ccc9ee232860197,
#endif
        code_objects_091dc97145e45c658b751f662685ce5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_error_execution,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_error_execution$$$function__7__do_nap(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_error_execution$$$function__7__do_nap,
        mod_consts.const_str_plain__do_nap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f4b3977451a8dc41146abc8934a085b,
#endif
        code_objects_beeb061bdf87a3affce2d8e36c47653b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_error_execution,
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

static function_impl_code const function_table_error_execution[] = {
impl_error_execution$$$function__1___init__,
impl_error_execution$$$function__2_bind_agent,
impl_error_execution$$$function__3_Run,
impl_error_execution$$$function__4__detect_user_cmd,
impl_error_execution$$$function__5__prompt_user_cmd,
impl_error_execution$$$function__6__prompt_nap,
impl_error_execution$$$function__7__do_nap,
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

    return Nuitka_Function_GetFunctionState(function, function_table_error_execution);
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
        module_error_execution,
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
        function_table_error_execution,
        sizeof(function_table_error_execution) / sizeof(function_impl_code)
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
static char const *module_full_name = "error_execution";
#endif

// Internal entry point for module code.
PyObject *module_code_error_execution(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("error_execution");

    // Store the module for future use.
    module_error_execution = module;

    moduledict_error_execution = MODULE_DICT(module_error_execution);

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
        PRINT_STRING("error_execution: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("error_execution: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("error_execution: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "error_execution" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initerror_execution\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_error_execution,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_error_execution,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_error_execution,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_error_execution,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_error_execution,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_error_execution);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_error_execution);
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

        UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_error_execution;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_error_execution$$$class__1_ErrorExecution_15 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_4bacc8cd190193a9aafd92564ab61e2d;
UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_error_execution = MAKE_MODULE_FRAME(code_objects_fa404326fae602566a5d4df5ea602d88, module_error_execution);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_error_execution);
assert(Py_REFCNT(frame_frame_error_execution) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_error_execution$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_error_execution$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_1 = (PyObject *)moduledict_error_execution;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_error_execution->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_error_execution;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_redirect_stdout_str_plain_redirect_stderr_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_error_execution->m_frame.f_lineno = 9;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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
        (PyObject *)moduledict_error_execution,
        mod_consts.const_str_plain_redirect_stdout,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_redirect_stdout);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stdout, tmp_assign_source_8);
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
        (PyObject *)moduledict_error_execution,
        mod_consts.const_str_plain_redirect_stderr,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_redirect_stderr);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_redirect_stderr, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_732155067944c45306e79906bf400a89;
tmp_globals_arg_value_3 = (PyObject *)moduledict_error_execution;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Panel_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_error_execution->m_frame.f_lineno = 10;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_error_execution,
        mod_consts.const_str_plain_Panel,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Panel);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_Panel, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_253339e737a94bb3cc28e8e56e99d96d;
tmp_globals_arg_value_4 = (PyObject *)moduledict_error_execution;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Prompt_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_error_execution->m_frame.f_lineno = 11;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_error_execution,
        mod_consts.const_str_plain_Prompt,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Prompt);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_Prompt, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_rich;
tmp_globals_arg_value_5 = (PyObject *)moduledict_error_execution;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_box_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_error_execution->m_frame.f_lineno = 12;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_error_execution,
        mod_consts.const_str_plain_box,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_box);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_box, tmp_assign_source_12);
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
locals_error_execution$$$class__1_ErrorExecution_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_plain_error_execution;
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ErrorExecution;
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain_MAX_FAILURES, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = DICT_COPY(tstate, mod_consts.const_dict_4bc735057b06e14608fed77f93613e2c);
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain_INSTALL_HINTS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__2_bind_agent(tstate);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain_bind_agent, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_eb220d9eea4047477558b6c7fe385b57);

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__3_Run(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain_Run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ced479034c60bf6f30f044d2c5644c66);

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__4__detect_user_cmd(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain__detect_user_cmd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0791411d83d79809d0a66b9fdf06ff66);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__5__prompt_user_cmd(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain__prompt_user_cmd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__6__prompt_nap(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain__prompt_nap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_dictset_value = MAKE_FUNCTION_error_execution$$$function__7__do_nap(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain__do_nap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_71dfec4d79889a3277602040359dfe90_tuple;
tmp_result = DICT_SET_ITEM(locals_error_execution$$$class__1_ErrorExecution_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_ErrorExecution;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_error_execution$$$class__1_ErrorExecution_15;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_error_execution->m_frame.f_lineno = 15;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

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
Py_DECREF(locals_error_execution$$$class__1_ErrorExecution_15);
locals_error_execution$$$class__1_ErrorExecution_15 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_error_execution$$$class__1_ErrorExecution_15);
locals_error_execution$$$class__1_ErrorExecution_15 = NULL;
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
exception_lineno = 15;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_error_execution, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorExecution, tmp_assign_source_15);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_error_execution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_error_execution->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_error_execution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_error_execution);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("error_execution", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "error_execution" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_error_execution);
    return module_error_execution;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_error_execution, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("error_execution", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

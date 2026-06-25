/* Generated code for Python module 'click'
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



/* The "module_click" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click;
PyDictObject *moduledict_click;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_BaseCommand;
PyObject *const_str_plain_core;
PyObject *const_tuple_str_plain__BaseCommand_tuple;
PyObject *const_str_plain__BaseCommand;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_e5b34753d4c70a2d2700e6ca800813ef;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_MultiCommand;
PyObject *const_tuple_str_plain__MultiCommand_tuple;
PyObject *const_str_plain__MultiCommand;
PyObject *const_str_digest_ac6b9b0f6fef429d33788fbd309e69d5;
PyObject *const_str_plain_OptionParser;
PyObject *const_str_plain_parser;
PyObject *const_tuple_str_plain__OptionParser_tuple;
PyObject *const_str_plain__OptionParser;
PyObject *const_str_digest_191ad5068908d8a2430edf28dc5ca402;
PyObject *const_str_plain___version__;
PyObject *const_str_digest_ff46da78727d8f7d6cbb444e18a939c9;
PyObject *const_str_digest_dc8dd0cd6d2e7d0b296825bcf70f7853;
PyObject *const_str_digest_860270aa681f43e3b57438aca6b7bbc1;
PyObject *const_str_plain_environ;
PyObject *const_tuple_03fce044cddbe3eb08efe0cf9861e728_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Argument_tuple;
PyObject *const_str_plain_Argument;
PyObject *const_tuple_str_plain_Command_tuple;
PyObject *const_str_plain_Command;
PyObject *const_tuple_str_plain_CommandCollection_tuple;
PyObject *const_str_plain_CommandCollection;
PyObject *const_tuple_str_plain_Context_tuple;
PyObject *const_str_plain_Context;
PyObject *const_tuple_str_plain_Group_tuple;
PyObject *const_str_plain_Group;
PyObject *const_tuple_str_plain_Option_tuple;
PyObject *const_str_plain_Option;
PyObject *const_tuple_str_plain_Parameter_tuple;
PyObject *const_str_plain_Parameter;
PyObject *const_str_plain_decorators;
PyObject *const_tuple_str_plain_argument_tuple;
PyObject *const_str_plain_argument;
PyObject *const_tuple_str_plain_command_tuple;
PyObject *const_str_plain_command;
PyObject *const_tuple_str_plain_confirmation_option_tuple;
PyObject *const_str_plain_confirmation_option;
PyObject *const_tuple_str_plain_group_tuple;
PyObject *const_str_plain_group;
PyObject *const_tuple_str_plain_help_option_tuple;
PyObject *const_str_plain_help_option;
PyObject *const_tuple_str_plain_make_pass_decorator_tuple;
PyObject *const_str_plain_make_pass_decorator;
PyObject *const_tuple_str_plain_option_tuple;
PyObject *const_str_plain_option;
PyObject *const_tuple_str_plain_pass_context_tuple;
PyObject *const_str_plain_pass_context;
PyObject *const_tuple_str_plain_pass_obj_tuple;
PyObject *const_str_plain_pass_obj;
PyObject *const_tuple_str_plain_password_option_tuple;
PyObject *const_str_plain_password_option;
PyObject *const_tuple_str_plain_version_option_tuple;
PyObject *const_str_plain_version_option;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_Abort_tuple;
PyObject *const_str_plain_Abort;
PyObject *const_tuple_str_plain_BadArgumentUsage_tuple;
PyObject *const_str_plain_BadArgumentUsage;
PyObject *const_tuple_str_plain_BadOptionUsage_tuple;
PyObject *const_str_plain_BadOptionUsage;
PyObject *const_tuple_str_plain_BadParameter_tuple;
PyObject *const_str_plain_BadParameter;
PyObject *const_tuple_str_plain_ClickException_tuple;
PyObject *const_str_plain_ClickException;
PyObject *const_tuple_str_plain_FileError_tuple;
PyObject *const_str_plain_FileError;
PyObject *const_tuple_str_plain_MissingParameter_tuple;
PyObject *const_str_plain_MissingParameter;
PyObject *const_tuple_str_plain_NoSuchOption_tuple;
PyObject *const_str_plain_NoSuchOption;
PyObject *const_tuple_str_plain_UsageError_tuple;
PyObject *const_str_plain_UsageError;
PyObject *const_str_plain_formatting;
PyObject *const_tuple_str_plain_HelpFormatter_tuple;
PyObject *const_str_plain_HelpFormatter;
PyObject *const_tuple_str_plain_wrap_text_tuple;
PyObject *const_str_plain_wrap_text;
PyObject *const_tuple_str_plain_get_current_context_tuple;
PyObject *const_str_plain_get_current_context;
PyObject *const_str_plain_termui;
PyObject *const_tuple_str_plain_clear_tuple;
PyObject *const_str_plain_clear;
PyObject *const_tuple_str_plain_confirm_tuple;
PyObject *const_str_plain_confirm;
PyObject *const_tuple_str_plain_echo_via_pager_tuple;
PyObject *const_str_plain_echo_via_pager;
PyObject *const_tuple_str_plain_edit_tuple;
PyObject *const_str_plain_edit;
PyObject *const_tuple_str_plain_getchar_tuple;
PyObject *const_str_plain_getchar;
PyObject *const_tuple_str_plain_launch_tuple;
PyObject *const_str_plain_launch;
PyObject *const_tuple_str_plain_pause_tuple;
PyObject *const_str_plain_pause;
PyObject *const_tuple_str_plain_progressbar_tuple;
PyObject *const_str_plain_progressbar;
PyObject *const_tuple_str_plain_prompt_tuple;
PyObject *const_str_plain_prompt;
PyObject *const_tuple_str_plain_secho_tuple;
PyObject *const_str_plain_secho;
PyObject *const_tuple_str_plain_style_tuple;
PyObject *const_str_plain_style;
PyObject *const_tuple_str_plain_unstyle_tuple;
PyObject *const_str_plain_unstyle;
PyObject *const_tuple_str_plain_BOOL_tuple;
PyObject *const_str_plain_BOOL;
PyObject *const_tuple_str_plain_Choice_tuple;
PyObject *const_str_plain_Choice;
PyObject *const_tuple_str_plain_DateTime_tuple;
PyObject *const_str_plain_DateTime;
PyObject *const_tuple_str_plain_File_tuple;
PyObject *const_str_plain_File;
PyObject *const_tuple_str_plain_FLOAT_tuple;
PyObject *const_str_plain_FLOAT;
PyObject *const_tuple_str_plain_FloatRange_tuple;
PyObject *const_str_plain_FloatRange;
PyObject *const_tuple_str_plain_INT_tuple;
PyObject *const_str_plain_INT;
PyObject *const_tuple_str_plain_IntRange_tuple;
PyObject *const_str_plain_IntRange;
PyObject *const_tuple_str_plain_ParamType_tuple;
PyObject *const_str_plain_ParamType;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_tuple_str_plain_STRING_tuple;
PyObject *const_str_plain_STRING;
PyObject *const_tuple_str_plain_Tuple_tuple;
PyObject *const_str_plain_Tuple;
PyObject *const_tuple_str_plain_UNPROCESSED_tuple;
PyObject *const_str_plain_UNPROCESSED;
PyObject *const_tuple_str_plain_UUID_tuple;
PyObject *const_str_plain_UUID;
PyObject *const_str_plain_utils;
PyObject *const_tuple_str_plain_echo_tuple;
PyObject *const_str_plain_echo;
PyObject *const_tuple_str_plain_format_filename_tuple;
PyObject *const_str_plain_format_filename;
PyObject *const_tuple_str_plain_get_app_dir_tuple;
PyObject *const_str_plain_get_app_dir;
PyObject *const_tuple_str_plain_get_binary_stream_tuple;
PyObject *const_str_plain_get_binary_stream;
PyObject *const_tuple_str_plain_get_text_stream_tuple;
PyObject *const_str_plain_get_text_stream;
PyObject *const_tuple_str_plain_open_file_tuple;
PyObject *const_str_plain_open_file;
PyObject *const_dict_8271e73c4a6040cc972a26685a9da683;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_a5149021ca700337f56db7352c37e399;
PyObject *const_str_digest_c058029c14554971cf11a144181a6043;
PyObject *const_tuple_49e8ad1fb68f534ef3f4c16c1e98359b_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[162];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("click"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseCommand);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BaseCommand_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__BaseCommand);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5b34753d4c70a2d2700e6ca800813ef);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultiCommand);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__MultiCommand_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__MultiCommand);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac6b9b0f6fef429d33788fbd309e69d5);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionParser);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_parser);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__OptionParser_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__OptionParser);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_191ad5068908d8a2430edf28dc5ca402);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff46da78727d8f7d6cbb444e18a939c9);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc8dd0cd6d2e7d0b296825bcf70f7853);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_860270aa681f43e3b57438aca6b7bbc1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_03fce044cddbe3eb08efe0cf9861e728_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Argument_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Argument);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Command_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Command);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CommandCollection_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_CommandCollection);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Context_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Context);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Group_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Group);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Option_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Option);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Parameter_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_decorators);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_argument_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_argument);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_command);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_confirmation_option_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_confirmation_option);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_group_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_option_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_help_option);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_pass_decorator_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_pass_decorator);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_option_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_option);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pass_context_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_pass_context);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pass_obj_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_pass_obj);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_option_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_password_option);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_option_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_version_option);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Abort_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Abort);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadArgumentUsage_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_BadArgumentUsage);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadOptionUsage_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_BadOptionUsage);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadParameter_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_BadParameter);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClickException_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClickException);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileError_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileError);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MissingParameter_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_MissingParameter);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoSuchOption_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoSuchOption);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UsageError_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_UsageError);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_formatting);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HelpFormatter_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_HelpFormatter);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wrap_text_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_text);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_current_context_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_context);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_termui);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clear_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_confirm_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_confirm);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_via_pager_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_echo_via_pager);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_edit_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_edit);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getchar_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_getchar);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_launch_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_launch);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pause_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_pause);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_progressbar_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_progressbar);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_secho_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_secho);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_style);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unstyle_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_unstyle);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BOOL_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Choice_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Choice);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DateTime_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_File_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_File);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FLOAT_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_FLOAT);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FloatRange_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_FloatRange);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_INT_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_INT);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntRange_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntRange);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParamType_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParamType);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_STRING_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_STRING);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tuple_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNPROCESSED_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNPROCESSED);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UUID_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_echo);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_format_filename_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_filename);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_app_dir_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_app_dir);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_binary_stream_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_binary_stream);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_text_stream_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_text_stream);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_file_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_file);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5149021ca700337f56db7352c37e399);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_c058029c14554971cf11a144181a6043);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_49e8ad1fb68f534ef3f4c16c1e98359b_tuple);
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
void checkModuleConstants_click(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseCommand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseCommand);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BaseCommand_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__BaseCommand_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__BaseCommand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BaseCommand);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5b34753d4c70a2d2700e6ca800813ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5b34753d4c70a2d2700e6ca800813ef);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultiCommand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MultiCommand);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__MultiCommand_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__MultiCommand_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__MultiCommand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MultiCommand);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac6b9b0f6fef429d33788fbd309e69d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac6b9b0f6fef429d33788fbd309e69d5);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionParser);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parser);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__OptionParser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__OptionParser_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__OptionParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__OptionParser);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_191ad5068908d8a2430edf28dc5ca402));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_191ad5068908d8a2430edf28dc5ca402);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff46da78727d8f7d6cbb444e18a939c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff46da78727d8f7d6cbb444e18a939c9);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc8dd0cd6d2e7d0b296825bcf70f7853));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc8dd0cd6d2e7d0b296825bcf70f7853);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_860270aa681f43e3b57438aca6b7bbc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_860270aa681f43e3b57438aca6b7bbc1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_03fce044cddbe3eb08efe0cf9861e728_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03fce044cddbe3eb08efe0cf9861e728_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Argument_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Argument_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Argument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Argument);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Command_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Command_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Command);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CommandCollection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CommandCollection_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_CommandCollection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CommandCollection);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Context_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Context);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Group_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Group_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Group);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Option_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Option);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Parameter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Parameter_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Parameter);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_decorators));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decorators);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_argument_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_argument_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_argument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argument);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_command);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_confirmation_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_confirmation_option_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_confirmation_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confirmation_option);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_group_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_group_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_help_option_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_help_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_help_option);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_pass_decorator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_make_pass_decorator_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_pass_decorator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_pass_decorator);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_option_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_option);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pass_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pass_context_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_pass_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pass_context);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pass_obj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pass_obj_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_pass_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pass_obj);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_password_option_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_password_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_password_option);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_option_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_version_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version_option);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Abort_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Abort_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Abort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Abort);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadArgumentUsage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BadArgumentUsage_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_BadArgumentUsage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BadArgumentUsage);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadOptionUsage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BadOptionUsage_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_BadOptionUsage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BadOptionUsage);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BadParameter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BadParameter_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_BadParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BadParameter);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClickException_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClickException_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClickException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClickException);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileError_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileError);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MissingParameter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MissingParameter_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_MissingParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MissingParameter);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoSuchOption_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NoSuchOption_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoSuchOption));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoSuchOption);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UsageError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UsageError_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_UsageError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UsageError);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_formatting));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_formatting);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HelpFormatter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HelpFormatter_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_HelpFormatter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HelpFormatter);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wrap_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wrap_text_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_text);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_current_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_current_context_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_current_context);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_termui));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_termui);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clear_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_clear_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_confirm_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_confirm_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_confirm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confirm);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_via_pager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_echo_via_pager_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_echo_via_pager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_echo_via_pager);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_edit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_edit_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_edit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_edit);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getchar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_getchar_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_getchar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getchar);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_launch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_launch_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_launch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_launch);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pause_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pause_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_pause));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pause);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_progressbar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_progressbar_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_progressbar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_progressbar);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prompt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prompt_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_secho_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_secho_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_secho));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secho);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_style_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unstyle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_unstyle_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_unstyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unstyle);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BOOL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BOOL_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOOL);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Choice_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Choice_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Choice);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DateTime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DateTime_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DateTime);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_File_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_File_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_File));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_File);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FLOAT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FLOAT_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_FLOAT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FLOAT);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FloatRange_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FloatRange_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_FloatRange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FloatRange);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_INT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_INT_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_INT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INT);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntRange_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IntRange_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntRange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntRange);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParamType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ParamType_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParamType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParamType);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_STRING_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_STRING_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_STRING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STRING);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Tuple_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNPROCESSED_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UNPROCESSED_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNPROCESSED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNPROCESSED);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UUID_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UUID_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_echo_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_echo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_echo);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_format_filename_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_format_filename_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_filename);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_app_dir_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_app_dir_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_app_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_app_dir);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_binary_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_binary_stream_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_binary_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_binary_stream);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_text_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_text_stream_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_text_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_text_stream);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_file_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_file);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5149021ca700337f56db7352c37e399));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5149021ca700337f56db7352c37e399);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_c058029c14554971cf11a144181a6043));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c058029c14554971cf11a144181a6043);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_49e8ad1fb68f534ef3f4c16c1e98359b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_49e8ad1fb68f534ef3f4c16c1e98359b_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_click$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_click$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_click$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8219120236a09e9a195c24981db2927c;
static PyCodeObject *code_objects_cc1328c2a4b3d9aaba7565060927908f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a5149021ca700337f56db7352c37e399); CHECK_OBJECT(module_filename_obj);
code_objects_8219120236a09e9a195c24981db2927c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c058029c14554971cf11a144181a6043, mod_consts.const_str_digest_c058029c14554971cf11a144181a6043, NULL, NULL, 0, 0, 0);
code_objects_cc1328c2a4b3d9aaba7565060927908f = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_plain___getattr__, mod_consts.const_tuple_49e8ad1fb68f534ef3f4c16c1e98359b_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_click$$$function__1___getattr__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$$$function__1___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *var_warnings = NULL;
PyObject *var__BaseCommand = NULL;
PyObject *var__MultiCommand = NULL;
PyObject *var__OptionParser = NULL;
PyObject *var_importlib = NULL;
struct Nuitka_FrameObject *frame_frame_click$$$function__1___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$$$function__1___getattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$$$function__1___getattr__)) {
    Py_XDECREF(cache_frame_frame_click$$$function__1___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$$$function__1___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$$$function__1___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cc1328c2a4b3d9aaba7565060927908f, module_click, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$$$function__1___getattr__->m_type_description == NULL);
frame_frame_click$$$function__1___getattr__ = cache_frame_frame_click$$$function__1___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$$$function__1___getattr__);
assert(Py_REFCNT(frame_frame_click$$$function__1___getattr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 75;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_warnings == NULL);
var_warnings = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_BaseCommand;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__BaseCommand_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 78;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain__BaseCommand,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__BaseCommand);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__BaseCommand == NULL);
var__BaseCommand = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(var_warnings);
tmp_expression_value_1 = var_warnings;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_e5b34753d4c70a2d2700e6ca800813ef;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_click$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oooooo";
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
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 80;
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


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(var__BaseCommand);
tmp_return_value = var__BaseCommand;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_MultiCommand;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_3 = (PyObject *)moduledict_click;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__MultiCommand_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 89;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain__MultiCommand,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__MultiCommand);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__MultiCommand == NULL);
var__MultiCommand = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(var_warnings);
tmp_expression_value_2 = var_warnings;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_ac6b9b0f6fef429d33788fbd309e69d5;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_click$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 91;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
CHECK_OBJECT(var__MultiCommand);
tmp_return_value = var__MultiCommand;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_3 = par_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_OptionParser;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_parser;
tmp_globals_arg_value_4 = (PyObject *)moduledict_click;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__OptionParser_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 100;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain__OptionParser,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__OptionParser);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__OptionParser == NULL);
var__OptionParser = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(var_warnings);
tmp_expression_value_3 = var_warnings;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_191ad5068908d8a2430edf28dc5ca402;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_click$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 102;
tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
CHECK_OBJECT(var__OptionParser);
tmp_return_value = var__OptionParser;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_4 = par_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain___version__;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_5;
IMPORT_HARD_IMPORTLIB__METADATA();
tmp_assign_source_5 = IMPORT_HARD_IMPORTLIB();
assert(!(tmp_assign_source_5 == NULL));
assert(var_importlib == NULL);
Py_INCREF(tmp_assign_source_5);
var_importlib = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_5 = (PyObject *)moduledict_click;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 112;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_warnings;
    assert(old != NULL);
    var_warnings = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(var_warnings);
tmp_expression_value_4 = var_warnings;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_ff46da78727d8f7d6cbb444e18a939c9;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_click$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 114;
tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
CHECK_OBJECT(tmp_kwargs_value_4);
Py_DECREF(tmp_kwargs_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_return_value = mod_consts.const_str_digest_dc8dd0cd6d2e7d0b296825bcf70f7853;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_name);
tmp_make_exception_arg_1 = par_name;
frame_frame_click$$$function__1___getattr__->m_frame.f_lineno = 123;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$$$function__1___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$$$function__1___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$$$function__1___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$$$function__1___getattr__,
    type_description_1,
    par_name,
    var_warnings,
    var__BaseCommand,
    var__MultiCommand,
    var__OptionParser,
    var_importlib
);


// Release cached frame if used for exception.
if (frame_frame_click$$$function__1___getattr__ == cache_frame_frame_click$$$function__1___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$$$function__1___getattr__);
    cache_frame_frame_click$$$function__1___getattr__ = NULL;
}

assertFrameObject(frame_frame_click$$$function__1___getattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_warnings);
var_warnings = NULL;
Py_XDECREF(var__BaseCommand);
var__BaseCommand = NULL;
Py_XDECREF(var__MultiCommand);
var__MultiCommand = NULL;
Py_XDECREF(var__OptionParser);
var__OptionParser = NULL;
Py_XDECREF(var_importlib);
var_importlib = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_warnings);
var_warnings = NULL;
Py_XDECREF(var__BaseCommand);
var__BaseCommand = NULL;
Py_XDECREF(var__MultiCommand);
var__MultiCommand = NULL;
Py_XDECREF(var__OptionParser);
var__OptionParser = NULL;
Py_XDECREF(var_importlib);
var_importlib = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$$$function__1___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$$$function__1___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cc1328c2a4b3d9aaba7565060927908f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click,
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

static function_impl_code const function_table_click[] = {
impl_click$$$function__1___getattr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_click);
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
        module_click,
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
        function_table_click,
        sizeof(function_table_click) / sizeof(function_impl_code)
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
static char const *module_full_name = "click";
#endif

// Internal entry point for module code.
PyObject *module_code_click(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click");

    // Store the module for future use.
    module_click = module;

    moduledict_click = MODULE_DICT(module_click);

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
        PRINT_STRING("click: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("click: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("click: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "click" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initclick\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_click);
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

        UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_click;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_860270aa681f43e3b57438aca6b7bbc1;
UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_click = MAKE_MODULE_FRAME(code_objects_8219120236a09e9a195c24981db2927c, module_click);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click);
assert(Py_REFCNT(frame_frame_click) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_click->m_frame.f_lineno = 1;
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
frame_frame_click->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_click->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_click->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_03fce044cddbe3eb08efe0cf9861e728_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_click$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_click$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_click$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_click$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_click, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Argument_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Argument,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Argument);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Argument, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Command_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 11;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Command,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Command);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Command, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_3 = (PyObject *)moduledict_click;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_CommandCollection_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 12;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_CommandCollection,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_CommandCollection);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_CommandCollection, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_4 = (PyObject *)moduledict_click;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Context_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 13;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Context,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Context);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Context, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_5 = (PyObject *)moduledict_click;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Group_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 14;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Group,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Group);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Group, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_6 = (PyObject *)moduledict_click;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Option_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 15;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Option,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Option);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Option, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_core;
tmp_globals_arg_value_7 = (PyObject *)moduledict_click;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Parameter_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 16;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Parameter,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Parameter);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Parameter, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_8 = (PyObject *)moduledict_click;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_argument_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 17;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_argument,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_argument);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_argument, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_9 = (PyObject *)moduledict_click;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_command_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 18;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_command,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_command);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_command, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_10 = (PyObject *)moduledict_click;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_confirmation_option_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 19;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_confirmation_option,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_confirmation_option);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_confirmation_option, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_11 = (PyObject *)moduledict_click;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_group_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 20;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_group,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_group);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_group, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_12 = (PyObject *)moduledict_click;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_help_option_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 21;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_help_option,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_help_option);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_help_option, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_13 = (PyObject *)moduledict_click;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_make_pass_decorator_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 22;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_make_pass_decorator,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_make_pass_decorator);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_make_pass_decorator, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_14 = (PyObject *)moduledict_click;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_option_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 23;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_option,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_option);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_option, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_15 = (PyObject *)moduledict_click;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_pass_context_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 24;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_pass_context,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_pass_context);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_pass_context, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_16 = (PyObject *)moduledict_click;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_pass_obj_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 25;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_pass_obj,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_pass_obj);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_pass_obj, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_17 = (PyObject *)moduledict_click;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_password_option_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 26;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_password_option,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_password_option);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_password_option, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_decorators;
tmp_globals_arg_value_18 = (PyObject *)moduledict_click;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_version_option_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 27;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_version_option,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_version_option);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_version_option, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_19 = (PyObject *)moduledict_click;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_Abort_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 28;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Abort,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Abort);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Abort, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_20 = (PyObject *)moduledict_click;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_BadArgumentUsage_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 29;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_BadArgumentUsage,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_BadArgumentUsage);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_BadArgumentUsage, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_21 = (PyObject *)moduledict_click;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_BadOptionUsage_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 30;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_BadOptionUsage,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_BadOptionUsage);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_BadOptionUsage, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_22 = (PyObject *)moduledict_click;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_BadParameter_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 31;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_BadParameter,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_BadParameter);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_BadParameter, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_23 = (PyObject *)moduledict_click;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_ClickException_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 32;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_ClickException,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ClickException);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_24 = (PyObject *)moduledict_click;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_FileError_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 33;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_FileError,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_FileError);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_FileError, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_25 = (PyObject *)moduledict_click;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_MissingParameter_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 34;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_MissingParameter,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_MissingParameter);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingParameter, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_26 = (PyObject *)moduledict_click;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_NoSuchOption_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 35;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_NoSuchOption,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_NoSuchOption);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_NoSuchOption, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_27 = (PyObject *)moduledict_click;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_UsageError_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 36;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_UsageError,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_UsageError);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_UsageError, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_formatting;
tmp_globals_arg_value_28 = (PyObject *)moduledict_click;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_HelpFormatter_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 37;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_HelpFormatter,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_HelpFormatter);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_HelpFormatter, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_formatting;
tmp_globals_arg_value_29 = (PyObject *)moduledict_click;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_wrap_text_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 38;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_wrap_text,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_wrap_text);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_text, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = const_str_plain_globals;
tmp_globals_arg_value_30 = (PyObject *)moduledict_click;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_get_current_context_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 39;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_get_current_context,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_get_current_context);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_31 = (PyObject *)moduledict_click;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_clear_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 40;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_clear,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_clear);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_clear, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_32 = (PyObject *)moduledict_click;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_confirm_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 41;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_confirm,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_confirm);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_confirm, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_33 = (PyObject *)moduledict_click;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_echo_via_pager_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 42;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_echo_via_pager,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_echo_via_pager);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_echo_via_pager, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_34 = (PyObject *)moduledict_click;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_edit_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 43;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_edit,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_edit);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_edit, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_35 = (PyObject *)moduledict_click;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_getchar_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 44;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_getchar,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_getchar);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_getchar, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_36 = (PyObject *)moduledict_click;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_launch_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 45;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_launch,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_launch);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_launch, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_37 = (PyObject *)moduledict_click;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_pause_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 46;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_pause,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_pause);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_pause, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_38 = (PyObject *)moduledict_click;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_progressbar_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 47;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_progressbar,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_progressbar);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_progressbar, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_39 = (PyObject *)moduledict_click;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_prompt_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 48;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_prompt,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_prompt);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_prompt, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_40 = (PyObject *)moduledict_click;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_secho_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 49;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_secho,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_secho);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_secho, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_41 = (PyObject *)moduledict_click;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_style_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 50;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_style,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_style);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_style, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_plain_termui;
tmp_globals_arg_value_42 = (PyObject *)moduledict_click;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_unstyle_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 51;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_unstyle,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_unstyle);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_unstyle, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_43;
PyObject *tmp_globals_arg_value_43;
PyObject *tmp_locals_arg_value_43;
PyObject *tmp_fromlist_value_43;
PyObject *tmp_level_value_43;
tmp_name_value_43 = const_str_plain_types;
tmp_globals_arg_value_43 = (PyObject *)moduledict_click;
tmp_locals_arg_value_43 = Py_None;
tmp_fromlist_value_43 = mod_consts.const_tuple_str_plain_BOOL_tuple;
tmp_level_value_43 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 52;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_BOOL,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_BOOL);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_44;
PyObject *tmp_globals_arg_value_44;
PyObject *tmp_locals_arg_value_44;
PyObject *tmp_fromlist_value_44;
PyObject *tmp_level_value_44;
tmp_name_value_44 = const_str_plain_types;
tmp_globals_arg_value_44 = (PyObject *)moduledict_click;
tmp_locals_arg_value_44 = Py_None;
tmp_fromlist_value_44 = mod_consts.const_tuple_str_plain_Choice_tuple;
tmp_level_value_44 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 53;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Choice,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_Choice);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Choice, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_45;
PyObject *tmp_name_value_45;
PyObject *tmp_globals_arg_value_45;
PyObject *tmp_locals_arg_value_45;
PyObject *tmp_fromlist_value_45;
PyObject *tmp_level_value_45;
tmp_name_value_45 = const_str_plain_types;
tmp_globals_arg_value_45 = (PyObject *)moduledict_click;
tmp_locals_arg_value_45 = Py_None;
tmp_fromlist_value_45 = mod_consts.const_tuple_str_plain_DateTime_tuple;
tmp_level_value_45 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 54;
tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
if (tmp_import_name_from_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_DateTime,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_DateTime);
}

CHECK_OBJECT(tmp_import_name_from_45);
Py_DECREF(tmp_import_name_from_45);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_DateTime, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_46;
PyObject *tmp_name_value_46;
PyObject *tmp_globals_arg_value_46;
PyObject *tmp_locals_arg_value_46;
PyObject *tmp_fromlist_value_46;
PyObject *tmp_level_value_46;
tmp_name_value_46 = const_str_plain_types;
tmp_globals_arg_value_46 = (PyObject *)moduledict_click;
tmp_locals_arg_value_46 = Py_None;
tmp_fromlist_value_46 = mod_consts.const_tuple_str_plain_File_tuple;
tmp_level_value_46 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 55;
tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
if (tmp_import_name_from_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_File,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_File);
}

CHECK_OBJECT(tmp_import_name_from_46);
Py_DECREF(tmp_import_name_from_46);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_File, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_47;
PyObject *tmp_globals_arg_value_47;
PyObject *tmp_locals_arg_value_47;
PyObject *tmp_fromlist_value_47;
PyObject *tmp_level_value_47;
tmp_name_value_47 = const_str_plain_types;
tmp_globals_arg_value_47 = (PyObject *)moduledict_click;
tmp_locals_arg_value_47 = Py_None;
tmp_fromlist_value_47 = mod_consts.const_tuple_str_plain_FLOAT_tuple;
tmp_level_value_47 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 56;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_FLOAT,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_FLOAT);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_FLOAT, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_48;
PyObject *tmp_globals_arg_value_48;
PyObject *tmp_locals_arg_value_48;
PyObject *tmp_fromlist_value_48;
PyObject *tmp_level_value_48;
tmp_name_value_48 = const_str_plain_types;
tmp_globals_arg_value_48 = (PyObject *)moduledict_click;
tmp_locals_arg_value_48 = Py_None;
tmp_fromlist_value_48 = mod_consts.const_tuple_str_plain_FloatRange_tuple;
tmp_level_value_48 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 57;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_FloatRange,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_FloatRange);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_FloatRange, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_49;
PyObject *tmp_globals_arg_value_49;
PyObject *tmp_locals_arg_value_49;
PyObject *tmp_fromlist_value_49;
PyObject *tmp_level_value_49;
tmp_name_value_49 = const_str_plain_types;
tmp_globals_arg_value_49 = (PyObject *)moduledict_click;
tmp_locals_arg_value_49 = Py_None;
tmp_fromlist_value_49 = mod_consts.const_tuple_str_plain_INT_tuple;
tmp_level_value_49 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 58;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_INT,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_INT);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_INT, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_50;
PyObject *tmp_name_value_50;
PyObject *tmp_globals_arg_value_50;
PyObject *tmp_locals_arg_value_50;
PyObject *tmp_fromlist_value_50;
PyObject *tmp_level_value_50;
tmp_name_value_50 = const_str_plain_types;
tmp_globals_arg_value_50 = (PyObject *)moduledict_click;
tmp_locals_arg_value_50 = Py_None;
tmp_fromlist_value_50 = mod_consts.const_tuple_str_plain_IntRange_tuple;
tmp_level_value_50 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 59;
tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
if (tmp_import_name_from_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_IntRange,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_IntRange);
}

CHECK_OBJECT(tmp_import_name_from_50);
Py_DECREF(tmp_import_name_from_50);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_IntRange, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_51;
PyObject *tmp_name_value_51;
PyObject *tmp_globals_arg_value_51;
PyObject *tmp_locals_arg_value_51;
PyObject *tmp_fromlist_value_51;
PyObject *tmp_level_value_51;
tmp_name_value_51 = const_str_plain_types;
tmp_globals_arg_value_51 = (PyObject *)moduledict_click;
tmp_locals_arg_value_51 = Py_None;
tmp_fromlist_value_51 = mod_consts.const_tuple_str_plain_ParamType_tuple;
tmp_level_value_51 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 60;
tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
if (tmp_import_name_from_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_ParamType,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_ParamType);
}

CHECK_OBJECT(tmp_import_name_from_51);
Py_DECREF(tmp_import_name_from_51);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamType, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_52;
PyObject *tmp_globals_arg_value_52;
PyObject *tmp_locals_arg_value_52;
PyObject *tmp_fromlist_value_52;
PyObject *tmp_level_value_52;
tmp_name_value_52 = const_str_plain_types;
tmp_globals_arg_value_52 = (PyObject *)moduledict_click;
tmp_locals_arg_value_52 = Py_None;
tmp_fromlist_value_52 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_52 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 61;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_53;
PyObject *tmp_name_value_53;
PyObject *tmp_globals_arg_value_53;
PyObject *tmp_locals_arg_value_53;
PyObject *tmp_fromlist_value_53;
PyObject *tmp_level_value_53;
tmp_name_value_53 = const_str_plain_types;
tmp_globals_arg_value_53 = (PyObject *)moduledict_click;
tmp_locals_arg_value_53 = Py_None;
tmp_fromlist_value_53 = mod_consts.const_tuple_str_plain_STRING_tuple;
tmp_level_value_53 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 62;
tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
if (tmp_import_name_from_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_STRING,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_STRING);
}

CHECK_OBJECT(tmp_import_name_from_53);
Py_DECREF(tmp_import_name_from_53);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_54;
PyObject *tmp_name_value_54;
PyObject *tmp_globals_arg_value_54;
PyObject *tmp_locals_arg_value_54;
PyObject *tmp_fromlist_value_54;
PyObject *tmp_level_value_54;
tmp_name_value_54 = const_str_plain_types;
tmp_globals_arg_value_54 = (PyObject *)moduledict_click;
tmp_locals_arg_value_54 = Py_None;
tmp_fromlist_value_54 = mod_consts.const_tuple_str_plain_Tuple_tuple;
tmp_level_value_54 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 63;
tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
if (tmp_import_name_from_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_Tuple);
}

CHECK_OBJECT(tmp_import_name_from_54);
Py_DECREF(tmp_import_name_from_54);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_55;
PyObject *tmp_name_value_55;
PyObject *tmp_globals_arg_value_55;
PyObject *tmp_locals_arg_value_55;
PyObject *tmp_fromlist_value_55;
PyObject *tmp_level_value_55;
tmp_name_value_55 = const_str_plain_types;
tmp_globals_arg_value_55 = (PyObject *)moduledict_click;
tmp_locals_arg_value_55 = Py_None;
tmp_fromlist_value_55 = mod_consts.const_tuple_str_plain_UNPROCESSED_tuple;
tmp_level_value_55 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 64;
tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
if (tmp_import_name_from_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_UNPROCESSED,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_UNPROCESSED);
}

CHECK_OBJECT(tmp_import_name_from_55);
Py_DECREF(tmp_import_name_from_55);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_UNPROCESSED, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_56;
PyObject *tmp_name_value_56;
PyObject *tmp_globals_arg_value_56;
PyObject *tmp_locals_arg_value_56;
PyObject *tmp_fromlist_value_56;
PyObject *tmp_level_value_56;
tmp_name_value_56 = const_str_plain_types;
tmp_globals_arg_value_56 = (PyObject *)moduledict_click;
tmp_locals_arg_value_56 = Py_None;
tmp_fromlist_value_56 = mod_consts.const_tuple_str_plain_UUID_tuple;
tmp_level_value_56 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 65;
tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
if (tmp_import_name_from_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_UUID,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_UUID);
}

CHECK_OBJECT(tmp_import_name_from_56);
Py_DECREF(tmp_import_name_from_56);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_UUID, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_57;
PyObject *tmp_name_value_57;
PyObject *tmp_globals_arg_value_57;
PyObject *tmp_locals_arg_value_57;
PyObject *tmp_fromlist_value_57;
PyObject *tmp_level_value_57;
tmp_name_value_57 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_57 = (PyObject *)moduledict_click;
tmp_locals_arg_value_57 = Py_None;
tmp_fromlist_value_57 = mod_consts.const_tuple_str_plain_echo_tuple;
tmp_level_value_57 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 66;
tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
if (tmp_import_name_from_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_echo,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_echo);
}

CHECK_OBJECT(tmp_import_name_from_57);
Py_DECREF(tmp_import_name_from_57);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_echo, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_58;
PyObject *tmp_name_value_58;
PyObject *tmp_globals_arg_value_58;
PyObject *tmp_locals_arg_value_58;
PyObject *tmp_fromlist_value_58;
PyObject *tmp_level_value_58;
tmp_name_value_58 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_58 = (PyObject *)moduledict_click;
tmp_locals_arg_value_58 = Py_None;
tmp_fromlist_value_58 = mod_consts.const_tuple_str_plain_format_filename_tuple;
tmp_level_value_58 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 67;
tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
if (tmp_import_name_from_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_format_filename,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_format_filename);
}

CHECK_OBJECT(tmp_import_name_from_58);
Py_DECREF(tmp_import_name_from_58);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_format_filename, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_59;
PyObject *tmp_name_value_59;
PyObject *tmp_globals_arg_value_59;
PyObject *tmp_locals_arg_value_59;
PyObject *tmp_fromlist_value_59;
PyObject *tmp_level_value_59;
tmp_name_value_59 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_59 = (PyObject *)moduledict_click;
tmp_locals_arg_value_59 = Py_None;
tmp_fromlist_value_59 = mod_consts.const_tuple_str_plain_get_app_dir_tuple;
tmp_level_value_59 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 68;
tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
if (tmp_import_name_from_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_get_app_dir,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_get_app_dir);
}

CHECK_OBJECT(tmp_import_name_from_59);
Py_DECREF(tmp_import_name_from_59);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_get_app_dir, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_60;
PyObject *tmp_name_value_60;
PyObject *tmp_globals_arg_value_60;
PyObject *tmp_locals_arg_value_60;
PyObject *tmp_fromlist_value_60;
PyObject *tmp_level_value_60;
tmp_name_value_60 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_60 = (PyObject *)moduledict_click;
tmp_locals_arg_value_60 = Py_None;
tmp_fromlist_value_60 = mod_consts.const_tuple_str_plain_get_binary_stream_tuple;
tmp_level_value_60 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 69;
tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
if (tmp_import_name_from_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_get_binary_stream,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_get_binary_stream);
}

CHECK_OBJECT(tmp_import_name_from_60);
Py_DECREF(tmp_import_name_from_60);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_get_binary_stream, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_61;
PyObject *tmp_name_value_61;
PyObject *tmp_globals_arg_value_61;
PyObject *tmp_locals_arg_value_61;
PyObject *tmp_fromlist_value_61;
PyObject *tmp_level_value_61;
tmp_name_value_61 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_61 = (PyObject *)moduledict_click;
tmp_locals_arg_value_61 = Py_None;
tmp_fromlist_value_61 = mod_consts.const_tuple_str_plain_get_text_stream_tuple;
tmp_level_value_61 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 70;
tmp_import_name_from_61 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
if (tmp_import_name_from_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_get_text_stream,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_get_text_stream);
}

CHECK_OBJECT(tmp_import_name_from_61);
Py_DECREF(tmp_import_name_from_61);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_get_text_stream, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_62;
PyObject *tmp_name_value_62;
PyObject *tmp_globals_arg_value_62;
PyObject *tmp_locals_arg_value_62;
PyObject *tmp_fromlist_value_62;
PyObject *tmp_level_value_62;
tmp_name_value_62 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_62 = (PyObject *)moduledict_click;
tmp_locals_arg_value_62 = Py_None;
tmp_fromlist_value_62 = mod_consts.const_tuple_str_plain_open_file_tuple;
tmp_level_value_62 = const_int_pos_1;
frame_frame_click->m_frame.f_lineno = 71;
tmp_import_name_from_62 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
if (tmp_import_name_from_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_click,
        mod_consts.const_str_plain_open_file,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_open_file);
}

CHECK_OBJECT(tmp_import_name_from_62);
Py_DECREF(tmp_import_name_from_62);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_67);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_click);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);

tmp_assign_source_68 = MAKE_FUNCTION_click$$$function__1___getattr__(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_click, (Nuitka_StringObject *)mod_consts.const_str_plain___getattr__, tmp_assign_source_68);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "click" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_click);
    return module_click;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("click", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

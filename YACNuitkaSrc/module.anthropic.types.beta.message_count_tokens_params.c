/* Generated code for Python module 'anthropic$types$beta$message_count_tokens_params'
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



/* The "module_anthropic$types$beta$message_count_tokens_params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$message_count_tokens_params;
PyDictObject *moduledict_anthropic$types$beta$message_count_tokens_params;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_90548be83d6c1aca48f83ffcc64448a9_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_TypedDict;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_model_param;
PyObject *const_tuple_str_plain_ModelParam_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_ModelParam;
PyObject *const_str_plain_beta_tool_param;
PyObject *const_tuple_str_plain_BetaToolParam_tuple;
PyObject *const_str_plain_BetaToolParam;
PyObject *const_str_plain_beta_message_param;
PyObject *const_tuple_str_plain_BetaMessageParam_tuple;
PyObject *const_str_plain_BetaMessageParam;
PyObject *const_str_plain_anthropic_beta_param;
PyObject *const_tuple_str_plain_AnthropicBetaParam_tuple;
PyObject *const_str_plain_AnthropicBetaParam;
PyObject *const_str_plain_beta_text_block_param;
PyObject *const_tuple_str_plain_BetaTextBlockParam_tuple;
PyObject *const_str_plain_BetaTextBlockParam;
PyObject *const_str_plain_beta_mcp_toolset_param;
PyObject *const_tuple_str_plain_BetaMCPToolsetParam_tuple;
PyObject *const_str_plain_BetaMCPToolsetParam;
PyObject *const_str_plain_beta_tool_choice_param;
PyObject *const_tuple_str_plain_BetaToolChoiceParam_tuple;
PyObject *const_str_plain_BetaToolChoiceParam;
PyObject *const_str_plain_beta_output_config_param;
PyObject *const_tuple_str_plain_BetaOutputConfigParam_tuple;
PyObject *const_str_plain_BetaOutputConfigParam;
PyObject *const_str_plain_beta_thinking_config_param;
PyObject *const_tuple_str_plain_BetaThinkingConfigParam_tuple;
PyObject *const_str_plain_BetaThinkingConfigParam;
PyObject *const_str_plain_beta_json_output_format_param;
PyObject *const_tuple_str_plain_BetaJSONOutputFormatParam_tuple;
PyObject *const_str_plain_BetaJSONOutputFormatParam;
PyObject *const_str_plain_beta_tool_bash_20241022_param;
PyObject *const_tuple_str_plain_BetaToolBash20241022Param_tuple;
PyObject *const_str_plain_BetaToolBash20241022Param;
PyObject *const_str_plain_beta_tool_bash_20250124_param;
PyObject *const_tuple_str_plain_BetaToolBash20250124Param_tuple;
PyObject *const_str_plain_BetaToolBash20250124Param;
PyObject *const_str_plain_beta_memory_tool_20250818_param;
PyObject *const_tuple_str_plain_BetaMemoryTool20250818Param_tuple;
PyObject *const_str_plain_BetaMemoryTool20250818Param;
PyObject *const_str_plain_beta_advisor_tool_20260301_param;
PyObject *const_tuple_str_plain_BetaAdvisorTool20260301Param_tuple;
PyObject *const_str_plain_BetaAdvisorTool20260301Param;
PyObject *const_str_plain_beta_cache_control_ephemeral_param;
PyObject *const_tuple_str_plain_BetaCacheControlEphemeralParam_tuple;
PyObject *const_str_plain_BetaCacheControlEphemeralParam;
PyObject *const_str_plain_beta_web_fetch_tool_20250910_param;
PyObject *const_tuple_str_plain_BetaWebFetchTool20250910Param_tuple;
PyObject *const_str_plain_BetaWebFetchTool20250910Param;
PyObject *const_str_plain_beta_web_fetch_tool_20260209_param;
PyObject *const_tuple_str_plain_BetaWebFetchTool20260209Param_tuple;
PyObject *const_str_plain_BetaWebFetchTool20260209Param;
PyObject *const_str_plain_beta_web_fetch_tool_20260309_param;
PyObject *const_tuple_str_plain_BetaWebFetchTool20260309Param_tuple;
PyObject *const_str_plain_BetaWebFetchTool20260309Param;
PyObject *const_str_plain_beta_web_search_tool_20250305_param;
PyObject *const_tuple_str_plain_BetaWebSearchTool20250305Param_tuple;
PyObject *const_str_plain_BetaWebSearchTool20250305Param;
PyObject *const_str_plain_beta_web_search_tool_20260209_param;
PyObject *const_tuple_str_plain_BetaWebSearchTool20260209Param_tuple;
PyObject *const_str_plain_BetaWebSearchTool20260209Param;
PyObject *const_str_plain_beta_context_management_config_param;
PyObject *const_tuple_str_plain_BetaContextManagementConfigParam_tuple;
PyObject *const_str_plain_BetaContextManagementConfigParam;
PyObject *const_str_plain_beta_tool_text_editor_20241022_param;
PyObject *const_tuple_str_plain_BetaToolTextEditor20241022Param_tuple;
PyObject *const_str_plain_BetaToolTextEditor20241022Param;
PyObject *const_str_plain_beta_tool_text_editor_20250124_param;
PyObject *const_tuple_str_plain_BetaToolTextEditor20250124Param_tuple;
PyObject *const_str_plain_BetaToolTextEditor20250124Param;
PyObject *const_str_plain_beta_tool_text_editor_20250429_param;
PyObject *const_tuple_str_plain_BetaToolTextEditor20250429Param_tuple;
PyObject *const_str_plain_BetaToolTextEditor20250429Param;
PyObject *const_str_plain_beta_tool_text_editor_20250728_param;
PyObject *const_tuple_str_plain_BetaToolTextEditor20250728Param_tuple;
PyObject *const_str_plain_BetaToolTextEditor20250728Param;
PyObject *const_str_plain_beta_tool_computer_use_20241022_param;
PyObject *const_tuple_str_plain_BetaToolComputerUse20241022Param_tuple;
PyObject *const_str_plain_BetaToolComputerUse20241022Param;
PyObject *const_str_plain_beta_tool_computer_use_20250124_param;
PyObject *const_tuple_str_plain_BetaToolComputerUse20250124Param_tuple;
PyObject *const_str_plain_BetaToolComputerUse20250124Param;
PyObject *const_str_plain_beta_tool_computer_use_20251124_param;
PyObject *const_tuple_str_plain_BetaToolComputerUse20251124Param_tuple;
PyObject *const_str_plain_BetaToolComputerUse20251124Param;
PyObject *const_str_plain_beta_code_execution_tool_20250522_param;
PyObject *const_tuple_str_plain_BetaCodeExecutionTool20250522Param_tuple;
PyObject *const_str_plain_BetaCodeExecutionTool20250522Param;
PyObject *const_str_plain_beta_code_execution_tool_20250825_param;
PyObject *const_tuple_str_plain_BetaCodeExecutionTool20250825Param_tuple;
PyObject *const_str_plain_BetaCodeExecutionTool20250825Param;
PyObject *const_str_plain_beta_code_execution_tool_20260120_param;
PyObject *const_tuple_str_plain_BetaCodeExecutionTool20260120Param_tuple;
PyObject *const_str_plain_BetaCodeExecutionTool20260120Param;
PyObject *const_str_digest_273e12becdb3a02dc6ac129f13b464da;
PyObject *const_tuple_str_plain_BetaToolSearchToolBm25_20251119Param_tuple;
PyObject *const_str_plain_BetaToolSearchToolBm25_20251119Param;
PyObject *const_str_digest_d62d2b48a0d041f917761d9836ba9fe9;
PyObject *const_tuple_str_plain_BetaToolSearchToolRegex20251119Param_tuple;
PyObject *const_str_plain_BetaToolSearchToolRegex20251119Param;
PyObject *const_str_digest_48beeefc9393c5ac3be1c5e4a56a5e28;
PyObject *const_tuple_str_plain_BetaRequestMCPServerURLDefinitionParam_tuple;
PyObject *const_str_plain_BetaRequestMCPServerURLDefinitionParam;
PyObject *const_str_plain_MessageCountTokensParams;
PyObject *const_str_plain_Tool;
PyObject *const_dict_b697b7227c7766cd5072bdb0d1ed9479;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_fab072629374302a59003d345014d0df;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_47;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_83f4961f309a88e7d626ecdd97dc5f23;
PyObject *const_str_plain_messages;
PyObject *const_str_digest_eb7230a2fd7ff19cad654f957f10c4e9;
PyObject *const_str_plain_model;
PyObject *const_str_digest_72b5534e1dc1099e598577081b39c215;
PyObject *const_str_plain_cache_control;
PyObject *const_str_digest_c480b52204d4c3e8c0518ba581fa9c29;
PyObject *const_str_plain_context_management;
PyObject *const_str_digest_44a867666ce9cf7477e4fb9627792243;
PyObject *const_str_plain_mcp_servers;
PyObject *const_str_plain_output_config;
PyObject *const_str_digest_e52191b6b8d7917e8506a0462c792f81;
PyObject *const_str_plain_output_format;
PyObject *const_str_digest_9b79bcebe1533a14952ae11c30c4a48b;
PyObject *const_str_plain_speed;
PyObject *const_str_digest_8be4ba9c194208ab998dcf5d3a75a925;
PyObject *const_str_plain_system;
PyObject *const_str_plain_thinking;
PyObject *const_str_plain_tool_choice;
PyObject *const_str_digest_aca4af0f25c696c85855dc449e19fe87;
PyObject *const_str_plain_tools;
PyObject *const_str_digest_d216759d7de75b597c44974f53d2e6f7;
PyObject *const_str_plain_betas;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_5f49c8f801c50e7fd8fac8339e98375d;
PyObject *const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[160];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.message_count_tokens_params"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_90548be83d6c1aca48f83ffcc64448a9_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_param);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModelParam_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelParam);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_param);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolParam_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolParam);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_message_param);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMessageParam_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMessageParam);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_anthropic_beta_param);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnthropicBetaParam);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_text_block_param);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaTextBlockParam);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_mcp_toolset_param);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMCPToolsetParam_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMCPToolsetParam);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_choice_param);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolChoiceParam_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolChoiceParam);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_output_config_param);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaOutputConfigParam_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaOutputConfigParam);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_thinking_config_param);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaThinkingConfigParam_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaThinkingConfigParam);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_json_output_format_param);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaJSONOutputFormatParam_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaJSONOutputFormatParam);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_bash_20241022_param);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolBash20241022Param_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolBash20241022Param);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_bash_20250124_param);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolBash20250124Param_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolBash20250124Param);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_memory_tool_20250818_param);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMemoryTool20250818Param_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMemoryTool20250818Param);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_advisor_tool_20260301_param);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaAdvisorTool20260301Param_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_cache_control_ephemeral_param);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCacheControlEphemeralParam_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCacheControlEphemeralParam);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20250910_param);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20250910Param_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20260209_param);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20260209Param_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20260309_param);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20260309Param_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_20250305_param);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchTool20250305Param_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_20260209_param);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchTool20260209Param_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_context_management_config_param);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContextManagementConfigParam_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContextManagementConfigParam);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20241022_param);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20241022Param_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250124_param);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250124Param_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250429_param);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250429Param_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250728_param);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250728Param_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20241022_param);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20241022Param_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20250124_param);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20250124Param_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20251124_param);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20251124Param_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20250522_param);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250522Param_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20250825_param);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250825Param_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20260120_param);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20260120Param_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_273e12becdb3a02dc6ac129f13b464da);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolBm25_20251119Param_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_d62d2b48a0d041f917761d9836ba9fe9);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolRegex20251119Param_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_48beeefc9393c5ac3be1c5e4a56a5e28);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestMCPServerURLDefinitionParam_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCountTokensParams);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tool);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_fab072629374302a59003d345014d0df);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_83f4961f309a88e7d626ecdd97dc5f23);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb7230a2fd7ff19cad654f957f10c4e9);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_72b5534e1dc1099e598577081b39c215);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_c480b52204d4c3e8c0518ba581fa9c29);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_context_management);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_44a867666ce9cf7477e4fb9627792243);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_servers);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_config);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_e52191b6b8d7917e8506a0462c792f81);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_format);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b79bcebe1533a14952ae11c30c4a48b);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_speed);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_8be4ba9c194208ab998dcf5d3a75a925);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_system);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_thinking);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_aca4af0f25c696c85855dc449e19fe87);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_d216759d7de75b597c44974f53d2e6f7);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_betas);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f49c8f801c50e7fd8fac8339e98375d);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_anthropic$types$beta$message_count_tokens_params(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_90548be83d6c1aca48f83ffcc64448a9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_90548be83d6c1aca48f83ffcc64448a9_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDict);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_param);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModelParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModelParam_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelParam);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_param);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolParam_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolParam);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_message_param);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaMessageParam_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaMessageParam);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_anthropic_beta_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anthropic_beta_param);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnthropicBetaParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnthropicBetaParam);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_text_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_text_block_param);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaTextBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaTextBlockParam);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_mcp_toolset_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_mcp_toolset_param);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMCPToolsetParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaMCPToolsetParam_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMCPToolsetParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaMCPToolsetParam);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_choice_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_choice_param);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolChoiceParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolChoiceParam_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolChoiceParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolChoiceParam);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_output_config_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_output_config_param);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaOutputConfigParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaOutputConfigParam_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaOutputConfigParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaOutputConfigParam);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_thinking_config_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_thinking_config_param);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaThinkingConfigParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaThinkingConfigParam_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaThinkingConfigParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaThinkingConfigParam);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_json_output_format_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_json_output_format_param);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaJSONOutputFormatParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaJSONOutputFormatParam_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaJSONOutputFormatParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaJSONOutputFormatParam);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_bash_20241022_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_bash_20241022_param);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolBash20241022Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolBash20241022Param_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolBash20241022Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolBash20241022Param);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_bash_20250124_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_bash_20250124_param);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolBash20250124Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolBash20250124Param_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolBash20250124Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolBash20250124Param);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_memory_tool_20250818_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_memory_tool_20250818_param);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMemoryTool20250818Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaMemoryTool20250818Param_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMemoryTool20250818Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaMemoryTool20250818Param);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_advisor_tool_20260301_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_advisor_tool_20260301_param);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaAdvisorTool20260301Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaAdvisorTool20260301Param_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAdvisorTool20260301Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_cache_control_ephemeral_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_cache_control_ephemeral_param);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCacheControlEphemeralParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCacheControlEphemeralParam_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCacheControlEphemeralParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCacheControlEphemeralParam);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20250910_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_fetch_tool_20250910_param);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20250910Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebFetchTool20250910Param_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20250910Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20260209_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_fetch_tool_20260209_param);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20260209Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebFetchTool20260209Param_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20260209Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_20260309_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_fetch_tool_20260309_param);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchTool20260309Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebFetchTool20260309Param_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchTool20260309Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_20250305_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_search_tool_20250305_param);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchTool20250305Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebSearchTool20250305Param_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchTool20250305Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_20260209_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_search_tool_20260209_param);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchTool20260209Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebSearchTool20260209Param_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchTool20260209Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_context_management_config_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_context_management_config_param);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContextManagementConfigParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaContextManagementConfigParam_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContextManagementConfigParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaContextManagementConfigParam);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20241022_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_text_editor_20241022_param);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20241022Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolTextEditor20241022Param_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20241022Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250124_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_text_editor_20250124_param);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250124Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolTextEditor20250124Param_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250124Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250429_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_text_editor_20250429_param);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250429Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolTextEditor20250429Param_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250429Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_text_editor_20250728_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_text_editor_20250728_param);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolTextEditor20250728Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolTextEditor20250728Param_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolTextEditor20250728Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20241022_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_computer_use_20241022_param);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20241022Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolComputerUse20241022Param_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20241022Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20250124_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_computer_use_20250124_param);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20250124Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolComputerUse20250124Param_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20250124Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_computer_use_20251124_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_computer_use_20251124_param);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolComputerUse20251124Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolComputerUse20251124Param_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolComputerUse20251124Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20250522_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_code_execution_tool_20250522_param);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250522Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250522Param_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20250825_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_code_execution_tool_20250825_param);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250825Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250825Param_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_code_execution_tool_20260120_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_code_execution_tool_20260120_param);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20260120Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20260120Param_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_273e12becdb3a02dc6ac129f13b464da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_273e12becdb3a02dc6ac129f13b464da);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolBm25_20251119Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolSearchToolBm25_20251119Param_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_d62d2b48a0d041f917761d9836ba9fe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d62d2b48a0d041f917761d9836ba9fe9);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolRegex20251119Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolSearchToolRegex20251119Param_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_48beeefc9393c5ac3be1c5e4a56a5e28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48beeefc9393c5ac3be1c5e4a56a5e28);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestMCPServerURLDefinitionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaRequestMCPServerURLDefinitionParam_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCountTokensParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageCountTokensParams);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tool);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_fab072629374302a59003d345014d0df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fab072629374302a59003d345014d0df);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_47));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_47);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_83f4961f309a88e7d626ecdd97dc5f23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83f4961f309a88e7d626ecdd97dc5f23);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb7230a2fd7ff19cad654f957f10c4e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb7230a2fd7ff19cad654f957f10c4e9);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_72b5534e1dc1099e598577081b39c215));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72b5534e1dc1099e598577081b39c215);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cache_control);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_c480b52204d4c3e8c0518ba581fa9c29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c480b52204d4c3e8c0518ba581fa9c29);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_context_management));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_context_management);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_44a867666ce9cf7477e4fb9627792243));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44a867666ce9cf7477e4fb9627792243);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_servers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcp_servers);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_config);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_e52191b6b8d7917e8506a0462c792f81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e52191b6b8d7917e8506a0462c792f81);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_format);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b79bcebe1533a14952ae11c30c4a48b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b79bcebe1533a14952ae11c30c4a48b);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_speed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_speed);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_8be4ba9c194208ab998dcf5d3a75a925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8be4ba9c194208ab998dcf5d3a75a925);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_system));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_thinking));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thinking);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_choice);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_aca4af0f25c696c85855dc449e19fe87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aca4af0f25c696c85855dc449e19fe87);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_d216759d7de75b597c44974f53d2e6f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d216759d7de75b597c44974f53d2e6f7);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_betas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_betas);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f49c8f801c50e7fd8fac8339e98375d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f49c8f801c50e7fd8fac8339e98375d);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
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
static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaAdvisorTool20260301Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAdvisorTool20260301Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAdvisorTool20260301Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20250522Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20250825Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20260120Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaMCPToolsetParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolsetParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMCPToolsetParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMCPToolsetParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMCPToolsetParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMCPToolsetParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolsetParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolsetParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolsetParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaMemoryTool20250818Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMemoryTool20250818Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMemoryTool20250818Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMemoryTool20250818Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMemoryTool20250818Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMemoryTool20250818Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMemoryTool20250818Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMemoryTool20250818Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMemoryTool20250818Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolBash20241022Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20241022Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolBash20241022Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolBash20241022Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolBash20241022Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolBash20241022Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20241022Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20241022Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20241022Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolBash20250124Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20250124Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolBash20250124Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolBash20250124Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolBash20250124Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolBash20250124Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20250124Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20250124Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20250124Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20241022Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20241022Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20241022Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20250124Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20250124Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20250124Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20251124Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20251124Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolComputerUse20251124Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolSearchToolBm25_20251119Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolSearchToolRegex20251119Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20241022Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20241022Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20241022Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250124Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250124Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250124Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250429Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250429Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250429Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250728Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250728Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolTextEditor20250728Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20250910Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20250910Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20250910Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20260209Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20260209Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20260209Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20260309Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20260309Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchTool20260309Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebSearchTool20250305Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchTool20250305Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchTool20250305Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebSearchTool20260209Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchTool20260209Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchTool20260209Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$TypedDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$message_count_tokens_params$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$message_count_tokens_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$message_count_tokens_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5dd8c0b73216a21e101c1ef73e8ca524;
static PyCodeObject *code_objects_b36678eb22f30dbd6058d7c8f93116d5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5f49c8f801c50e7fd8fac8339e98375d); CHECK_OBJECT(module_filename_obj);
code_objects_5dd8c0b73216a21e101c1ef73e8ca524 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b, mod_consts.const_str_digest_67ed30bbc0d4e96a1055347a0ca4847b, NULL, NULL, 0, 0, 0);
code_objects_b36678eb22f30dbd6058d7c8f93116d5 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MessageCountTokensParams, mod_consts.const_str_plain_MessageCountTokensParams, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


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

static function_impl_code const function_table_anthropic$types$beta$message_count_tokens_params[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$message_count_tokens_params);
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
        module_anthropic$types$beta$message_count_tokens_params,
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
        function_table_anthropic$types$beta$message_count_tokens_params,
        sizeof(function_table_anthropic$types$beta$message_count_tokens_params) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.message_count_tokens_params";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$message_count_tokens_params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$message_count_tokens_params");

    // Store the module for future use.
    module_anthropic$types$beta$message_count_tokens_params = module;

    moduledict_anthropic$types$beta$message_count_tokens_params = MODULE_DICT(module_anthropic$types$beta$message_count_tokens_params);

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
        PRINT_STRING("anthropic$types$beta$message_count_tokens_params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$message_count_tokens_params: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$message_count_tokens_params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.message_count_tokens_params" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$message_count_tokens_params\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$message_count_tokens_params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$message_count_tokens_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$message_count_tokens_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$message_count_tokens_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$message_count_tokens_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$message_count_tokens_params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$message_count_tokens_params);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$message_count_tokens_params;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$message_count_tokens_params = MAKE_MODULE_FRAME(code_objects_5dd8c0b73216a21e101c1ef73e8ca524, module_anthropic$types$beta$message_count_tokens_params);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$message_count_tokens_params);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$message_count_tokens_params) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_90548be83d6c1aca48f83ffcc64448a9_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 6;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Required,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Required);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_TypedDict,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_TypedDict);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 8;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_model_param;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ModelParam_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 9;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_ModelParam,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ModelParam);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ModelParam, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_beta_tool_param;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BetaToolParam_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 10;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaToolParam);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolParam, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_message_param;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaMessageParam_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 11;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMessageParam, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_anthropic_beta_param;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 12;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_AnthropicBetaParam,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_AnthropicBetaParam);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_AnthropicBetaParam, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_text_block_param;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 13;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaTextBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BetaTextBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_beta_mcp_toolset_param;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaMCPToolsetParam_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 14;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaMCPToolsetParam,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BetaMCPToolsetParam);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolsetParam, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_beta_tool_choice_param;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaToolChoiceParam_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 15;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolChoiceParam,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_BetaToolChoiceParam);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolChoiceParam, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_beta_output_config_param;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaOutputConfigParam_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 16;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaOutputConfigParam,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_BetaOutputConfigParam);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaOutputConfigParam, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_beta_thinking_config_param;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BetaThinkingConfigParam_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 17;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaThinkingConfigParam,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BetaThinkingConfigParam);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingConfigParam, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_beta_json_output_format_param;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaJSONOutputFormatParam_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 18;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaJSONOutputFormatParam,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_BetaJSONOutputFormatParam);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaJSONOutputFormatParam, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_beta_tool_bash_20241022_param;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaToolBash20241022Param_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 19;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolBash20241022Param,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_BetaToolBash20241022Param);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20241022Param, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_beta_tool_bash_20250124_param;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaToolBash20250124Param_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 20;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolBash20250124Param,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_BetaToolBash20250124Param);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolBash20250124Param, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_beta_memory_tool_20250818_param;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_BetaMemoryTool20250818Param_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 21;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaMemoryTool20250818Param,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_BetaMemoryTool20250818Param);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMemoryTool20250818Param, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_beta_advisor_tool_20260301_param;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_BetaAdvisorTool20260301Param_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 22;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaAdvisorTool20260301Param,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorTool20260301Param, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_beta_cache_control_ephemeral_param;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_BetaCacheControlEphemeralParam_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 23;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaCacheControlEphemeralParam,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_BetaCacheControlEphemeralParam);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCacheControlEphemeralParam, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_beta_web_fetch_tool_20250910_param;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_BetaWebFetchTool20250910Param_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 24;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaWebFetchTool20250910Param,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20250910Param, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_beta_web_fetch_tool_20260209_param;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_BetaWebFetchTool20260209Param_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 25;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaWebFetchTool20260209Param,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260209Param, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_beta_web_fetch_tool_20260309_param;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_BetaWebFetchTool20260309Param_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 26;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaWebFetchTool20260309Param,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchTool20260309Param, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_beta_web_search_tool_20250305_param;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_BetaWebSearchTool20250305Param_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 27;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaWebSearchTool20250305Param,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20250305Param, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_beta_web_search_tool_20260209_param;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_BetaWebSearchTool20260209Param_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 28;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaWebSearchTool20260209Param,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchTool20260209Param, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_beta_context_management_config_param;
tmp_globals_arg_value_23 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_BetaContextManagementConfigParam_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 29;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaContextManagementConfigParam,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_BetaContextManagementConfigParam);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContextManagementConfigParam, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_beta_tool_text_editor_20241022_param;
tmp_globals_arg_value_24 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_BetaToolTextEditor20241022Param_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 30;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolTextEditor20241022Param,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20241022Param, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_beta_tool_text_editor_20250124_param;
tmp_globals_arg_value_25 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_BetaToolTextEditor20250124Param_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 31;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolTextEditor20250124Param,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250124Param, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_beta_tool_text_editor_20250429_param;
tmp_globals_arg_value_26 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_BetaToolTextEditor20250429Param_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 32;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolTextEditor20250429Param,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250429Param, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_beta_tool_text_editor_20250728_param;
tmp_globals_arg_value_27 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_BetaToolTextEditor20250728Param_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 33;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolTextEditor20250728Param,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolTextEditor20250728Param, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_beta_tool_computer_use_20241022_param;
tmp_globals_arg_value_28 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_BetaToolComputerUse20241022Param_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 34;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolComputerUse20241022Param,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20241022Param, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_beta_tool_computer_use_20250124_param;
tmp_globals_arg_value_29 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_BetaToolComputerUse20250124Param_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 35;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolComputerUse20250124Param,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20250124Param, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_beta_tool_computer_use_20251124_param;
tmp_globals_arg_value_30 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_BetaToolComputerUse20251124Param_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 36;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolComputerUse20251124Param,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolComputerUse20251124Param, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_beta_code_execution_tool_20250522_param;
tmp_globals_arg_value_31 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250522Param_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 37;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_beta_code_execution_tool_20250825_param;
tmp_globals_arg_value_32 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20250825Param_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 38;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_beta_code_execution_tool_20260120_param;
tmp_globals_arg_value_33 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_BetaCodeExecutionTool20260120Param_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 39;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_digest_273e12becdb3a02dc6ac129f13b464da;
tmp_globals_arg_value_34 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_BetaToolSearchToolBm25_20251119Param_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 40;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_digest_d62d2b48a0d041f917761d9836ba9fe9;
tmp_globals_arg_value_35 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_BetaToolSearchToolRegex20251119Param_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 41;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_digest_48beeefc9393c5ac3be1c5e4a56a5e28;
tmp_globals_arg_value_36 = (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_BetaRequestMCPServerURLDefinitionParam_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 42;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_anthropic$types$beta$message_count_tokens_params,
        mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPServerURLDefinitionParam, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_LIST2(tstate, mod_consts.const_str_plain_MessageCountTokensParams,mod_consts.const_str_plain_Tool);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_52);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_MessageCountTokensParams;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 47;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_37;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_37 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_37, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 47;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 47;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_58;
}
branch_end_1:;
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fab072629374302a59003d345014d0df;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_MessageCountTokensParams;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2 = MAKE_CLASS_FRAME(tstate, code_objects_b36678eb22f30dbd6058d7c8f93116d5, module_anthropic$types$beta$message_count_tokens_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_83f4961f309a88e7d626ecdd97dc5f23;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_messages;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_eb7230a2fd7ff19cad654f957f10c4e9;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_72b5534e1dc1099e598577081b39c215;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_cache_control;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_c480b52204d4c3e8c0518ba581fa9c29;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_context_management;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_44a867666ce9cf7477e4fb9627792243;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_mcp_servers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_BetaOutputConfigParam;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_output_config;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_e52191b6b8d7917e8506a0462c792f81;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_output_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_9b79bcebe1533a14952ae11c30c4a48b;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_speed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_8be4ba9c194208ab998dcf5d3a75a925;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_system;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain_BetaThinkingConfigParam;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_thinking;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_plain_BetaToolChoiceParam;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_tool_choice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_aca4af0f25c696c85855dc449e19fe87;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_d216759d7de75b597c44974f53d2e6f7;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_betas;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_MessageCountTokensParams;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame.f_lineno = 47;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_59 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47);
locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47);
locals_anthropic$types$beta$message_count_tokens_params$$$class__1_MessageCountTokensParams_47 = NULL;
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
exception_lineno = 47;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageCountTokensParams, tmp_assign_source_59);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_5;
tmp_expression_value_7 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$Union(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolParam(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolParam);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 23);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolBash20241022Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolBash20241022Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolBash20250124Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolBash20250124Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20250522Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaCodeExecutionTool20250522Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20250825Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaCodeExecutionTool20250825Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaCodeExecutionTool20260120Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaCodeExecutionTool20260120Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20241022Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolComputerUse20241022Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaMemoryTool20250818Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaMemoryTool20250818Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 7, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20250124Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolComputerUse20250124Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 8, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20241022Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolTextEditor20241022Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 9, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolComputerUse20251124Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolComputerUse20251124Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 10, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250124Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolTextEditor20250124Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 11, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250429Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolTextEditor20250429Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 12, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolTextEditor20250728Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolTextEditor20250728Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 13, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebSearchTool20250305Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebSearchTool20250305Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 14, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20250910Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebFetchTool20250910Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 15, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebSearchTool20260209Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebSearchTool20260209Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 16, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20260209Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebFetchTool20260209Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 17, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaWebFetchTool20260309Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebFetchTool20260309Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 18, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaAdvisorTool20260301Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaAdvisorTool20260301Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 19, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolSearchToolBm25_20251119Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolSearchToolBm25_20251119Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 20, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaToolSearchToolRegex20251119Param(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolSearchToolRegex20251119Param);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 21, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$BetaMCPToolsetParam(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaMCPToolsetParam);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 22, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool, tmp_assign_source_61);
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_14 = module_var_accessor_anthropic$types$beta$message_count_tokens_params$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_Tool;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$message_count_tokens_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$message_count_tokens_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$message_count_tokens_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$message_count_tokens_params);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$message_count_tokens_params", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.message_count_tokens_params" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$message_count_tokens_params);
    return module_anthropic$types$beta$message_count_tokens_params;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$message_count_tokens_params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$message_count_tokens_params", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'openai$lib$_parsing$_completions'
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



/* The "module_openai$lib$_parsing$_completions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$lib$_parsing$_completions;
PyDictObject *moduledict_openai$lib$_parsing$_completions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_function;
PyObject *const_tuple_str_plain_strict_tuple;
PyObject *const_str_digest_15c5e59fd2616bbd23b797ea9e37e032;
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_is_strict_chat_completion_tool_param;
PyObject *const_str_digest_cf309d469faa844971f8857b3f112ac9;
PyObject *const_str_digest_c116a56e0ffe7a12f705926d015e7d1f;
PyObject *const_str_chr_96;
PyObject *const_str_digest_69c16ac2f33f6a7789f192104b781970;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_ChatCompletionFunctionToolParam;
PyObject *const_str_plain_choices;
PyObject *const_str_plain_finish_reason;
PyObject *const_str_plain_length;
PyObject *const_str_plain_LengthFinishReasonError;
PyObject *const_tuple_str_plain_completion_tuple;
PyObject *const_str_plain_content_filter;
PyObject *const_str_plain_ContentFilterFinishReasonError;
PyObject *const_str_plain_message;
PyObject *const_str_plain_tool_calls;
PyObject *const_str_plain_to_dict;
PyObject *const_str_plain_construct_type_unchecked;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_parsed_arguments;
PyObject *const_str_plain_parse_function_tool_arguments;
PyObject *const_str_plain_input_tools;
PyObject *const_tuple_str_plain_input_tools_str_plain_function_tuple;
PyObject *const_str_plain_ParsedFunctionToolCall;
PyObject *const_tuple_str_plain_value_str_plain_type__tuple;
PyObject *const_str_plain_custom;
PyObject *const_str_plain_log;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_01ade9cac985b93c3bfb398cd702cd09;
PyObject *const_str_plain_id;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_ParsedChoice;
PyObject *const_str_plain_solve_response_format_t;
PyObject *const_str_plain_response_format;
PyObject *const_str_plain_parsed;
PyObject *const_str_plain_maybe_parse_content;
PyObject *const_tuple_str_plain_response_format_str_plain_message_tuple;
PyObject *const_tuple_str_plain_type__str_plain_value_tuple;
PyObject *const_str_plain_ParsedChatCompletion;
PyObject *const_str_plain_ResponseFormatT;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_0998c5e65228527c22cae993deb8ddd7;
PyObject *const_str_plain_get_input_tool_by_name;
PyObject *const_tuple_str_plain_input_tools_str_plain_name_tuple;
PyObject *const_tuple_str_plain_function_tuple;
PyObject *const_str_plain_PydanticFunctionTool;
PyObject *const_str_plain_model_parse_json;
PyObject *const_str_plain_model;
PyObject *const_str_plain_arguments;
PyObject *const_str_plain_FunctionDefinition;
PyObject *const_str_plain_json;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_has_rich_response_format;
PyObject *const_str_plain_content;
PyObject *const_str_plain_refusal;
PyObject *const_str_plain__parse_content;
PyObject *const_str_digest_9a7e0103ee39d9df7d2fc5c0984517ec;
PyObject *const_str_plain__default_response_format;
PyObject *const_str_digest_f495c269b06388e8c3749c036e440265;
PyObject *const_str_plain_is_parseable_tool;
PyObject *const_str_plain_is_response_format_param;
PyObject *const_str_plain_is_dict;
PyObject *const_str_plain_is_basemodel_type;
PyObject *const_str_plain_is_dataclass_like_type;
PyObject *const_str_plain_PYDANTIC_V2;
PyObject *const_str_digest_f5b488195a6253fffafc50918003029c;
PyObject *const_str_digest_a307387df849d578a05ee5d589f9d451;
PyObject *const_str_plain_TypeAdapter;
PyObject *const_str_plain_validate_json;
PyObject *const_str_digest_c4809925d2281776b600e57755a9ac4b;
PyObject *const_str_digest_a477caaf1ed8e61a9973898c373f42c9;
PyObject *const_str_plain_json_schema;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_to_strict_json_schema;
PyObject *const_str_plain_strict;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeVar_str_plain_TypeGuard_str_plain_assert_never_tuple;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_TypeGuard;
PyObject *const_str_plain_assert_never;
PyObject *const_str_plain_pydantic;
PyObject *const_str_plain__tools;
PyObject *const_tuple_str_plain_PydanticFunctionTool_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_NOT_GIVEN_str_plain_NotGiven_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_is_dict_str_plain_is_given_tuple;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_PYDANTIC_V2_str_plain_model_parse_json_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_construct_type_unchecked_tuple;
PyObject *const_str_plain__pydantic;
PyObject *const_tuple_be9a60c8d5c8c9f63ef1e222d67b84ae_tuple;
PyObject *const_str_digest_a3e6fcf7b8cd9e6099c1356549258e05;
PyObject *const_tuple_43be367779ac2c2fc1ca83982bf97e02_tuple;
PyObject *const_str_plain_ChatCompletion;
PyObject *const_str_plain_ParsedFunction;
PyObject *const_str_plain_ChatCompletionMessage;
PyObject *const_str_plain_ParsedChatCompletionMessage;
PyObject *const_str_plain_ChatCompletionToolUnionParam;
PyObject *const_str_plain_completion_create_params;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_d1439ca519b44eca00c0962dc5019685_tuple;
PyObject *const_str_digest_7b783f40d945215558a95d3da058aab2;
PyObject *const_tuple_str_plain_FunctionDefinition_tuple;
PyObject *const_str_digest_56b986decffa2d4343968f8448665b61;
PyObject *const_tuple_str_plain_ResponseFormat_tuple;
PyObject *const_str_plain_ResponseFormat;
PyObject *const_str_plain_ResponseFormatParam;
PyObject *const_str_digest_c93efe045f29cf71bc68e842772e9235;
PyObject *const_tuple_str_plain_Function_tuple;
PyObject *const_str_plain_Function;
PyObject *const_tuple_str_plain_ResponseFormatT_none_tuple;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_str_plain_None;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_f01ad2d67acf05ed5d4dacec1e3362b2_tuple;
PyObject *const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
PyObject *const_dict_f5c89fcc5b79d93b0028131f09c014c5;
PyObject *const_dict_3f3c23b327efe06dae80d6d233b64fb9;
PyObject *const_str_plain_select_strict_chat_completion_tools;
PyObject *const_str_plain_validate_input_tools;
PyObject *const_dict_c8538b7c5bb912c114cbe1b7b870cf62;
PyObject *const_str_plain_parse_chat_completion;
PyObject *const_dict_08e429a11b29ad408b46a49ea30f64c6;
PyObject *const_dict_5a60d3ce62894f5e8ab504f0db3554fb;
PyObject *const_dict_c37e021b163e6e06091d9c01c56c94d0;
PyObject *const_dict_ed66739d8c658bc667540da65beed17c;
PyObject *const_dict_8eebfd8b96fc5504fa42483fe167cbfc;
PyObject *const_str_plain_has_parseable_input;
PyObject *const_dict_68da831015f3c3c2e8f10073cd4be9ef;
PyObject *const_dict_0df0bc85b9ae2a6033f86c5928efd6bf;
PyObject *const_dict_824eb014722d4c0195d4ebdcb9803494;
PyObject *const_dict_4c4dee69f4c4bd019f7d69be7e131f9d;
PyObject *const_dict_071d07bcc450b1dcadc4b8fa9ff20c13;
PyObject *const_str_plain_type_to_response_format_param;
PyObject *const_str_digest_bd3e16484f202de2831c8888d062c1d7;
PyObject *const_tuple_f3d5bb6151880d7db155e3d82618e7b4_tuple;
PyObject *const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4;
PyObject *const_tuple_str_plain_response_format_str_plain_content_tuple;
PyObject *const_tuple_5d04cd4505b6972f622732f6b6d7b2ab_tuple;
PyObject *const_tuple_str_plain_response_format_tuple;
PyObject *const_tuple_str_plain_input_tool_str_plain_input_fn_tuple;
PyObject *const_tuple_str_plain_tool_tuple;
PyObject *const_tuple_c79c2c41a7e90b55f2c137c5d106949f_tuple;
PyObject *const_tuple_92163d1412e4c35633e2f70437cfa9c8_tuple;
PyObject *const_tuple_str_plain_tools_tuple;
PyObject *const_tuple_8f8e4ff26d381f0146f7b1dfc80ac940_tuple;
PyObject *const_tuple_str_plain_tools_str_plain_tool_str_plain_strict_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[164];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.lib._parsing._completions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_function);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_15c5e59fd2616bbd23b797ea9e37e032);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf309d469faa844971f8857b3f112ac9);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_c116a56e0ffe7a12f705926d015e7d1f);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_chr_96);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_69c16ac2f33f6a7789f192104b781970);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_choices);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_finish_reason);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_LengthFinishReasonError);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_completion_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_filter);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentFilterFinishReasonError);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_construct_type_unchecked);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_arguments);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_function_tool_arguments);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_tools);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tools_str_plain_function_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunctionToolCall);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_type__tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_custom);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_01ade9cac985b93c3bfb398cd702cd09);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChoice);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_solve_response_format_t);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_format);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_parse_content);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_str_plain_message_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletion);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatT);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_0998c5e65228527c22cae993deb8ddd7);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_input_tool_by_name);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tools_str_plain_name_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticFunctionTool);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse_json);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_arguments);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDefinition);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_rich_response_format);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_refusal);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_content);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a7e0103ee39d9df7d2fc5c0984517ec);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_response_format);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_f495c269b06388e8c3749c036e440265);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_parseable_tool);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_response_format_param);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dict);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_basemodel_type);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass_like_type);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYDANTIC_V2);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5b488195a6253fffafc50918003029c);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4809925d2281776b600e57755a9ac4b);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_a477caaf1ed8e61a9973898c373f42c9);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_strict_json_schema);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeVar_str_plain_TypeGuard_str_plain_assert_never_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__tools);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticFunctionTool_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NOT_GIVEN_str_plain_NotGiven_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_dict_str_plain_is_given_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYDANTIC_V2_str_plain_model_parse_json_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_construct_type_unchecked_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain__pydantic);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_be9a60c8d5c8c9f63ef1e222d67b84ae_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3e6fcf7b8cd9e6099c1356549258e05);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_43be367779ac2c2fc1ca83982bf97e02_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletion);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunction);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessage);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletionMessage);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolUnionParam);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_d1439ca519b44eca00c0962dc5019685_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b783f40d945215558a95d3da058aab2);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionDefinition_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_56b986decffa2d4343968f8448665b61);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormat_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormat);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatParam);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_c93efe045f29cf71bc68e842772e9235);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Function_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_Function);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_None);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f01ad2d67acf05ed5d4dacec1e3362b2_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_f5c89fcc5b79d93b0028131f09c014c5);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_3f3c23b327efe06dae80d6d233b64fb9);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_select_strict_chat_completion_tools);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_input_tools);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_c8538b7c5bb912c114cbe1b7b870cf62);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_chat_completion);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_08e429a11b29ad408b46a49ea30f64c6);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_5a60d3ce62894f5e8ab504f0db3554fb);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_c37e021b163e6e06091d9c01c56c94d0);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_ed66739d8c658bc667540da65beed17c);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_8eebfd8b96fc5504fa42483fe167cbfc);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_parseable_input);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_68da831015f3c3c2e8f10073cd4be9ef);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_0df0bc85b9ae2a6033f86c5928efd6bf);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_824eb014722d4c0195d4ebdcb9803494);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_4c4dee69f4c4bd019f7d69be7e131f9d);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_071d07bcc450b1dcadc4b8fa9ff20c13);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_to_response_format_param);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd3e16484f202de2831c8888d062c1d7);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_f3d5bb6151880d7db155e3d82618e7b4_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_str_plain_content_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_5d04cd4505b6972f622732f6b6d7b2ab_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tool_str_plain_input_fn_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tool_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_c79c2c41a7e90b55f2c137c5d106949f_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_92163d1412e4c35633e2f70437cfa9c8_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_8f8e4ff26d381f0146f7b1dfc80ac940_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_tool_str_plain_strict_tuple);
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
void checkModuleConstants_openai$lib$_parsing$_completions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_strict_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_15c5e59fd2616bbd23b797ea9e37e032));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15c5e59fd2616bbd23b797ea9e37e032);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_strict_chat_completion_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf309d469faa844971f8857b3f112ac9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf309d469faa844971f8857b3f112ac9);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_c116a56e0ffe7a12f705926d015e7d1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c116a56e0ffe7a12f705926d015e7d1f);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_chr_96));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_96);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_69c16ac2f33f6a7789f192104b781970));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69c16ac2f33f6a7789f192104b781970);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_choices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_choices);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_finish_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finish_reason);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_LengthFinishReasonError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LengthFinishReasonError);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_completion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_completion_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_filter);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentFilterFinishReasonError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContentFilterFinishReasonError);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_calls);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_dict);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_construct_type_unchecked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_construct_type_unchecked);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_arguments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed_arguments);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_function_tool_arguments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_function_tool_arguments);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_tools);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tools_str_plain_function_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_input_tools_str_plain_function_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunctionToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedFunctionToolCall);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_type__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_str_plain_type__tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_custom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_custom);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_01ade9cac985b93c3bfb398cd702cd09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01ade9cac985b93c3bfb398cd702cd09);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChoice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChoice);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_solve_response_format_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_solve_response_format_t);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_format);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_parse_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_parse_content);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_format_str_plain_message_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChatCompletion);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatT);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_0998c5e65228527c22cae993deb8ddd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0998c5e65228527c22cae993deb8ddd7);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_input_tool_by_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_input_tool_by_name);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tools_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_input_tools_str_plain_name_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_function_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticFunctionTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticFunctionTool);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_parse_json);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_arguments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arguments);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDefinition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionDefinition);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_rich_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_rich_response_format);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_refusal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refusal);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_content);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a7e0103ee39d9df7d2fc5c0984517ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a7e0103ee39d9df7d2fc5c0984517ec);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_response_format);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_f495c269b06388e8c3749c036e440265));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f495c269b06388e8c3749c036e440265);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_parseable_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_parseable_tool);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_response_format_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_response_format_param);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dict);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_basemodel_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_basemodel_type);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass_like_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dataclass_like_type);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYDANTIC_V2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYDANTIC_V2);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5b488195a6253fffafc50918003029c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5b488195a6253fffafc50918003029c);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapter);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_json);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4809925d2281776b600e57755a9ac4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4809925d2281776b600e57755a9ac4b);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_a477caaf1ed8e61a9973898c373f42c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a477caaf1ed8e61a9973898c373f42c9);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_schema);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_strict_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_strict_json_schema);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strict);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeVar_str_plain_TypeGuard_str_plain_assert_never_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeVar_str_plain_TypeGuard_str_plain_assert_never_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeGuard);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_never);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tools);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticFunctionTool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PydanticFunctionTool_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NOT_GIVEN_str_plain_NotGiven_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NOT_GIVEN_str_plain_NotGiven_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_dict_str_plain_is_given_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_dict_str_plain_is_given_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYDANTIC_V2_str_plain_model_parse_json_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PYDANTIC_V2_str_plain_model_parse_json_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_construct_type_unchecked_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_construct_type_unchecked_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain__pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pydantic);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_be9a60c8d5c8c9f63ef1e222d67b84ae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_be9a60c8d5c8c9f63ef1e222d67b84ae_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3e6fcf7b8cd9e6099c1356549258e05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3e6fcf7b8cd9e6099c1356549258e05);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_43be367779ac2c2fc1ca83982bf97e02_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43be367779ac2c2fc1ca83982bf97e02_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletion);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedFunction);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessage);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletionMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChatCompletionMessage);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolUnionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionToolUnionParam);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_create_params);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_d1439ca519b44eca00c0962dc5019685_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d1439ca519b44eca00c0962dc5019685_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b783f40d945215558a95d3da058aab2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b783f40d945215558a95d3da058aab2);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionDefinition_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FunctionDefinition_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_56b986decffa2d4343968f8448665b61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56b986decffa2d4343968f8448665b61);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormat_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFormat_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormat);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatParam);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_c93efe045f29cf71bc68e842772e9235));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c93efe045f29cf71bc68e842772e9235);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Function_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Function_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_Function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Function);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_None));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_None);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f01ad2d67acf05ed5d4dacec1e3362b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f01ad2d67acf05ed5d4dacec1e3362b2_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_f5c89fcc5b79d93b0028131f09c014c5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5c89fcc5b79d93b0028131f09c014c5);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_3f3c23b327efe06dae80d6d233b64fb9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3f3c23b327efe06dae80d6d233b64fb9);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_select_strict_chat_completion_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_select_strict_chat_completion_tools);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_input_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_input_tools);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_c8538b7c5bb912c114cbe1b7b870cf62));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c8538b7c5bb912c114cbe1b7b870cf62);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_chat_completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_chat_completion);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_08e429a11b29ad408b46a49ea30f64c6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_08e429a11b29ad408b46a49ea30f64c6);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_5a60d3ce62894f5e8ab504f0db3554fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5a60d3ce62894f5e8ab504f0db3554fb);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_c37e021b163e6e06091d9c01c56c94d0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c37e021b163e6e06091d9c01c56c94d0);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_ed66739d8c658bc667540da65beed17c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ed66739d8c658bc667540da65beed17c);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_8eebfd8b96fc5504fa42483fe167cbfc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8eebfd8b96fc5504fa42483fe167cbfc);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_parseable_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_parseable_input);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_68da831015f3c3c2e8f10073cd4be9ef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68da831015f3c3c2e8f10073cd4be9ef);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_0df0bc85b9ae2a6033f86c5928efd6bf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0df0bc85b9ae2a6033f86c5928efd6bf);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_824eb014722d4c0195d4ebdcb9803494));
CHECK_OBJECT_DEEP(mod_consts.const_dict_824eb014722d4c0195d4ebdcb9803494);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_4c4dee69f4c4bd019f7d69be7e131f9d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4c4dee69f4c4bd019f7d69be7e131f9d);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_071d07bcc450b1dcadc4b8fa9ff20c13));
CHECK_OBJECT_DEEP(mod_consts.const_dict_071d07bcc450b1dcadc4b8fa9ff20c13);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_to_response_format_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_to_response_format_param);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd3e16484f202de2831c8888d062c1d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd3e16484f202de2831c8888d062c1d7);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_f3d5bb6151880d7db155e3d82618e7b4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f3d5bb6151880d7db155e3d82618e7b4_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_str_plain_content_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_format_str_plain_content_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_5d04cd4505b6972f622732f6b6d7b2ab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5d04cd4505b6972f622732f6b6d7b2ab_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_format_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_input_tool_str_plain_input_fn_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_input_tool_str_plain_input_fn_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tool_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_c79c2c41a7e90b55f2c137c5d106949f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c79c2c41a7e90b55f2c137c5d106949f_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_92163d1412e4c35633e2f70437cfa9c8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_92163d1412e4c35633e2f70437cfa9c8_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tools_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_8f8e4ff26d381f0146f7b1dfc80ac940_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f8e4ff26d381f0146f7b1dfc80ac940_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_tool_str_plain_strict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tools_str_plain_tool_str_plain_strict_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 37
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
static PyObject *module_var_accessor_openai$lib$_parsing$_completions$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ChatCompletionFunctionToolParam(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChatCompletionFunctionToolParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChatCompletionFunctionToolParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ContentFilterFinishReasonError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContentFilterFinishReasonError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContentFilterFinishReasonError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContentFilterFinishReasonError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContentFilterFinishReasonError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$FunctionDefinition(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FunctionDefinition);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FunctionDefinition, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FunctionDefinition);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FunctionDefinition, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$Iterable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$LengthFinishReasonError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LengthFinishReasonError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LengthFinishReasonError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LengthFinishReasonError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LengthFinishReasonError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$PYDANTIC_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PYDANTIC_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PYDANTIC_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PYDANTIC_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PYDANTIC_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ParsedChatCompletion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedChatCompletion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedChatCompletion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedChatCompletion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedChatCompletion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ParsedChoice(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedChoice);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedChoice, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedChoice);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedChoice, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ParsedFunctionToolCall(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedFunctionToolCall);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedFunctionToolCall, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedFunctionToolCall);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedFunctionToolCall, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$PydanticFunctionTool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticFunctionTool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticFunctionTool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticFunctionTool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticFunctionTool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticFunctionTool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticFunctionTool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticFunctionTool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticFunctionTool);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$ResponseFormatT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFormatT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFormatT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFormatT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFormatT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$_default_response_format(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__default_response_format);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_response_format);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_response_format, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_response_format);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_response_format, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__default_response_format);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__default_response_format);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_response_format);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$_parse_content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_content);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_content, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_content);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_content, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_content);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$construct_type_unchecked(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_construct_type_unchecked);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_construct_type_unchecked, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_construct_type_unchecked);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_construct_type_unchecked, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$get_input_tool_by_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_input_tool_by_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_input_tool_by_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_input_tool_by_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_input_tool_by_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_input_tool_by_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_input_tool_by_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_input_tool_by_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_input_tool_by_name);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$has_rich_response_format(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_has_rich_response_format);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_rich_response_format);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_rich_response_format, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_rich_response_format);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_rich_response_format, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_has_rich_response_format);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_has_rich_response_format);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_has_rich_response_format);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_basemodel_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_basemodel_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_basemodel_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_basemodel_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_basemodel_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_dataclass_like_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass_like_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dataclass_like_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dataclass_like_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dataclass_like_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dataclass_like_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass_like_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass_like_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass_like_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_parseable_tool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_parseable_tool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_parseable_tool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_parseable_tool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_parseable_tool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_parseable_tool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_parseable_tool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_parseable_tool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_parseable_tool);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_response_format_param(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_format_param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_response_format_param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_response_format_param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_response_format_param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_response_format_param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_format_param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_format_param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_format_param);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$is_strict_chat_completion_tool_param(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_strict_chat_completion_tool_param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_strict_chat_completion_tool_param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$maybe_parse_content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_parse_content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_parse_content);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_parse_content, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_parse_content);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_parse_content, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_parse_content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_parse_content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_parse_content);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$model_parse_json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_model_parse_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_model_parse_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_model_parse_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_model_parse_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$parse_function_tool_arguments(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_function_tool_arguments);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_function_tool_arguments);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_function_tool_arguments, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_function_tool_arguments);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_function_tool_arguments, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_function_tool_arguments);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_function_tool_arguments);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_function_tool_arguments);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$solve_response_format_t(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_solve_response_format_t);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_solve_response_format_t);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_solve_response_format_t, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_solve_response_format_t);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_solve_response_format_t, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_solve_response_format_t);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_solve_response_format_t);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_solve_response_format_t);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_parsing$_completions$to_strict_json_schema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_parsing$_completions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_parsing$_completions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_to_strict_json_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_parsing$_completions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_strict_json_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_strict_json_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_strict_json_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_strict_json_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_to_strict_json_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_to_strict_json_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_strict_json_schema);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8c0ed2f6f0628ebafa0a3d794d669ad1;
static PyCodeObject *code_objects_996aa73327b64b8b20abf25fad171e9c;
static PyCodeObject *code_objects_288d8c648eb06cacde2b150e11c58f2f;
static PyCodeObject *code_objects_15492167077c59835c85e716c1cb6d77;
static PyCodeObject *code_objects_5654ebb91cf14af1d35bf27a87f8cf49;
static PyCodeObject *code_objects_67612596c4868c57ded228f6e8a4cea1;
static PyCodeObject *code_objects_6d420e0c7622ab82ce083c44312c6b99;
static PyCodeObject *code_objects_0239e22d3d2cc069eb6144e3c235655b;
static PyCodeObject *code_objects_ce7d244f56ce33d8f079738562260ded;
static PyCodeObject *code_objects_b522f760ae78f5d52ac9992d8aa9e470;
static PyCodeObject *code_objects_55bb825ddee657bbab9d44f18ea72120;
static PyCodeObject *code_objects_05f01b1586401ef5a58f8789a2b9ad61;
static PyCodeObject *code_objects_40405df9fbeb2cbe0d0bc3a2c344add5;
static PyCodeObject *code_objects_0e6672a0877858562c39907f9afcc10b;
static PyCodeObject *code_objects_5a3286a79b29e0856492ec09e324742c;
static PyCodeObject *code_objects_c5c0c33af7669d7a27fe055adc567ba7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_bd3e16484f202de2831c8888d062c1d7); CHECK_OBJECT(module_filename_obj);
code_objects_8c0ed2f6f0628ebafa0a3d794d669ad1 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_0998c5e65228527c22cae993deb8ddd7, mod_consts.const_tuple_f3d5bb6151880d7db155e3d82618e7b4_tuple, NULL, 1, 0, 0);
code_objects_996aa73327b64b8b20abf25fad171e9c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4, mod_consts.const_str_digest_2bdc16f1ffb1fb5b29e8160bb0c4a6b4, NULL, NULL, 0, 0, 0);
code_objects_288d8c648eb06cacde2b150e11c58f2f = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__parse_content, mod_consts.const_str_plain__parse_content, mod_consts.const_tuple_str_plain_response_format_str_plain_content_tuple, NULL, 2, 0, 0);
code_objects_15492167077c59835c85e716c1cb6d77 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_input_tool_by_name, mod_consts.const_str_plain_get_input_tool_by_name, mod_consts.const_tuple_str_plain_input_tools_str_plain_name_tuple, NULL, 0, 2, 0);
code_objects_5654ebb91cf14af1d35bf27a87f8cf49 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_parseable_input, mod_consts.const_str_plain_has_parseable_input, mod_consts.const_tuple_5d04cd4505b6972f622732f6b6d7b2ab_tuple, NULL, 0, 2, 0);
code_objects_67612596c4868c57ded228f6e8a4cea1 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_rich_response_format, mod_consts.const_str_plain_has_rich_response_format, mod_consts.const_tuple_str_plain_response_format_tuple, NULL, 1, 0, 0);
code_objects_6d420e0c7622ab82ce083c44312c6b99 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_parseable_tool, mod_consts.const_str_plain_is_parseable_tool, mod_consts.const_tuple_str_plain_input_tool_str_plain_input_fn_tuple, NULL, 1, 0, 0);
code_objects_0239e22d3d2cc069eb6144e3c235655b = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_response_format_param, mod_consts.const_str_plain_is_response_format_param, mod_consts.const_tuple_str_plain_response_format_tuple, NULL, 1, 0, 0);
code_objects_ce7d244f56ce33d8f079738562260ded = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_strict_chat_completion_tool_param, mod_consts.const_str_plain_is_strict_chat_completion_tool_param, mod_consts.const_tuple_str_plain_tool_tuple, NULL, 1, 0, 0);
code_objects_b522f760ae78f5d52ac9992d8aa9e470 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_maybe_parse_content, mod_consts.const_str_plain_maybe_parse_content, mod_consts.const_tuple_str_plain_response_format_str_plain_message_tuple, NULL, 0, 2, 0);
code_objects_55bb825ddee657bbab9d44f18ea72120 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_chat_completion, mod_consts.const_str_plain_parse_chat_completion, mod_consts.const_tuple_c79c2c41a7e90b55f2c137c5d106949f_tuple, NULL, 0, 3, 0);
code_objects_05f01b1586401ef5a58f8789a2b9ad61 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_function_tool_arguments, mod_consts.const_str_plain_parse_function_tool_arguments, mod_consts.const_tuple_92163d1412e4c35633e2f70437cfa9c8_tuple, NULL, 0, 2, 0);
code_objects_40405df9fbeb2cbe0d0bc3a2c344add5 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_select_strict_chat_completion_tools, mod_consts.const_str_plain_select_strict_chat_completion_tools, mod_consts.const_tuple_str_plain_tools_tuple, NULL, 1, 0, 0);
code_objects_0e6672a0877858562c39907f9afcc10b = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_solve_response_format_t, mod_consts.const_str_plain_solve_response_format_t, mod_consts.const_tuple_str_plain_response_format_tuple, NULL, 1, 0, 0);
code_objects_5a3286a79b29e0856492ec09e324742c = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_type_to_response_format_param, mod_consts.const_str_plain_type_to_response_format_param, mod_consts.const_tuple_8f8e4ff26d381f0146f7b1dfc80ac940_tuple, NULL, 1, 0, 0);
code_objects_c5c0c33af7669d7a27fe055adc567ba7 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_input_tools, mod_consts.const_str_plain_validate_input_tools, mod_consts.const_tuple_str_plain_tools_str_plain_tool_str_plain_strict_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__11_is_response_format_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__13__parse_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__3_validate_input_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__9_has_parseable_input(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tool = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param = MAKE_FUNCTION_FRAME(tstate, code_objects_ce7d244f56ce33d8f079738562260ded, module_openai$lib$_parsing$_completions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param = cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tool);
tmp_expression_value_1 = par_tool;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_function;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_tool);
tmp_expression_value_3 = par_tool;
tmp_subscript_value_2 = mod_consts.const_str_plain_function;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param->m_frame.f_lineno = 49;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_strict_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param,
    type_description_1,
    par_tool
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param == cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tool);
Py_DECREF(par_tool);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tool);
Py_DECREF(par_tool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tools = python_pars[0];
PyObject *outline_0_var_t = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools = MAKE_FUNCTION_FRAME(tstate, code_objects_40405df9fbeb2cbe0d0bc3a2c344add5, module_openai$lib$_parsing$_completions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools = cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tools);
tmp_args_element_value_1 = par_tools;
frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools->m_frame.f_lineno = 59;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
tmp_return_value = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_tools);
tmp_iter_arg_1 = par_tools;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "o";
exception_lineno = 62;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_t;
    outline_0_var_t = tmp_assign_source_4;
    Py_INCREF(outline_0_var_t);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$is_strict_chat_completion_tool_param(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_strict_chat_completion_tool_param);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
CHECK_OBJECT(outline_0_var_t);
tmp_args_element_value_2 = outline_0_var_t;
frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools->m_frame.f_lineno = 62;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_t);
tmp_append_value_1 = outline_0_var_t;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 62;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools,
    type_description_1,
    par_tools
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools == cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__3_validate_input_tools(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tools = python_pars[0];
PyObject *var_tool = NULL;
PyObject *var_strict = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools = MAKE_FUNCTION_FRAME(tstate, code_objects_c5c0c33af7669d7a27fe055adc567ba7, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools = cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tools);
tmp_args_element_value_1 = par_tools;
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame.f_lineno = 68;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
tmp_return_value = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_tools);
tmp_iter_arg_1 = par_tools;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 71;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_tool;
    var_tool = tmp_assign_source_3;
    Py_INCREF(var_tool);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_tool);
tmp_expression_value_1 = var_tool;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_function;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_c116a56e0ffe7a12f705926d015e7d1f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_tool);
tmp_expression_value_2 = var_tool;
tmp_subscript_value_2 = const_str_plain_type;
tmp_format_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_96;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_2;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_tool);
tmp_expression_value_4 = var_tool;
tmp_subscript_value_3 = mod_consts.const_str_plain_function;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame.f_lineno = 77;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_strict_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_strict;
    var_strict = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_strict);
tmp_cmp_expr_left_2 = var_strict;
tmp_cmp_expr_right_2 = Py_True;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_chr_96;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_tool);
tmp_expression_value_6 = var_tool;
tmp_subscript_value_4 = mod_consts.const_str_plain_function;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_subscript_value_5 = const_str_plain_name;
tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_69c16ac2f33f6a7789f192104b781970;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame.f_lineno = 79;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_2;
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_openai$lib$_parsing$_completions$Iterable(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = module_var_accessor_openai$lib$_parsing$_completions$ChatCompletionFunctionToolParam(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tools);
tmp_args_element_value_3 = par_tools;
frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools,
    type_description_1,
    par_tools,
    var_tool,
    var_strict
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools == cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__3_validate_input_tools);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_tool);
var_tool = NULL;
Py_XDECREF(var_strict);
var_strict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tool);
var_tool = NULL;
Py_XDECREF(var_strict);
var_strict = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
PyObject *par_input_tools = python_pars[1];
PyObject *par_chat_completion = python_pars[2];
PyObject *var_choices = NULL;
PyObject *var_tool_calls = NULL;
PyObject *var_choice = NULL;
PyObject *var_message = NULL;
PyObject *var_tool_call = NULL;
PyObject *var_tool_call_dict = NULL;
PyObject *outline_0_var_t = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion = MAKE_FUNCTION_FRAME(tstate, code_objects_55bb825ddee657bbab9d44f18ea72120, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion = cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_tools);
tmp_args_element_value_1 = par_input_tools;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 92;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 92;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_input_tools);
tmp_iter_arg_1 = par_input_tools;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
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
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 93;
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
    PyObject *old = outline_0_var_t;
    outline_0_var_t = tmp_assign_source_5;
    Py_INCREF(outline_0_var_t);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_t);
tmp_append_value_1 = outline_0_var_t;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
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
Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_t);
outline_0_var_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 93;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = par_input_tools;
    assert(old != NULL);
    par_input_tools = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = par_input_tools;
    assert(old != NULL);
    par_input_tools = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_choices == NULL);
var_choices = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_chat_completion);
tmp_expression_value_1 = par_chat_completion;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_choices);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 98;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_choice;
    var_choice = tmp_assign_source_10;
    Py_INCREF(var_choice);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_choice);
tmp_expression_value_2 = var_choice;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_finish_reason);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_length;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$LengthFinishReasonError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LengthFinishReasonError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_chat_completion);
tmp_kw_call_value_0_1 = par_chat_completion;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 100;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_completion_tuple);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_choice);
tmp_expression_value_3 = var_choice;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_finish_reason);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_content_filter;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_openai$lib$_parsing$_completions$ContentFilterFinishReasonError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ContentFilterFinishReasonError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 103;
tmp_raise_type_input_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_choice);
tmp_expression_value_4 = var_choice;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_message);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_message;
    var_message = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_tool_calls;
    var_tool_calls = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_message);
tmp_expression_value_5 = var_message;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_tool_calls);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_message);
tmp_expression_value_6 = var_message;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tool_calls);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_3 = tmp_for_loop_2__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 109;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_15 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_tool_call;
    var_tool_call = tmp_assign_source_15;
    Py_INCREF(var_tool_call);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_tool_call);
tmp_expression_value_7 = var_tool_call;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_type);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_function;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_tool_call);
tmp_called_instance_1 = var_tool_call;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 111;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_dict);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_tool_call_dict;
    var_tool_call_dict = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_value_1_2;
if (var_tool_calls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_calls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_1 = var_tool_calls;
tmp_called_value_4 = module_var_accessor_openai$lib$_parsing$_completions$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_tool_call_dict);
tmp_tuple_element_1 = var_tool_call_dict;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_function;
tmp_called_value_5 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_args_element_value_2 = module_var_accessor_openai$lib$_parsing$_completions$Any(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_tool_call_dict);
tmp_expression_value_8 = var_tool_call_dict;
tmp_subscript_value_1 = mod_consts.const_str_plain_function;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_parsed_arguments;
tmp_called_value_6 = module_var_accessor_openai$lib$_parsing$_completions$parse_function_tool_arguments(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_function_tool_arguments);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
if (par_input_tools == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_input_tools);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}

tmp_kw_call_value_0_3 = par_input_tools;
CHECK_OBJECT(var_tool_call);
tmp_expression_value_9 = var_tool_call;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_function);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 118;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1};

    tmp_dict_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_input_tools_str_plain_function_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_direct_call_arg1_2);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_dict_value_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_kw_call_value_0_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_kw_call_value_1_2 = module_var_accessor_openai$lib$_parsing$_completions$ParsedFunctionToolCall(tstate);
if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedFunctionToolCall);
}

if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 113;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_item_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_value_str_plain_type__tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_tool_call);
tmp_expression_value_10 = var_tool_call;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_type);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_custom;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_11 = module_var_accessor_openai$lib$_parsing$_completions$log(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_warning);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_01ade9cac985b93c3bfb398cd702cd09;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_tool_call);
tmp_expression_value_12 = var_tool_call;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_id);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_tool_call);
tmp_expression_value_14 = var_tool_call;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_custom);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_value_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 128;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_tool_calls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_calls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 137;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_2 = var_tool_calls;
CHECK_OBJECT(var_tool_call);
tmp_item_value_2 = var_tool_call;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_6:;
branch_end_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
goto loop_start_3;
loop_end_3:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_4:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_called_instance_2;
if (var_choices == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_choices);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_3 = var_choices;
tmp_called_value_8 = module_var_accessor_openai$lib$_parsing$_completions$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_9 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_4 = module_var_accessor_openai$lib$_parsing$_completions$Any(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = module_var_accessor_openai$lib$_parsing$_completions$ParsedChoice(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedChoice);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_expression_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_10 = module_var_accessor_openai$lib$_parsing$_completions$solve_response_format_t(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_solve_response_format_t);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_15);

exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (par_response_format == NULL) {
Py_DECREF(tmp_expression_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_6 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 141;
tmp_subscript_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_15);

exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_value_0_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_choice);
tmp_called_instance_2 = var_choice;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 143;
tmp_tuple_element_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 143;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_direct_call_arg1_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_called_instance_3;
PyTuple_SET_ITEM(tmp_direct_call_arg1_3, 0, tmp_tuple_element_4);
tmp_dict_key_3 = mod_consts.const_str_plain_message;
CHECK_OBJECT(var_message);
tmp_called_instance_3 = var_message;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 145;
tmp_tuple_element_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_4;
}
tmp_direct_call_arg1_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
PyTuple_SET_ITEM(tmp_direct_call_arg1_4, 0, tmp_tuple_element_5);
tmp_dict_key_4 = mod_consts.const_str_plain_parsed;
tmp_called_value_11 = module_var_accessor_openai$lib$_parsing$_completions$maybe_parse_content(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_parse_content);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
if (par_response_format == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}

tmp_kw_call_value_0_5 = par_response_format;
CHECK_OBJECT(var_message);
tmp_kw_call_value_1_4 = var_message;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 146;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4};

    tmp_dict_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_str_plain_response_format_str_plain_message_tuple);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_4, 1, tmp_tuple_element_5);
tmp_dict_key_5 = mod_consts.const_str_plain_tool_calls;
if (var_tool_calls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_calls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}

tmp_truth_name_3 = CHECK_IF_TRUE(var_tool_calls);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (var_tool_calls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tool_calls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_5;
}

tmp_dict_value_5 = var_tool_calls;
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_5 = Py_None;
condexpr_end_1:;
tmp_tuple_element_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_direct_call_arg1_4);
goto tuple_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_dict_value_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_3, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_direct_call_arg1_3);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_kw_call_value_1_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 142;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 140;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3};

    tmp_item_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_13;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kw_call_value_1_5;
PyObject *tmp_direct_call_arg1_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_called_instance_4;
tmp_called_value_12 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_openai$lib$_parsing$_completions$ParsedChatCompletion(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedChatCompletion);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = module_var_accessor_openai$lib$_parsing$_completions$ResponseFormatT(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_openai$lib$_parsing$_completions$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 158;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_openai$lib$_parsing$_completions$Any(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = module_var_accessor_openai$lib$_parsing$_completions$ParsedChatCompletion(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedChatCompletion);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 159;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_openai$lib$_parsing$_completions$solve_response_format_t(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_solve_response_format_t);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_expression_value_17);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_response_format == NULL) {
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_expression_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 159;
tmp_subscript_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_expression_value_17);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 159;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chat_completion);
tmp_called_instance_4 = par_chat_completion;
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 161;
tmp_tuple_element_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 161;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyTuple_SET_ITEM(tmp_direct_call_arg1_5, 0, tmp_tuple_element_6);
tmp_dict_key_6 = mod_consts.const_str_plain_choices;
if (var_choices == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_choices);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_6;
}

tmp_dict_value_6 = var_choices;
tmp_tuple_element_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_5, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_direct_call_arg1_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_kw_call_value_1_5 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 160;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 158;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5};

    tmp_args_element_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_13, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_0_6);
CHECK_OBJECT(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_1_5);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 158;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion,
    type_description_1,
    par_response_format,
    par_input_tools,
    par_chat_completion,
    var_choices,
    var_tool_calls,
    var_choice,
    var_message,
    var_tool_call,
    var_tool_call_dict
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion == cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_input_tools);
par_input_tools = NULL;
Py_XDECREF(var_choices);
var_choices = NULL;
Py_XDECREF(var_tool_calls);
var_tool_calls = NULL;
Py_XDECREF(var_choice);
var_choice = NULL;
Py_XDECREF(var_message);
var_message = NULL;
Py_XDECREF(var_tool_call);
var_tool_call = NULL;
Py_XDECREF(var_tool_call_dict);
var_tool_call_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_input_tools);
par_input_tools = NULL;
Py_XDECREF(var_choices);
var_choices = NULL;
Py_XDECREF(var_tool_calls);
var_tool_calls = NULL;
Py_XDECREF(var_choice);
var_choice = NULL;
Py_XDECREF(var_message);
var_message = NULL;
Py_XDECREF(var_tool_call);
var_tool_call = NULL;
Py_XDECREF(var_tool_call_dict);
var_tool_call_dict = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_chat_completion);
Py_DECREF(par_chat_completion);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_chat_completion);
Py_DECREF(par_chat_completion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_tools = python_pars[0];
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name = MAKE_FUNCTION_FRAME(tstate, code_objects_15492167077c59835c85e716c1cb6d77, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name = cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name) == 2);

// Framed code:
{
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_input_tools);
tmp_iter_arg_1 = par_input_tools;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_name;
Py_INCREF(tmp_closure_1[1]);
tmp_next_arg_1 = MAKE_GENERATOR_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_next_default_1 = Py_None;
tmp_return_value = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
CHECK_OBJECT(tmp_next_arg_1);
Py_DECREF(tmp_next_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name,
    type_description_1,
    par_input_tools,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name == cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_locals {
PyObject *var_t;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_locals *generator_heap = (struct openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_t = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8c0ed2f6f0628ebafa0a3d794d669ad1, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 171;
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
    PyObject *old = generator_heap->var_t;
    generator_heap->var_t = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_t);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(generator_heap->var_t);
tmp_expression_value_1 = generator_heap->var_t;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_function;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_t);
tmp_expression_value_3 = generator_heap->var_t;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_function;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
generator->m_frame->m_frame.f_lineno = 171;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 171;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_name_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
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
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_t);
tmp_expression_value_4 = generator_heap->var_t;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
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
    generator_heap->var_t,
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

Py_XDECREF(generator_heap->var_t);
generator_heap->var_t = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_t);
generator_heap->var_t = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_context,
        module_openai$lib$_parsing$_completions,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0998c5e65228527c22cae993deb8ddd7,
#endif
        code_objects_8c0ed2f6f0628ebafa0a3d794d669ad1,
        closure,
        2,
#if 1
        sizeof(struct openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_tools = python_pars[0];
PyObject *par_function = python_pars[1];
PyObject *var_input_tool = NULL;
PyObject *var_input_fn = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments = MAKE_FUNCTION_FRAME(tstate, code_objects_05f01b1586401ef5a58f8789a2b9ad61, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments = cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$get_input_tool_by_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_input_tool_by_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_tools);
tmp_kw_call_value_0_1 = par_input_tools;
CHECK_OBJECT(par_function);
tmp_expression_value_1 = par_function;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 177;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_input_tools_str_plain_name_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_input_tool == NULL);
var_input_tool = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_input_tool);
tmp_operand_value_1 = var_input_tool;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(var_input_tool);
tmp_expression_value_2 = var_input_tool;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 181;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_function_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_input_fn == NULL);
var_input_fn = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_input_fn);
tmp_isinstance_inst_1 = var_input_fn;
tmp_isinstance_cls_1 = module_var_accessor_openai$lib$_parsing$_completions$PydanticFunctionTool(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticFunctionTool);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_called_value_4 = module_var_accessor_openai$lib$_parsing$_completions$model_parse_json(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_model_parse_json);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_input_fn);
tmp_expression_value_3 = var_input_fn;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_model);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_function);
tmp_expression_value_4 = par_function;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_arguments);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 183;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_openai$lib$_parsing$_completions$FunctionDefinition(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FunctionDefinition);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_input_fn);
tmp_args_element_value_6 = var_input_fn;
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_input_fn;
    assert(old != NULL);
    var_input_fn = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_input_fn);
tmp_expression_value_5 = var_input_fn;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 187;
tmp_operand_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_strict_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_openai$lib$_parsing$_completions$json(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_loads);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_function);
tmp_expression_value_7 = par_function;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_arguments);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame.f_lineno = 190;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments,
    type_description_1,
    par_input_tools,
    par_function,
    var_input_tool,
    var_input_fn
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments == cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_input_tool);
CHECK_OBJECT(var_input_tool);
Py_DECREF(var_input_tool);
var_input_tool = NULL;
Py_XDECREF(var_input_fn);
var_input_fn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_input_tool);
var_input_tool = NULL;
Py_XDECREF(var_input_fn);
var_input_fn = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);
CHECK_OBJECT(par_function);
Py_DECREF(par_function);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);
CHECK_OBJECT(par_function);
Py_DECREF(par_function);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content = MAKE_FUNCTION_FRAME(tstate, code_objects_b522f760ae78f5d52ac9992d8aa9e470, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content = cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$has_rich_response_format(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has_rich_response_format);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content->m_frame.f_lineno = 198;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 198;
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


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_message);
tmp_expression_value_1 = par_message;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_message);
tmp_expression_value_2 = par_message;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_refusal);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$_parse_content(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_content);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_2 = par_response_format;
CHECK_OBJECT(par_message);
tmp_expression_value_3 = par_message;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_content);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content->m_frame.f_lineno = 199;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content,
    type_description_1,
    par_response_format,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content == cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content);

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
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t = MAKE_FUNCTION_FRAME(tstate, code_objects_0e6672a0877858562c39907f9afcc10b, module_openai$lib$_parsing$_completions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t = cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$has_rich_response_format(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has_rich_response_format);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t->m_frame.f_lineno = 212;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 212;
type_description_1 = "o";
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
CHECK_OBJECT(par_response_format);
tmp_return_value = par_response_format;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_9a7e0103ee39d9df7d2fc5c0984517ec;
tmp_args_element_value_3 = module_var_accessor_openai$lib$_parsing$_completions$_default_response_format(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_response_format);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t,
    type_description_1,
    par_response_format
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t == cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__9_has_parseable_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
PyObject *par_input_tools = python_pars[1];
PyObject *var_input_tool = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input = MAKE_FUNCTION_FRAME(tstate, code_objects_5654ebb91cf14af1d35bf27a87f8cf49, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input = cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$has_rich_response_format(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has_rich_response_format);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input->m_frame.f_lineno = 223;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 223;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_input_tools);
tmp_or_left_value_1 = par_input_tools;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 0);
tmp_iter_arg_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_iter_arg_1 = tmp_or_left_value_1;
or_end_1:;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 226;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_input_tool;
    var_input_tool = tmp_assign_source_3;
    Py_INCREF(var_input_tool);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$is_parseable_tool(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_parseable_tool);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_input_tool);
tmp_args_element_value_2 = var_input_tool;
frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input->m_frame.f_lineno = 227;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input,
    type_description_1,
    par_response_format,
    par_input_tools,
    var_input_tool
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input == cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__9_has_parseable_input);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_input_tool);
var_input_tool = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_input_tool);
var_input_tool = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_input_tools);
Py_DECREF(par_input_tools);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format = MAKE_FUNCTION_FRAME(tstate, code_objects_67612596c4868c57ded228f6e8a4cea1, module_openai$lib$_parsing$_completions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format = cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format->m_frame.f_lineno = 236;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$is_response_format_param(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_response_format_param);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_2 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format->m_frame.f_lineno = 239;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 239;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format,
    type_description_1,
    par_response_format
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format == cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__11_is_response_format_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param = MAKE_FUNCTION_FRAME(tstate, code_objects_0239e22d3d2cc069eb6144e3c235655b, module_openai$lib$_parsing$_completions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param = cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_dict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_dict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param->m_frame.f_lineno = 246;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param,
    type_description_1,
    par_response_format
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param == cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__11_is_response_format_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_input_tool = python_pars[0];
PyObject *var_input_fn = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool = MAKE_FUNCTION_FRAME(tstate, code_objects_6d420e0c7622ab82ce083c44312c6b99, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool = cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_input_tool);
tmp_expression_value_1 = par_input_tool;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_function;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_input_tool);
tmp_expression_value_2 = par_input_tool;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_frame.f_lineno = 253;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_function_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_input_fn == NULL);
var_input_fn = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_input_fn);
tmp_isinstance_inst_1 = var_input_fn;
tmp_isinstance_cls_1 = module_var_accessor_openai$lib$_parsing$_completions$PydanticFunctionTool(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticFunctionTool);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_openai$lib$_parsing$_completions$FunctionDefinition(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FunctionDefinition);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_input_fn);
tmp_args_element_value_4 = var_input_fn;
frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_frame.f_lineno = 257;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_frame.f_lineno = 257;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_strict_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 257;
type_description_1 = "oo";
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
tmp_or_right_value_1 = Py_False;
Py_INCREF(tmp_or_right_value_1);
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool,
    type_description_1,
    par_input_tool,
    var_input_fn
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool == cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_input_fn);
var_input_fn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_input_fn);
var_input_fn = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_input_tool);
Py_DECREF(par_input_tool);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_input_tool);
Py_DECREF(par_input_tool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__13__parse_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
PyObject *par_content = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content = MAKE_FUNCTION_FRAME(tstate, code_objects_288d8c648eb06cacde2b150e11c58f2f, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content = cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_basemodel_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_basemodel_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 261;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 261;
type_description_1 = "oo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_openai$lib$_parsing$_completions$ResponseFormatT(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$lib$_parsing$_completions$model_parse_json(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_model_parse_json);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_4 = par_response_format;
CHECK_OBJECT(par_content);
tmp_args_element_value_5 = par_content;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 262;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 262;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_2;
tmp_called_value_4 = module_var_accessor_openai$lib$_parsing$_completions$is_dataclass_like_type(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_dataclass_like_type);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_6 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 264;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 264;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_openai$lib$_parsing$_completions$PYDANTIC_V2(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_f5b488195a6253fffafc50918003029c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_response_format);
tmp_format_value_1 = par_response_format;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 266;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 266;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 268;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
    if (likely(hard_module != NULL)) {
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_TypeAdapter);

        Py_DECREF(hard_module);

    } else {
        tmp_called_value_5 = NULL;
    }
}
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_7 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 268;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_8 = par_content;
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 268;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_validate_json, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_c4809925d2281776b600e57755a9ac4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_response_format);
tmp_format_value_2 = par_response_format;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
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
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame.f_lineno = 270;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 270;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content,
    type_description_1,
    par_response_format,
    par_content
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content == cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__13__parse_content);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
PyObject *var_json_schema_type = NULL;
PyObject *var_name = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param = MAKE_FUNCTION_FRAME(tstate, code_objects_5a3286a79b29e0856492ec09e324742c, module_openai$lib$_parsing$_completions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_type_description == NULL);
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param = cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_1 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 276;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
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
tmp_return_value = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_openai$lib$_parsing$_completions$is_response_format_param(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_response_format_param);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_2 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 279;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 279;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_response_format);
tmp_return_value = par_response_format;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_openai$lib$_parsing$_completions$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = (PyObject *)&PyType_Type;
CHECK_OBJECT(par_response_format);
tmp_args_element_value_4 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_response_format;
    assert(old != NULL);
    par_response_format = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_2;
tmp_called_value_4 = module_var_accessor_openai$lib$_parsing$_completions$is_basemodel_type(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_basemodel_type);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_5 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 289;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response_format);
tmp_expression_value_1 = par_response_format;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_name == NULL);
var_name = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_response_format);
tmp_assign_source_3 = par_response_format;
assert(var_json_schema_type == NULL);
Py_INCREF(tmp_assign_source_3);
var_json_schema_type = tmp_assign_source_3;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_3;
tmp_called_value_5 = module_var_accessor_openai$lib$_parsing$_completions$is_dataclass_like_type(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_dataclass_like_type);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_6 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 292;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 292;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_response_format);
tmp_expression_value_2 = par_response_format;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_name == NULL);
var_name = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 294;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
    if (likely(hard_module != NULL)) {
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_TypeAdapter);

        Py_DECREF(hard_module);

    } else {
        tmp_called_value_6 = NULL;
    }
}
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_7 = par_response_format;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 294;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_json_schema_type == NULL);
var_json_schema_type = tmp_assign_source_5;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a477caaf1ed8e61a9973898c373f42c9;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_response_format);
tmp_format_value_1 = par_response_format;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 296;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 296;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_4:;
branch_end_3:;
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_type;
tmp_dict_value_1 = mod_consts.const_str_plain_json_schema;
tmp_return_value = _PyDict_NewPresized( 2 );
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_json_schema;
tmp_dict_key_2 = mod_consts.const_str_plain_schema;
tmp_called_value_7 = module_var_accessor_openai$lib$_parsing$_completions$to_strict_json_schema(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_strict_json_schema);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_json_schema_type);
tmp_args_element_value_8 = var_json_schema_type;
frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame.f_lineno = 301;
tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_name;
CHECK_OBJECT(var_name);
tmp_dict_value_2 = var_name;
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_strict;
tmp_dict_value_2 = Py_True;
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param,
    type_description_1,
    par_response_format,
    var_json_schema_type,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param == cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param);
    cache_frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param = NULL;
}

assertFrameObject(frame_frame_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_response_format);
par_response_format = NULL;
Py_XDECREF(var_json_schema_type);
var_json_schema_type = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_response_format);
par_response_format = NULL;
Py_XDECREF(var_json_schema_type);
var_json_schema_type = NULL;
Py_XDECREF(var_name);
var_name = NULL;
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



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format,
        mod_consts.const_str_plain_has_rich_response_format,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_67612596c4868c57ded228f6e8a4cea1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__11_is_response_format_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__11_is_response_format_param,
        mod_consts.const_str_plain_is_response_format_param,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0239e22d3d2cc069eb6144e3c235655b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool,
        mod_consts.const_str_plain_is_parseable_tool,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6d420e0c7622ab82ce083c44312c6b99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__13__parse_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__13__parse_content,
        mod_consts.const_str_plain__parse_content,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_288d8c648eb06cacde2b150e11c58f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param,
        mod_consts.const_str_plain_type_to_response_format_param,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5a3286a79b29e0856492ec09e324742c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param,
        mod_consts.const_str_plain_is_strict_chat_completion_tool_param,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ce7d244f56ce33d8f079738562260ded,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        mod_consts.const_str_digest_15c5e59fd2616bbd23b797ea9e37e032,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools,
        mod_consts.const_str_plain_select_strict_chat_completion_tools,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_40405df9fbeb2cbe0d0bc3a2c344add5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        mod_consts.const_str_digest_cf309d469faa844971f8857b3f112ac9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__3_validate_input_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__3_validate_input_tools,
        mod_consts.const_str_plain_validate_input_tools,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c5c0c33af7669d7a27fe055adc567ba7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion,
        mod_consts.const_str_plain_parse_chat_completion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_55bb825ddee657bbab9d44f18ea72120,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name,
        mod_consts.const_str_plain_get_input_tool_by_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_15492167077c59835c85e716c1cb6d77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments,
        mod_consts.const_str_plain_parse_function_tool_arguments,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_05f01b1586401ef5a58f8789a2b9ad61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content,
        mod_consts.const_str_plain_maybe_parse_content,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b522f760ae78f5d52ac9992d8aa9e470,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t,
        mod_consts.const_str_plain_solve_response_format_t,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0e6672a0877858562c39907f9afcc10b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
        mod_consts.const_str_digest_f495c269b06388e8c3749c036e440265,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__9_has_parseable_input(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_parsing$_completions$$$function__9_has_parseable_input,
        mod_consts.const_str_plain_has_parseable_input,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5654ebb91cf14af1d35bf27a87f8cf49,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$_parsing$_completions,
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

static function_impl_code const function_table_openai$lib$_parsing$_completions[] = {
impl_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param,
impl_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools,
impl_openai$lib$_parsing$_completions$$$function__3_validate_input_tools,
impl_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion,
impl_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name,
impl_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments,
impl_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content,
impl_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t,
impl_openai$lib$_parsing$_completions$$$function__9_has_parseable_input,
impl_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format,
impl_openai$lib$_parsing$_completions$$$function__11_is_response_format_param,
impl_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool,
impl_openai$lib$_parsing$_completions$$$function__13__parse_content,
impl_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$lib$_parsing$_completions);
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
        module_openai$lib$_parsing$_completions,
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
        function_table_openai$lib$_parsing$_completions,
        sizeof(function_table_openai$lib$_parsing$_completions) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.lib._parsing._completions";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$lib$_parsing$_completions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$lib$_parsing$_completions");

    // Store the module for future use.
    module_openai$lib$_parsing$_completions = module;

    moduledict_openai$lib$_parsing$_completions = MODULE_DICT(module_openai$lib$_parsing$_completions);

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
        PRINT_STRING("openai$lib$_parsing$_completions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$lib$_parsing$_completions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$lib$_parsing$_completions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib._parsing._completions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$lib$_parsing$_completions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$lib$_parsing$_completions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$lib$_parsing$_completions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$lib$_parsing$_completions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$_parsing$_completions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$_parsing$_completions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$lib$_parsing$_completions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$lib$_parsing$_completions);
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

        UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_parsing$_completions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$lib$_parsing$_completions = MAKE_MODULE_FRAME(code_objects_996aa73327b64b8b20abf25fad171e9c, module_openai$lib$_parsing$_completions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_parsing$_completions);
assert(Py_REFCNT(frame_frame_openai$lib$_parsing$_completions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$lib$_parsing$_completions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$lib$_parsing$_completions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TypeVar_str_plain_TypeGuard_str_plain_assert_never_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 6;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_TypeGuard,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeGuard);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeGuard, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_assert_never,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_assert_never);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never, tmp_assign_source_16);
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
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 8;
tmp_assign_source_17 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__tools;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_PydanticFunctionTool_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 10;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_PydanticFunctionTool,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_PydanticFunctionTool);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticFunctionTool, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_NOT_GIVEN_str_plain_NotGiven_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 11;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_is_dict_str_plain_is_given_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 12;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_10 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_is_dict,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_is_dict);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_24);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_PYDANTIC_V2_str_plain_model_parse_json_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 13;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_12 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_PYDANTIC_V2,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_13 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_model_parse_json,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_model_parse_json);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json, tmp_assign_source_27);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_construct_type_unchecked_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 14;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_construct_type_unchecked,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_construct_type_unchecked);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__pydantic;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_be9a60c8d5c8c9f63ef1e222d67b84ae_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 15;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_15 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_is_basemodel_type,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_is_basemodel_type);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel_type, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_16 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_to_strict_json_schema,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_to_strict_json_schema);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_to_strict_json_schema, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_17 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_is_dataclass_like_type,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_is_dataclass_like_type);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass_like_type, tmp_assign_source_32);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_a3e6fcf7b8cd9e6099c1356549258e05;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_43be367779ac2c2fc1ca83982bf97e02_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 16;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_18 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ParsedChoice,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_ParsedChoice);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_19 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ChatCompletion,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ChatCompletion);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletion, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_20 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ParsedFunction,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ParsedFunction);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunction, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_21 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ParsedChatCompletion,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ParsedChatCompletion);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_22 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ChatCompletionMessage,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ChatCompletionMessage);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessage, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_23 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ParsedFunctionToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ParsedFunctionToolCall);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_24 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ParsedChatCompletionMessage,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ParsedChatCompletionMessage);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletionMessage, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_25 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ChatCompletionToolUnionParam,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_ChatCompletionToolUnionParam);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionToolUnionParam, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_26 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ChatCompletionFunctionToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_27 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_completion_create_params,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_completion_create_params);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_completion_create_params, tmp_assign_source_43);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_d1439ca519b44eca00c0962dc5019685_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 28;
tmp_assign_source_44 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_28 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_LengthFinishReasonError,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_LengthFinishReasonError);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_29 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ContentFilterFinishReasonError,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ContentFilterFinishReasonError);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError, tmp_assign_source_46);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_7b783f40d945215558a95d3da058aab2;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_FunctionDefinition_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 29;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_FunctionDefinition,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_FunctionDefinition);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_56b986decffa2d4343968f8448665b61;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ResponseFormat_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 30;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_ResponseFormat,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_ResponseFormat);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatParam, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_c93efe045f29cf71bc68e842772e9235;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$lib$_parsing$_completions;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_Function_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_3;
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 31;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$lib$_parsing$_completions,
        mod_consts.const_str_plain_Function,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_Function);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_Function, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_parsing$_completions$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 33;
tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__default_response_format, tmp_assign_source_51);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_None;
tmp_ass_subscribed_1 = module_var_accessor_openai$lib$_parsing$_completions$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__default_response_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_openai$lib$_parsing$_completions$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_parsing$_completions->m_frame.f_lineno = 40;
tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f01ad2d67acf05ed5d4dacec1e3362b2_tuple, 0)
);

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_52);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
tmp_ass_subscribed_2 = module_var_accessor_openai$lib$_parsing$_completions$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_log;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f5c89fcc5b79d93b0028131f09c014c5);

tmp_assign_source_53 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__1_is_strict_chat_completion_tool_param(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_strict_chat_completion_tool_param, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_2;
tmp_tuple_element_1 = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_3f3c23b327efe06dae80d6d233b64fb9);

tmp_assign_source_54 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__2_select_strict_chat_completion_tools(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_select_strict_chat_completion_tools, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_annotations_3;
tmp_tuple_element_2 = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_3f3c23b327efe06dae80d6d233b64fb9);

tmp_assign_source_55 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__3_validate_input_tools(tstate, tmp_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_input_tools, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_c8538b7c5bb912c114cbe1b7b870cf62);

tmp_assign_source_56 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__4_parse_chat_completion(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_chat_completion, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_08e429a11b29ad408b46a49ea30f64c6);

tmp_assign_source_57 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__5_get_input_tool_by_name(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_input_tool_by_name, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_5a60d3ce62894f5e8ab504f0db3554fb);

tmp_assign_source_58 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__6_parse_function_tool_arguments(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_function_tool_arguments, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c37e021b163e6e06091d9c01c56c94d0);

tmp_assign_source_59 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__7_maybe_parse_content(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_parse_content, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_ed66739d8c658bc667540da65beed17c);

tmp_assign_source_60 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__8_solve_response_format_t(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_solve_response_format_t, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_9;
tmp_dict_key_1 = mod_consts.const_str_plain_input_tools;
tmp_dict_value_1 = module_var_accessor_openai$lib$_parsing$_completions$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_8eebfd8b96fc5504fa42483fe167cbfc);

tmp_assign_source_61 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__9_has_parseable_input(tstate, tmp_kw_defaults_1, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_has_parseable_input, tmp_assign_source_61);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_parsing$_completions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_parsing$_completions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_parsing$_completions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$lib$_parsing$_completions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_68da831015f3c3c2e8f10073cd4be9ef);

tmp_assign_source_62 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__10_has_rich_response_format(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_has_rich_response_format, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0df0bc85b9ae2a6033f86c5928efd6bf);

tmp_assign_source_63 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__11_is_response_format_param(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_format_param, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_824eb014722d4c0195d4ebdcb9803494);

tmp_assign_source_64 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__12_is_parseable_tool(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_is_parseable_tool, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_4c4dee69f4c4bd019f7d69be7e131f9d);

tmp_assign_source_65 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__13__parse_content(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_content, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_071d07bcc450b1dcadc4b8fa9ff20c13);

tmp_assign_source_66 = MAKE_FUNCTION_openai$lib$_parsing$_completions$$$function__14_type_to_response_format_param(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)mod_consts.const_str_plain_type_to_response_format_param, tmp_assign_source_66);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$lib$_parsing$_completions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib._parsing._completions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$lib$_parsing$_completions);
    return module_openai$lib$_parsing$_completions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_parsing$_completions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$lib$_parsing$_completions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

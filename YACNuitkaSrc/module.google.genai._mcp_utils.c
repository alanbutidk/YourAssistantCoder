/* Generated code for Python module 'google$genai$_mcp_utils'
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



/* The "module_google$genai$_mcp_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_mcp_utils;
PyDictObject *moduledict_google$genai$_mcp_utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Tool;
PyObject *const_str_plain_description;
PyObject *const_str_plain_parameters;
PyObject *const_str_plain_Schema;
PyObject *const_str_plain_from_json_schema;
PyObject *const_str_plain_JSONSchema;
PyObject *const_str_plain__filter_to_supported_schema;
PyObject *const_str_plain_inputSchema;
PyObject *const_tuple_str_plain_json_schema_tuple;
PyObject *const_tuple_str_plain_function_declarations_tuple;
PyObject *const_str_digest_8907b1f0abbcce8d0755de053b9c1528;
PyObject *const_str_plain_parameters_json_schema;
PyObject *const_str_digest_4747396ee64e0c3d6b040f42a8f3e339;
PyObject *const_str_plain_agent_platform_to_gemini_tool;
PyObject *const_str_plain_mcp_to_gemini_tool;
PyObject *const_str_digest_f20535e9c3049abfac966895968a9128;
PyObject *const_str_plain_McpClientSession;
PyObject *const_str_plain_McpTool;
PyObject *const_str_digest_4f29f6f3062c9325ca96892e425c346d;
PyObject *const_str_digest_89294b99a2b1e20681a2d41a5a4f0a6f;
PyObject *const_str_plain_mcp;
PyObject *const_str_plain_version;
PyObject *const_str_plain_PackageNotFoundError;
PyObject *const_str_digest_0eb2e888ef17bbad9e7375e928fbee32;
PyObject *const_tuple_str_digest_a323eea3d037c14008d3cc1854afbacf_str_empty_tuple;
PyObject *const_str_digest_2406271d2091bbc8a529898603a759e2;
PyObject *const_str_plain_lstrip;
PyObject *const_str_digest_a323eea3d037c14008d3cc1854afbacf;
PyObject *const_str_digest_af2bb57b6ab4350362c46c0c7b57589b;
PyObject *const_str_plain_model_fields;
PyObject *const_str_plain_update;
PyObject *const_list_6392a2829f6efcede4c136bbcede9275_list;
PyObject *const_str_plain_items;
PyObject *const_tuple_078ca8a998feb284fb6bbc1aec580e73_tuple;
PyObject *const_str_plain_filtered_schema;
PyObject *const_tuple_73edf7f2d7e93a2f8e6567d015267bfc_tuple;
PyObject *const_tuple_d5907d8d64de24eda58e31359f52469d_tuple;
PyObject *const_str_digest_feb9f1c8b01c73df12780d6369fb3a18;
PyObject *const_str_digest_fe366936efa241de0d402bbf346a2297;
PyObject *const_str_plain_streamable_http_client;
PyObject *const_str_digest_fe7d14f65d7c78de28cba82446cebd7e;
PyObject *const_str_plain_api_client;
PyObject *const_str_plain__http_options;
PyObject *const_str_plain_base_url;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_db604ec954fa1251a04b0e17541bb284;
PyObject *const_str_plain_toolset_name;
PyObject *const_str_plain_location;
PyObject *const_str_plain_global;
PyObject *const_str_digest_d92d02aa48eb05a3aa46923b2e70ddd2;
PyObject *const_str_plain__MULTI_REGIONAL_LOCATIONS;
PyObject *const_str_digest_2ef3f29a1e489111c8760f54728a0ab7;
PyObject *const_str_digest_16696cafba918de50b532966485c9990;
PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
PyObject *const_str_digest_b8b60a977d0833879cb13726ac5344c7;
PyObject *const_str_plain__async_access_token;
PyObject *const_str_plain_project;
PyObject *const_str_plain_headers;
PyObject *const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
PyObject *const_str_plain_Authorization;
PyObject *const_str_digest_99e14666ab80d72b0e49704ec3d5fc2b;
PyObject *const_str_plain_set_mcp_usage_header;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain_AsyncClient;
PyObject *const_tuple_str_plain_headers_str_plain_timeout_tuple;
PyObject *const_tuple_str_plain_url_str_plain_http_client_tuple;
PyObject *const_str_plain_initialize;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_exc;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_return;
PyObject *const_str_plain__extract_errors;
PyObject *const_str_digest_a7a948245c7ab5ba27383cc56823bd3d;
PyObject *const_tuple_str_plain_ExceptionGroup_str_plain_BaseExceptionGroup_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_str_digest_41bf8f7b8ae55fad1aee98c246a735bc;
PyObject *const_str_digest_45736f8dc9d9bbfc5ead9a2b8febd8df;
PyObject *const_str_plain__connect_agent_platform_mcp;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_plain_response;
PyObject *const_str_digest_566fe207fb067ceea90ef90f97b9ea7e;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_text;
PyObject *const_str_chr_41;
PyObject *const_str_plain_error_messages;
PyObject *const_str_plain_append;
PyObject *const_str_digest_7abea8b31def797bc539d68dbf5caa51;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_str_plain_google;
PyObject *const_str_digest_eda478fe391780f02c579185f1943916;
PyObject *const_tuple_str_plain_Request_tuple;
PyObject *const_str_plain_Request;
PyObject *const_tuple_str_plain__common_tuple;
PyObject *const_str_plain__common;
PyObject *const_tuple_str_plain_types_tuple;
PyObject *const_str_plain__api_client;
PyObject *const_tuple_str_plain__MULTI_REGIONAL_LOCATIONS_tuple;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_create_mcp_http_client;
PyObject *const_str_digest_7616cac5e9c4e87f709eb47f95cd5052;
PyObject *const_tuple_str_plain_Tool_tuple;
PyObject *const_tuple_str_plain_ClientSession_tuple;
PyObject *const_str_plain_ClientSession;
PyObject *const_str_digest_3a173cc76c0ea3bea7c5fc094ac90b2d;
PyObject *const_tuple_str_plain_streamable_http_client_tuple;
PyObject *const_str_digest_5a96fe393324c5a505171341395f2f86;
PyObject *const_tuple_str_plain_create_mcp_http_client_tuple;
PyObject *const_str_plain_tool;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_is_agent_platform;
PyObject *const_str_plain_mcp_to_gemini_tools;
PyObject *const_str_plain_ToolListUnion;
PyObject *const_str_plain_has_mcp_tool_usage;
PyObject *const_str_plain_has_mcp_session_usage;
PyObject *const_dict_0fd0c1b3f2b41f70c318c24f6c5e7663;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_StringDict;
PyObject *const_str_plain_asynccontextmanager;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_digest_fba8011918a92c0dad322a2c225091c0;
PyObject *const_str_digest_49d02758b1433a6ca12134c3de142537;
PyObject *const_tuple_e4d8ffb2130060fc052ebd3d28a5a1a3_tuple;
PyObject *const_tuple_e87d804eeec45ac9ec2ba63c7c303323_tuple;
PyObject *const_tuple_str_plain__extract_errors_str_plain_error_messages_tuple;
PyObject *const_tuple_4b226474069f681bd4d65765544d1198_tuple;
PyObject *const_tuple_str_plain_tool_tuple;
PyObject *const_tuple_str_plain_tools_str_plain_tool_tuple;
PyObject *const_tuple_str_plain_tools_str_plain_is_agent_platform_tuple;
PyObject *const_tuple_424eabc9f4f092c79d3c4bdc98f2ed35_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[136];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._mcp_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tool);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Schema);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_json_schema);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONSchema);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__filter_to_supported_schema);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_inputSchema);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_schema_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_declarations_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_8907b1f0abbcce8d0755de053b9c1528);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters_json_schema);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_4747396ee64e0c3d6b040f42a8f3e339);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_agent_platform_to_gemini_tool);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_to_gemini_tool);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_f20535e9c3049abfac966895968a9128);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_McpClientSession);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_McpTool);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f29f6f3062c9325ca96892e425c346d);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_89294b99a2b1e20681a2d41a5a4f0a6f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcp);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_PackageNotFoundError);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_0eb2e888ef17bbad9e7375e928fbee32);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a323eea3d037c14008d3cc1854afbacf_str_empty_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_2406271d2091bbc8a529898603a759e2);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_af2bb57b6ab4350362c46c0c7b57589b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_list_6392a2829f6efcede4c136bbcede9275_list);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_078ca8a998feb284fb6bbc1aec580e73_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_filtered_schema);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_73edf7f2d7e93a2f8e6567d015267bfc_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_d5907d8d64de24eda58e31359f52469d_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_feb9f1c8b01c73df12780d6369fb3a18);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe366936efa241de0d402bbf346a2297);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_streamable_http_client);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe7d14f65d7c78de28cba82446cebd7e);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_client);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__http_options);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_url);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_db604ec954fa1251a04b0e17541bb284);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_toolset_name);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_location);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_global);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_d92d02aa48eb05a3aa46923b2e70ddd2);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ef3f29a1e489111c8760f54728a0ab7);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_16696cafba918de50b532966485c9990);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b60a977d0833879cb13726ac5344c7);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__async_access_token);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_project);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_99e14666ab80d72b0e49704ec3d5fc2b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_mcp_usage_header);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_timeout_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_http_client_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_initialize);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract_errors);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7a948245c7ab5ba27383cc56823bd3d);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExceptionGroup_str_plain_BaseExceptionGroup_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_41bf8f7b8ae55fad1aee98c246a735bc);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_45736f8dc9d9bbfc5ead9a2b8febd8df);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__connect_agent_platform_mcp);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_566fe207fb067ceea90ef90f97b9ea7e);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_messages);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_7abea8b31def797bc539d68dbf5caa51);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_google);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_client);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__MULTI_REGIONAL_LOCATIONS_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_mcp_http_client);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_7616cac5e9c4e87f709eb47f95cd5052);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tool_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientSession_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a173cc76c0ea3bea7c5fc094ac90b2d);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_streamable_http_client_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a96fe393324c5a505171341395f2f86);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_mcp_http_client_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_agent_platform);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_to_gemini_tools);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolListUnion);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_mcp_tool_usage);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_mcp_session_usage);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_0fd0c1b3f2b41f70c318c24f6c5e7663);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringDict);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_fba8011918a92c0dad322a2c225091c0);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_49d02758b1433a6ca12134c3de142537);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_e4d8ffb2130060fc052ebd3d28a5a1a3_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_e87d804eeec45ac9ec2ba63c7c303323_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__extract_errors_str_plain_error_messages_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_4b226474069f681bd4d65765544d1198_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tool_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_tool_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_is_agent_platform_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_424eabc9f4f092c79d3c4bdc98f2ed35_tuple);
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
void checkModuleConstants_google$genai$_mcp_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tool);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Schema);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_json_schema);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JSONSchema);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__filter_to_supported_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__filter_to_supported_schema);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_inputSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inputSchema);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_json_schema_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_function_declarations_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_function_declarations_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_8907b1f0abbcce8d0755de053b9c1528));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8907b1f0abbcce8d0755de053b9c1528);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters_json_schema);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_4747396ee64e0c3d6b040f42a8f3e339));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4747396ee64e0c3d6b040f42a8f3e339);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_agent_platform_to_gemini_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_agent_platform_to_gemini_tool);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_to_gemini_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcp_to_gemini_tool);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_f20535e9c3049abfac966895968a9128));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f20535e9c3049abfac966895968a9128);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_McpClientSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_McpClientSession);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_McpTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_McpTool);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f29f6f3062c9325ca96892e425c346d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f29f6f3062c9325ca96892e425c346d);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_89294b99a2b1e20681a2d41a5a4f0a6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89294b99a2b1e20681a2d41a5a4f0a6f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcp);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_PackageNotFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PackageNotFoundError);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_0eb2e888ef17bbad9e7375e928fbee32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0eb2e888ef17bbad9e7375e928fbee32);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a323eea3d037c14008d3cc1854afbacf_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a323eea3d037c14008d3cc1854afbacf_str_empty_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_2406271d2091bbc8a529898603a759e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2406271d2091bbc8a529898603a759e2);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_af2bb57b6ab4350362c46c0c7b57589b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af2bb57b6ab4350362c46c0c7b57589b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_fields);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_list_6392a2829f6efcede4c136bbcede9275_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_6392a2829f6efcede4c136bbcede9275_list);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_078ca8a998feb284fb6bbc1aec580e73_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_078ca8a998feb284fb6bbc1aec580e73_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_filtered_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filtered_schema);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_73edf7f2d7e93a2f8e6567d015267bfc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_73edf7f2d7e93a2f8e6567d015267bfc_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_d5907d8d64de24eda58e31359f52469d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5907d8d64de24eda58e31359f52469d_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_feb9f1c8b01c73df12780d6369fb3a18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_feb9f1c8b01c73df12780d6369fb3a18);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe366936efa241de0d402bbf346a2297));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe366936efa241de0d402bbf346a2297);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_streamable_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_streamable_http_client);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe7d14f65d7c78de28cba82446cebd7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe7d14f65d7c78de28cba82446cebd7e);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_client);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__http_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http_options);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_url);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_db604ec954fa1251a04b0e17541bb284));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db604ec954fa1251a04b0e17541bb284);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_toolset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toolset_name);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_location);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_global));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_global);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_d92d02aa48eb05a3aa46923b2e70ddd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d92d02aa48eb05a3aa46923b2e70ddd2);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ef3f29a1e489111c8760f54728a0ab7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ef3f29a1e489111c8760f54728a0ab7);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_16696cafba918de50b532966485c9990));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16696cafba918de50b532966485c9990);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b60a977d0833879cb13726ac5344c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b60a977d0833879cb13726ac5344c7);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__async_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__async_access_token);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_project);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_99e14666ab80d72b0e49704ec3d5fc2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99e14666ab80d72b0e49704ec3d5fc2b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_mcp_usage_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_mcp_usage_header);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncClient);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_str_plain_timeout_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_http_client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_http_client_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_initialize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initialize);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract_errors);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7a948245c7ab5ba27383cc56823bd3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7a948245c7ab5ba27383cc56823bd3d);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExceptionGroup_str_plain_BaseExceptionGroup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ExceptionGroup_str_plain_BaseExceptionGroup_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_41bf8f7b8ae55fad1aee98c246a735bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41bf8f7b8ae55fad1aee98c246a735bc);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_45736f8dc9d9bbfc5ead9a2b8febd8df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45736f8dc9d9bbfc5ead9a2b8febd8df);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__connect_agent_platform_mcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connect_agent_platform_mcp);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_566fe207fb067ceea90ef90f97b9ea7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_566fe207fb067ceea90ef90f97b9ea7e);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_messages);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_7abea8b31def797bc539d68dbf5caa51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7abea8b31def797bc539d68dbf5caa51);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__common_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_types_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_client);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__MULTI_REGIONAL_LOCATIONS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__MULTI_REGIONAL_LOCATIONS_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_mcp_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_mcp_http_client);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_7616cac5e9c4e87f709eb47f95cd5052));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7616cac5e9c4e87f709eb47f95cd5052);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Tool_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientSession_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClientSession_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientSession);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a173cc76c0ea3bea7c5fc094ac90b2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a173cc76c0ea3bea7c5fc094ac90b2d);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_streamable_http_client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_streamable_http_client_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a96fe393324c5a505171341395f2f86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a96fe393324c5a505171341395f2f86);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_mcp_http_client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_mcp_http_client_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_agent_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_agent_platform);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_to_gemini_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcp_to_gemini_tools);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolListUnion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolListUnion);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_mcp_tool_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_mcp_tool_usage);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_mcp_session_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_mcp_session_usage);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_0fd0c1b3f2b41f70c318c24f6c5e7663));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0fd0c1b3f2b41f70c318c24f6c5e7663);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringDict);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asynccontextmanager);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_fba8011918a92c0dad322a2c225091c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fba8011918a92c0dad322a2c225091c0);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_49d02758b1433a6ca12134c3de142537));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49d02758b1433a6ca12134c3de142537);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_e4d8ffb2130060fc052ebd3d28a5a1a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e4d8ffb2130060fc052ebd3d28a5a1a3_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_e87d804eeec45ac9ec2ba63c7c303323_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e87d804eeec45ac9ec2ba63c7c303323_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__extract_errors_str_plain_error_messages_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__extract_errors_str_plain_error_messages_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_4b226474069f681bd4d65765544d1198_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b226474069f681bd4d65765544d1198_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tool_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tools_str_plain_tool_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tools_str_plain_is_agent_platform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tools_str_plain_is_agent_platform_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_424eabc9f4f092c79d3c4bdc98f2ed35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_424eabc9f4f092c79d3c4bdc98f2ed35_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_google$genai$_mcp_utils$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$McpClientSession(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_McpClientSession);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_McpClientSession, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_McpClientSession);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_McpClientSession, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$McpTool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_McpTool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_McpTool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_McpTool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_McpTool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$_MULTI_REGIONAL_LOCATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$_common(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$_filter_to_supported_schema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__filter_to_supported_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__filter_to_supported_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__filter_to_supported_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__filter_to_supported_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__filter_to_supported_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__filter_to_supported_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__filter_to_supported_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__filter_to_supported_schema);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$agent_platform_to_gemini_tool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_agent_platform_to_gemini_tool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_agent_platform_to_gemini_tool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_agent_platform_to_gemini_tool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_agent_platform_to_gemini_tool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_agent_platform_to_gemini_tool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_agent_platform_to_gemini_tool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_agent_platform_to_gemini_tool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_agent_platform_to_gemini_tool);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$contextlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$httpx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$mcp_to_gemini_tool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mcp_to_gemini_tool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mcp_to_gemini_tool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mcp_to_gemini_tool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mcp_to_gemini_tool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tool);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$set_mcp_usage_header(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_set_mcp_usage_header);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_mcp_usage_header);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_mcp_usage_header, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_mcp_usage_header);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_mcp_usage_header, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_set_mcp_usage_header);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_set_mcp_usage_header);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_mcp_usage_header);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$streamable_http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_streamable_http_client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_streamable_http_client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_streamable_http_client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_streamable_http_client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_mcp_utils$types(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_mcp_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_mcp_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain_types);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_mcp_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_types);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_types, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_types);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_types, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain_types);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain_types);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_types);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_02a635b1369202d434e55703d8e16bd3;
static PyCodeObject *code_objects_28445e806c80e98d42c5e883f4e88cff;
static PyCodeObject *code_objects_af6dd4b7a61355e1432f4ad591f399d5;
static PyCodeObject *code_objects_cb6a1cd87a6d7960984e53c371ccd881;
static PyCodeObject *code_objects_ead0b06586d955962472363b43bfbd90;
static PyCodeObject *code_objects_23380e4528dd297c409b20c78acff859;
static PyCodeObject *code_objects_962fccd18178790a5f810713669aff7c;
static PyCodeObject *code_objects_a61a2faf0eeb5f92d7368e7fd3683597;
static PyCodeObject *code_objects_65e0a514a3f044e42ae7d1252eae7066;
static PyCodeObject *code_objects_4976fd473f0b6ae9f45c924196292945;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fba8011918a92c0dad322a2c225091c0); CHECK_OBJECT(module_filename_obj);
code_objects_02a635b1369202d434e55703d8e16bd3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_49d02758b1433a6ca12134c3de142537, mod_consts.const_str_digest_49d02758b1433a6ca12134c3de142537, NULL, NULL, 0, 0, 0);
code_objects_28445e806c80e98d42c5e883f4e88cff = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__connect_agent_platform_mcp, mod_consts.const_str_plain__connect_agent_platform_mcp, mod_consts.const_tuple_e4d8ffb2130060fc052ebd3d28a5a1a3_tuple, NULL, 2, 0, 0);
code_objects_af6dd4b7a61355e1432f4ad591f399d5 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__extract_errors, mod_consts.const_str_digest_a7a948245c7ab5ba27383cc56823bd3d, mod_consts.const_tuple_e87d804eeec45ac9ec2ba63c7c303323_tuple, mod_consts.const_tuple_str_plain__extract_errors_str_plain_error_messages_tuple, 1, 0, 0);
code_objects_cb6a1cd87a6d7960984e53c371ccd881 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__filter_to_supported_schema, mod_consts.const_str_plain__filter_to_supported_schema, mod_consts.const_tuple_4b226474069f681bd4d65765544d1198_tuple, NULL, 1, 0, 0);
code_objects_ead0b06586d955962472363b43bfbd90 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_agent_platform_to_gemini_tool, mod_consts.const_str_plain_agent_platform_to_gemini_tool, mod_consts.const_tuple_str_plain_tool_tuple, NULL, 1, 0, 0);
code_objects_23380e4528dd297c409b20c78acff859 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has_mcp_session_usage, mod_consts.const_str_plain_has_mcp_session_usage, mod_consts.const_tuple_str_plain_tools_str_plain_tool_tuple, NULL, 1, 0, 0);
code_objects_962fccd18178790a5f810713669aff7c = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has_mcp_tool_usage, mod_consts.const_str_plain_has_mcp_tool_usage, mod_consts.const_tuple_str_plain_tools_str_plain_tool_tuple, NULL, 1, 0, 0);
code_objects_a61a2faf0eeb5f92d7368e7fd3683597 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_mcp_to_gemini_tool, mod_consts.const_str_plain_mcp_to_gemini_tool, mod_consts.const_tuple_str_plain_tool_tuple, NULL, 1, 0, 0);
code_objects_65e0a514a3f044e42ae7d1252eae7066 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_mcp_to_gemini_tools, mod_consts.const_str_plain_mcp_to_gemini_tools, mod_consts.const_tuple_str_plain_tools_str_plain_is_agent_platform_tuple, NULL, 2, 0, 0);
code_objects_4976fd473f0b6ae9f45c924196292945 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_mcp_usage_header, mod_consts.const_str_plain_set_mcp_usage_header, mod_consts.const_tuple_424eabc9f4f092c79d3c4bdc98f2ed35_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tool = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool = MAKE_FUNCTION_FRAME(tstate, code_objects_a61a2faf0eeb5f92d7368e7fd3683597, module_google$genai$_mcp_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool = cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_list_element_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Tool);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_tool);
tmp_expression_value_2 = par_tool;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_description;
CHECK_OBJECT(par_tool);
tmp_expression_value_3 = par_tool;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_description);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_parameters;
tmp_expression_value_5 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Schema);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_from_json_schema);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_6 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_JSONSchema);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_called_value_3 = module_var_accessor_google$genai$_mcp_utils$_filter_to_supported_schema(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__filter_to_supported_schema);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 62;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(par_tool);
tmp_expression_value_7 = par_tool;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_inputSchema);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 62;
type_description_1 = "o";
    goto dict_build_exception_1;
}
frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool->m_frame.f_lineno = 62;
tmp_direct_call_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 62;
type_description_1 = "o";
    goto dict_build_exception_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_kw_call_value_0_2 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_1 = "o";
    goto dict_build_exception_1;
}
frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool->m_frame.f_lineno = 60;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_dict_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_json_schema_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool->m_frame.f_lineno = 56;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_function_declarations_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool,
    type_description_1,
    par_tool
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool == cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool);
    cache_frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tool = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool = MAKE_FUNCTION_FRAME(tstate, code_objects_ead0b06586d955962472363b43bfbd90, module_google$genai$_mcp_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool = cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_list_element_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Tool);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_tool);
tmp_expression_value_2 = par_tool;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_description;
CHECK_OBJECT(par_tool);
tmp_expression_value_3 = par_tool;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_description);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_parameters_json_schema;
CHECK_OBJECT(par_tool);
tmp_expression_value_4 = par_tool;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_inputSchema);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool->m_frame.f_lineno = 71;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_function_declarations_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool,
    type_description_1,
    par_tool
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool == cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool);
    cache_frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tools = python_pars[0];
PyObject *par_is_agent_platform = python_pars[1];
PyObject *outline_0_var_tool = NULL;
PyObject *outline_1_var_tool = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools = MAKE_FUNCTION_FRAME(tstate, code_objects_65e0a514a3f044e42ae7d1252eae7066, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools = cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_is_agent_platform);
tmp_truth_name_1 = CHECK_IF_TRUE(par_is_agent_platform);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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


exception_lineno = 88;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 88;
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
    PyObject *old = outline_0_var_tool;
    outline_0_var_tool = tmp_assign_source_4;
    Py_INCREF(outline_0_var_tool);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_1 = module_var_accessor_google$genai$_mcp_utils$agent_platform_to_gemini_tool(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_agent_platform_to_gemini_tool);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(outline_0_var_tool);
tmp_args_element_value_1 = outline_0_var_tool;
frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools->m_frame.f_lineno = 88;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
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
Py_XDECREF(outline_0_var_tool);
outline_0_var_tool = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_tool);
outline_0_var_tool = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 88;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_tools);
tmp_iter_arg_2 = par_tools;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 89;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_tool;
    outline_1_var_tool = tmp_assign_source_8;
    Py_INCREF(outline_1_var_tool);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_2 = module_var_accessor_google$genai$_mcp_utils$mcp_to_gemini_tool(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mcp_to_gemini_tool);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(outline_1_var_tool);
tmp_args_element_value_2 = outline_1_var_tool;
frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools->m_frame.f_lineno = 89;
tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_return_value = tmp_listcomp_2__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_1_var_tool);
outline_1_var_tool = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_tool);
outline_1_var_tool = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 89;
goto frame_exception_exit_1;
outline_result_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools,
    type_description_1,
    par_tools,
    par_is_agent_platform
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools == cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools);
    cache_frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools);

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
CHECK_OBJECT(par_is_agent_platform);
Py_DECREF(par_is_agent_platform);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);
CHECK_OBJECT(par_is_agent_platform);
Py_DECREF(par_is_agent_platform);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tools = python_pars[0];
PyObject *var_tool = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage = MAKE_FUNCTION_FRAME(tstate, code_objects_962fccd18178790a5f810713669aff7c, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage = cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_tools);
tmp_iter_arg_1 = par_tools;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 96;
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
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_tool);
tmp_isinstance_inst_1 = var_tool;
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_mcp_utils$McpTool(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpTool);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_tool);
tmp_isinstance_inst_2 = var_tool;
tmp_isinstance_cls_2 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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


exception_lineno = 96;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage,
    type_description_1,
    par_tools,
    var_tool
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage == cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage);
    cache_frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage);

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
Py_XDECREF(var_tool);
var_tool = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tool);
var_tool = NULL;
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


static PyObject *impl_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tools = python_pars[0];
PyObject *var_tool = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage = MAKE_FUNCTION_FRAME(tstate, code_objects_23380e4528dd297c409b20c78acff859, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage = cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_tools);
tmp_iter_arg_1 = par_tools;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 106;
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
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_tool);
tmp_isinstance_inst_1 = var_tool;
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage,
    type_description_1,
    par_tools,
    var_tool
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage == cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage);
    cache_frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage);

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
Py_XDECREF(var_tool);
var_tool = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tool);
var_tool = NULL;
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


static PyObject *impl_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_headers = python_pars[0];
PyObject *var_version_label = NULL;
PyObject *var_existing_header = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
PyObject *tmp_importlib_metadata_version_function;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header = MAKE_FUNCTION_FRAME(tstate, code_objects_4976fd473f0b6ae9f45c924196292945, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header = cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_distribution_name_value_1;
tmp_distribution_name_value_1 = mod_consts.const_str_plain_mcp;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_importlib_metadata_version_function = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_version);
}
assert(!(tmp_importlib_metadata_version_function == NULL));
frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame.f_lineno = 117;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_importlib_metadata_version_function, tmp_distribution_name_value_1);
CHECK_OBJECT(tmp_importlib_metadata_version_function);
Py_DECREF(tmp_importlib_metadata_version_function);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_version_label == NULL);
var_version_label = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header, exception_keeper_lineno_1);
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
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_PackageNotFoundError);
}
assert(!(tmp_cmp_expr_right_2 == NULL));
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_digest_0eb2e888ef17bbad9e7375e928fbee32;
assert(var_version_label == NULL);
Py_INCREF(tmp_assign_source_2);
var_version_label = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 116;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame)) {
        frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_2:;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame.f_lineno = 120;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a323eea3d037c14008d3cc1854afbacf_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_existing_header == NULL);
var_existing_header = tmp_assign_source_3;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_existing_header);
tmp_add_expr_left_1 = var_existing_header;
tmp_tuple_element_1 = mod_consts.const_str_digest_2406271d2091bbc8a529898603a759e2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_version_label);
tmp_format_value_1 = var_version_label;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
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
tmp_add_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_expression_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame.f_lineno = 121;
tmp_ass_subvalue_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_ass_subscribed_1 = par_headers;
tmp_ass_subscript_1 = mod_consts.const_str_digest_a323eea3d037c14008d3cc1854afbacf;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header,
    type_description_1,
    par_headers,
    var_version_label,
    var_existing_header
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header == cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header);
    cache_frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header);

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
Py_XDECREF(var_version_label);
var_version_label = NULL;
Py_XDECREF(var_existing_header);
var_existing_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_version_label);
var_version_label = NULL;
Py_XDECREF(var_existing_header);
var_existing_header = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
PyObject *var_supported_fields = NULL;
PyObject *var_filtered_schema = NULL;
PyObject *var_field_name = NULL;
PyObject *var_field_value = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *outline_1_var_key = NULL;
PyObject *outline_1_var_value = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_cb6a1cd87a6d7960984e53c371ccd881, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema = cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_JSONSchema);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_model_fields);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 130;
tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
assert(var_supported_fields == NULL);
var_supported_fields = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_call_arg_element_1;
CHECK_OBJECT(var_supported_fields);
tmp_expression_value_4 = var_supported_fields;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
assert(!(tmp_called_value_2 == NULL));
tmp_call_arg_element_1 = MAKE_LIST5(tstate, mod_consts.const_list_6392a2829f6efcede4c136bbcede9275_list);
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 132;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(var_filtered_schema == NULL);
var_filtered_schema = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_schema);
tmp_expression_value_5 = par_schema;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 145;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooNNNoo";
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
type_description_1 = "oooNNNoo";
exception_lineno = 145;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 145;
type_description_1 = "oooNNNoo";
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_field_name;
    var_field_name = tmp_assign_source_8;
    Py_INCREF(var_field_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_field_value;
    var_field_value = tmp_assign_source_9;
    Py_INCREF(var_field_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_field_name);
tmp_cmp_expr_left_1 = var_field_name;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_078ca8a998feb284fb6bbc1aec580e73_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
tmp_called_value_4 = module_var_accessor_google$genai$_mcp_utils$_filter_to_supported_schema(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__filter_to_supported_schema);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_field_value);
tmp_args_element_value_1 = var_field_value;
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
if (var_filtered_schema == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filtered_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_filtered_schema;
CHECK_OBJECT(var_field_name);
tmp_dictset_key = var_field_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_field_name);
tmp_cmp_expr_left_2 = var_field_name;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_73edf7f2d7e93a2f8e6567d015267bfc_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooNNNoo";
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
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_field_value);
tmp_iter_arg_3 = var_field_value;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooNNNoo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_11;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooNNNoo";
exception_lineno = 149;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_13;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_5 = module_var_accessor_google$genai$_mcp_utils$_filter_to_supported_schema(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__filter_to_supported_schema);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "oooNNNoo";
    goto try_except_handler_6;
}
CHECK_OBJECT(outline_0_var_value);
tmp_args_element_value_2 = outline_0_var_value;
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 150;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooNNNoo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooNNNoo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooNNNoo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_dictset_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
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
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 149;
goto try_except_handler_2;
outline_result_1:;
if (var_filtered_schema == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filtered_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_filtered_schema;
CHECK_OBJECT(var_field_name);
tmp_dictset_key = var_field_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_field_name);
tmp_cmp_expr_left_3 = var_field_name;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_d5907d8d64de24eda58e31359f52469d_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_field_value);
tmp_expression_value_6 = var_field_value;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_items);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_7;
}
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 155;
tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_7;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_7;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_15;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_3 = tmp_dictcontraction_1__$0;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooNNNoo";
exception_lineno = 153;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_5 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooNNNoo";
    goto try_except_handler_10;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
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

goto try_except_handler_9;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_8;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_20 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_1_var_key;
    outline_1_var_key = tmp_assign_source_20;
    Py_INCREF(outline_1_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_21 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_1_var_value;
    outline_1_var_value = tmp_assign_source_21;
    Py_INCREF(outline_1_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_1_var_key);
tmp_dictset38_key_1 = outline_1_var_key;
tmp_called_value_7 = module_var_accessor_google$genai$_mcp_utils$_filter_to_supported_schema(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__filter_to_supported_schema);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooNNNoo";
    goto try_except_handler_8;
}
CHECK_OBJECT(outline_1_var_value);
tmp_args_element_value_3 = outline_1_var_value;
frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame.f_lineno = 154;
tmp_dictset38_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooNNNoo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooNNNoo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooNNNoo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset_value = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
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
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_XDECREF(outline_1_var_key);
outline_1_var_key = NULL;
Py_XDECREF(outline_1_var_value);
outline_1_var_value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_key);
outline_1_var_key = NULL;
Py_XDECREF(outline_1_var_value);
outline_1_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 153;
goto try_except_handler_2;
outline_result_2:;
if (var_filtered_schema == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filtered_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_filtered_schema;
CHECK_OBJECT(var_field_name);
tmp_dictset_key = var_field_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_field_name);
tmp_cmp_expr_left_4 = var_field_name;
CHECK_OBJECT(var_supported_fields);
tmp_cmp_expr_right_4 = var_supported_fields;
tmp_res = PySet_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_field_value);
tmp_dictset_value = var_field_value;
if (var_filtered_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filtered_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_filtered_schema;
CHECK_OBJECT(var_field_name);
tmp_dictset_key = var_field_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
branch_no_4:;
branch_end_3:;
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooNNNoo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_filtered_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filtered_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooNNNoo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_filtered_schema;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema,
    type_description_1,
    par_schema,
    var_supported_fields,
    var_filtered_schema,
    NULL,
    NULL,
    NULL,
    var_field_name,
    var_field_value
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema == cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema);
    cache_frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_supported_fields);
CHECK_OBJECT(var_supported_fields);
Py_DECREF(var_supported_fields);
var_supported_fields = NULL;
Py_XDECREF(var_filtered_schema);
var_filtered_schema = NULL;
Py_XDECREF(var_field_name);
var_field_name = NULL;
Py_XDECREF(var_field_value);
var_field_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_supported_fields);
var_supported_fields = NULL;
Py_XDECREF(var_filtered_schema);
var_filtered_schema = NULL;
Py_XDECREF(var_field_name);
var_field_name = NULL;
Py_XDECREF(var_field_value);
var_field_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_api_client = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_toolset_name = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_api_client;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_toolset_name;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_api_client);
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
par_api_client = NULL;
CHECK_OBJECT(par_toolset_name);
CHECK_OBJECT(par_toolset_name);
Py_DECREF(par_toolset_name);
par_toolset_name = NULL;
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
struct google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_locals {
PyObject *var_base_url;
PyObject *var_mcp_url;
PyObject *var_location;
PyObject *var_token;
PyObject *var_project;
PyObject *var_headers;
PyObject *var_http_client;
PyObject *var_streams;
PyObject *var_read_stream;
PyObject *var_write_stream;
PyObject *var__;
PyObject *var_session;
PyObject *var_eg;
struct Nuitka_CellObject *var_error_messages;
struct Nuitka_CellObject *var__extract_errors;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
PyObject *tmp_with_3__enter;
PyObject *tmp_with_3__exit;
nuitka_bool tmp_with_3__indicator;
PyObject *tmp_with_3__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
int exception_keeper_lineno_20;
};
#endif

static PyObject *google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_locals *asyncgen_heap = (struct google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 18: goto yield_return_18;
case 17: goto yield_return_17;
case 16: goto yield_return_16;
case 15: goto yield_return_15;
case 14: goto yield_return_14;
case 13: goto yield_return_13;
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_base_url = NULL;
asyncgen_heap->var_mcp_url = NULL;
asyncgen_heap->var_location = NULL;
asyncgen_heap->var_token = NULL;
asyncgen_heap->var_project = NULL;
asyncgen_heap->var_headers = NULL;
asyncgen_heap->var_http_client = NULL;
asyncgen_heap->var_streams = NULL;
asyncgen_heap->var_read_stream = NULL;
asyncgen_heap->var_write_stream = NULL;
asyncgen_heap->var__ = NULL;
asyncgen_heap->var_session = NULL;
asyncgen_heap->var_eg = NULL;
asyncgen_heap->var_error_messages = Nuitka_Cell_NewEmpty();
asyncgen_heap->var__extract_errors = Nuitka_Cell_NewEmpty();
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
asyncgen_heap->tmp_with_1__enter = NULL;
asyncgen_heap->tmp_with_1__exit = NULL;
asyncgen_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_1__source = NULL;
asyncgen_heap->tmp_with_2__enter = NULL;
asyncgen_heap->tmp_with_2__exit = NULL;
asyncgen_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_2__source = NULL;
asyncgen_heap->tmp_with_3__enter = NULL;
asyncgen_heap->tmp_with_3__exit = NULL;
asyncgen_heap->tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_3__source = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_28445e806c80e98d42c5e883f4e88cff, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$genai$_mcp_utils$streamable_http_client(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_streamable_http_client);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 166;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_fe7d14f65d7c78de28cba82446cebd7e;
asyncgen->m_frame->m_frame.f_lineno = 167;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 167;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(asyncgen_heap->var_base_url == NULL);
Py_INCREF(tmp_assign_source_1);
asyncgen_heap->var_base_url = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__http_options);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__http_options);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
asyncgen_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_base_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__http_options);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_base_url);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = asyncgen_heap->var_base_url;
    assert(old != NULL);
    asyncgen_heap->var_base_url = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_truth_name_1 = CHECK_IF_TRUE(asyncgen_heap->var_base_url);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_expression_value_6 = asyncgen_heap->var_base_url;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_endswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 176;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_1);

asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_expression_value_7 = asyncgen_heap->var_base_url;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 177;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = asyncgen_heap->var_base_url;
    assert(old != NULL);
    asyncgen_heap->var_base_url = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
if (asyncgen_heap->var_base_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_base_url);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_format_value_1 = asyncgen_heap->var_base_url;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_db604ec954fa1251a04b0e17541bb284;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_toolset_name);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_1;
}

tmp_format_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_4 == NULL));
assert(asyncgen_heap->var_mcp_url == NULL);
asyncgen_heap->var_mcp_url = tmp_assign_source_4;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 180;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_name_value_1 = mod_consts.const_str_plain_location;
tmp_default_value_1 = mod_consts.const_str_plain_global;
tmp_assign_source_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 180;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_location == NULL);
asyncgen_heap->var_location = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(asyncgen_heap->var_location);
tmp_cmp_expr_left_2 = asyncgen_heap->var_location;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_global;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 181;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_d92d02aa48eb05a3aa46923b2e70ddd2;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_toolset_name);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_2;
}

tmp_format_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
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
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_6 == NULL));
assert(asyncgen_heap->var_mcp_url == NULL);
asyncgen_heap->var_mcp_url = tmp_assign_source_6;
}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(asyncgen_heap->var_location);
tmp_cmp_expr_left_3 = asyncgen_heap->var_location;
tmp_cmp_expr_right_3 = module_var_accessor_google$genai$_mcp_utils$_MULTI_REGIONAL_LOCATIONS(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 183;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
asyncgen_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 183;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (asyncgen_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_2ef3f29a1e489111c8760f54728a0ab7;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(asyncgen_heap->var_location);
tmp_format_value_4 = asyncgen_heap->var_location;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_16696cafba918de50b532966485c9990;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_toolset_name);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_3;
}

tmp_format_value_5 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_7 == NULL));
assert(asyncgen_heap->var_mcp_url == NULL);
asyncgen_heap->var_mcp_url = tmp_assign_source_7;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(asyncgen_heap->var_location);
tmp_format_value_6 = asyncgen_heap->var_location;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_b8b60a977d0833879cb13726ac5344c7;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_toolset_name);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_4;
}

tmp_format_value_7 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_assign_source_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_8 == NULL));
assert(asyncgen_heap->var_mcp_url == NULL);
asyncgen_heap->var_mcp_url = tmp_assign_source_8;
}
branch_end_6:;
branch_end_5:;
branch_end_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_instance_1;
asyncgen->m_frame->m_frame.f_lineno = 188;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 188;
tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__async_access_token);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_normal);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_9;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = yield_return_value;
assert(asyncgen_heap->var_token == NULL);
asyncgen_heap->var_token = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 189;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_name_value_2 = mod_consts.const_str_plain_project;
tmp_default_value_2 = Py_None;
tmp_assign_source_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 189;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_project == NULL);
asyncgen_heap->var_project = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(asyncgen_heap->var_headers == NULL);
asyncgen_heap->var_headers = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_12;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain__http_options);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (asyncgen_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__http_options);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__http_options);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__http_options);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = asyncgen_heap->var_headers;
    assert(old != NULL);
    asyncgen_heap->var_headers = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
CHECK_OBJECT(asyncgen_heap->var_token);
tmp_format_value_8 = asyncgen_heap->var_token;
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 195;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
asyncgen_heap->tmp_dictset_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(asyncgen_heap->tmp_dictset_value == NULL));
CHECK_OBJECT(asyncgen_heap->var_headers);
asyncgen_heap->tmp_dictset_dict = asyncgen_heap->var_headers;
asyncgen_heap->tmp_dictset_key = mod_consts.const_str_plain_Authorization;
assert(PyDict_CheckExact(asyncgen_heap->tmp_dictset_dict));
asyncgen_heap->tmp_res = PyDict_SetItem(asyncgen_heap->tmp_dictset_dict, asyncgen_heap->tmp_dictset_key, asyncgen_heap->tmp_dictset_value);

CHECK_OBJECT(asyncgen_heap->tmp_dictset_value);
Py_DECREF(asyncgen_heap->tmp_dictset_value);
assert(!(asyncgen_heap->tmp_res != 0));
}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
CHECK_OBJECT(asyncgen_heap->var_project);
tmp_truth_name_5 = CHECK_IF_TRUE(asyncgen_heap->var_project);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 196;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(asyncgen_heap->var_project);
tmp_ass_subvalue_1 = asyncgen_heap->var_project;
CHECK_OBJECT(asyncgen_heap->var_headers);
tmp_ass_subscribed_1 = asyncgen_heap->var_headers;
tmp_ass_subscript_1 = mod_consts.const_str_digest_99e14666ab80d72b0e49704ec3d5fc2b;
asyncgen_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 197;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
}
branch_no_8:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_google$genai$_mcp_utils$set_mcp_usage_header(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_set_mcp_usage_header);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_headers);
tmp_args_element_value_1 = asyncgen_heap->var_headers;
asyncgen->m_frame->m_frame.f_lineno = 199;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_18 = module_var_accessor_google$genai$_mcp_utils$httpx(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_AsyncClient);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_headers);
tmp_kw_call_value_0_1 = asyncgen_heap->var_headers;
tmp_kw_call_value_1_1 = Py_None;
asyncgen->m_frame->m_frame.f_lineno = 201;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_headers_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_http_client == NULL);
asyncgen_heap->var_http_client = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(asyncgen_heap->var_http_client);
tmp_assign_source_14 = asyncgen_heap->var_http_client;
assert(asyncgen_heap->tmp_with_3__source == NULL);
Py_INCREF(tmp_assign_source_14);
asyncgen_heap->tmp_with_3__source = tmp_assign_source_14;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
tmp_expression_value_19 = asyncgen_heap->tmp_with_3__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_19, const_str_plain___aenter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
asyncgen->m_frame->m_frame.f_lineno = 204;
tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
assert(asyncgen_heap->tmp_with_3__enter == NULL);
asyncgen_heap->tmp_with_3__enter = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
tmp_expression_value_20 = asyncgen_heap->tmp_with_3__source;
tmp_assign_source_16 = LOOKUP_SPECIAL(tstate, tmp_expression_value_20, const_str_plain___aexit__);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
assert(asyncgen_heap->tmp_with_3__exit == NULL);
asyncgen_heap->tmp_with_3__exit = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
asyncgen->m_frame->m_frame.f_lineno = 204;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__enter);
tmp_expression_value_22 = asyncgen_heap->tmp_with_3__enter;
tmp_expression_value_21 = ASYNC_AWAIT(tstate, tmp_expression_value_22, await_enter);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_21;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_assign_source_17 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_with_3__enter;
    assert(old != NULL);
    asyncgen_heap->tmp_with_3__enter = tmp_assign_source_17;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_3__indicator = tmp_assign_source_18;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
tmp_called_value_5 = module_var_accessor_google$genai$_mcp_utils$streamable_http_client(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_streamable_http_client);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
CHECK_OBJECT(asyncgen_heap->var_mcp_url);
tmp_kw_call_value_0_2 = asyncgen_heap->var_mcp_url;
CHECK_OBJECT(asyncgen_heap->var_http_client);
tmp_kw_call_value_1_2 = asyncgen_heap->var_http_client;
asyncgen->m_frame->m_frame.f_lineno = 205;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_assign_source_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_http_client_tuple);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
assert(asyncgen_heap->tmp_with_2__source == NULL);
asyncgen_heap->tmp_with_2__source = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
tmp_expression_value_23 = asyncgen_heap->tmp_with_2__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_23, const_str_plain___aenter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
asyncgen->m_frame->m_frame.f_lineno = 205;
tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
assert(asyncgen_heap->tmp_with_2__enter == NULL);
asyncgen_heap->tmp_with_2__enter = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
tmp_expression_value_24 = asyncgen_heap->tmp_with_2__source;
tmp_assign_source_21 = LOOKUP_SPECIAL(tstate, tmp_expression_value_24, const_str_plain___aexit__);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
assert(asyncgen_heap->tmp_with_2__exit == NULL);
asyncgen_heap->tmp_with_2__exit = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
asyncgen->m_frame->m_frame.f_lineno = 205;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
tmp_expression_value_26 = asyncgen_heap->tmp_with_2__enter;
tmp_expression_value_25 = ASYNC_AWAIT(tstate, tmp_expression_value_26, await_enter);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_26, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
asyncgen->m_yield_from = tmp_expression_value_25;
asyncgen->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_26, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_assign_source_22 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_with_2__enter;
    assert(old != NULL);
    asyncgen_heap->tmp_with_2__enter = tmp_assign_source_22;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_23;
tmp_assign_source_23 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
tmp_assign_source_24 = asyncgen_heap->tmp_with_2__enter;
assert(asyncgen_heap->var_streams == NULL);
Py_INCREF(tmp_assign_source_24);
asyncgen_heap->var_streams = tmp_assign_source_24;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(asyncgen_heap->var_streams);
tmp_iter_arg_1 = asyncgen_heap->var_streams;
tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_9;
}
assert(asyncgen_heap->tmp_tuple_unpack_1__source_iter == NULL);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_10;
}
assert(asyncgen_heap->tmp_tuple_unpack_1__element_1 == NULL);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_2;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_10;
}
assert(asyncgen_heap->tmp_tuple_unpack_1__element_2 == NULL);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_3;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_10;
}
assert(asyncgen_heap->tmp_tuple_unpack_1__element_3 == NULL);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_28;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
asyncgen_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &asyncgen_heap->exception_state, tmp_iterator_name_1, 3);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_10;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_10:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_9;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_9:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_8;
// End of try:
try_end_2:;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_29 = asyncgen_heap->tmp_tuple_unpack_1__element_1;
assert(asyncgen_heap->var_read_stream == NULL);
Py_INCREF(tmp_assign_source_29);
asyncgen_heap->var_read_stream = tmp_assign_source_29;
}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_30 = asyncgen_heap->tmp_tuple_unpack_1__element_2;
assert(asyncgen_heap->var_write_stream == NULL);
Py_INCREF(tmp_assign_source_30);
asyncgen_heap->var_write_stream = tmp_assign_source_30;
}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_31 = asyncgen_heap->tmp_tuple_unpack_1__element_3;
assert(asyncgen_heap->var__ == NULL);
Py_INCREF(tmp_assign_source_31);
asyncgen_heap->var__ = tmp_assign_source_31;
}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_7 = module_var_accessor_google$genai$_mcp_utils$McpClientSession(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_McpClientSession);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
CHECK_OBJECT(asyncgen_heap->var_read_stream);
tmp_args_element_value_2 = asyncgen_heap->var_read_stream;
CHECK_OBJECT(asyncgen_heap->var_write_stream);
tmp_args_element_value_3 = asyncgen_heap->var_write_stream;
asyncgen->m_frame->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
assert(asyncgen_heap->tmp_with_1__source == NULL);
asyncgen_heap->tmp_with_1__source = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_27 = asyncgen_heap->tmp_with_1__source;
tmp_called_value_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_27, const_str_plain___aenter__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
asyncgen->m_frame->m_frame.f_lineno = 209;
tmp_assign_source_33 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
assert(asyncgen_heap->tmp_with_1__enter == NULL);
asyncgen_heap->tmp_with_1__enter = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_28 = asyncgen_heap->tmp_with_1__source;
tmp_assign_source_34 = LOOKUP_SPECIAL(tstate, tmp_expression_value_28, const_str_plain___aexit__);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
assert(asyncgen_heap->tmp_with_1__exit == NULL);
asyncgen_heap->tmp_with_1__exit = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
asyncgen->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
tmp_expression_value_30 = asyncgen_heap->tmp_with_1__enter;
tmp_expression_value_29 = ASYNC_AWAIT(tstate, tmp_expression_value_30, await_enter);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 4;
asyncgen->m_yield_from = tmp_expression_value_29;
asyncgen->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_assign_source_35 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_with_1__enter;
    assert(old != NULL);
    asyncgen_heap->tmp_with_1__enter = tmp_assign_source_35;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_36;
tmp_assign_source_36 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
tmp_assign_source_37 = asyncgen_heap->tmp_with_1__enter;
assert(asyncgen_heap->var_session == NULL);
Py_INCREF(tmp_assign_source_37);
asyncgen_heap->var_session = tmp_assign_source_37;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_called_instance_2;
PyObject *tmp_await_result_1;
asyncgen->m_frame->m_frame.f_lineno = 210;
CHECK_OBJECT(asyncgen_heap->var_session);
tmp_called_instance_2 = asyncgen_heap->var_session;
asyncgen->m_frame->m_frame.f_lineno = 210;
tmp_expression_value_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_initialize);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_13;
}
tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_normal);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_13;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 5;
asyncgen->m_yield_from = tmp_expression_value_31;
asyncgen->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_13;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
// Tried code:
{
PyObject *tmp_expression_value_33;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_session);
tmp_expression_value_33 = asyncgen_heap->var_session;
Py_INCREF(tmp_expression_value_33);
asyncgen->m_yield_return_index = 6;
return tmp_expression_value_33;
yield_return_6:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 212;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_14;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_14:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 1.
asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_GeneratorExit;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_9 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
goto try_return_handler_15;
goto branch_end_9;
branch_no_9:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 211;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_15;
branch_end_9:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

goto try_return_handler_12;
// Exception handler code:
try_except_handler_15:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto try_except_handler_13;
// End of try:
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_13:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 2.
asyncgen_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_10 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_assign_source_38;
tmp_assign_source_38 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_38;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
asyncgen->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_9 = asyncgen_heap->tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_expression_value_35 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_16;
}
tmp_expression_value_34 = ASYNC_AWAIT(tstate, tmp_expression_value_35, await_exit);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_16;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_35, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 7;
asyncgen->m_yield_from = tmp_expression_value_34;
asyncgen->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_35, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_16;
}
tmp_operand_value_1 = yield_return_value;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_16;
}
tmp_condition_result_11 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 209;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_16;
branch_no_11:;
goto branch_end_10;
branch_no_10:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 209;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_16;
branch_end_10:;
goto try_end_5;
// Exception handler code:
try_except_handler_16:;
asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_6 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_6;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_6;

goto try_except_handler_12;
// End of try:
try_end_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
goto try_end_6;
// Return handler code:
try_return_handler_12:;
{
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_called_value_10;
PyObject *tmp_await_result_2;
asyncgen->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_10 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 209;
tmp_expression_value_37 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_expression_value_36 = ASYNC_AWAIT(tstate, tmp_expression_value_37, await_exit);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 8;
asyncgen->m_yield_from = tmp_expression_value_36;
asyncgen->m_awaiting = true;
return NULL;

yield_return_8:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
asyncgen_heap->exception_keeper_lineno_7 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_7 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = asyncgen_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_called_value_11;
PyObject *tmp_await_result_3;
asyncgen->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_11 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 209;
tmp_expression_value_39 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_7);

asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_expression_value_38 = ASYNC_AWAIT(tstate, tmp_expression_value_39, await_exit);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_7);

asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_39, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 9;
asyncgen->m_yield_from = tmp_expression_value_38;
asyncgen->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_39, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_7);

asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_12:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_7;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_7;

goto try_except_handler_11;
// End of try:
try_end_6:;
{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = asyncgen_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_called_value_12;
PyObject *tmp_await_result_4;
asyncgen->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_12 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 209;
tmp_expression_value_41 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_expression_value_40 = ASYNC_AWAIT(tstate, tmp_expression_value_41, await_exit);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_41, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 10;
asyncgen->m_yield_from = tmp_expression_value_40;
asyncgen->m_awaiting = true;
return NULL;

yield_return_10:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_41, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 209;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_11;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
branch_no_13:;
goto try_end_7;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
Py_DECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
Py_DECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
Py_DECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_11:;
asyncgen_heap->exception_keeper_lineno_8 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_8 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_8;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_7:;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
Py_DECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
Py_DECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
Py_DECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
asyncgen_heap->exception_keeper_lineno_9 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_9 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 3.
asyncgen_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_9, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_14 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
nuitka_bool tmp_assign_source_39;
tmp_assign_source_39 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_39;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
asyncgen->m_frame->m_frame.f_lineno = 205;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_13 = asyncgen_heap->tmp_with_2__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 205;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_expression_value_43 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_17;
}
tmp_expression_value_42 = ASYNC_AWAIT(tstate, tmp_expression_value_43, await_exit);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_17;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_15, sizeof(bool), &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 11;
asyncgen->m_yield_from = tmp_expression_value_42;
asyncgen->m_awaiting = true;
return NULL;

yield_return_11:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_15, sizeof(bool), &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_17;
}
tmp_operand_value_2 = yield_return_value;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_17;
}
tmp_condition_result_15 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_17;
branch_no_15:;
goto branch_end_14;
branch_no_14:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_17;
branch_end_14:;
goto try_end_9;
// Exception handler code:
try_except_handler_17:;
asyncgen_heap->exception_keeper_lineno_10 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_10 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_10;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_10;

goto try_except_handler_7;
// End of try:
try_end_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
goto try_end_10;
// Return handler code:
try_return_handler_7:;
{
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_called_value_14;
PyObject *tmp_await_result_5;
asyncgen->m_frame->m_frame.f_lineno = 205;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_14 = asyncgen_heap->tmp_with_2__exit;
asyncgen->m_frame->m_frame.f_lineno = 205;
tmp_expression_value_45 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_expression_value_44 = ASYNC_AWAIT(tstate, tmp_expression_value_45, await_exit);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 12;
asyncgen->m_yield_from = tmp_expression_value_44;
asyncgen->m_awaiting = true;
return NULL;

yield_return_12:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
asyncgen_heap->exception_keeper_lineno_11 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_11 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_16;
nuitka_bool tmp_cmp_expr_left_9;
nuitka_bool tmp_cmp_expr_right_9;
assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_9 = asyncgen_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
tmp_condition_result_16 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_called_value_15;
PyObject *tmp_await_result_6;
asyncgen->m_frame->m_frame.f_lineno = 205;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_15 = asyncgen_heap->tmp_with_2__exit;
asyncgen->m_frame->m_frame.f_lineno = 205;
tmp_expression_value_47 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_11);

asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_expression_value_46 = ASYNC_AWAIT(tstate, tmp_expression_value_47, await_exit);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_11);

asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 13;
asyncgen->m_yield_from = tmp_expression_value_46;
asyncgen->m_awaiting = true;
return NULL;

yield_return_13:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_11);

asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
branch_no_16:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_11;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_11;

goto try_except_handler_6;
// End of try:
try_end_10:;
{
bool tmp_condition_result_17;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = asyncgen_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_17 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_called_value_16;
PyObject *tmp_await_result_7;
asyncgen->m_frame->m_frame.f_lineno = 205;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_16 = asyncgen_heap->tmp_with_2__exit;
asyncgen->m_frame->m_frame.f_lineno = 205;
tmp_expression_value_49 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_expression_value_48 = ASYNC_AWAIT(tstate, tmp_expression_value_49, await_exit);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 14;
asyncgen->m_yield_from = tmp_expression_value_48;
asyncgen->m_awaiting = true;
return NULL;

yield_return_14:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 205;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_6;
}
tmp_await_result_7 = yield_return_value;
CHECK_OBJECT(tmp_await_result_7);
Py_DECREF(tmp_await_result_7);
}
branch_no_17:;
goto try_end_11;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
Py_DECREF(asyncgen_heap->tmp_with_2__source);
asyncgen_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
Py_DECREF(asyncgen_heap->tmp_with_2__enter);
asyncgen_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
Py_DECREF(asyncgen_heap->tmp_with_2__exit);
asyncgen_heap->tmp_with_2__exit = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_6:;
asyncgen_heap->exception_keeper_lineno_12 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_12 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_with_2__source);
asyncgen_heap->tmp_with_2__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_2__enter);
asyncgen_heap->tmp_with_2__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_2__exit);
asyncgen_heap->tmp_with_2__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_12;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_12;

goto try_except_handler_5;
// End of try:
try_end_11:;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
Py_DECREF(asyncgen_heap->tmp_with_2__source);
asyncgen_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
Py_DECREF(asyncgen_heap->tmp_with_2__enter);
asyncgen_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
Py_DECREF(asyncgen_heap->tmp_with_2__exit);
asyncgen_heap->tmp_with_2__exit = NULL;
goto try_end_12;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_13 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_13 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 4.
asyncgen_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_13, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_18 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
nuitka_bool tmp_assign_source_40;
tmp_assign_source_40 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_3__indicator = tmp_assign_source_40;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
asyncgen->m_frame->m_frame.f_lineno = 204;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
tmp_called_value_17 = asyncgen_heap->tmp_with_3__exit;
tmp_args_element_value_10 = EXC_TYPE(tstate);
tmp_args_element_value_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_11); 
tmp_args_element_value_12 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_12 == NULL) {
    tmp_args_element_value_12 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_expression_value_51 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_18;
}
tmp_expression_value_50 = ASYNC_AWAIT(tstate, tmp_expression_value_51, await_exit);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_18;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_19, sizeof(bool), &tmp_expression_value_51, sizeof(PyObject *), &tmp_called_value_17, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 15;
asyncgen->m_yield_from = tmp_expression_value_50;
asyncgen->m_awaiting = true;
return NULL;

yield_return_15:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_19, sizeof(bool), &tmp_expression_value_51, sizeof(PyObject *), &tmp_called_value_17, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_18;
}
tmp_operand_value_3 = yield_return_value;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_18;
}
tmp_condition_result_19 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 204;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_18;
branch_no_19:;
goto branch_end_18;
branch_no_18:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 204;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_18;
branch_end_18:;
goto try_end_13;
// Exception handler code:
try_except_handler_18:;
asyncgen_heap->exception_keeper_lineno_14 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_14 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_4);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_14;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_14;

goto try_except_handler_4;
// End of try:
try_end_13:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_4);

goto try_end_12;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_12:;
goto try_end_14;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_called_value_18;
PyObject *tmp_await_result_8;
asyncgen->m_frame->m_frame.f_lineno = 204;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
tmp_called_value_18 = asyncgen_heap->tmp_with_3__exit;
asyncgen->m_frame->m_frame.f_lineno = 204;
tmp_expression_value_53 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_18, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_expression_value_52 = ASYNC_AWAIT(tstate, tmp_expression_value_53, await_exit);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_53, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 16;
asyncgen->m_yield_from = tmp_expression_value_52;
asyncgen->m_awaiting = true;
return NULL;

yield_return_16:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_53, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_await_result_8 = yield_return_value;
CHECK_OBJECT(tmp_await_result_8);
Py_DECREF(tmp_await_result_8);
}
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_15 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_15 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_20;
nuitka_bool tmp_cmp_expr_left_12;
nuitka_bool tmp_cmp_expr_right_12;
assert(asyncgen_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_12 = asyncgen_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
tmp_condition_result_20 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_called_value_19;
PyObject *tmp_await_result_9;
asyncgen->m_frame->m_frame.f_lineno = 204;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
tmp_called_value_19 = asyncgen_heap->tmp_with_3__exit;
asyncgen->m_frame->m_frame.f_lineno = 204;
tmp_expression_value_55 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_19, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_15);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_expression_value_54 = ASYNC_AWAIT(tstate, tmp_expression_value_55, await_exit);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_15);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_55, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 17;
asyncgen->m_yield_from = tmp_expression_value_54;
asyncgen->m_awaiting = true;
return NULL;

yield_return_17:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_55, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_15);

asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_await_result_9 = yield_return_value;
CHECK_OBJECT(tmp_await_result_9);
Py_DECREF(tmp_await_result_9);
}
branch_no_20:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_15;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_15;

goto try_except_handler_3;
// End of try:
try_end_14:;
{
bool tmp_condition_result_21;
nuitka_bool tmp_cmp_expr_left_13;
nuitka_bool tmp_cmp_expr_right_13;
assert(asyncgen_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_13 = asyncgen_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
tmp_condition_result_21 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_called_value_20;
PyObject *tmp_await_result_10;
asyncgen->m_frame->m_frame.f_lineno = 204;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
tmp_called_value_20 = asyncgen_heap->tmp_with_3__exit;
asyncgen->m_frame->m_frame.f_lineno = 204;
tmp_expression_value_57 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_expression_value_56 = ASYNC_AWAIT(tstate, tmp_expression_value_57, await_exit);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_57, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 18;
asyncgen->m_yield_from = tmp_expression_value_56;
asyncgen->m_awaiting = true;
return NULL;

yield_return_18:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_57, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 204;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_3;
}
tmp_await_result_10 = yield_return_value;
CHECK_OBJECT(tmp_await_result_10);
Py_DECREF(tmp_await_result_10);
}
branch_no_21:;
goto try_end_15;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
Py_DECREF(asyncgen_heap->tmp_with_3__source);
asyncgen_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__enter);
Py_DECREF(asyncgen_heap->tmp_with_3__enter);
asyncgen_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
Py_DECREF(asyncgen_heap->tmp_with_3__exit);
asyncgen_heap->tmp_with_3__exit = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_16 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_16 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
Py_DECREF(asyncgen_heap->tmp_with_3__source);
asyncgen_heap->tmp_with_3__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_3__enter);
asyncgen_heap->tmp_with_3__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_3__exit);
asyncgen_heap->tmp_with_3__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_16;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_16;

goto try_except_handler_2;
// End of try:
try_end_15:;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__source);
Py_DECREF(asyncgen_heap->tmp_with_3__source);
asyncgen_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__enter);
Py_DECREF(asyncgen_heap->tmp_with_3__enter);
asyncgen_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_3__exit);
Py_DECREF(asyncgen_heap->tmp_with_3__exit);
asyncgen_heap->tmp_with_3__exit = NULL;
goto try_end_16;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_17 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_17 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 5.
asyncgen_heap->exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_17);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_17);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_17, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_17 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_17);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_17, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_17);
// Tried code:
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
tmp_cmp_expr_left_14 = EXC_TYPE(tstate);
tmp_cmp_expr_right_14 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_22 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_41); 
assert(asyncgen_heap->var_eg == NULL);
Py_INCREF(tmp_assign_source_41);
asyncgen_heap->var_eg = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_LIST_EMPTY(tstate, 0);
assert(Nuitka_Cell_GET(asyncgen_heap->var_error_messages) == NULL);
Nuitka_Cell_SET(asyncgen_heap->var_error_messages, tmp_assign_source_42);

}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_dict_key_1 = mod_consts.const_str_plain_exc;
tmp_dict_value_1 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 220;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_20;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
asyncgen_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(asyncgen_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
asyncgen_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(asyncgen_heap->tmp_res != 0));
tmp_closure_1[0] = asyncgen_heap->var__extract_errors;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = asyncgen_heap->var_error_messages;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_43 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(asyncgen_heap->var__extract_errors) == NULL);
Nuitka_Cell_SET(asyncgen_heap->var__extract_errors, tmp_assign_source_43);

}
{
bool tmp_condition_result_23;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_expression_value_58;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(asyncgen_heap->var_eg);
tmp_type_arg_1 = asyncgen_heap->var_eg;
tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_58 == NULL));
tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 231;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_20;
}
tmp_cmp_expr_right_15 = mod_consts.const_tuple_str_plain_ExceptionGroup_str_plain_BaseExceptionGroup_tuple;
asyncgen_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_15, tmp_cmp_expr_left_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 231;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_20;
}
tmp_or_left_value_1 = (asyncgen_heap->tmp_res == 1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(asyncgen_heap->var_eg);
tmp_expression_value_59 = asyncgen_heap->var_eg;
asyncgen_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain_exceptions);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 232;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_20;
}
tmp_or_right_value_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
tmp_condition_result_23 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_23 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_23 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(Nuitka_Cell_GET(asyncgen_heap->var__extract_errors));
tmp_called_value_21 = Nuitka_Cell_GET(asyncgen_heap->var__extract_errors);
CHECK_OBJECT(asyncgen_heap->var_eg);
tmp_args_element_value_13 = asyncgen_heap->var_eg;
asyncgen->m_frame->m_frame.f_lineno = 234;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_13);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 234;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto try_except_handler_20;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_6 = mod_consts.const_str_digest_41bf8f7b8ae55fad1aee98c246a735bc;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
CHECK_OBJECT(asyncgen_heap->var_mcp_url);
tmp_tuple_element_6 = asyncgen_heap->var_mcp_url;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_45736f8dc9d9bbfc5ead9a2b8febd8df;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
CHECK_OBJECT(Nuitka_Cell_GET(asyncgen_heap->var_error_messages));
tmp_format_value_9 = Nuitka_Cell_GET(asyncgen_heap->var_error_messages);
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 237;
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_make_exception_arg_2 == NULL));
asyncgen->m_frame->m_frame.f_lineno = 235;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(asyncgen_heap->var_eg);
tmp_raise_cause_1 = asyncgen_heap->var_eg;
asyncgen_heap->exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
asyncgen_heap->exception_lineno = 238;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &asyncgen_heap->exception_state, tmp_raise_cause_1);
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_20;
}
branch_no_23:;
goto try_end_17;
// Exception handler code:
try_except_handler_20:;
asyncgen_heap->exception_keeper_lineno_18 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_18 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_eg);
asyncgen_heap->var_eg = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_18;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
try_end_17:;
Py_XDECREF(asyncgen_heap->var_eg);
asyncgen_heap->var_eg = NULL;

goto branch_end_22;
branch_no_22:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 203;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooooooocc";
goto try_except_handler_19;
branch_end_22:;
goto try_end_18;
// Exception handler code:
try_except_handler_19:;
asyncgen_heap->exception_keeper_lineno_19 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_19 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_5);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_19;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_5);

goto try_end_16;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_16:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[0],
    asyncgen->m_closure[1],
    asyncgen_heap->var_base_url,
    asyncgen_heap->var_mcp_url,
    asyncgen_heap->var_location,
    asyncgen_heap->var_token,
    asyncgen_heap->var_project,
    asyncgen_heap->var_headers,
    asyncgen_heap->var_http_client,
    asyncgen_heap->var_streams,
    asyncgen_heap->var_read_stream,
    asyncgen_heap->var_write_stream,
    asyncgen_heap->var__,
    asyncgen_heap->var_session,
    asyncgen_heap->var_eg,
    asyncgen_heap->var_error_messages,
    asyncgen_heap->var__extract_errors
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_base_url);
asyncgen_heap->var_base_url = NULL;
CHECK_OBJECT(asyncgen_heap->var_mcp_url);
CHECK_OBJECT(asyncgen_heap->var_mcp_url);
Py_DECREF(asyncgen_heap->var_mcp_url);
asyncgen_heap->var_mcp_url = NULL;
Py_XDECREF(asyncgen_heap->var_location);
asyncgen_heap->var_location = NULL;
CHECK_OBJECT(asyncgen_heap->var_token);
CHECK_OBJECT(asyncgen_heap->var_token);
Py_DECREF(asyncgen_heap->var_token);
asyncgen_heap->var_token = NULL;
CHECK_OBJECT(asyncgen_heap->var_project);
CHECK_OBJECT(asyncgen_heap->var_project);
Py_DECREF(asyncgen_heap->var_project);
asyncgen_heap->var_project = NULL;
CHECK_OBJECT(asyncgen_heap->var_headers);
CHECK_OBJECT(asyncgen_heap->var_headers);
Py_DECREF(asyncgen_heap->var_headers);
asyncgen_heap->var_headers = NULL;
CHECK_OBJECT(asyncgen_heap->var_http_client);
CHECK_OBJECT(asyncgen_heap->var_http_client);
Py_DECREF(asyncgen_heap->var_http_client);
asyncgen_heap->var_http_client = NULL;
Py_XDECREF(asyncgen_heap->var_streams);
asyncgen_heap->var_streams = NULL;
Py_XDECREF(asyncgen_heap->var_read_stream);
asyncgen_heap->var_read_stream = NULL;
Py_XDECREF(asyncgen_heap->var_write_stream);
asyncgen_heap->var_write_stream = NULL;
Py_XDECREF(asyncgen_heap->var__);
asyncgen_heap->var__ = NULL;
Py_XDECREF(asyncgen_heap->var_session);
asyncgen_heap->var_session = NULL;
CHECK_OBJECT(asyncgen_heap->var_error_messages);
CHECK_OBJECT(asyncgen_heap->var_error_messages);
Py_DECREF(asyncgen_heap->var_error_messages);
asyncgen_heap->var_error_messages = NULL;
CHECK_OBJECT(asyncgen_heap->var__extract_errors);
CHECK_OBJECT(asyncgen_heap->var__extract_errors);
Py_DECREF(asyncgen_heap->var__extract_errors);
asyncgen_heap->var__extract_errors = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_20 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_20 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_base_url);
asyncgen_heap->var_base_url = NULL;
Py_XDECREF(asyncgen_heap->var_mcp_url);
asyncgen_heap->var_mcp_url = NULL;
Py_XDECREF(asyncgen_heap->var_location);
asyncgen_heap->var_location = NULL;
Py_XDECREF(asyncgen_heap->var_token);
asyncgen_heap->var_token = NULL;
Py_XDECREF(asyncgen_heap->var_project);
asyncgen_heap->var_project = NULL;
Py_XDECREF(asyncgen_heap->var_headers);
asyncgen_heap->var_headers = NULL;
Py_XDECREF(asyncgen_heap->var_http_client);
asyncgen_heap->var_http_client = NULL;
Py_XDECREF(asyncgen_heap->var_streams);
asyncgen_heap->var_streams = NULL;
Py_XDECREF(asyncgen_heap->var_read_stream);
asyncgen_heap->var_read_stream = NULL;
Py_XDECREF(asyncgen_heap->var_write_stream);
asyncgen_heap->var_write_stream = NULL;
Py_XDECREF(asyncgen_heap->var__);
asyncgen_heap->var__ = NULL;
Py_XDECREF(asyncgen_heap->var_session);
asyncgen_heap->var_session = NULL;
CHECK_OBJECT(asyncgen_heap->var_error_messages);
CHECK_OBJECT(asyncgen_heap->var_error_messages);
Py_DECREF(asyncgen_heap->var_error_messages);
asyncgen_heap->var_error_messages = NULL;
CHECK_OBJECT(asyncgen_heap->var__extract_errors);
CHECK_OBJECT(asyncgen_heap->var__extract_errors);
Py_DECREF(asyncgen_heap->var__extract_errors);
asyncgen_heap->var__extract_errors = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_20;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_20;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_context,
        module_google$genai$_mcp_utils,
        mod_consts.const_str_plain__connect_agent_platform_mcp,
        NULL,
        code_objects_28445e806c80e98d42c5e883f4e88cff,
        closure,
        2,
#if 1
        sizeof(struct google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_exc = python_pars[0];
PyObject *var_e = NULL;
PyObject *var_msg = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors)) {
    Py_XDECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors = MAKE_FUNCTION_FRAME(tstate, code_objects_af6dd4b7a61355e1432f4ad591f399d5, module_google$genai$_mcp_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors->m_type_description == NULL);
frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors = cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_exc);
tmp_expression_value_1 = par_exc;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exceptions);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_exc);
tmp_expression_value_2 = par_exc;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exceptions);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooocc";
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
type_description_1 = "ooocc";
exception_lineno = 223;
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
    PyObject *old = var_e;
    var_e = tmp_assign_source_3;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 224;
type_description_1 = "ooocc";
    goto try_except_handler_2;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_e);
tmp_args_element_value_1 = var_e;
frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors->m_frame.f_lineno = 224;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooocc";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_exc);
tmp_type_arg_1 = par_exc;
tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_3 == NULL));
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_exc);
tmp_unicode_arg_1 = par_exc;
tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooocc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_4 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_exc);
tmp_expression_value_4 = par_exc;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain_response);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_exc);
tmp_expression_value_5 = par_exc;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_response);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_msg);
tmp_iadd_expr_left_1 = var_msg;
tmp_tuple_element_2 = mod_consts.const_str_digest_566fe207fb067ceea90ef90f97b9ea7e;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_exc);
tmp_expression_value_7 = par_exc;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_response);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_status_code);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_exc);
tmp_expression_value_9 = par_exc;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_response);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_text);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_msg = tmp_assign_source_5;

}
branch_no_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error_messages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_2 = var_msg;
frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors->m_frame.f_lineno = 229;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors,
    type_description_1,
    par_exc,
    var_e,
    var_msg,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors == cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors);
    cache_frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors = NULL;
}

assertFrameObject(frame_frame_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors);

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
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool,
        mod_consts.const_str_plain_mcp_to_gemini_tool,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a61a2faf0eeb5f92d7368e7fd3683597,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_8907b1f0abbcce8d0755de053b9c1528,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool,
        mod_consts.const_str_plain_agent_platform_to_gemini_tool,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ead0b06586d955962472363b43bfbd90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_4747396ee64e0c3d6b040f42a8f3e339,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools,
        mod_consts.const_str_plain_mcp_to_gemini_tools,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_65e0a514a3f044e42ae7d1252eae7066,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_f20535e9c3049abfac966895968a9128,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage,
        mod_consts.const_str_plain_has_mcp_tool_usage,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_962fccd18178790a5f810713669aff7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_4f29f6f3062c9325ca96892e425c346d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage,
        mod_consts.const_str_plain_has_mcp_session_usage,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23380e4528dd297c409b20c78acff859,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_89294b99a2b1e20681a2d41a5a4f0a6f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header,
        mod_consts.const_str_plain_set_mcp_usage_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4976fd473f0b6ae9f45c924196292945,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_af2bb57b6ab4350362c46c0c7b57589b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema,
        mod_consts.const_str_plain__filter_to_supported_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb6a1cd87a6d7960984e53c371ccd881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_feb9f1c8b01c73df12780d6369fb3a18,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp,
        mod_consts.const_str_plain__connect_agent_platform_mcp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_28445e806c80e98d42c5e883f4e88cff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        mod_consts.const_str_digest_fe366936efa241de0d402bbf346a2297,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors,
        mod_consts.const_str_plain__extract_errors,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a7a948245c7ab5ba27383cc56823bd3d,
#endif
        code_objects_af6dd4b7a61355e1432f4ad591f399d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_mcp_utils,
        NULL,
        closure,
        2
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

static function_impl_code const function_table_google$genai$_mcp_utils[] = {
impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp$$$asyncgen__1__connect_agent_platform_mcp$$$function__1__extract_errors,
impl_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool,
impl_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool,
impl_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools,
impl_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage,
impl_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage,
impl_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header,
impl_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema,
impl_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_mcp_utils);
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
        module_google$genai$_mcp_utils,
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
        function_table_google$genai$_mcp_utils,
        sizeof(function_table_google$genai$_mcp_utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._mcp_utils";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_mcp_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_mcp_utils");

    // Store the module for future use.
    module_google$genai$_mcp_utils = module;

    moduledict_google$genai$_mcp_utils = MODULE_DICT(module_google$genai$_mcp_utils);

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
        PRINT_STRING("google$genai$_mcp_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_mcp_utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_mcp_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._mcp_utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_mcp_utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_mcp_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_mcp_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_mcp_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_mcp_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_mcp_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_mcp_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_mcp_utils);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_mcp_utils;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_7abea8b31def797bc539d68dbf5caa51;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_mcp_utils = MAKE_MODULE_FRAME(code_objects_02a635b1369202d434e55703d8e16bd3, module_google$genai$_mcp_utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_mcp_utils);
assert(Py_REFCNT(frame_frame_google$genai$_mcp_utils) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_mcp_utils$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_mcp_utils$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 17;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 18;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_IMPORTLIB__METADATA();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_PackageNotFoundError);
}
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_PackageNotFoundError, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_version);
}
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_version, tmp_assign_source_9);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 24;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Request_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 25;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Request);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = const_str_empty;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__common_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 27;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain__common,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__common);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__common, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_types_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 28;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        const_str_plain_types,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, const_str_plain_types);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__api_client;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__MULTI_REGIONAL_LOCATIONS_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 29;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__MULTI_REGIONAL_LOCATIONS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_assign_source_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Type);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_google$genai$_mcp_utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_McpClientSession;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_assign_source_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Type);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_2 = module_var_accessor_google$genai$_mcp_utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_McpTool;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client, tmp_assign_source_19);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_ass_subvalue_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_3 = module_var_accessor_google$genai$_mcp_utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_streamable_http_client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_create_mcp_http_client, tmp_assign_source_20);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_4 = module_var_accessor_google$genai$_mcp_utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_create_mcp_http_client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_7616cac5e9c4e87f709eb47f95cd5052;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Tool_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 43;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_Tool,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Tool);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_mcp;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ClientSession_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 44;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_ClientSession,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ClientSession);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_3a173cc76c0ea3bea7c5fc094ac90b2d;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_streamable_http_client_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 45;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_streamable_http_client,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_streamable_http_client);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_5a96fe393324c5a505171341395f2f86;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$genai$_mcp_utils;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_create_mcp_http_client_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 46;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$genai$_mcp_utils,
        mod_consts.const_str_plain_create_mcp_http_client,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_create_mcp_http_client);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_create_mcp_http_client, tmp_assign_source_24);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpTool, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_McpClientSession, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_streamable_http_client, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_create_mcp_http_client, tmp_assign_source_28);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$genai$_mcp_utils->m_frame)) {
        frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_tool;
tmp_dict_value_1 = module_var_accessor_google$genai$_mcp_utils$McpTool(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpTool);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_3;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_3 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Tool);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_29 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__1_mcp_to_gemini_tool(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tool, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_tool;
tmp_dict_value_2 = module_var_accessor_google$genai$_mcp_utils$McpTool(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpTool);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_4;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Tool);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_assign_source_30 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__2_agent_platform_to_gemini_tool(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_agent_platform_to_gemini_tool, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_dict_key_3 = mod_consts.const_str_plain_tools;
tmp_expression_value_5 = (PyObject *)&PyList_Type;
tmp_subscript_value_1 = module_var_accessor_google$genai$_mcp_utils$McpTool(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_McpTool);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_is_agent_platform;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_6 = (PyObject *)&PyList_Type;
tmp_expression_value_7 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto dict_build_exception_3;
}
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Tool);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_31 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__3_mcp_to_gemini_tools(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_mcp_to_gemini_tools, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_8;
tmp_dict_key_4 = mod_consts.const_str_plain_tools;
tmp_expression_value_8 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto frame_exception_exit_1;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ToolListUnion);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_assign_source_32 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__4_has_mcp_tool_usage(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_has_mcp_tool_usage, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_9;
tmp_dict_key_5 = mod_consts.const_str_plain_tools;
tmp_expression_value_9 = module_var_accessor_google$genai$_mcp_utils$types(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ToolListUnion);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_assign_source_33 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__5_has_mcp_session_usage(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_has_mcp_session_usage, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0fd0c1b3f2b41f70c318c24f6c5e7663);

tmp_assign_source_34 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__6_set_mcp_usage_header(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_set_mcp_usage_header, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_10;
tmp_dict_key_6 = mod_consts.const_str_plain_schema;
tmp_expression_value_10 = module_var_accessor_google$genai$_mcp_utils$_common(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_StringDict);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_annotations_7 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_11;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_11 = module_var_accessor_google$genai$_mcp_utils$_common(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto dict_build_exception_4;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_StringDict);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_assign_source_35 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__7__filter_to_supported_schema(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__filter_to_supported_schema, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_expression_value_12 = module_var_accessor_google$genai$_mcp_utils$contextlib(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_asynccontextmanager);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_dict_key_7 = mod_consts.const_str_plain_api_client;
tmp_dict_value_7 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 164;

    goto frame_exception_exit_1;
}
tmp_annotations_8 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_toolset_name;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_14 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_14 == NULL));
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_AsyncIterator);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto dict_build_exception_5;
}
tmp_subscript_value_3 = module_var_accessor_google$genai$_mcp_utils$Any(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_13);

exception_lineno = 164;

    goto dict_build_exception_5;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_annotations_8);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_args_element_value_1 = MAKE_FUNCTION_google$genai$_mcp_utils$$$function__8__connect_agent_platform_mcp(tstate, tmp_annotations_8);

frame_frame_google$genai$_mcp_utils->m_frame.f_lineno = 163;
tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__connect_agent_platform_mcp, tmp_assign_source_36);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_mcp_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_mcp_utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_mcp_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_mcp_utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_mcp_utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._mcp_utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_mcp_utils);
    return module_google$genai$_mcp_utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_mcp_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_mcp_utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'anthropic$types$beta$beta_content_block_param'
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



/* The "module_anthropic$types$beta$beta_content_block_param" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$beta_content_block_param;
PyDictObject *moduledict_anthropic$types$beta$beta_content_block_param;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_beta_content_block;
PyObject *const_tuple_str_plain_BetaContentBlock_tuple;
PyObject *const_str_plain_BetaContentBlock;
PyObject *const_str_plain_beta_text_block_param;
PyObject *const_tuple_str_plain_BetaTextBlockParam_tuple;
PyObject *const_str_plain_BetaTextBlockParam;
PyObject *const_str_plain_beta_image_block_param;
PyObject *const_tuple_str_plain_BetaImageBlockParam_tuple;
PyObject *const_str_plain_BetaImageBlockParam;
PyObject *const_str_plain_beta_thinking_block_param;
PyObject *const_tuple_str_plain_BetaThinkingBlockParam_tuple;
PyObject *const_str_plain_BetaThinkingBlockParam;
PyObject *const_str_plain_beta_tool_use_block_param;
PyObject *const_tuple_str_plain_BetaToolUseBlockParam_tuple;
PyObject *const_str_plain_BetaToolUseBlockParam;
PyObject *const_str_plain_beta_compaction_block_param;
PyObject *const_tuple_str_plain_BetaCompactionBlockParam_tuple;
PyObject *const_str_plain_BetaCompactionBlockParam;
PyObject *const_str_plain_beta_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaToolResultBlockParam;
PyObject *const_str_plain_beta_mcp_tool_use_block_param;
PyObject *const_tuple_str_plain_BetaMCPToolUseBlockParam_tuple;
PyObject *const_str_plain_BetaMCPToolUseBlockParam;
PyObject *const_str_plain_beta_search_result_block_param;
PyObject *const_tuple_str_plain_BetaSearchResultBlockParam_tuple;
PyObject *const_str_plain_BetaSearchResultBlockParam;
PyObject *const_str_plain_beta_server_tool_use_block_param;
PyObject *const_tuple_str_plain_BetaServerToolUseBlockParam_tuple;
PyObject *const_str_plain_BetaServerToolUseBlockParam;
PyObject *const_str_plain_beta_container_upload_block_param;
PyObject *const_tuple_str_plain_BetaContainerUploadBlockParam_tuple;
PyObject *const_str_plain_BetaContainerUploadBlockParam;
PyObject *const_str_plain_beta_request_document_block_param;
PyObject *const_tuple_str_plain_BetaRequestDocumentBlockParam_tuple;
PyObject *const_str_plain_BetaRequestDocumentBlockParam;
PyObject *const_str_plain_beta_redacted_thinking_block_param;
PyObject *const_tuple_str_plain_BetaRedactedThinkingBlockParam_tuple;
PyObject *const_str_plain_BetaRedactedThinkingBlockParam;
PyObject *const_str_plain_beta_advisor_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaAdvisorToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaAdvisorToolResultBlockParam;
PyObject *const_str_plain_beta_web_fetch_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaWebFetchToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaWebFetchToolResultBlockParam;
PyObject *const_str_plain_beta_web_search_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaWebSearchToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaWebSearchToolResultBlockParam;
PyObject *const_str_plain_beta_request_mcp_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaRequestMCPToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaRequestMCPToolResultBlockParam;
PyObject *const_str_plain_beta_tool_search_tool_result_block_param;
PyObject *const_tuple_str_plain_BetaToolSearchToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaToolSearchToolResultBlockParam;
PyObject *const_str_digest_2033de3eae3f0612be915e537c06481a;
PyObject *const_tuple_str_plain_BetaCodeExecutionToolResultBlockParam_tuple;
PyObject *const_str_plain_BetaCodeExecutionToolResultBlockParam;
PyObject *const_str_digest_033e6dcd7ae8edf31c795b4c02c104e9;
PyObject *const_tuple_str_digest_84748e310d7d02dde0340e3ef00a9c0b_tuple;
PyObject *const_str_digest_84748e310d7d02dde0340e3ef00a9c0b;
PyObject *const_str_digest_101215fe74cbc77d5879b71d6042d2ca;
PyObject *const_tuple_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08_tuple;
PyObject *const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08;
PyObject *const_str_plain_BetaContentBlockParam;
PyObject *const_str_digest_d033bb7ae58166a01b1c30a0b498917d;
PyObject *const_str_digest_0a358044b0abaff94b9291cadc11ef59;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[73];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.beta_content_block_param"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAlias_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_content_block);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContentBlock_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContentBlock);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_text_block_param);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaTextBlockParam);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_image_block_param);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaImageBlockParam_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaImageBlockParam);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_thinking_block_param);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaThinkingBlockParam_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaThinkingBlockParam);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_use_block_param);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolUseBlockParam_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolUseBlockParam);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_compaction_block_param);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCompactionBlockParam_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCompactionBlockParam);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_result_block_param);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolResultBlockParam_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolResultBlockParam);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_mcp_tool_use_block_param);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMCPToolUseBlockParam_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_search_result_block_param);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSearchResultBlockParam_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSearchResultBlockParam);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_server_tool_use_block_param);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaServerToolUseBlockParam_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaServerToolUseBlockParam);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_container_upload_block_param);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContainerUploadBlockParam_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContainerUploadBlockParam);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_request_document_block_param);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestDocumentBlockParam_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_redacted_thinking_block_param);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRedactedThinkingBlockParam_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_advisor_tool_result_block_param);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaAdvisorToolResultBlockParam_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_result_block_param);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchToolResultBlockParam_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_result_block_param);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchToolResultBlockParam_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_request_mcp_tool_result_block_param);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestMCPToolResultBlockParam_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_search_tool_result_block_param);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolResultBlockParam_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_2033de3eae3f0612be915e537c06481a);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionToolResultBlockParam_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_033e6dcd7ae8edf31c795b4c02c104e9);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_84748e310d7d02dde0340e3ef00a9c0b_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_101215fe74cbc77d5879b71d6042d2ca);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContentBlockParam);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_d033bb7ae58166a01b1c30a0b498917d);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a358044b0abaff94b9291cadc11ef59);
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
void checkModuleConstants_anthropic$types$beta$beta_content_block_param(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_content_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_content_block);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContentBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaContentBlock_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaContentBlock);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_text_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_text_block_param);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaTextBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaTextBlockParam);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_image_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_image_block_param);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaImageBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaImageBlockParam_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaImageBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaImageBlockParam);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_thinking_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_thinking_block_param);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaThinkingBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaThinkingBlockParam_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaThinkingBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaThinkingBlockParam);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_use_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_use_block_param);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolUseBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolUseBlockParam_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolUseBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolUseBlockParam);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_compaction_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_compaction_block_param);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCompactionBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCompactionBlockParam_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCompactionBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCompactionBlockParam);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_result_block_param);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolResultBlockParam_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolResultBlockParam);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_mcp_tool_use_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_mcp_tool_use_block_param);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMCPToolUseBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaMCPToolUseBlockParam_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMCPToolUseBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_search_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_search_result_block_param);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSearchResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaSearchResultBlockParam_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSearchResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaSearchResultBlockParam);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_server_tool_use_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_server_tool_use_block_param);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaServerToolUseBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaServerToolUseBlockParam_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaServerToolUseBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaServerToolUseBlockParam);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_container_upload_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_container_upload_block_param);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaContainerUploadBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaContainerUploadBlockParam_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContainerUploadBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaContainerUploadBlockParam);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_request_document_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_request_document_block_param);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestDocumentBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaRequestDocumentBlockParam_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestDocumentBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_redacted_thinking_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_redacted_thinking_block_param);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRedactedThinkingBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaRedactedThinkingBlockParam_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_advisor_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_advisor_tool_result_block_param);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaAdvisorToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaAdvisorToolResultBlockParam_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_fetch_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_fetch_tool_result_block_param);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebFetchToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebFetchToolResultBlockParam_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_web_search_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_web_search_tool_result_block_param);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebSearchToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebSearchToolResultBlockParam_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_request_mcp_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_request_mcp_tool_result_block_param);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaRequestMCPToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaRequestMCPToolResultBlockParam_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_tool_search_tool_result_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_tool_search_tool_result_block_param);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaToolSearchToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaToolSearchToolResultBlockParam_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_2033de3eae3f0612be915e537c06481a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2033de3eae3f0612be915e537c06481a);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaCodeExecutionToolResultBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaCodeExecutionToolResultBlockParam_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_033e6dcd7ae8edf31c795b4c02c104e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_033e6dcd7ae8edf31c795b4c02c104e9);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_84748e310d7d02dde0340e3ef00a9c0b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_84748e310d7d02dde0340e3ef00a9c0b_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_101215fe74cbc77d5879b71d6042d2ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_101215fe74cbc77d5879b71d6042d2ca);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaContentBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaContentBlockParam);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_d033bb7ae58166a01b1c30a0b498917d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d033bb7ae58166a01b1c30a0b498917d);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a358044b0abaff94b9291cadc11ef59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a358044b0abaff94b9291cadc11ef59);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 24
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
static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaAdvisorToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaBashCodeExecutionToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaCodeExecutionToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaCompactionBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCompactionBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCompactionBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCompactionBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaCompactionBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaCompactionBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCompactionBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCompactionBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCompactionBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaContainerUploadBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContainerUploadBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaContainerUploadBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaContainerUploadBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaContainerUploadBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaContainerUploadBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContainerUploadBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContainerUploadBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContainerUploadBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaContentBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaContentBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaContentBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaContentBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaContentBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaImageBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaImageBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaImageBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaImageBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaImageBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaImageBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaImageBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaImageBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaImageBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaMCPToolUseBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMCPToolUseBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaMCPToolUseBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRedactedThinkingBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRequestDocumentBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRequestDocumentBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRequestDocumentBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRequestMCPToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaSearchResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSearchResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSearchResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSearchResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSearchResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSearchResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSearchResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSearchResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSearchResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaServerToolUseBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaServerToolUseBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaServerToolUseBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaServerToolUseBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaServerToolUseBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaServerToolUseBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaServerToolUseBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaServerToolUseBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaServerToolUseBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaTextBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaTextBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaTextBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaTextBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaTextBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaTextEditorCodeExecutionToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaThinkingBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaThinkingBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaThinkingBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaThinkingBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaThinkingBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolSearchToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolUseBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolUseBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolUseBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolUseBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaToolUseBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaToolUseBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolUseBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolUseBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolUseBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaWebFetchToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaWebSearchToolResultBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_content_block_param$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_content_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_content_block_param->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_27ff786b504bd7ffe696b2047a4c33bd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d033bb7ae58166a01b1c30a0b498917d); CHECK_OBJECT(module_filename_obj);
code_objects_27ff786b504bd7ffe696b2047a4c33bd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0a358044b0abaff94b9291cadc11ef59, mod_consts.const_str_digest_0a358044b0abaff94b9291cadc11ef59, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


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

static function_impl_code const function_table_anthropic$types$beta$beta_content_block_param[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$beta_content_block_param);
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
        module_anthropic$types$beta$beta_content_block_param,
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
        function_table_anthropic$types$beta$beta_content_block_param,
        sizeof(function_table_anthropic$types$beta$beta_content_block_param) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.beta_content_block_param";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$beta_content_block_param(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$beta_content_block_param");

    // Store the module for future use.
    module_anthropic$types$beta$beta_content_block_param = module;

    moduledict_anthropic$types$beta$beta_content_block_param = MODULE_DICT(module_anthropic$types$beta$beta_content_block_param);

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
        PRINT_STRING("anthropic$types$beta$beta_content_block_param: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$beta_content_block_param: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$beta_content_block_param: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.beta_content_block_param" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$beta_content_block_param\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$beta_content_block_param,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$beta_content_block_param,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$beta_content_block_param,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$beta_content_block_param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$beta_content_block_param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$beta_content_block_param);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$beta_content_block_param);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$beta_content_block_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$beta_content_block_param = MAKE_MODULE_FRAME(code_objects_27ff786b504bd7ffe696b2047a4c33bd, module_anthropic$types$beta$beta_content_block_param);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$beta_content_block_param);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$beta_content_block_param) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$beta_content_block_param$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_TypeAlias);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_beta_content_block;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_BetaContentBlock_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BetaContentBlock);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlock, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_beta_text_block_param;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BetaTextBlockParam_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 9;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaTextBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_BetaTextBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaTextBlockParam, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_beta_image_block_param;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BetaImageBlockParam_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 10;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaImageBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BetaImageBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaImageBlockParam, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_thinking_block_param;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaThinkingBlockParam_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 11;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaThinkingBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BetaThinkingBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaThinkingBlockParam, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_tool_use_block_param;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaToolUseBlockParam_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 12;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaToolUseBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BetaToolUseBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolUseBlockParam, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_compaction_block_param;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaCompactionBlockParam_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 13;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaCompactionBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BetaCompactionBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCompactionBlockParam, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_beta_tool_result_block_param;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaToolResultBlockParam_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 14;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolResultBlockParam, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_beta_mcp_tool_use_block_param;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaMCPToolUseBlockParam_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 15;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaMCPToolUseBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMCPToolUseBlockParam, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_beta_search_result_block_param;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaSearchResultBlockParam_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 16;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaSearchResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaSearchResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSearchResultBlockParam, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_beta_server_tool_use_block_param;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BetaServerToolUseBlockParam_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 17;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaServerToolUseBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaServerToolUseBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaServerToolUseBlockParam, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_beta_container_upload_block_param;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaContainerUploadBlockParam_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 18;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaContainerUploadBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaContainerUploadBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContainerUploadBlockParam, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_beta_request_document_block_param;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaRequestDocumentBlockParam_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 19;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaRequestDocumentBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestDocumentBlockParam, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_beta_redacted_thinking_block_param;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaRedactedThinkingBlockParam_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 20;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaRedactedThinkingBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRedactedThinkingBlockParam, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_beta_advisor_tool_result_block_param;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_BetaAdvisorToolResultBlockParam_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 21;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_beta_web_fetch_tool_result_block_param;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_BetaWebFetchToolResultBlockParam_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 22;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_beta_web_search_tool_result_block_param;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_BetaWebSearchToolResultBlockParam_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 23;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_beta_request_mcp_tool_result_block_param;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_BetaRequestMCPToolResultBlockParam_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 24;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_beta_tool_search_tool_result_block_param;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_BetaToolSearchToolResultBlockParam_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 25;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_digest_2033de3eae3f0612be915e537c06481a;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_BetaCodeExecutionToolResultBlockParam_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 26;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_digest_033e6dcd7ae8edf31c795b4c02c104e9;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_digest_84748e310d7d02dde0340e3ef00a9c0b_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 27;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_digest_101215fe74cbc77d5879b71d6042d2ca;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_content_block_param->m_frame.f_lineno = 28;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$types$beta$beta_content_block_param,
        mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_digest_265b5b4f24cb0c79fa70b6843fbb2d08, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_LIST1(tstate, mod_consts.const_str_plain_BetaContentBlockParam);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaTextBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaTextBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 21);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaImageBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaImageBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRequestDocumentBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaRequestDocumentBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaSearchResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaSearchResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaThinkingBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaThinkingBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRedactedThinkingBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaRedactedThinkingBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolUseBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolUseBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaServerToolUseBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaServerToolUseBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 8, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaWebSearchToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebSearchToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 9, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaWebFetchToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebFetchToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 10, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaAdvisorToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaAdvisorToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 11, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaCodeExecutionToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaCodeExecutionToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 12, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaBashCodeExecutionToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_84748e310d7d02dde0340e3ef00a9c0b);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 13, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaTextEditorCodeExecutionToolResultBlockParam(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_1, 14, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaToolSearchToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaToolSearchToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 15, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaMCPToolUseBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaMCPToolUseBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 16, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaRequestMCPToolResultBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaRequestMCPToolResultBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 17, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaContainerUploadBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaContainerUploadBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 18, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaCompactionBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaCompactionBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 19, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$BetaContentBlock(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaContentBlock);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 20, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaContentBlockParam, tmp_assign_source_30);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$beta$beta_content_block_param$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_BetaContentBlockParam;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$beta_content_block_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$beta_content_block_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$beta_content_block_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$beta_content_block_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$beta_content_block_param", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.beta_content_block_param" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$beta_content_block_param);
    return module_anthropic$types$beta$beta_content_block_param;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_content_block_param, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$beta_content_block_param", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

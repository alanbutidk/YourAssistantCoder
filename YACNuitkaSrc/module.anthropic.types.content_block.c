/* Generated code for Python module 'anthropic$types$content_block'
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



/* The "module_anthropic$types$content_block" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$content_block;
PyDictObject *moduledict_anthropic$types$content_block;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_text_block;
PyObject *const_tuple_str_plain_TextBlock_tuple;
PyObject *const_str_plain_TextBlock;
PyObject *const_str_plain_thinking_block;
PyObject *const_tuple_str_plain_ThinkingBlock_tuple;
PyObject *const_str_plain_ThinkingBlock;
PyObject *const_str_plain_tool_use_block;
PyObject *const_tuple_str_plain_ToolUseBlock_tuple;
PyObject *const_str_plain_ToolUseBlock;
PyObject *const_str_plain_server_tool_use_block;
PyObject *const_tuple_str_plain_ServerToolUseBlock_tuple;
PyObject *const_str_plain_ServerToolUseBlock;
PyObject *const_str_plain_container_upload_block;
PyObject *const_tuple_str_plain_ContainerUploadBlock_tuple;
PyObject *const_str_plain_ContainerUploadBlock;
PyObject *const_str_plain_redacted_thinking_block;
PyObject *const_tuple_str_plain_RedactedThinkingBlock_tuple;
PyObject *const_str_plain_RedactedThinkingBlock;
PyObject *const_str_plain_web_fetch_tool_result_block;
PyObject *const_tuple_str_plain_WebFetchToolResultBlock_tuple;
PyObject *const_str_plain_WebFetchToolResultBlock;
PyObject *const_str_plain_web_search_tool_result_block;
PyObject *const_tuple_str_plain_WebSearchToolResultBlock_tuple;
PyObject *const_str_plain_WebSearchToolResultBlock;
PyObject *const_str_plain_tool_search_tool_result_block;
PyObject *const_tuple_str_plain_ToolSearchToolResultBlock_tuple;
PyObject *const_str_plain_ToolSearchToolResultBlock;
PyObject *const_str_plain_code_execution_tool_result_block;
PyObject *const_tuple_str_plain_CodeExecutionToolResultBlock_tuple;
PyObject *const_str_plain_CodeExecutionToolResultBlock;
PyObject *const_str_plain_bash_code_execution_tool_result_block;
PyObject *const_tuple_str_plain_BashCodeExecutionToolResultBlock_tuple;
PyObject *const_str_plain_BashCodeExecutionToolResultBlock;
PyObject *const_str_digest_b61ad248bf70bd94e572add443b2f5a8;
PyObject *const_tuple_str_plain_TextEditorCodeExecutionToolResultBlock_tuple;
PyObject *const_str_plain_TextEditorCodeExecutionToolResultBlock;
PyObject *const_str_plain_ContentBlock;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_digest_307cd0d768c4fa748a26fefba089ff15;
PyObject *const_str_digest_03620d0542d9616598ffba13c7591b50;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.content_block"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_block);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextBlock_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextBlock);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_thinking_block);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ThinkingBlock_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThinkingBlock);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_use_block);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolUseBlock_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolUseBlock);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_use_block);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolUseBlock_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolUseBlock);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_upload_block);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerUploadBlock_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerUploadBlock);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_redacted_thinking_block);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RedactedThinkingBlock_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_RedactedThinkingBlock);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_tool_result_block);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchToolResultBlock_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultBlock);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_web_search_tool_result_block);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebSearchToolResultBlock_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebSearchToolResultBlock);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_search_tool_result_block);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolSearchToolResultBlock_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolSearchToolResultBlock);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution_tool_result_block);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeExecutionToolResultBlock_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeExecutionToolResultBlock);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_bash_code_execution_tool_result_block);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BashCodeExecutionToolResultBlock_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_b61ad248bf70bd94e572add443b2f5a8);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextEditorCodeExecutionToolResultBlock_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentBlock);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_307cd0d768c4fa748a26fefba089ff15);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_03620d0542d9616598ffba13c7591b50);
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
void checkModuleConstants_anthropic$types$content_block(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_block);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextBlock_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextBlock);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_thinking_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thinking_block);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ThinkingBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ThinkingBlock_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThinkingBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThinkingBlock);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_use_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_use_block);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolUseBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolUseBlock_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolUseBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolUseBlock);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_use_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_tool_use_block);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolUseBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ServerToolUseBlock_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolUseBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerToolUseBlock);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_upload_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_upload_block);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerUploadBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerUploadBlock_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerUploadBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerUploadBlock);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_redacted_thinking_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_redacted_thinking_block);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RedactedThinkingBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RedactedThinkingBlock_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_RedactedThinkingBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RedactedThinkingBlock);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_tool_result_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_web_fetch_tool_result_block);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebFetchToolResultBlock_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebFetchToolResultBlock);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_web_search_tool_result_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_web_search_tool_result_block);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebSearchToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebSearchToolResultBlock_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebSearchToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebSearchToolResultBlock);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_search_tool_result_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_search_tool_result_block);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolSearchToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolSearchToolResultBlock_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolSearchToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolSearchToolResultBlock);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution_tool_result_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_execution_tool_result_block);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeExecutionToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeExecutionToolResultBlock_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeExecutionToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeExecutionToolResultBlock);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_bash_code_execution_tool_result_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bash_code_execution_tool_result_block);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BashCodeExecutionToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BashCodeExecutionToolResultBlock_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_b61ad248bf70bd94e572add443b2f5a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b61ad248bf70bd94e572add443b2f5a8);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextEditorCodeExecutionToolResultBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextEditorCodeExecutionToolResultBlock_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContentBlock);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_307cd0d768c4fa748a26fefba089ff15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_307cd0d768c4fa748a26fefba089ff15);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_03620d0542d9616598ffba13c7591b50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03620d0542d9616598ffba13c7591b50);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_anthropic$types$content_block$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$BashCodeExecutionToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$CodeExecutionToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeExecutionToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeExecutionToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeExecutionToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeExecutionToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeExecutionToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeExecutionToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeExecutionToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeExecutionToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$ContainerUploadBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerUploadBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContainerUploadBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContainerUploadBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContainerUploadBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContainerUploadBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerUploadBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerUploadBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerUploadBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$RedactedThinkingBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_RedactedThinkingBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RedactedThinkingBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RedactedThinkingBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RedactedThinkingBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RedactedThinkingBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_RedactedThinkingBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_RedactedThinkingBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RedactedThinkingBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$ServerToolUseBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolUseBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolUseBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolUseBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolUseBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolUseBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolUseBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolUseBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolUseBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$TextBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TextBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$TextEditorCodeExecutionToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$ThinkingBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ThinkingBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThinkingBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThinkingBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThinkingBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThinkingBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ThinkingBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ThinkingBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThinkingBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$ToolSearchToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolSearchToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToolSearchToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToolSearchToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToolSearchToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToolSearchToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolSearchToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolSearchToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolSearchToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$ToolUseBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolUseBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToolUseBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToolUseBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToolUseBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToolUseBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolUseBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolUseBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolUseBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$WebFetchToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$WebSearchToolResultBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSearchToolResultBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSearchToolResultBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSearchToolResultBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSearchToolResultBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSearchToolResultBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSearchToolResultBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSearchToolResultBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSearchToolResultBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$content_block$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$content_block->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$content_block->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$content_block->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_23d0e242532e75a64d61581186a0f212;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_307cd0d768c4fa748a26fefba089ff15); CHECK_OBJECT(module_filename_obj);
code_objects_23d0e242532e75a64d61581186a0f212 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_03620d0542d9616598ffba13c7591b50, mod_consts.const_str_digest_03620d0542d9616598ffba13c7591b50, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_anthropic$types$content_block[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$content_block);
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
        module_anthropic$types$content_block,
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
        function_table_anthropic$types$content_block,
        sizeof(function_table_anthropic$types$content_block) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.content_block";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$content_block(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$content_block");

    // Store the module for future use.
    module_anthropic$types$content_block = module;

    moduledict_anthropic$types$content_block = MODULE_DICT(module_anthropic$types$content_block);

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
        PRINT_STRING("anthropic$types$content_block: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$content_block: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$content_block: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.content_block" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$content_block\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$content_block,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$content_block,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$content_block,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$content_block,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$content_block,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$content_block);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$content_block);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$content_block;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$content_block = MAKE_MODULE_FRAME(code_objects_23d0e242532e75a64d61581186a0f212, module_anthropic$types$content_block);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$content_block);
assert(Py_REFCNT(frame_frame_anthropic$types$content_block) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$content_block$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$content_block$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_text_block;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TextBlock_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_TextBlock,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TextBlock);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextBlock, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_thinking_block;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ThinkingBlock_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_ThinkingBlock,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ThinkingBlock);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ThinkingBlock, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_tool_use_block;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ToolUseBlock_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_ToolUseBlock,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ToolUseBlock);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolUseBlock, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_server_tool_use_block;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ServerToolUseBlock_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_ServerToolUseBlock,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ServerToolUseBlock);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolUseBlock, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_container_upload_block;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ContainerUploadBlock_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_ContainerUploadBlock,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ContainerUploadBlock);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerUploadBlock, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_redacted_thinking_block;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_RedactedThinkingBlock_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 12;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_RedactedThinkingBlock,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_RedactedThinkingBlock);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_RedactedThinkingBlock, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_web_fetch_tool_result_block;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_WebFetchToolResultBlock_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_WebFetchToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_WebFetchToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlock, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_web_search_tool_result_block;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_WebSearchToolResultBlock_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_WebSearchToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_WebSearchToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSearchToolResultBlock, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_tool_search_tool_result_block;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ToolSearchToolResultBlock_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 15;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_ToolSearchToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ToolSearchToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolSearchToolResultBlock, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_code_execution_tool_result_block;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_CodeExecutionToolResultBlock_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 16;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_CodeExecutionToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_CodeExecutionToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeExecutionToolResultBlock, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_bash_code_execution_tool_result_block;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BashCodeExecutionToolResultBlock_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 17;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_BashCodeExecutionToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_BashCodeExecutionToolResultBlock, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_b61ad248bf70bd94e572add443b2f5a8;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$content_block;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_TextEditorCodeExecutionToolResultBlock_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 18;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$content_block,
        mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_TextEditorCodeExecutionToolResultBlock, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST1(tstate, mod_consts.const_str_plain_ContentBlock);
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_1 = module_var_accessor_anthropic$types$content_block$Annotated(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$types$content_block$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$TextBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TextBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 12);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$ThinkingBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThinkingBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$RedactedThinkingBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RedactedThinkingBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$ToolUseBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToolUseBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$ServerToolUseBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerToolUseBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$WebSearchToolResultBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSearchToolResultBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$WebFetchToolResultBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebFetchToolResultBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$CodeExecutionToolResultBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodeExecutionToolResultBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$BashCodeExecutionToolResultBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BashCodeExecutionToolResultBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 8, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$TextEditorCodeExecutionToolResultBlock(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_2, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$ToolSearchToolResultBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToolSearchToolResultBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 10, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$content_block$ContainerUploadBlock(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ContainerUploadBlock);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 11, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_anthropic$types$content_block$PropertyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_2;
}
frame_frame_anthropic$types$content_block->m_frame.f_lineno = 37;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentBlock, tmp_assign_source_23);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_anthropic$types$content_block$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$content_block$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_ContentBlock;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$content_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$content_block->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$content_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$content_block);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$content_block", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.content_block" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$content_block);
    return module_anthropic$types$content_block;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$content_block, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$content_block", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

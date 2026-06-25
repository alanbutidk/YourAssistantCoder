/* Generated code for Python module 'openai$types$beta$thread_create_params'
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



/* The "module_openai$types$beta$thread_create_params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$thread_create_params;
PyDictObject *moduledict_openai$types$beta$thread_create_params;

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
PyObject *const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_TypedDict;
PyObject *const_str_digest_f08f77b4258590d61446416ee765c721;
PyObject *const_tuple_str_plain_Metadata_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Metadata;
PyObject *const_str_plain_code_interpreter_tool_param;
PyObject *const_tuple_str_plain_CodeInterpreterToolParam_tuple;
PyObject *const_str_plain_CodeInterpreterToolParam;
PyObject *const_str_digest_95741e66c50bb31c9ce0468476ed697a;
PyObject *const_tuple_str_plain_MessageContentPartParam_tuple;
PyObject *const_str_plain_MessageContentPartParam;
PyObject *const_list_0ff2caad6910156e1ca47455c5af7678_list;
PyObject *const_dict_b697b7227c7766cd5072bdb0d1ed9479;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ThreadCreateParams;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_328bdb7a0e690859040a94d6baace31f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_29;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_7aab4b4c20cd994f49923255c7824c3e;
PyObject *const_str_plain_messages;
PyObject *const_str_digest_2bb590217e6f13f3baacdb879846a135;
PyObject *const_str_plain_metadata;
PyObject *const_str_digest_90f2f573607d8298f38b72c71f6baa4c;
PyObject *const_str_plain_tool_resources;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_MessageAttachmentToolFileSearch;
PyObject *const_int_pos_55;
PyObject *const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339;
PyObject *const_str_plain_MessageAttachmentTool;
PyObject *const_str_plain_MessageAttachment;
PyObject *const_int_pos_63;
PyObject *const_str_plain_str;
PyObject *const_str_plain_file_id;
PyObject *const_str_digest_e69bdf8a74f23201642800280ac7c942;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_Message;
PyObject *const_int_pos_71;
PyObject *const_str_digest_ff98c05ce72950312c439033261eb791;
PyObject *const_str_plain_content;
PyObject *const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a;
PyObject *const_str_plain_role;
PyObject *const_str_digest_2867cc1d20709d2865b1bf3522ff163b;
PyObject *const_str_plain_attachments;
PyObject *const_str_plain_ToolResourcesCodeInterpreter;
PyObject *const_int_pos_98;
PyObject *const_str_digest_b2398c7864108277f9186127f92bdc45;
PyObject *const_str_plain_file_ids;
PyObject *const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7;
PyObject *const_int_pos_107;
PyObject *const_str_digest_d5944c53179ece858010150e36b2975a;
PyObject *const_str_digest_b224de58ff59dc02d72ce2777790faba;
PyObject *const_int_pos_112;
PyObject *const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
PyObject *const_str_plain_chunk_overlap_tokens;
PyObject *const_str_plain_max_chunk_size_tokens;
PyObject *const_str_digest_4483deda63f1937aed5288ad181af661;
PyObject *const_int_pos_127;
PyObject *const_str_digest_3d39d7ecf2d50916500247dbb2f89c60;
PyObject *const_str_plain_static;
PyObject *const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57;
PyObject *const_str_digest_4a4500bc1981983f265593a9713d21e2;
PyObject *const_str_plain_ToolResourcesFileSearchVectorStore;
PyObject *const_int_pos_139;
PyObject *const_str_plain_chunking_strategy;
PyObject *const_str_plain_ToolResourcesFileSearch;
PyObject *const_int_pos_164;
PyObject *const_str_plain_vector_store_ids;
PyObject *const_str_digest_bd928fd88c2291e2bbc8c47670bb285f;
PyObject *const_str_plain_vector_stores;
PyObject *const_str_plain_ToolResources;
PyObject *const_int_pos_182;
PyObject *const_str_plain_code_interpreter;
PyObject *const_str_plain_file_search;
PyObject *const_str_digest_71cadf40404a57405a81199a678e2b1a;
PyObject *const_str_digest_e5ed65a02797a34843e93826638bc051;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[93];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.thread_create_params"));
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
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_param);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolParam);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_list_0ff2caad6910156e1ca47455c5af7678_list);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateParams);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_29);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_7aab4b4c20cd994f49923255c7824c3e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_resources);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachmentTool);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachment);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_63);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_id);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_e69bdf8a74f23201642800280ac7c942);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_71);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_2867cc1d20709d2865b1bf3522ff163b);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_attachments);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesCodeInterpreter);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_ids);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_112);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_overlap_tokens);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_chunk_size_tokens);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d39d7ecf2d50916500247dbb2f89c60);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_static);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_int_pos_139);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearch);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_164);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_ids);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd928fd88c2291e2bbc8c47670bb285f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResources);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_182);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_search);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_71cadf40404a57405a81199a678e2b1a);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5ed65a02797a34843e93826638bc051);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_openai$types$beta$thread_create_params(PyThreadState *tstate) {
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
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDict);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Metadata_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_tool_param);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterToolParam);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageContentPartParam);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_list_0ff2caad6910156e1ca47455c5af7678_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_0ff2caad6910156e1ca47455c5af7678_list);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreateParams);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_29));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_29);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_7aab4b4c20cd994f49923255c7824c3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7aab4b4c20cd994f49923255c7824c3e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_resources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_resources);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachmentToolFileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachmentTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageAttachmentTool);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageAttachment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageAttachment);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_63));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_63);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_id);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_e69bdf8a74f23201642800280ac7c942));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e69bdf8a74f23201642800280ac7c942);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_71));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_71);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_2867cc1d20709d2865b1bf3522ff163b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2867cc1d20709d2865b1bf3522ff163b);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_attachments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attachments);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesCodeInterpreter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResourcesCodeInterpreter);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_98));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_98);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_ids));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_ids);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_112));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_112);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_overlap_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_overlap_tokens);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_chunk_size_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_chunk_size_tokens);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d39d7ecf2d50916500247dbb2f89c60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d39d7ecf2d50916500247dbb2f89c60);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_static));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_static);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_int_pos_139));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_139);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunking_strategy);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResourcesFileSearch);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_164));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_164);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_ids));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_ids);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd928fd88c2291e2bbc8c47670bb285f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd928fd88c2291e2bbc8c47670bb285f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_stores);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResources);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_182));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_182);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_search);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_71cadf40404a57405a81199a678e2b1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71cadf40404a57405a81199a678e2b1a);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5ed65a02797a34843e93826638bc051));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5ed65a02797a34843e93826638bc051);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
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
static PyObject *module_var_accessor_openai$types$beta$thread_create_params$CodeInterpreterToolParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeInterpreterToolParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeInterpreterToolParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeInterpreterToolParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeInterpreterToolParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$MessageAttachmentToolFileSearch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageAttachmentToolFileSearch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageAttachmentToolFileSearch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$ToolResourcesFileSearchVectorStoreChunkingStrategyAuto(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$ToolResourcesFileSearchVectorStoreChunkingStrategyStatic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$TypedDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_params$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_539befd38dc50188db4e6d550b64b9fa;
static PyCodeObject *code_objects_f27807d370b1520da0614ed4dcf36a84;
static PyCodeObject *code_objects_4d4bffd57d12041073a8437a0b9d72ff;
static PyCodeObject *code_objects_09e77da3a27c8694bc2bcef2f9814d3c;
static PyCodeObject *code_objects_652cafa31f33347de9296dc74812774a;
static PyCodeObject *code_objects_4980c5ce10ae553e3df058e6e163b5c1;
static PyCodeObject *code_objects_ff99903c8b386d3cb4811542bed7b977;
static PyCodeObject *code_objects_3f93f07e0c5ed50e6986cceda2c464c4;
static PyCodeObject *code_objects_e8f9fc5b119893138375d2ba8279d97e;
static PyCodeObject *code_objects_48de905b270bc8a5b6b84b140e6515c3;
static PyCodeObject *code_objects_647d26c5960b75cacc1c57f3d1aa18ec;
static PyCodeObject *code_objects_b0d53fed9be028685922c81170bbc47e;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_71cadf40404a57405a81199a678e2b1a); CHECK_OBJECT(module_filename_obj);
code_objects_539befd38dc50188db4e6d550b64b9fa = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e5ed65a02797a34843e93826638bc051, mod_consts.const_str_digest_e5ed65a02797a34843e93826638bc051, NULL, NULL, 0, 0, 0);
code_objects_f27807d370b1520da0614ed4dcf36a84 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Message, mod_consts.const_str_plain_Message, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4d4bffd57d12041073a8437a0b9d72ff = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MessageAttachment, mod_consts.const_str_plain_MessageAttachment, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_09e77da3a27c8694bc2bcef2f9814d3c = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MessageAttachmentToolFileSearch, mod_consts.const_str_plain_MessageAttachmentToolFileSearch, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_652cafa31f33347de9296dc74812774a = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadCreateParams, mod_consts.const_str_plain_ThreadCreateParams, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4980c5ce10ae553e3df058e6e163b5c1 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResources, mod_consts.const_str_plain_ToolResources, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ff99903c8b386d3cb4811542bed7b977 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResourcesCodeInterpreter, mod_consts.const_str_plain_ToolResourcesCodeInterpreter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3f93f07e0c5ed50e6986cceda2c464c4 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResourcesFileSearch, mod_consts.const_str_plain_ToolResourcesFileSearch, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e8f9fc5b119893138375d2ba8279d97e = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore, mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_48de905b270bc8a5b6b84b140e6515c3 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_647d26c5960b75cacc1c57f3d1aa18ec = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b0d53fed9be028685922c81170bbc47e = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba, mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$beta$thread_create_params[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$thread_create_params);
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
        module_openai$types$beta$thread_create_params,
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
        function_table_openai$types$beta$thread_create_params,
        sizeof(function_table_openai$types$beta$thread_create_params) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.thread_create_params";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$thread_create_params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$thread_create_params");

    // Store the module for future use.
    module_openai$types$beta$thread_create_params = module;

    moduledict_openai$types$beta$thread_create_params = MODULE_DICT(module_openai$types$beta$thread_create_params);

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
        PRINT_STRING("openai$types$beta$thread_create_params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$thread_create_params: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$thread_create_params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.thread_create_params" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$thread_create_params\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$thread_create_params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$thread_create_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$thread_create_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$thread_create_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$thread_create_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$thread_create_params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$thread_create_params);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params;
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
PyObject *locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$types$beta$thread_create_params$$$class__4_Message_71 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$thread_create_params = MAKE_MODULE_FRAME(code_objects_539befd38dc50188db4e6d550b64b9fa, module_openai$types$beta$thread_create_params);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$thread_create_params$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$thread_create_params$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$thread_create_params;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_14);
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
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
        mod_consts.const_str_plain_TypedDict,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypedDict);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$thread_create_params;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Metadata_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 8;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Metadata);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_code_interpreter_tool_param;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$thread_create_params;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 9;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
        mod_consts.const_str_plain_CodeInterpreterToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_CodeInterpreterToolParam);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$thread_create_params;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 10;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$beta$thread_create_params,
        mod_consts.const_str_plain_MessageContentPartParam,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MessageContentPartParam);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageContentPartParam, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = LIST_COPY(tstate, mod_consts.const_list_0ff2caad6910156e1ca47455c5af7678_list);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto try_except_handler_3;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
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


exception_lineno = 29;

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


exception_lineno = 29;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_23;
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


exception_lineno = 29;

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
PyObject *tmp_assign_source_24;
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


exception_lineno = 29;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ThreadCreateParams;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 29;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
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


exception_lineno = 29;

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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

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


exception_lineno = 29;

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


exception_lineno = 29;

    goto try_except_handler_3;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 29;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 29;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
branch_end_1:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadCreateParams;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_29;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2 = MAKE_CLASS_FRAME(tstate, code_objects_652cafa31f33347de9296dc74812774a, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_7aab4b4c20cd994f49923255c7824c3e;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
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


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_tool_resources;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_2);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

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


exception_lineno = 29;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ThreadCreateParams;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 29;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_26 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29);
locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29);
locals_openai$types$beta$thread_create_params$$$class__1_ThreadCreateParams_29 = NULL;
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
exception_lineno = 29;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateParams, tmp_assign_source_26);
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_MessageAttachmentToolFileSearch;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 55;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 55;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
branch_end_4:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_MessageAttachmentToolFileSearch;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3 = MAKE_CLASS_FRAME(tstate, code_objects_09e77da3a27c8694bc2bcef2f9814d3c, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_MessageAttachmentToolFileSearch;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 55;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_35;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_34 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55);
locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55);
locals_openai$types$beta$thread_create_params$$$class__2_MessageAttachmentToolFileSearch_55 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 55;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentToolFileSearch, tmp_assign_source_34);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_9;
tmp_expression_value_13 = module_var_accessor_openai$types$beta$thread_create_params$Union(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$thread_create_params$CodeInterpreterToolParam(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodeInterpreterToolParam);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$thread_create_params$MessageAttachmentToolFileSearch(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageAttachmentToolFileSearch);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_9);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachmentTool, tmp_assign_source_36);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_5 = module_var_accessor_openai$types$beta$thread_create_params$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_MessageAttachmentTool;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_40;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_MessageAttachment;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 63;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_9;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 63;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 63;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_42;
}
branch_end_7:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_MessageAttachment;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_63;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4 = MAKE_CLASS_FRAME(tstate, code_objects_4d4bffd57d12041073a8437a0b9d72ff, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_file_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_e69bdf8a74f23201642800280ac7c942;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_MessageAttachment;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 63;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_43 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63);
locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63);
locals_openai$types$beta$thread_create_params$$$class__3_MessageAttachment_63 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 63;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageAttachment, tmp_assign_source_43);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_20 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_5, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_48;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_Message;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 71;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_49;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_8, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 71;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 71;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
branch_end_10:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$types$beta$thread_create_params$$$class__4_Message_71 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_Message;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_71;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5 = MAKE_CLASS_FRAME(tstate, code_objects_f27807d370b1520da0614ed4dcf36a84, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_role;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_2867cc1d20709d2865b1bf3522ff163b;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_attachments;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__4_Message_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__4_Message_71, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_Message;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_openai$types$beta$thread_create_params$$$class__4_Message_71;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 71;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_51 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__4_Message_71);
locals_openai$types$beta$thread_create_params$$$class__4_Message_71 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__4_Message_71);
locals_openai$types$beta$thread_create_params$$$class__4_Message_71 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 71;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_51);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_26 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_6, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 98;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_29 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_30;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_9, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_15;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 98;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_58;
}
branch_end_13:;
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_98;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6 = MAKE_CLASS_FRAME(tstate, code_objects_ff99903c8b386d3cb4811542bed7b977, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_file_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
branch_no_15:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 98;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_59 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98);
locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98);
locals_openai$types$beta$thread_create_params$$$class__5_ToolResourcesCodeInterpreter_98 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 98;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResourcesCodeInterpreter, tmp_assign_source_59);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_tuple_element_22;
tmp_tuple_element_22 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_assign_source_61 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_22);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_62 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_32 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_7, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_64;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_tuple_element_23 = mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 107;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_65;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_10, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_18;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 107;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_66;
}
branch_end_16:;
{
PyObject *tmp_assign_source_67;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7 = MAKE_CLASS_FRAME(tstate, code_objects_48de905b270bc8a5b6b84b140e6515c3, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_13 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
branch_no_18:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 107;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_68;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_67 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_67);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107);
locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107);
locals_openai$types$beta$thread_create_params$$$class__6_ToolResourcesFileSearchVectorStoreChunkingStrategyAuto_107 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 107;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7, tmp_assign_source_67);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_69;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_assign_source_69 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_70 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_38 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_8, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_72;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_tuple_element_27 = mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 112;
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_73;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_11, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_21;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 112;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 112;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_74;
}
branch_end_19:;
{
PyObject *tmp_assign_source_75;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_112;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8 = MAKE_CLASS_FRAME(tstate, code_objects_b0d53fed9be028685922c81170bbc47e, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
tmp_ass_subscribed_14 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_chunk_overlap_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
tmp_ass_subscribed_15 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_max_chunk_size_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_23;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
branch_no_21:;
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 112;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_76;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_75 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_75);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112);
locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112);
locals_openai$types$beta$thread_create_params$$$class__7_ToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_112 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 112;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_b224de58ff59dc02d72ce2777790faba, tmp_assign_source_75);
}
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_77;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_assign_source_77 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_77, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_78 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_78;
}
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_9, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_80;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_tuple_element_31 = mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 127;
tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_81;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_12, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_24;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 127;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_82;
}
branch_end_22:;
{
PyObject *tmp_assign_source_83;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_127;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9 = MAKE_CLASS_FRAME(tstate, code_objects_647d26c5960b75cacc1c57f3d1aa18ec, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_digest_3d39d7ecf2d50916500247dbb2f89c60;
tmp_ass_subscribed_16 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_static;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57;
tmp_ass_subscribed_17 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_17 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_26;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 127;
tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_84;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_83 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_83);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127);
locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127);
locals_openai$types$beta$thread_create_params$$$class__8_ToolResourcesFileSearchVectorStoreChunkingStrategyStatic_127 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 127;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661, tmp_assign_source_83);
}
goto try_end_10;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_34;
tmp_expression_value_50 = module_var_accessor_openai$types$beta$thread_create_params$Union(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_tuple_element_34 = module_var_accessor_openai$types$beta$thread_create_params$ToolResourcesFileSearchVectorStoreChunkingStrategyAuto(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_a5f2ae001d774e83f9a2fc613292d7d7);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = module_var_accessor_openai$types$beta$thread_create_params$ToolResourcesFileSearchVectorStoreChunkingStrategyStatic(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_4483deda63f1937aed5288ad181af661);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_34);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_85 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2, tmp_assign_source_85);
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_18 = module_var_accessor_openai$types$beta$thread_create_params$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_18 = mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_86;
PyObject *tmp_tuple_element_35;
tmp_tuple_element_35 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_assign_source_86 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_86, 0, tmp_tuple_element_35);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_87 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_51 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_11, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_89 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_89;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_tuple_element_36 = mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 139;
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_90;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_54 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_55;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_13, tmp_default_value_9);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_37);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_27;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 139;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 139;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_91;
}
branch_end_25:;
{
PyObject *tmp_assign_source_92;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_139;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10 = MAKE_CLASS_FRAME(tstate, code_objects_e8f9fc5b119893138375d2ba8279d97e, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = mod_consts.const_str_digest_4a4500bc1981983f265593a9713d21e2;
tmp_ass_subscribed_19 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_chunking_strategy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_20 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_file_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_21 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_29;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
branch_no_27:;
{
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_38 = mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_38);
tmp_tuple_element_38 = locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 139;
tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_93;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_92 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_92);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139);
locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139);
locals_openai$types$beta$thread_create_params$$$class__9_ToolResourcesFileSearchVectorStore_139 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 139;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResourcesFileSearchVectorStore, tmp_assign_source_92);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_94;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_assign_source_94 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_94, 0, tmp_tuple_element_39);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_94;
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_95 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_57 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_12, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_97 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_97;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_tuple_element_40 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 164;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_98;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_60 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_61;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_14, tmp_default_value_10);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_62;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_62 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_41);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_30;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 164;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_99;
tmp_assign_source_99 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_99;
}
branch_end_28:;
{
PyObject *tmp_assign_source_100;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_164;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11 = MAKE_CLASS_FRAME(tstate, code_objects_3f93f07e0c5ed50e6986cceda2c464c4, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_22 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_vector_store_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = mod_consts.const_str_digest_bd928fd88c2291e2bbc8c47670bb285f;
tmp_ass_subscribed_23 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_vector_stores;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_32;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
branch_no_30:;
{
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 164;
tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_32;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_101;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_100 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_100);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164);
locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164);
locals_openai$types$beta$thread_create_params$$$class__10_ToolResourcesFileSearch_164 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 164;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResourcesFileSearch, tmp_assign_source_100);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_102;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_openai$types$beta$thread_create_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_assign_source_102 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_102, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_103 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_63 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_13, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_105 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_105;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_64 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_tuple_element_44 = mod_consts.const_str_plain_ToolResources;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 182;
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_106;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_66 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_67;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_15, tmp_default_value_11);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_68;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_68 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_33;
}
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 182;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 182;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_107;
tmp_assign_source_107 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_107;
}
branch_end_31:;
{
PyObject *tmp_assign_source_108;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_328bdb7a0e690859040a94d6baace31f;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResources;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_182;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12 = MAKE_CLASS_FRAME(tstate, code_objects_4980c5ce10ae553e3df058e6e163b5c1, module_openai$types$beta$thread_create_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_ass_subvalue_24 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_ass_subscribed_24 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_code_interpreter;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_ass_subvalue_25 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_ass_subscribed_25 = PyObject_GetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_file_search;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_params$$$class__11_ToolResources_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_35;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
branch_no_33:;
{
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_46 = mod_consts.const_str_plain_ToolResources;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$thread_create_params->m_frame.f_lineno = 182;
tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_35;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_109;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_108 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_108);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182);
locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182);
locals_openai$types$beta$thread_create_params$$$class__11_ToolResources_182 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 182;
goto try_except_handler_33;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResources, tmp_assign_source_108);
}
goto try_end_13;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$thread_create_params);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_12:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$thread_create_params", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.thread_create_params" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$thread_create_params);
    return module_openai$types$beta$thread_create_params;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$thread_create_params", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

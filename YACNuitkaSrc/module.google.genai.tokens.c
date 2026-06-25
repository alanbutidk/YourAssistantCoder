/* Generated code for Python module 'google$genai$tokens'
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



/* The "module_google$genai$tokens" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$tokens;
PyDictObject *moduledict_google$genai$tokens;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_items;
PyObject *const_str_plain_fields;
PyObject *const_str_chr_44;
PyObject *const_str_digest_d87cb70509ef09f667ee1079d83b1495;
PyObject *const_tuple_str_plain_bidiGenerateContentSetup_tuple;
PyObject *const_tuple_str_plain_setup_tuple;
PyObject *const_str_plain_bidiGenerateContentSetup;
PyObject *const_str_plain__get_field_masks;
PyObject *const_tuple_str_plain_lock_additional_fields_tuple;
PyObject *const_str_plain_CreateAuthTokenConfig;
PyObject *const_str_plain_lock_additional_fields;
PyObject *const_str_plain_fieldMask;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_fieldMask_none_tuple;
PyObject *const_tuple_str_plain_fieldMask_tuple;
PyObject *const_str_plain_GenerationConfig;
PyObject *const_str_plain_model_dump;
PyObject *const_str_digest_a12399b192966e066e7929fe4929fd0e;
PyObject *const_str_plain_field_mask_list;
PyObject *const_tuple_str_plain_bidiGenerateContentSetup_none_tuple;
PyObject *const_str_digest_415ae6330f46f8ddef6880828779b9f3;
PyObject *const_str_plain_CreateAuthTokenParameters;
PyObject *const_tuple_str_plain_config_tuple;
PyObject *const_str_plain__api_client;
PyObject *const_str_plain_vertexai;
PyObject *const_str_digest_767283412006e9efc088b88488acea66;
PyObject *const_str_plain_tokens_converters;
PyObject *const_str_plain__CreateAuthTokenParameters_to_mldev;
PyObject *const_tuple_str_plain__url_tuple;
PyObject *const_str_plain_auth_tokens;
PyObject *const_str_plain_format_map;
PyObject *const_tuple_str_plain__query_tuple;
PyObject *const_str_chr_63;
PyObject *const_str_plain_urlencode;
PyObject *const_tuple_str_plain_config_none_tuple;
PyObject *const_str_plain__convert_bidi_setup_to_token_setup;
PyObject *const_str_plain_config;
PyObject *const_str_plain_http_options;
PyObject *const_str_plain__common;
PyObject *const_str_plain_convert_to_dict;
PyObject *const_str_plain_request_dict;
PyObject *const_str_plain_encode_unserializable_types;
PyObject *const_str_plain_request;
PyObject *const_str_plain_post;
PyObject *const_str_plain_body;
PyObject *const_str_plain_json;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_AuthToken;
PyObject *const_str_plain__from_response;
PyObject *const_tuple_str_plain_response_str_plain_kwargs_tuple;
PyObject *const_str_plain__verify_response;
PyObject *const_str_digest_400ba13ced4373b485c876dfab0afdb9;
PyObject *const_str_digest_f2ccc06f8d81b61c54bb8a821fbf10e3;
PyObject *const_str_plain_self;
PyObject *const_str_plain_async_request;
PyObject *const_tuple_str_plain_http_options_tuple;
PyObject *const_str_plain_create;
PyObject *const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87;
PyObject *const_str_digest_ca88815311d3e2ce264d11ad627413ba;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Optional;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urlencode_tuple;
PyObject *const_tuple_str_plain__api_module_tuple;
PyObject *const_str_plain__api_module;
PyObject *const_tuple_str_plain__common_tuple;
PyObject *const_tuple_str_plain__tokens_converters_tuple;
PyObject *const_str_plain__tokens_converters;
PyObject *const_tuple_str_plain_types_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_9a593117ebfc1ecde969f925db676517_tuple;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_setup;
PyObject *const_str_plain_StringDict;
PyObject *const_str_plain_return;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_CreateAuthTokenConfigOrDict;
PyObject *const_str_plain_BaseModule;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Tokens;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_913cae638f6dbe37128f453a89257084;
PyObject *const_str_digest_5c9f075c10de922fcc27b702c83dd6c8;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_113;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_experimental_warning;
PyObject *const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple;
PyObject *const_dict_e81f3c3f4aeb6163c9459eccb640e588;
PyObject *const_str_digest_6199e5fad1345128fbb11762c06b975f;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_AsyncTokens;
PyObject *const_str_digest_590d53ec16259898be64a5fc76f0545b;
PyObject *const_int_pos_269;
PyObject *const_str_digest_9367ad399b363a9365ad957f50c45839;
PyObject *const_str_digest_563eeed612be1d1d8809f9e33bea47e4;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_cbf2cb7de3a5acadeb641b0394bff279_tuple;
PyObject *const_tuple_e96f9f8987dc2a00d3143d6a66c09210_tuple;
PyObject *const_tuple_497105280fadbb52943be80df88a04d2_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[108];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai.tokens"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_d87cb70509ef09f667ee1079d83b1495);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_setup_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_bidiGenerateContentSetup);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_field_masks);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lock_additional_fields_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenConfig);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_lock_additional_fields);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_fieldMask);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fieldMask_none_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fieldMask_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerationConfig);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_a12399b192966e066e7929fe4929fd0e);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_mask_list);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_none_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_415ae6330f46f8ddef6880828779b9f3);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenParameters);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_client);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_767283412006e9efc088b88488acea66);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_converters);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__url_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth_tokens);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_map);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__query_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_none_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_options);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert_to_dict);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_dict);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_unserializable_types);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthToken);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_response);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__verify_response);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_400ba13ced4373b485c876dfab0afdb9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2ccc06f8d81b61c54bb8a821fbf10e3);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_request);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_options_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_create);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca88815311d3e2ce264d11ad627413ba);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_module_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_module);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__tokens_converters_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__tokens_converters);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9a593117ebfc1ecde969f925db676517_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringDict);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenConfigOrDict);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModule);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tokens);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_913cae638f6dbe37128f453a89257084);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c9f075c10de922fcc27b702c83dd6c8);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_113);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_experimental_warning);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_e81f3c3f4aeb6163c9459eccb640e588);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_6199e5fad1345128fbb11762c06b975f);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTokens);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_590d53ec16259898be64a5fc76f0545b);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_269);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_9367ad399b363a9365ad957f50c45839);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_563eeed612be1d1d8809f9e33bea47e4);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_cbf2cb7de3a5acadeb641b0394bff279_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_e96f9f8987dc2a00d3143d6a66c09210_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_497105280fadbb52943be80df88a04d2_tuple);
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
void checkModuleConstants_google$genai$tokens(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_d87cb70509ef09f667ee1079d83b1495));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d87cb70509ef09f667ee1079d83b1495);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_setup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_setup_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_bidiGenerateContentSetup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bidiGenerateContentSetup);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_field_masks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_field_masks);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lock_additional_fields_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_lock_additional_fields_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateAuthTokenConfig);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_lock_additional_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lock_additional_fields);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_fieldMask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fieldMask);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fieldMask_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fieldMask_none_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fieldMask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fieldMask_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerationConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerationConfig);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_a12399b192966e066e7929fe4929fd0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a12399b192966e066e7929fe4929fd0e);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_mask_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_mask_list);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_none_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_415ae6330f46f8ddef6880828779b9f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_415ae6330f46f8ddef6880828779b9f3);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenParameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateAuthTokenParameters);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_client);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertexai);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_767283412006e9efc088b88488acea66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_767283412006e9efc088b88488acea66);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_converters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens_converters);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__url_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth_tokens);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_map);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__query_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__query_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_none_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_options);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert_to_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convert_to_dict);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_dict);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_unserializable_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_unserializable_types);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthToken);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_response);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__verify_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__verify_response);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_400ba13ced4373b485c876dfab0afdb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_400ba13ced4373b485c876dfab0afdb9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2ccc06f8d81b61c54bb8a821fbf10e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2ccc06f8d81b61c54bb8a821fbf10e3);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_request);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_http_options_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca88815311d3e2ce264d11ad627413ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca88815311d3e2ce264d11ad627413ba);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urlencode_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__api_module_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_module);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__common_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__tokens_converters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__tokens_converters_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__tokens_converters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tokens_converters);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_types_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9a593117ebfc1ecde969f925db676517_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9a593117ebfc1ecde969f925db676517_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringDict);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateAuthTokenConfigOrDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateAuthTokenConfigOrDict);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModule);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tokens);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_913cae638f6dbe37128f453a89257084));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_913cae638f6dbe37128f453a89257084);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c9f075c10de922fcc27b702c83dd6c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c9f075c10de922fcc27b702c83dd6c8);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_113));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_113);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_experimental_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_experimental_warning);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_e81f3c3f4aeb6163c9459eccb640e588));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e81f3c3f4aeb6163c9459eccb640e588);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_6199e5fad1345128fbb11762c06b975f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6199e5fad1345128fbb11762c06b975f);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncTokens);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_590d53ec16259898be64a5fc76f0545b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_590d53ec16259898be64a5fc76f0545b);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_269));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_269);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_9367ad399b363a9365ad957f50c45839));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9367ad399b363a9365ad957f50c45839);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_563eeed612be1d1d8809f9e33bea47e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_563eeed612be1d1d8809f9e33bea47e4);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_cbf2cb7de3a5acadeb641b0394bff279_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cbf2cb7de3a5acadeb641b0394bff279_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_e96f9f8987dc2a00d3143d6a66c09210_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e96f9f8987dc2a00d3143d6a66c09210_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_497105280fadbb52943be80df88a04d2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_497105280fadbb52943be80df88a04d2_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_google$genai$tokens$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$_api_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__api_module);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__api_module, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__api_module);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__api_module, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$_common(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$_convert_bidi_setup_to_token_setup(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$_get_field_masks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__get_field_masks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_field_masks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_field_masks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_field_masks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_field_masks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__get_field_masks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__get_field_masks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_field_masks);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$tokens_converters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_tokens_converters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokens_converters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokens_converters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokens_converters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokens_converters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_tokens_converters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_tokens_converters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tokens_converters);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$types(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain_types);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain_types);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain_types);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_types);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$tokens$urlencode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$tokens->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$tokens->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$tokens->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f622a2b50b57c798521dcae656d5cf81;
static PyCodeObject *code_objects_41b0787f59cfdadecfb2638290dc0cc6;
static PyCodeObject *code_objects_b00b33a068117bfd0d058e02263957a5;
static PyCodeObject *code_objects_8471b28a5ed5687b15ed4154834af912;
static PyCodeObject *code_objects_94de9048268eefa984b0008b963b1efe;
static PyCodeObject *code_objects_1b7661f887334c6d64f93afedd1ccc39;
static PyCodeObject *code_objects_c108715756c19b0d74b975773111427a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9367ad399b363a9365ad957f50c45839); CHECK_OBJECT(module_filename_obj);
code_objects_f622a2b50b57c798521dcae656d5cf81 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_563eeed612be1d1d8809f9e33bea47e4, mod_consts.const_str_digest_563eeed612be1d1d8809f9e33bea47e4, NULL, NULL, 0, 0, 0);
code_objects_41b0787f59cfdadecfb2638290dc0cc6 = MAKE_CODE_OBJECT(module_filename_obj, 269, 0, mod_consts.const_str_plain_AsyncTokens, mod_consts.const_str_plain_AsyncTokens, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b00b33a068117bfd0d058e02263957a5 = MAKE_CODE_OBJECT(module_filename_obj, 113, 0, mod_consts.const_str_plain_Tokens, mod_consts.const_str_plain_Tokens, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8471b28a5ed5687b15ed4154834af912 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup, mod_consts.const_tuple_cbf2cb7de3a5acadeb641b0394bff279_tuple, NULL, 2, 0, 0);
code_objects_94de9048268eefa984b0008b963b1efe = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_field_masks, mod_consts.const_str_plain__get_field_masks, mod_consts.const_tuple_e96f9f8987dc2a00d3143d6a66c09210_tuple, NULL, 1, 0, 0);
code_objects_1b7661f887334c6d64f93afedd1ccc39 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87, mod_consts.const_tuple_497105280fadbb52943be80df88a04d2_tuple, NULL, 1, 1, 0);
code_objects_c108715756c19b0d74b975773111427a = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_6199e5fad1345128fbb11762c06b975f, mod_consts.const_tuple_497105280fadbb52943be80df88a04d2_tuple, NULL, 1, 1, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_google$genai$tokens$$$function__4_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__1__get_field_masks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$tokens$$$function__1__get_field_masks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_setup = python_pars[0];
PyObject *var_fields = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_field = NULL;
PyObject *outline_0_var_kk = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens$$$function__1__get_field_masks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_fields == NULL);
var_fields = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks)) {
    Py_XDECREF(cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks = MAKE_FUNCTION_FRAME(tstate, code_objects_94de9048268eefa984b0008b963b1efe, module_google$genai$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks->m_type_description == NULL);
frame_frame_google$genai$tokens$$$function__1__get_field_masks = cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens$$$function__1__get_field_masks);
assert(Py_REFCNT(frame_frame_google$genai$tokens$$$function__1__get_field_masks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_setup);
tmp_expression_value_1 = par_setup;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__1__get_field_masks->m_frame.f_lineno = 33;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 33;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 33;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_7;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_v);
tmp_isinstance_inst_1 = var_v;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_v);
tmp_truth_name_1 = CHECK_IF_TRUE(var_v);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_9;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_v);
tmp_expression_value_2 = var_v;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_keys);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
frame_frame_google$genai$tokens$$$function__1__get_field_masks->m_frame.f_lineno = 36;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
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
type_description_1 = "ooooo";
exception_lineno = 36;
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
    PyObject *old = outline_0_var_kk;
    outline_0_var_kk = tmp_assign_source_13;
    Py_INCREF(outline_0_var_kk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(var_k);
tmp_format_value_1 = var_k;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_kk);
tmp_format_value_2 = outline_0_var_kk;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_append_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_append_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_9 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_9);
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
Py_XDECREF(outline_0_var_kk);
outline_0_var_kk = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_kk);
outline_0_var_kk = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 36;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_k);
tmp_list_element_1 = var_k;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_14, 0, tmp_list_element_1);
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
if (var_fields == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_fields;
CHECK_OBJECT(var_field);
tmp_value_value_1 = var_field;
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
if (var_fields == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_fields;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens$$$function__1__get_field_masks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens$$$function__1__get_field_masks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens$$$function__1__get_field_masks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$tokens$$$function__1__get_field_masks,
    type_description_1,
    par_setup,
    var_fields,
    var_k,
    var_v,
    var_field
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$tokens$$$function__1__get_field_masks == cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks);
    cache_frame_frame_google$genai$tokens$$$function__1__get_field_masks = NULL;
}

assertFrameObject(frame_frame_google$genai$tokens$$$function__1__get_field_masks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_fields);
var_fields = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_field);
var_field = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fields);
var_fields = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_field);
var_field = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_setup);
Py_DECREF(par_setup);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_setup);
Py_DECREF(par_setup);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request_dict = python_pars[0];
PyObject *par_config = python_pars[1];
PyObject *var_additional_fields_list = NULL;
PyObject *var_bidi_setup = NULL;
PyObject *var_field_mask = NULL;
PyObject *var_generation_config_list = NULL;
PyObject *var_field_mask_list = NULL;
PyObject *var_field = NULL;
PyObject *var_field_mask_str = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup)) {
    Py_XDECREF(cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup = MAKE_FUNCTION_FRAME(tstate, code_objects_8471b28a5ed5687b15ed4154834af912, module_google$genai$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_type_description == NULL);
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup = cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup);
assert(Py_REFCNT(frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_1 = par_request_dict;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 49;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bidi_setup == NULL);
var_bidi_setup = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_bidi_setup);
tmp_truth_name_1 = CHECK_IF_TRUE(var_bidi_setup);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_bidi_setup);
tmp_expression_value_2 = var_bidi_setup;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 50;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_setup_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_bidi_setup);
tmp_expression_value_3 = var_bidi_setup;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 53;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_setup_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request_dict);
tmp_ass_subscribed_1 = par_request_dict;
tmp_ass_subscript_1 = mod_consts.const_str_plain_bidiGenerateContentSetup;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_called_value_4 = module_var_accessor_google$genai$tokens$_get_field_masks(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_field_masks);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request_dict);
tmp_expression_value_4 = par_request_dict;
tmp_subscript_value_1 = mod_consts.const_str_plain_bidiGenerateContentSetup;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 56;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_field_mask == NULL);
var_field_mask = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_7;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_config);
tmp_isinstance_inst_1 = par_config;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_config);
tmp_expression_value_5 = par_config;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 60;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_lock_additional_fields_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_config);
tmp_expression_value_6 = par_config;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 61;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_lock_additional_fields_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_or_left_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_left_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_config);
tmp_isinstance_inst_2 = par_config;
tmp_expression_value_7 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CreateAuthTokenConfig);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_config);
tmp_expression_value_8 = par_config;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lock_additional_fields);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_5 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(par_config);
tmp_expression_value_9 = par_config;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_lock_additional_fields);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_or_right_value_1 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_or_right_value_1 = tmp_and_left_value_4;
and_end_4:;
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
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_field_mask);
tmp_ass_subvalue_2 = var_field_mask;
CHECK_OBJECT(par_request_dict);
tmp_ass_subscribed_2 = par_request_dict;
tmp_ass_subscript_2 = mod_consts.const_str_plain_fieldMask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_config);
tmp_isinstance_inst_3 = par_config;
tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(par_config);
tmp_expression_value_10 = par_config;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 71;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_lock_additional_fields_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_or_left_value_2 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_or_left_value_2 = tmp_and_left_value_6;
and_end_6:;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_config);
tmp_isinstance_inst_4 = par_config;
tmp_expression_value_11 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_CreateAuthTokenConfig);
if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_cls_4);
Py_DECREF(tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(par_config);
tmp_expression_value_12 = par_config;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_lock_additional_fields);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_or_right_value_2 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_or_right_value_2 = tmp_and_left_value_7;
and_end_7:;
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_13 = par_request_dict;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pop);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 77;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_fieldMask_none_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_3;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_14 = par_request_dict;
tmp_subscript_value_2 = mod_consts.const_str_plain_fieldMask;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_15 = par_request_dict;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 80;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_fieldMask_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_additional_fields_list == NULL);
var_additional_fields_list = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 83;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_GenerationConfig);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 83;
tmp_expression_value_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_dump);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 83;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_generation_config_list == NULL);
var_generation_config_list = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_4;
CHECK_OBJECT(var_additional_fields_list);
tmp_truth_name_4 = CHECK_IF_TRUE(var_additional_fields_list);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_field_mask_list == NULL);
var_field_mask_list = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_additional_fields_list);
tmp_iter_arg_1 = var_additional_fields_list;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 86;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_8;
    Py_INCREF(var_field);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_field);
tmp_cmp_expr_left_5 = var_field;
CHECK_OBJECT(var_generation_config_list);
tmp_cmp_expr_right_5 = var_generation_config_list;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a12399b192966e066e7929fe4929fd0e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_field);
tmp_format_value_1 = var_field;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooo";
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
tmp_assign_source_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_9 == NULL));
{
    PyObject *old = var_field;
    assert(old != NULL);
    var_field = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_field_mask_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field_mask_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_field_mask_list;
CHECK_OBJECT(var_field);
tmp_item_value_1 = var_field;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooo";
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
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_field_mask_list == NULL);
var_field_mask_list = tmp_assign_source_10;
}
branch_end_5:;
{
PyObject *tmp_ass_subvalue_3;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_field_mask_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field_mask_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_5 = CHECK_IF_TRUE(var_field_mask_list);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_field_mask);
tmp_add_expr_left_2 = var_field_mask;
tmp_add_expr_right_2 = mod_consts.const_str_chr_44;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
if (var_field_mask_list == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field_mask_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_field_mask_list;
tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_field_mask);
tmp_ass_subvalue_3 = var_field_mask;
Py_INCREF(tmp_ass_subvalue_3);
condexpr_end_1:;
CHECK_OBJECT(par_request_dict);
tmp_ass_subscribed_3 = par_request_dict;
tmp_ass_subscript_3 = mod_consts.const_str_plain_fieldMask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_17 = par_request_dict;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_pop);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 99;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_fieldMask_none_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_4:;
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_18 = par_request_dict;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_fieldMask;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_field_mask == NULL);
var_field_mask = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_2 = mod_consts.const_str_chr_44;
CHECK_OBJECT(var_field_mask);
tmp_iterable_value_2 = var_field_mask;
tmp_assign_source_12 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_field_mask_str == NULL);
var_field_mask_str = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_6;
CHECK_OBJECT(var_field_mask);
tmp_truth_name_6 = CHECK_IF_TRUE(var_field_mask);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_field_mask_str);
tmp_ass_subvalue_4 = var_field_mask_str;
CHECK_OBJECT(par_request_dict);
tmp_ass_subscribed_4 = par_request_dict;
tmp_ass_subscript_4 = mod_consts.const_str_plain_fieldMask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_19 = par_request_dict;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_pop);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 106;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_fieldMask_none_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_7:;
branch_end_1:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_20 = par_request_dict;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 107;
tmp_operand_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_tuple);

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_5;
CHECK_OBJECT(par_request_dict);
tmp_expression_value_21 = par_request_dict;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_pop);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame.f_lineno = 108;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_bidiGenerateContentSetup_none_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup,
    type_description_1,
    par_request_dict,
    par_config,
    var_additional_fields_list,
    var_bidi_setup,
    var_field_mask,
    var_generation_config_list,
    var_field_mask_list,
    var_field,
    var_field_mask_str
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup == cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup);
    cache_frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup = NULL;
}

assertFrameObject(frame_frame_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_request_dict);
tmp_return_value = par_request_dict;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_additional_fields_list);
var_additional_fields_list = NULL;
CHECK_OBJECT(var_bidi_setup);
CHECK_OBJECT(var_bidi_setup);
Py_DECREF(var_bidi_setup);
var_bidi_setup = NULL;
Py_XDECREF(var_field_mask);
var_field_mask = NULL;
Py_XDECREF(var_generation_config_list);
var_generation_config_list = NULL;
Py_XDECREF(var_field_mask_list);
var_field_mask_list = NULL;
Py_XDECREF(var_field);
var_field = NULL;
Py_XDECREF(var_field_mask_str);
var_field_mask_str = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_additional_fields_list);
var_additional_fields_list = NULL;
Py_XDECREF(var_bidi_setup);
var_bidi_setup = NULL;
Py_XDECREF(var_field_mask);
var_field_mask = NULL;
Py_XDECREF(var_generation_config_list);
var_generation_config_list = NULL;
Py_XDECREF(var_field_mask_list);
var_field_mask_list = NULL;
Py_XDECREF(var_field);
var_field = NULL;
Py_XDECREF(var_field_mask_str);
var_field_mask_str = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request_dict);
Py_DECREF(par_request_dict);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request_dict);
Py_DECREF(par_request_dict);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$tokens$$$function__3_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_config = python_pars[1];
PyObject *var_request_url_dict = NULL;
PyObject *var_http_options = NULL;
PyObject *var_parameter_model = NULL;
PyObject *var_request_dict = NULL;
PyObject *var_path = NULL;
PyObject *var_query_params = NULL;
PyObject *var_response = NULL;
PyObject *var_response_dict = NULL;
PyObject *var_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens$$$function__3_create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$tokens$$$function__3_create = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$tokens$$$function__3_create)) {
    Py_XDECREF(cache_frame_frame_google$genai$tokens$$$function__3_create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$tokens$$$function__3_create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$tokens$$$function__3_create = MAKE_FUNCTION_FRAME(tstate, code_objects_c108715756c19b0d74b975773111427a, module_google$genai$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$tokens$$$function__3_create->m_type_description == NULL);
frame_frame_google$genai$tokens$$$function__3_create = cache_frame_frame_google$genai$tokens$$$function__3_create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens$$$function__3_create);
assert(Py_REFCNT(frame_frame_google$genai$tokens$$$function__3_create) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_1 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CreateAuthTokenParameters);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config);
tmp_kw_call_value_0_1 = par_config;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 215;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_config_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parameter_model == NULL);
var_parameter_model = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 219;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_767283412006e9efc088b88488acea66;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 220;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_google$genai$tokens$tokens_converters(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens_converters);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__api_client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 225;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parameter_model);
tmp_args_element_value_2 = var_parameter_model;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 224;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_request_dict == NULL);
var_request_dict = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_request_dict);
tmp_expression_value_6 = var_request_dict;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 228;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain__url_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_request_url_dict == NULL);
var_request_url_dict = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_request_url_dict);
tmp_truth_name_2 = CHECK_IF_TRUE(var_request_url_dict);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
tmp_expression_value_7 = mod_consts.const_str_plain_auth_tokens;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_format_map);
assert(!(tmp_called_value_4 == NULL));
CHECK_OBJECT(var_request_url_dict);
tmp_args_element_value_3 = var_request_url_dict;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 230;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_plain_auth_tokens;
assert(var_path == NULL);
Py_INCREF(tmp_assign_source_5);
var_path = tmp_assign_source_5;
}
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_request_dict);
tmp_expression_value_8 = var_request_dict;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 234;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain__query_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_query_params == NULL);
var_query_params = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_query_params);
tmp_truth_name_3 = CHECK_IF_TRUE(var_query_params);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_path);
tmp_format_value_1 = var_path;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_63;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_called_value_6 = module_var_accessor_google$genai$tokens$urlencode(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlencode);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_query_params);
tmp_args_element_value_4 = var_query_params;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 236;
tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_request_dict);
tmp_expression_value_9 = var_request_dict;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_pop);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 239;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_config_none_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_4;
CHECK_OBJECT(var_request_dict);
tmp_truth_name_4 = CHECK_IF_TRUE(var_request_dict);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_8 = module_var_accessor_google$genai$tokens$_convert_bidi_setup_to_token_setup(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_request_dict);
tmp_args_element_value_5 = var_request_dict;
CHECK_OBJECT(par_config);
tmp_args_element_value_6 = par_config;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_request_dict;
    assert(old != NULL);
    var_request_dict = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
assert(var_http_options == NULL);
Py_INCREF(tmp_assign_source_9);
var_http_options = tmp_assign_source_9;
}
{
bool tmp_condition_result_5;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_parameter_model);
tmp_cmp_expr_left_1 = var_parameter_model;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_parameter_model);
tmp_expression_value_10 = var_parameter_model;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_config);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_parameter_model);
tmp_expression_value_12 = var_parameter_model;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_config);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_http_options);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_parameter_model);
tmp_expression_value_14 = var_parameter_model;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_config);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_http_options);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_http_options;
    assert(old != NULL);
    var_http_options = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_7;
tmp_expression_value_15 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_convert_to_dict);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_request_dict == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_request_dict;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 254;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_request_dict;
    var_request_dict = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_8;
tmp_called_instance_1 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_request_dict);
tmp_args_element_value_8 = var_request_dict;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 255;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_encode_unserializable_types, tmp_args_element_value_8);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_request_dict;
    assert(old != NULL);
    var_request_dict = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__api_client);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_plain_post;
CHECK_OBJECT(var_path);
tmp_args_element_value_10 = var_path;
CHECK_OBJECT(var_request_dict);
tmp_args_element_value_11 = var_request_dict;
CHECK_OBJECT(var_http_options);
tmp_args_element_value_12 = var_http_options;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 257;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_13 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_request,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_response);
tmp_expression_value_17 = var_response;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_body);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_18 = module_var_accessor_google$genai$tokens$json(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_loads);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_19 = var_response;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_body);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 260;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_dict == NULL);
var_response_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_instance_3;
tmp_expression_value_21 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_AuthToken);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__from_response);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_dict);
tmp_kw_call_value_0_2 = var_response_dict;
CHECK_OBJECT(var_parameter_model);
tmp_called_instance_3 = var_parameter_model;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 263;
tmp_kw_call_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_model_dump);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 263;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 262;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

    tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_return_value == NULL);
var_return_value = tmp_assign_source_15;
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__api_client);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_return_value);
tmp_args_element_value_14 = var_return_value;
frame_frame_google$genai$tokens$$$function__3_create->m_frame.f_lineno = 265;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__verify_response, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens$$$function__3_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens$$$function__3_create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens$$$function__3_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$tokens$$$function__3_create,
    type_description_1,
    par_self,
    par_config,
    var_request_url_dict,
    var_http_options,
    var_parameter_model,
    var_request_dict,
    var_path,
    var_query_params,
    var_response,
    var_response_dict,
    var_return_value
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$tokens$$$function__3_create == cache_frame_frame_google$genai$tokens$$$function__3_create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$tokens$$$function__3_create);
    cache_frame_frame_google$genai$tokens$$$function__3_create = NULL;
}

assertFrameObject(frame_frame_google$genai$tokens$$$function__3_create);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_return_value);
tmp_return_value = var_return_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_request_url_dict);
CHECK_OBJECT(var_request_url_dict);
Py_DECREF(var_request_url_dict);
var_request_url_dict = NULL;
CHECK_OBJECT(var_http_options);
CHECK_OBJECT(var_http_options);
Py_DECREF(var_http_options);
var_http_options = NULL;
CHECK_OBJECT(var_parameter_model);
CHECK_OBJECT(var_parameter_model);
Py_DECREF(var_parameter_model);
var_parameter_model = NULL;
CHECK_OBJECT(var_request_dict);
CHECK_OBJECT(var_request_dict);
Py_DECREF(var_request_dict);
var_request_dict = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_query_params);
CHECK_OBJECT(var_query_params);
Py_DECREF(var_query_params);
var_query_params = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_dict);
CHECK_OBJECT(var_response_dict);
Py_DECREF(var_response_dict);
var_response_dict = NULL;
CHECK_OBJECT(var_return_value);
CHECK_OBJECT(var_return_value);
Py_DECREF(var_return_value);
var_return_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_request_url_dict);
var_request_url_dict = NULL;
Py_XDECREF(var_http_options);
var_http_options = NULL;
Py_XDECREF(var_parameter_model);
var_parameter_model = NULL;
Py_XDECREF(var_request_dict);
var_request_dict = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query_params);
var_query_params = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_dict);
var_response_dict = NULL;
Py_XDECREF(var_return_value);
var_return_value = NULL;
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
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$tokens$$$function__4_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_config = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_config;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$genai$tokens$$$function__4_create$$$coroutine__1_create(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_config);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
par_config = NULL;
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
struct google$genai$tokens$$$function__4_create$$$coroutine__1_create_locals {
PyObject *var_request_url_dict;
PyObject *var_http_options;
PyObject *var_parameter_model;
PyObject *var_request_dict;
PyObject *var_path;
PyObject *var_query_params;
PyObject *var_response;
PyObject *var_response_dict;
PyObject *var_return_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
int tmp_res;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *google$genai$tokens$$$function__4_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$tokens$$$function__4_create$$$coroutine__1_create_locals *coroutine_heap = (struct google$genai$tokens$$$function__4_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_request_url_dict = NULL;
coroutine_heap->var_http_options = NULL;
coroutine_heap->var_parameter_model = NULL;
coroutine_heap->var_request_dict = NULL;
coroutine_heap->var_path = NULL;
coroutine_heap->var_query_params = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_response_dict = NULL;
coroutine_heap->var_return_value = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1b7661f887334c6d64f93afedd1ccc39, module_google$genai$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_1 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CreateAuthTokenParameters);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 309;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_config_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_parameter_model == NULL);
coroutine_heap->var_parameter_model = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_767283412006e9efc088b88488acea66;
coroutine->m_frame->m_frame.f_lineno = 315;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 315;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_google$genai$tokens$tokens_converters(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tokens_converters);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 320;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__api_client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 320;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_args_element_value_2 = coroutine_heap->var_parameter_model;
coroutine->m_frame->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_request_dict == NULL);
coroutine_heap->var_request_dict = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_expression_value_6 = coroutine_heap->var_request_dict;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 323;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 323;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain__url_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 323;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_request_url_dict == NULL);
coroutine_heap->var_request_url_dict = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(coroutine_heap->var_request_url_dict);
tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_request_url_dict);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 324;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
tmp_expression_value_7 = mod_consts.const_str_plain_auth_tokens;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_format_map);
assert(!(tmp_called_value_4 == NULL));
CHECK_OBJECT(coroutine_heap->var_request_url_dict);
tmp_args_element_value_3 = coroutine_heap->var_request_url_dict;
coroutine->m_frame->m_frame.f_lineno = 325;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 325;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_path == NULL);
coroutine_heap->var_path = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_plain_auth_tokens;
assert(coroutine_heap->var_path == NULL);
Py_INCREF(tmp_assign_source_5);
coroutine_heap->var_path = tmp_assign_source_5;
}
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_expression_value_8 = coroutine_heap->var_request_dict;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 329;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 329;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain__query_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 329;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_query_params == NULL);
coroutine_heap->var_query_params = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(coroutine_heap->var_query_params);
tmp_truth_name_3 = CHECK_IF_TRUE(coroutine_heap->var_query_params);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(coroutine_heap->var_path);
tmp_format_value_1 = coroutine_heap->var_path;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_63;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_called_value_6 = module_var_accessor_google$genai$tokens$urlencode(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_urlencode);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(coroutine_heap->var_query_params);
tmp_args_element_value_4 = coroutine_heap->var_query_params;
coroutine->m_frame->m_frame.f_lineno = 331;
tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccooooooooo";
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
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = coroutine_heap->var_path;
    assert(old != NULL);
    coroutine_heap->var_path = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_expression_value_9 = coroutine_heap->var_request_dict;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_pop);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 333;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 333;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_config_none_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 333;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_8 = module_var_accessor_google$genai$tokens$_convert_bidi_setup_to_token_setup(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__convert_bidi_setup_to_token_setup);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_args_element_value_5 = coroutine_heap->var_request_dict;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 337;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_request_dict;
    assert(old != NULL);
    coroutine_heap->var_request_dict = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
assert(coroutine_heap->var_http_options == NULL);
Py_INCREF(tmp_assign_source_9);
coroutine_heap->var_http_options = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_cmp_expr_left_1 = coroutine_heap->var_parameter_model;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_expression_value_10 = coroutine_heap->var_parameter_model;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_config);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_expression_value_12 = coroutine_heap->var_parameter_model;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_config);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_http_options);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_expression_value_14 = coroutine_heap->var_parameter_model;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_config);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_http_options);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_http_options;
    assert(old != NULL);
    coroutine_heap->var_http_options = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_args_element_value_7 = coroutine_heap->var_request_dict;
coroutine->m_frame->m_frame.f_lineno = 347;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_convert_to_dict, tmp_args_element_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_request_dict;
    assert(old != NULL);
    coroutine_heap->var_request_dict = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
tmp_called_instance_2 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 348;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_args_element_value_8 = coroutine_heap->var_request_dict;
coroutine->m_frame->m_frame.f_lineno = 348;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_encode_unserializable_types, tmp_args_element_value_8);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 348;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_request_dict;
    assert(old != NULL);
    coroutine_heap->var_request_dict = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
coroutine->m_frame->m_frame.f_lineno = 350;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_async_request);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_post;
CHECK_OBJECT(coroutine_heap->var_path);
tmp_kw_call_arg_value_1_1 = coroutine_heap->var_path;
CHECK_OBJECT(coroutine_heap->var_request_dict);
tmp_kw_call_arg_value_2_1 = coroutine_heap->var_request_dict;
CHECK_OBJECT(coroutine_heap->var_http_options);
tmp_kw_call_dict_value_0_1 = coroutine_heap->var_http_options;
coroutine->m_frame->m_frame.f_lineno = 350;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_http_options_tuple);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = ASYNC_AWAIT(tstate, tmp_expression_value_16, await_normal);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_15;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = yield_return_value;
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_19 = coroutine_heap->var_response;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_body);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_20 = module_var_accessor_google$genai$tokens$json(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_loads);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_21 = coroutine_heap->var_response;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_body);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_10);

coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 356;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(coroutine_heap->var_response_dict == NULL);
coroutine_heap->var_response_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_instance_3;
tmp_expression_value_23 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_AuthToken);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__from_response);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response_dict);
tmp_kw_call_value_0_2 = coroutine_heap->var_response_dict;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_called_instance_3 = coroutine_heap->var_parameter_model;
coroutine->m_frame->m_frame.f_lineno = 359;
tmp_kw_call_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_model_dump);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_11);

coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 358;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

    tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_return_value == NULL);
coroutine_heap->var_return_value = tmp_assign_source_15;
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__api_client);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_return_value);
tmp_args_element_value_10 = coroutine_heap->var_return_value;
coroutine->m_frame->m_frame.f_lineno = 361;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__verify_response, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_request_url_dict,
    coroutine_heap->var_http_options,
    coroutine_heap->var_parameter_model,
    coroutine_heap->var_request_dict,
    coroutine_heap->var_path,
    coroutine_heap->var_query_params,
    coroutine_heap->var_response,
    coroutine_heap->var_response_dict,
    coroutine_heap->var_return_value
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(coroutine_heap->var_return_value);
coroutine_heap->tmp_return_value = coroutine_heap->var_return_value;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_request_url_dict);
CHECK_OBJECT(coroutine_heap->var_request_url_dict);
Py_DECREF(coroutine_heap->var_request_url_dict);
coroutine_heap->var_request_url_dict = NULL;
CHECK_OBJECT(coroutine_heap->var_http_options);
CHECK_OBJECT(coroutine_heap->var_http_options);
Py_DECREF(coroutine_heap->var_http_options);
coroutine_heap->var_http_options = NULL;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
CHECK_OBJECT(coroutine_heap->var_parameter_model);
Py_DECREF(coroutine_heap->var_parameter_model);
coroutine_heap->var_parameter_model = NULL;
CHECK_OBJECT(coroutine_heap->var_request_dict);
CHECK_OBJECT(coroutine_heap->var_request_dict);
Py_DECREF(coroutine_heap->var_request_dict);
coroutine_heap->var_request_dict = NULL;
CHECK_OBJECT(coroutine_heap->var_path);
CHECK_OBJECT(coroutine_heap->var_path);
Py_DECREF(coroutine_heap->var_path);
coroutine_heap->var_path = NULL;
CHECK_OBJECT(coroutine_heap->var_query_params);
CHECK_OBJECT(coroutine_heap->var_query_params);
Py_DECREF(coroutine_heap->var_query_params);
coroutine_heap->var_query_params = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
CHECK_OBJECT(coroutine_heap->var_response_dict);
CHECK_OBJECT(coroutine_heap->var_response_dict);
Py_DECREF(coroutine_heap->var_response_dict);
coroutine_heap->var_response_dict = NULL;
CHECK_OBJECT(coroutine_heap->var_return_value);
CHECK_OBJECT(coroutine_heap->var_return_value);
Py_DECREF(coroutine_heap->var_return_value);
coroutine_heap->var_return_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_request_url_dict);
coroutine_heap->var_request_url_dict = NULL;
Py_XDECREF(coroutine_heap->var_http_options);
coroutine_heap->var_http_options = NULL;
Py_XDECREF(coroutine_heap->var_parameter_model);
coroutine_heap->var_parameter_model = NULL;
Py_XDECREF(coroutine_heap->var_request_dict);
coroutine_heap->var_request_dict = NULL;
Py_XDECREF(coroutine_heap->var_path);
coroutine_heap->var_path = NULL;
Py_XDECREF(coroutine_heap->var_query_params);
coroutine_heap->var_query_params = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_response_dict);
coroutine_heap->var_response_dict = NULL;
Py_XDECREF(coroutine_heap->var_return_value);
coroutine_heap->var_return_value = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$tokens$$$function__4_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$tokens$$$function__4_create$$$coroutine__1_create_context,
        module_google$genai$tokens,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87,
        code_objects_1b7661f887334c6d64f93afedd1ccc39,
        closure,
        2,
#if 1
        sizeof(struct google$genai$tokens$$$function__4_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__1__get_field_masks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$tokens$$$function__1__get_field_masks,
        mod_consts.const_str_plain__get_field_masks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_94de9048268eefa984b0008b963b1efe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$tokens,
        mod_consts.const_str_digest_d87cb70509ef09f667ee1079d83b1495,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup,
        mod_consts.const_str_plain__convert_bidi_setup_to_token_setup,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8471b28a5ed5687b15ed4154834af912,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$tokens,
        mod_consts.const_str_digest_415ae6330f46f8ddef6880828779b9f3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$tokens$$$function__3_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6199e5fad1345128fbb11762c06b975f,
#endif
        code_objects_c108715756c19b0d74b975773111427a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$tokens,
        mod_consts.const_str_digest_400ba13ced4373b485c876dfab0afdb9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$tokens$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$tokens$$$function__4_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8ff40b5e05982ddb362b9f0d02c2b87,
#endif
        code_objects_1b7661f887334c6d64f93afedd1ccc39,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$tokens,
        mod_consts.const_str_digest_f2ccc06f8d81b61c54bb8a821fbf10e3,
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

static function_impl_code const function_table_google$genai$tokens[] = {
impl_google$genai$tokens$$$function__1__get_field_masks,
impl_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup,
impl_google$genai$tokens$$$function__3_create,
impl_google$genai$tokens$$$function__4_create,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$tokens);
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
        module_google$genai$tokens,
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
        function_table_google$genai$tokens,
        sizeof(function_table_google$genai$tokens) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai.tokens";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$tokens(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$tokens");

    // Store the module for future use.
    module_google$genai$tokens = module;

    moduledict_google$genai$tokens = MODULE_DICT(module_google$genai$tokens);

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
        PRINT_STRING("google$genai$tokens: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$tokens: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$tokens: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai.tokens" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$tokens\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$tokens,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$tokens);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$tokens);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$genai$tokens$$$class__1_Tokens_113 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens$$$class__1_Tokens_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_google$genai$tokens$$$class__2_AsyncTokens_269 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_ca88815311d3e2ce264d11ad627413ba;
UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$tokens = MAKE_MODULE_FRAME(code_objects_f622a2b50b57c798521dcae656d5cf81, module_google$genai$tokens);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens);
assert(Py_REFCNT(frame_frame_google$genai$tokens) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$tokens$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$tokens$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$genai$tokens->m_frame.f_lineno = 18;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$genai$tokens->m_frame.f_lineno = 19;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
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
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
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
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_8);
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
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_9);
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
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_urlencode_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$genai$tokens->m_frame.f_lineno = 21;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain_urlencode,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_urlencode);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__api_module_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_google$genai$tokens->m_frame.f_lineno = 22;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain__api_module,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__api_module);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = const_str_empty;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__common_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_google$genai$tokens->m_frame.f_lineno = 23;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain__common,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__common);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__common, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__tokens_converters_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_google$genai$tokens->m_frame.f_lineno = 24;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$genai$tokens,
        mod_consts.const_str_plain__tokens_converters,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain__tokens_converters);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_tokens_converters, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = const_str_empty;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$genai$tokens;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_types_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_google$genai$tokens->m_frame.f_lineno = 25;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$genai$tokens,
        const_str_plain_types,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, const_str_plain_types);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$genai$tokens$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_google$genai$tokens->m_frame.f_lineno = 27;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_9a593117ebfc1ecde969f925db676517_tuple, 0)
);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_setup;
tmp_expression_value_1 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_StringDict);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_17 = MAKE_FUNCTION_google$genai$tokens$$$function__1__get_field_masks(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__get_field_masks, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_request_dict;
tmp_expression_value_2 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_StringDict);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_config;
tmp_expression_value_3 = module_var_accessor_google$genai$tokens$Optional(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto dict_build_exception_1;
}
tmp_expression_value_4 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto dict_build_exception_1;
}
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CreateAuthTokenConfigOrDict);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_5 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_StringDict);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_18 = MAKE_FUNCTION_google$genai$tokens$$$function__2__convert_bidi_setup_to_token_setup(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_bidi_setup_to_token_setup, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_google$genai$tokens$_api_module(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__api_module);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_BaseModule);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_assign_source_19 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_19, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_20 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_22 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_22;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Tokens;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$genai$tokens->m_frame.f_lineno = 113;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_2;
}
frame_frame_google$genai$tokens->m_frame.f_lineno = 113;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 113;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
}
branch_end_1:;
{
PyObject *tmp_assign_source_25;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$genai$tokens$$$class__1_Tokens_113 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_913cae638f6dbe37128f453a89257084;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_5c9f075c10de922fcc27b702c83dd6c8;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_Tokens;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_113;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
frame_frame_google$genai$tokens$$$class__1_Tokens_2 = MAKE_CLASS_FRAME(tstate, code_objects_b00b33a068117bfd0d058e02263957a5, module_google$genai$tokens, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens$$$class__1_Tokens_2);
assert(Py_REFCNT(frame_frame_google$genai$tokens$$$class__1_Tokens_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_14;
tmp_called_instance_2 = PyObject_GetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain__common);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_google$genai$tokens$$$class__1_Tokens_2->m_frame.f_lineno = 119;
tmp_called_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_experimental_warning,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_e81f3c3f4aeb6163c9459eccb640e588);
tmp_dict_key_3 = mod_consts.const_str_plain_config;
tmp_expression_value_13 = PyObject_GetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_google$genai$tokens$Optional(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_14 = PyObject_GetItem(locals_google$genai$tokens$$$class__1_Tokens_113, const_str_plain_types);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_expression_value_13);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_CreateAuthTokenConfigOrDict);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_expression_value_13);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_15;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_15 = PyObject_GetItem(locals_google$genai$tokens$$$class__1_Tokens_113, const_str_plain_types);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_AuthToken);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_args_element_value_1 = MAKE_FUNCTION_google$genai$tokens$$$function__3_create(tstate, tmp_kw_defaults_1, tmp_annotations_3);

frame_frame_google$genai$tokens$$$class__1_Tokens_2->m_frame.f_lineno = 119;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens$$$class__1_Tokens_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens$$$class__1_Tokens_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens$$$class__1_Tokens_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$tokens$$$class__1_Tokens_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$genai$tokens$$$class__1_Tokens_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
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


exception_lineno = 113;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__1_Tokens_113, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Tokens;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$genai$tokens$$$class__1_Tokens_113;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$genai$tokens->m_frame.f_lineno = 113;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_25 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_25);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_google$genai$tokens$$$class__1_Tokens_113);
locals_google$genai$tokens$$$class__1_Tokens_113 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$tokens$$$class__1_Tokens_113);
locals_google$genai$tokens$$$class__1_Tokens_113 = NULL;
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
exception_lineno = 113;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokens, tmp_assign_source_25);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_google$genai$tokens$_api_module(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__api_module);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_BaseModule);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncTokens;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$tokens->m_frame.f_lineno = 269;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_5;
}
frame_frame_google$genai$tokens->m_frame.f_lineno = 269;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 269;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
branch_end_4:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$genai$tokens$$$class__2_AsyncTokens_269 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_913cae638f6dbe37128f453a89257084;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_590d53ec16259898be64a5fc76f0545b;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncTokens;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_269;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3 = MAKE_CLASS_FRAME(tstate, code_objects_41b0787f59cfdadecfb2638290dc0cc6, module_google$genai$tokens, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3);
assert(Py_REFCNT(frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_24;
tmp_called_instance_3 = PyObject_GetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain__common);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_google$genai$tokens$_common(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3->m_frame.f_lineno = 275;
tmp_called_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_experimental_warning,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_9808681709536f5fdc58f48724669ddd_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_e81f3c3f4aeb6163c9459eccb640e588);
tmp_dict_key_4 = mod_consts.const_str_plain_config;
tmp_expression_value_23 = PyObject_GetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_google$genai$tokens$Optional(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_24 = PyObject_GetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, const_str_plain_types);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_expression_value_23);

exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_CreateAuthTokenConfigOrDict);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_expression_value_23);

exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_25;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_25 = PyObject_GetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, const_str_plain_types);

if (tmp_expression_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_25 = module_var_accessor_google$genai$tokens$types(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_AuthToken);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_args_element_value_2 = MAKE_FUNCTION_google$genai$tokens$$$function__4_create(tstate, tmp_kw_defaults_2, tmp_annotations_4);

frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3->m_frame.f_lineno = 275;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$genai$tokens$$$class__2_AsyncTokens_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
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


exception_lineno = 269;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_google$genai$tokens$$$class__2_AsyncTokens_269, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncTokens;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$genai$tokens$$$class__2_AsyncTokens_269;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$tokens->m_frame.f_lineno = 269;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_34;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_33 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_google$genai$tokens$$$class__2_AsyncTokens_269);
locals_google$genai$tokens$$$class__2_AsyncTokens_269 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$tokens$$$class__2_AsyncTokens_269);
locals_google$genai$tokens$$$class__2_AsyncTokens_269 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 269;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$genai$tokens, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTokens, tmp_assign_source_33);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$tokens, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$tokens->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$tokens, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$tokens);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$tokens", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai.tokens" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$tokens);
    return module_google$genai$tokens;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$tokens", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

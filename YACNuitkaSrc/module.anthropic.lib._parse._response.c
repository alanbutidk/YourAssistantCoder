/* Generated code for Python module 'anthropic$lib$_parse$_response'
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



/* The "module_anthropic$lib$_parse$_response" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$_parse$_response;
PyDictObject *moduledict_anthropic$lib$_parse$_response;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_TypeAdapter;
PyObject *const_str_plain_validate_json;
PyObject *const_str_plain_content;
PyObject *const_str_plain_text;
PyObject *const_str_plain_content_list;
PyObject *const_str_plain_construct_type_unchecked;
PyObject *const_str_plain_ParsedBetaTextBlock;
PyObject *const_str_plain_ResponseFormatT;
PyObject *const_str_plain_to_dict;
PyObject *const_str_plain_parsed_output;
PyObject *const_str_plain_parse_text;
PyObject *const_str_plain_output_format;
PyObject *const_tuple_str_plain_type__str_plain_value_tuple;
PyObject *const_str_plain_ParsedBetaMessage;
PyObject *const_str_plain_ParsedTextBlock;
PyObject *const_str_plain_ParsedMessage;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeVar_tuple;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_NotGiven_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_TypeAdapter_str_plain_construct_type_unchecked_tuple;
PyObject *const_str_digest_a95988611227038b4a2a4b83f02acc57;
PyObject *const_tuple_str_plain_is_given_tuple;
PyObject *const_str_digest_2281610df6476332405187c8314d138c;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_str_digest_731aba0dd059bb452ef63b562cc5b8b6;
PyObject *const_tuple_771fdf30b1783acf85f8635a1b0cde41_tuple;
PyObject *const_str_plain_ParsedContentBlock;
PyObject *const_str_digest_eefa040b8a4f7bbf60aa95858020447e;
PyObject *const_tuple_str_plain_BetaMessage_tuple;
PyObject *const_str_plain_BetaMessage;
PyObject *const_str_digest_c8cd6f02b53bce3a2c921b840c2f9538;
PyObject *const_tuple_a972b627889c67c58866cfc04f618c23_tuple;
PyObject *const_str_plain_ParsedBetaContentBlock;
PyObject *const_tuple_str_plain_ResponseFormatT_none_tuple;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_dict_bfb79136753b6b803484a443f7d249eb;
PyObject *const_dict_55b04dc2397b02167280dbc1a4505459;
PyObject *const_str_plain_parse_beta_response;
PyObject *const_dict_63915a8b5804ddb6af24017d63f43fdd;
PyObject *const_str_plain_parse_response;
PyObject *const_str_digest_90aa2ad43579f24e9b756325a48fe1c1;
PyObject *const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d;
PyObject *const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple;
PyObject *const_tuple_927536ba5cf70b3990f458546241b966_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib._parse._response"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_list);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_construct_type_unchecked);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaTextBlock);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatT);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_output);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_text);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_format);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaMessage);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedTextBlock);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedMessage);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeVar_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NotGiven_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAdapter_str_plain_construct_type_unchecked_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_a95988611227038b4a2a4b83f02acc57);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_2281610df6476332405187c8314d138c);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_731aba0dd059bb452ef63b562cc5b8b6);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_771fdf30b1783acf85f8635a1b0cde41_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedContentBlock);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_eefa040b8a4f7bbf60aa95858020447e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMessage_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMessage);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8cd6f02b53bce3a2c921b840c2f9538);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_a972b627889c67c58866cfc04f618c23_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaContentBlock);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_bfb79136753b6b803484a443f7d249eb);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_55b04dc2397b02167280dbc1a4505459);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_beta_response);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_63915a8b5804ddb6af24017d63f43fdd);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_response);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_90aa2ad43579f24e9b756325a48fe1c1);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_927536ba5cf70b3990f458546241b966_tuple);
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
void checkModuleConstants_anthropic$lib$_parse$_response(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapter);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_json);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_list);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_construct_type_unchecked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_construct_type_unchecked);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaTextBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedBetaTextBlock);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatT);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_dict);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed_output);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_text);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_format);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedBetaMessage);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedTextBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedTextBlock);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedMessage);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeVar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeVar_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NotGiven_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NotGiven_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAdapter_str_plain_construct_type_unchecked_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeAdapter_str_plain_construct_type_unchecked_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_a95988611227038b4a2a4b83f02acc57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a95988611227038b4a2a4b83f02acc57);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_given_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_2281610df6476332405187c8314d138c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2281610df6476332405187c8314d138c);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_731aba0dd059bb452ef63b562cc5b8b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_731aba0dd059bb452ef63b562cc5b8b6);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_771fdf30b1783acf85f8635a1b0cde41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_771fdf30b1783acf85f8635a1b0cde41_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedContentBlock);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_eefa040b8a4f7bbf60aa95858020447e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eefa040b8a4f7bbf60aa95858020447e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaMessage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaMessage_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaMessage);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8cd6f02b53bce3a2c921b840c2f9538));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8cd6f02b53bce3a2c921b840c2f9538);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_a972b627889c67c58866cfc04f618c23_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a972b627889c67c58866cfc04f618c23_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedBetaContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedBetaContentBlock);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_bfb79136753b6b803484a443f7d249eb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bfb79136753b6b803484a443f7d249eb);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_55b04dc2397b02167280dbc1a4505459));
CHECK_OBJECT_DEEP(mod_consts.const_dict_55b04dc2397b02167280dbc1a4505459);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_beta_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_beta_response);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_63915a8b5804ddb6af24017d63f43fdd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_63915a8b5804ddb6af24017d63f43fdd);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_response);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_90aa2ad43579f24e9b756325a48fe1c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90aa2ad43579f24e9b756325a48fe1c1);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_927536ba5cf70b3990f458546241b966_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_927536ba5cf70b3990f458546241b966_tuple);
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
static PyObject *module_var_accessor_anthropic$lib$_parse$_response$ParsedBetaMessage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaMessage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedBetaMessage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedBetaMessage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedBetaMessage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedBetaMessage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaMessage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaMessage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaMessage);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$ParsedBetaTextBlock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaTextBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedBetaTextBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedBetaTextBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedBetaTextBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedBetaTextBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaTextBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaTextBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaTextBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$ParsedMessage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedMessage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedMessage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedMessage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedMessage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedMessage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedMessage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedMessage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedMessage);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$ParsedTextBlock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedTextBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedTextBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedTextBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParsedTextBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParsedTextBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedTextBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedTextBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedTextBlock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$ResponseFormatT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$TypeAdapter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAdapter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAdapter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAdapter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAdapter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$construct_type_unchecked(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_response$parse_text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_text);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_text, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_text);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_text, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_text);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d5fd7d2dde8cf9ae5bad642657345fac;
static PyCodeObject *code_objects_5bfbc0119e556c4a85c1a2554600fc9b;
static PyCodeObject *code_objects_c4d6b8ce314f37716107ba47a2b8ad74;
static PyCodeObject *code_objects_61dd169a3203e51d55d7875ac5743947;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_90aa2ad43579f24e9b756325a48fe1c1); CHECK_OBJECT(module_filename_obj);
code_objects_d5fd7d2dde8cf9ae5bad642657345fac = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d, mod_consts.const_str_digest_2814bee94aacd2f32ae5307e7e26fc5d, NULL, NULL, 0, 0, 0);
code_objects_5bfbc0119e556c4a85c1a2554600fc9b = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_beta_response, mod_consts.const_str_plain_parse_beta_response, mod_consts.const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple, NULL, 0, 2, 0);
code_objects_c4d6b8ce314f37716107ba47a2b8ad74 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_response, mod_consts.const_str_plain_parse_response, mod_consts.const_tuple_d900198a28baac3aa8bc254b4d81681e_tuple, NULL, 0, 2, 0);
code_objects_61dd169a3203e51d55d7875ac5743947 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_text, mod_consts.const_str_plain_parse_text, mod_consts.const_tuple_927536ba5cf70b3990f458546241b966_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__1_parse_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__2_parse_beta_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__3_parse_response(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$_parse$_response$$$function__1_parse_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *par_output_format = python_pars[1];
PyObject *var_adapted_type = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text = MAKE_FUNCTION_FRAME(tstate, code_objects_61dd169a3203e51d55d7875ac5743947, module_anthropic$lib$_parse$_response, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text->m_type_description == NULL);
frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text = cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$_parse$_response$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output_format);
tmp_args_element_value_1 = par_output_format;
frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text->m_frame.f_lineno = 17;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 17;
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_anthropic$lib$_parse$_response$TypeAdapter(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAdapter);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output_format);
tmp_args_element_value_2 = par_output_format;
frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text->m_frame.f_lineno = 18;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_adapted_type == NULL);
var_adapted_type = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_adapted_type);
tmp_called_instance_1 = var_adapted_type;
CHECK_OBJECT(par_text);
tmp_args_element_value_3 = par_text;
frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text->m_frame.f_lineno = 19;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_validate_json, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text,
    type_description_1,
    par_text,
    par_output_format,
    var_adapted_type
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text == cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text);
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_parse$_response$$$function__1_parse_text);

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
Py_XDECREF(var_adapted_type);
var_adapted_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_adapted_type);
var_adapted_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$_parse$_response$$$function__2_parse_beta_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_output_format = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_content_list = NULL;
PyObject *var_content = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_content_list == NULL);
var_content_list = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response = MAKE_FUNCTION_FRAME(tstate, code_objects_5bfbc0119e556c4a85c1a2554600fc9b, module_anthropic$lib$_parse$_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_type_description == NULL);
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response = cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 29;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_content;
    var_content = tmp_assign_source_4;
    Py_INCREF(var_content);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_content);
tmp_expression_value_2 = var_content;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_text;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_content_list;
tmp_called_value_1 = module_var_accessor_anthropic$lib$_parse$_response$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_anthropic$lib$_parse$_response$ParsedBetaTextBlock(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedBetaTextBlock);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = module_var_accessor_anthropic$lib$_parse$_response$ResponseFormatT(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_content);
tmp_called_instance_1 = var_content;
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame.f_lineno = 34;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 34;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_parsed_output;
tmp_called_value_2 = module_var_accessor_anthropic$lib$_parse$_response$parse_text(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_text);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_content);
tmp_expression_value_4 = var_content;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_text);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (par_output_format == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 34;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}

tmp_args_element_value_2 = par_output_format;
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame.f_lineno = 34;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_direct_call_arg1_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_kw_call_value_1_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 34;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame.f_lineno = 32;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_item_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 38;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_content_list;
CHECK_OBJECT(var_content);
tmp_item_value_2 = var_content;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooo";
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
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_instance_2;
tmp_called_value_3 = module_var_accessor_anthropic$lib$_parse$_response$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_anthropic$lib$_parse$_response$ParsedBetaMessage(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedBetaMessage);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = module_var_accessor_anthropic$lib$_parse$_response$ResponseFormatT(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_called_instance_2 = par_response;
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame.f_lineno = 43;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 43;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_content;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}

tmp_dict_value_2 = var_content_list;
tmp_tuple_element_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_kw_call_value_1_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 42;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame.f_lineno = 40;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response,
    type_description_1,
    par_output_format,
    par_response,
    var_content_list,
    var_content
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response == cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response);
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_parse$_response$$$function__2_parse_beta_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_content_list);
var_content_list = NULL;
Py_XDECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_content_list);
var_content_list = NULL;
Py_XDECREF(var_content);
var_content = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$_parse$_response$$$function__3_parse_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_output_format = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_content_list = NULL;
PyObject *var_content = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_content_list == NULL);
var_content_list = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response = MAKE_FUNCTION_FRAME(tstate, code_objects_c4d6b8ce314f37716107ba47a2b8ad74, module_anthropic$lib$_parse$_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_type_description == NULL);
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response = cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 55;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_content;
    var_content = tmp_assign_source_4;
    Py_INCREF(var_content);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_content);
tmp_expression_value_2 = var_content;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_text;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_content_list;
tmp_called_value_1 = module_var_accessor_anthropic$lib$_parse$_response$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_anthropic$lib$_parse$_response$ParsedTextBlock(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedTextBlock);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = module_var_accessor_anthropic$lib$_parse$_response$ResponseFormatT(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_content);
tmp_called_instance_1 = var_content;
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame.f_lineno = 60;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_parsed_output;
tmp_called_value_2 = module_var_accessor_anthropic$lib$_parse$_response$parse_text(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_text);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_content);
tmp_expression_value_4 = var_content;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_text);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
if (par_output_format == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}

tmp_args_element_value_2 = par_output_format;
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame.f_lineno = 60;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_direct_call_arg1_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_kw_call_value_1_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame.f_lineno = 58;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_item_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_content_list;
CHECK_OBJECT(var_content);
tmp_item_value_2 = var_content;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
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
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_instance_2;
tmp_called_value_3 = module_var_accessor_anthropic$lib$_parse$_response$construct_type_unchecked(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_anthropic$lib$_parse$_response$ParsedMessage(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParsedMessage);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = module_var_accessor_anthropic$lib$_parse$_response$ResponseFormatT(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatT);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_called_instance_2 = par_response;
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame.f_lineno = 69;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_dict);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 69;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_content;
if (var_content_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}

tmp_dict_value_2 = var_content_list;
tmp_tuple_element_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_kw_call_value_1_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 68;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame.f_lineno = 66;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_type__str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response,
    type_description_1,
    par_output_format,
    par_response,
    var_content_list,
    var_content
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response == cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response);
    cache_frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_parse$_response$$$function__3_parse_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_content_list);
var_content_list = NULL;
Py_XDECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_content_list);
var_content_list = NULL;
Py_XDECREF(var_content);
var_content = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_output_format);
Py_DECREF(par_output_format);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__1_parse_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_parse$_response$$$function__1_parse_text,
        mod_consts.const_str_plain_parse_text,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_61dd169a3203e51d55d7875ac5743947,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_parse$_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__2_parse_beta_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_parse$_response$$$function__2_parse_beta_response,
        mod_consts.const_str_plain_parse_beta_response,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5bfbc0119e556c4a85c1a2554600fc9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_parse$_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__3_parse_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_parse$_response$$$function__3_parse_response,
        mod_consts.const_str_plain_parse_response,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c4d6b8ce314f37716107ba47a2b8ad74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_parse$_response,
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

static function_impl_code const function_table_anthropic$lib$_parse$_response[] = {
impl_anthropic$lib$_parse$_response$$$function__1_parse_text,
impl_anthropic$lib$_parse$_response$$$function__2_parse_beta_response,
impl_anthropic$lib$_parse$_response$$$function__3_parse_response,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$_parse$_response);
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
        module_anthropic$lib$_parse$_response,
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
        function_table_anthropic$lib$_parse$_response,
        sizeof(function_table_anthropic$lib$_parse$_response) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib._parse._response";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$_parse$_response(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$_parse$_response");

    // Store the module for future use.
    module_anthropic$lib$_parse$_response = module;

    moduledict_anthropic$lib$_parse$_response = MODULE_DICT(module_anthropic$lib$_parse$_response);

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
        PRINT_STRING("anthropic$lib$_parse$_response: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$_parse$_response: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$_parse$_response: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._parse._response" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$_parse$_response\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$_parse$_response,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_parse$_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_parse$_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_parse$_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_parse$_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$_parse$_response);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$_parse$_response);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_response;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$_parse$_response = MAKE_MODULE_FRAME(code_objects_d5fd7d2dde8cf9ae5bad642657345fac, module_anthropic$lib$_parse$_response);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_response);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_response) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$_parse$_response$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$_parse$_response$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_TypeVar_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TypeVar);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_NotGiven_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_NotGiven);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TypeAdapter_str_plain_construct_type_unchecked_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 6;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_TypeAdapter,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TypeAdapter);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_construct_type_unchecked,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_construct_type_unchecked);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_construct_type_unchecked, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_a95988611227038b4a2a4b83f02acc57;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_is_given_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_is_given);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_2281610df6476332405187c8314d138c;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_731aba0dd059bb452ef63b562cc5b8b6;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_771fdf30b1783acf85f8635a1b0cde41_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 9;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedMessage,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ParsedMessage);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedMessage, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedTextBlock,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ParsedTextBlock);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedTextBlock, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ParsedContentBlock);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedContentBlock, tmp_assign_source_15);
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
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_eefa040b8a4f7bbf60aa95858020447e;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaMessage_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 10;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_BetaMessage,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaMessage);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaMessage, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_c8cd6f02b53bce3a2c921b840c2f9538;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$lib$_parse$_response;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_a972b627889c67c58866cfc04f618c23_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 11;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedBetaMessage,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ParsedBetaMessage);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaMessage, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedBetaTextBlock,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ParsedBetaTextBlock);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaTextBlock, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$lib$_parse$_response,
        mod_consts.const_str_plain_ParsedBetaContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ParsedBetaContentBlock);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedBetaContentBlock, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$_parse$_response$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_response->m_frame.f_lineno = 13;
tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ResponseFormatT_none_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatT, tmp_assign_source_21);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$_parse$_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_bfb79136753b6b803484a443f7d249eb);

tmp_assign_source_22 = MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__1_parse_text(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_text, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_55b04dc2397b02167280dbc1a4505459);

tmp_assign_source_23 = MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__2_parse_beta_response(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_beta_response, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_63915a8b5804ddb6af24017d63f43fdd);

tmp_assign_source_24 = MAKE_FUNCTION_anthropic$lib$_parse$_response$$$function__3_parse_response(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_response, tmp_assign_source_24);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$_parse$_response", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._parse._response" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$_parse$_response);
    return module_anthropic$lib$_parse$_response;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_response, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$_parse$_response", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

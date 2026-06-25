/* Generated code for Python module 'markdown_it$common$normalize_url'
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



/* The "module_markdown_it$common$normalize_url" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$common$normalize_url;
PyDictObject *moduledict_markdown_it$common$normalize_url;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_mdurl;
PyObject *const_str_plain_parse;
PyObject *const_dict_11ef4cd3e9c86c32c6be946b18e86277;
PyObject *const_str_plain_hostname;
PyObject *const_str_plain_protocol;
PyObject *const_str_plain_RECODE_HOSTNAME_FOR;
PyObject *const_str_plain_suppress;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain__replace;
PyObject *const_str_plain__punycode;
PyObject *const_str_plain_to_ascii;
PyObject *const_tuple_str_plain_hostname_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_parsed;
PyObject *const_str_digest_c0f52d6f4fd5380cdfc685c34e47bc9f;
PyObject *const_str_plain_to_unicode;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_DECODE_DEFAULT_CHARS;
PyObject *const_str_chr_37;
PyObject *const_str_digest_c7d1c92a51d7943cbcbab2c79334df12;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_BAD_PROTO_RE;
PyObject *const_str_plain_search;
PyObject *const_str_plain_GOOD_DATA_RE;
PyObject *const_str_digest_67f6158ef206d8f2780a3041be537593;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Callable_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_suppress_tuple;
PyObject *const_str_plain_re;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_722c61703da3de8233786376280e683f_tuple;
PyObject *const_str_plain_quote;
PyObject *const_str_plain_unquote;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_urlunparse;
PyObject *const_tuple_str_plain__punycode_tuple;
PyObject *const_int_pos_2;
PyObject *const_tuple_b031939100717782006a1390ce5786c5_tuple;
PyObject *const_dict_c151dd6ecc15908c8ae1b00d3728c62e;
PyObject *const_str_plain_normalizeLink;
PyObject *const_str_plain_normalizeLinkText;
PyObject *const_tuple_str_digest_cd5d8d4a2e3948e8fecf9cede52a6022_tuple;
PyObject *const_tuple_str_digest_925b9df79e98b569ecbe9c748152a9fd_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_15a5e3c738429165f4fe5411f3c389a3;
PyObject *const_str_plain_validateLink;
PyObject *const_str_digest_2eb73dd1bf4ccaded68471706acc0ac4;
PyObject *const_str_digest_62ec8f0a6b3720f8d545f04748efa719;
PyObject *const_tuple_str_plain_url_str_plain_parsed_tuple;
PyObject *const_tuple_str_plain_url_str_plain_validator_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.common.normalize_url"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_mdurl);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_dict_11ef4cd3e9c86c32c6be946b18e86277);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_protocol);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__replace);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__punycode);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_ascii);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hostname_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0f52d6f4fd5380cdfc685c34e47bc9f);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_unicode);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7d1c92a51d7943cbcbab2c79334df12);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_PROTO_RE);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOD_DATA_RE);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_67f6158ef206d8f2780a3041be537593);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suppress_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_722c61703da3de8233786376280e683f_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_unquote);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__punycode_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_b031939100717782006a1390ce5786c5_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLinkText);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd5d8d4a2e3948e8fecf9cede52a6022_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_925b9df79e98b569ecbe9c748152a9fd_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_15a5e3c738429165f4fe5411f3c389a3);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_2eb73dd1bf4ccaded68471706acc0ac4);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_62ec8f0a6b3720f8d545f04748efa719);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_parsed_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_validator_tuple);
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
void checkModuleConstants_markdown_it$common$normalize_url(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_mdurl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mdurl);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_dict_11ef4cd3e9c86c32c6be946b18e86277));
CHECK_OBJECT_DEEP(mod_consts.const_dict_11ef4cd3e9c86c32c6be946b18e86277);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_protocol);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__replace);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__punycode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__punycode);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_ascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_ascii);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hostname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hostname_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0f52d6f4fd5380cdfc685c34e47bc9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0f52d6f4fd5380cdfc685c34e47bc9f);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_unicode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_unicode);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_chr_37));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_37);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7d1c92a51d7943cbcbab2c79334df12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7d1c92a51d7943cbcbab2c79334df12);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_PROTO_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BAD_PROTO_RE);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOD_DATA_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOD_DATA_RE);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_67f6158ef206d8f2780a3041be537593));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67f6158ef206d8f2780a3041be537593);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Callable_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suppress_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_suppress_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_722c61703da3de8233786376280e683f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_722c61703da3de8233786376280e683f_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_unquote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unquote);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlunparse);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__punycode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__punycode_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_b031939100717782006a1390ce5786c5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b031939100717782006a1390ce5786c5_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeLink);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLinkText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeLinkText);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd5d8d4a2e3948e8fecf9cede52a6022_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_cd5d8d4a2e3948e8fecf9cede52a6022_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_925b9df79e98b569ecbe9c748152a9fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_925b9df79e98b569ecbe9c748152a9fd_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_15a5e3c738429165f4fe5411f3c389a3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_15a5e3c738429165f4fe5411f3c389a3);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validateLink);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_2eb73dd1bf4ccaded68471706acc0ac4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2eb73dd1bf4ccaded68471706acc0ac4);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_62ec8f0a6b3720f8d545f04748efa719));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62ec8f0a6b3720f8d545f04748efa719);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_parsed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_parsed_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_validator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_validator_tuple);
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
static PyObject *module_var_accessor_markdown_it$common$normalize_url$BAD_PROTO_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_BAD_PROTO_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BAD_PROTO_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BAD_PROTO_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BAD_PROTO_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BAD_PROTO_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_BAD_PROTO_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_BAD_PROTO_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BAD_PROTO_RE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$GOOD_DATA_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOD_DATA_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GOOD_DATA_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GOOD_DATA_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GOOD_DATA_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GOOD_DATA_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOD_DATA_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOD_DATA_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOD_DATA_RE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$RECODE_HOSTNAME_FOR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$_punycode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__punycode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__punycode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__punycode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__punycode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$mdurl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_mdurl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mdurl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mdurl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mdurl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mdurl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_mdurl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_mdurl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mdurl);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$normalize_url$suppress(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$normalize_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$normalize_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$normalize_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_suppress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_suppress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_suppress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_suppress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_af05e6befeccb66a98ca8e4def10f045;
static PyCodeObject *code_objects_b34201095f6613364b7bbd882a035afd;
static PyCodeObject *code_objects_e2d31bcbc130799f9edd8324e524f1fc;
static PyCodeObject *code_objects_732488a3e67d18d9ea881bdc6ada9678;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2eb73dd1bf4ccaded68471706acc0ac4); CHECK_OBJECT(module_filename_obj);
code_objects_af05e6befeccb66a98ca8e4def10f045 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_62ec8f0a6b3720f8d545f04748efa719, mod_consts.const_str_digest_62ec8f0a6b3720f8d545f04748efa719, NULL, NULL, 0, 0, 0);
code_objects_b34201095f6613364b7bbd882a035afd = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_normalizeLink, mod_consts.const_str_plain_normalizeLink, mod_consts.const_tuple_str_plain_url_str_plain_parsed_tuple, NULL, 1, 0, 0);
code_objects_e2d31bcbc130799f9edd8324e524f1fc = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_normalizeLinkText, mod_consts.const_str_plain_normalizeLinkText, mod_consts.const_tuple_str_plain_url_str_plain_parsed_tuple, NULL, 1, 0, 0);
code_objects_732488a3e67d18d9ea881bdc6ada9678 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validateLink, mod_consts.const_str_plain_validateLink, mod_consts.const_tuple_str_plain_url_str_plain_validator_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__1_normalizeLink(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__2_normalizeLinkText(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__3_validateLink(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$common$normalize_url$$$function__1_normalizeLink(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *var_parsed = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink)) {
    Py_XDECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink = MAKE_FUNCTION_FRAME(tstate, code_objects_b34201095f6613364b7bbd882a035afd, module_markdown_it$common$normalize_url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_type_description == NULL);
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink = cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink);
assert(Py_REFCNT(frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_11ef4cd3e9c86c32c6be946b18e86277);
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 23;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parsed);
tmp_expression_value_2 = var_parsed;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hostname);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_parsed);
tmp_expression_value_3 = var_parsed;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_protocol);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_parsed);
tmp_expression_value_4 = var_parsed;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_protocol);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_markdown_it$common$normalize_url$RECODE_HOSTNAME_FOR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_markdown_it$common$normalize_url$suppress(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suppress);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 34;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_type_Exception_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 34;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_parsed);
tmp_expression_value_7 = var_parsed;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__replace);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_expression_value_8 = module_var_accessor_markdown_it$common$normalize_url$_punycode(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__punycode);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_to_ascii);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_parsed);
tmp_expression_value_9 = var_parsed;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_hostname);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 35;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 35;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_hostname_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_parsed;
    assert(old != NULL);
    var_parsed = tmp_assign_source_6;
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 34;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 34;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame)) {
        frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 34;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame)) {
        frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 34;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 34;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
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
branch_no_1:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
tmp_expression_value_10 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (var_parsed == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parsed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_parsed;
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 37;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame.f_lineno = 37;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink,
    type_description_1,
    par_url,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink == cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink);
    cache_frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink = NULL;
}

assertFrameObject(frame_frame_markdown_it$common$normalize_url$$$function__1_normalizeLink);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parsed);
var_parsed = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$common$normalize_url$$$function__2_normalizeLinkText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *var_parsed = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText)) {
    Py_XDECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText = MAKE_FUNCTION_FRAME(tstate, code_objects_e2d31bcbc130799f9edd8324e524f1fc, module_markdown_it$common$normalize_url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_type_description == NULL);
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText = cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText);
assert(Py_REFCNT(frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_11ef4cd3e9c86c32c6be946b18e86277);
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 48;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parsed);
tmp_expression_value_2 = var_parsed;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hostname);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_parsed);
tmp_expression_value_3 = var_parsed;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_protocol);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_parsed);
tmp_expression_value_4 = var_parsed;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_protocol);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_markdown_it$common$normalize_url$RECODE_HOSTNAME_FOR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RECODE_HOSTNAME_FOR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 57;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_markdown_it$common$normalize_url$suppress(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suppress);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 59;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_type_Exception_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 59;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_parsed);
tmp_expression_value_7 = var_parsed;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__replace);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_expression_value_8 = module_var_accessor_markdown_it$common$normalize_url$_punycode(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__punycode);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_to_unicode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_parsed);
tmp_expression_value_9 = var_parsed;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_hostname);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 60;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 60;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_hostname_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_parsed;
    assert(old != NULL);
    var_parsed = tmp_assign_source_6;
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 59;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame)) {
        frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame)) {
        frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 59;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 59;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
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
branch_no_1:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_12;
tmp_expression_value_10 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (var_parsed == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parsed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_parsed;
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 63;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_markdown_it$common$normalize_url$mdurl(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mdurl);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_37;
tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText,
    type_description_1,
    par_url,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText == cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText);
    cache_frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText = NULL;
}

assertFrameObject(frame_frame_markdown_it$common$normalize_url$$$function__2_normalizeLinkText);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parsed);
var_parsed = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$common$normalize_url$$$function__3_validateLink(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_validator = python_pars[1];
struct Nuitka_FrameObject *frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink)) {
    Py_XDECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink = MAKE_FUNCTION_FRAME(tstate, code_objects_732488a3e67d18d9ea881bdc6ada9678, module_markdown_it$common$normalize_url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_type_description == NULL);
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink = cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink);
assert(Py_REFCNT(frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_validator);
tmp_cmp_expr_left_1 = par_validator;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_validator);
tmp_called_value_1 = par_validator;
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame.f_lineno = 79;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_url);
tmp_expression_value_2 = par_url;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame.f_lineno = 80;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame.f_lineno = 80;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_markdown_it$common$normalize_url$BAD_PROTO_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BAD_PROTO_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_2 = par_url;
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_2 = module_var_accessor_markdown_it$common$normalize_url$GOOD_DATA_RE(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GOOD_DATA_RE);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame.f_lineno = 81;
tmp_value_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_search, tmp_args_element_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = Py_True;
condexpr_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink,
    type_description_1,
    par_url,
    par_validator
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink == cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink);
    cache_frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink = NULL;
}

assertFrameObject(frame_frame_markdown_it$common$normalize_url$$$function__3_validateLink);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_url);
par_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_validator);
Py_DECREF(par_validator);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_validator);
Py_DECREF(par_validator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__1_normalizeLink(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$common$normalize_url$$$function__1_normalizeLink,
        mod_consts.const_str_plain_normalizeLink,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b34201095f6613364b7bbd882a035afd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$common$normalize_url,
        mod_consts.const_str_digest_c0f52d6f4fd5380cdfc685c34e47bc9f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__2_normalizeLinkText(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$common$normalize_url$$$function__2_normalizeLinkText,
        mod_consts.const_str_plain_normalizeLinkText,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e2d31bcbc130799f9edd8324e524f1fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$common$normalize_url,
        mod_consts.const_str_digest_c7d1c92a51d7943cbcbab2c79334df12,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__3_validateLink(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$common$normalize_url$$$function__3_validateLink,
        mod_consts.const_str_plain_validateLink,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_732488a3e67d18d9ea881bdc6ada9678,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$common$normalize_url,
        mod_consts.const_str_digest_67f6158ef206d8f2780a3041be537593,
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

static function_impl_code const function_table_markdown_it$common$normalize_url[] = {
impl_markdown_it$common$normalize_url$$$function__1_normalizeLink,
impl_markdown_it$common$normalize_url$$$function__2_normalizeLinkText,
impl_markdown_it$common$normalize_url$$$function__3_validateLink,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$common$normalize_url);
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
        module_markdown_it$common$normalize_url,
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
        function_table_markdown_it$common$normalize_url,
        sizeof(function_table_markdown_it$common$normalize_url) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.common.normalize_url";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$common$normalize_url(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$common$normalize_url");

    // Store the module for future use.
    module_markdown_it$common$normalize_url = module;

    moduledict_markdown_it$common$normalize_url = MODULE_DICT(module_markdown_it$common$normalize_url);

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
        PRINT_STRING("markdown_it$common$normalize_url: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$common$normalize_url: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$common$normalize_url: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.common.normalize_url" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$common$normalize_url\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$common$normalize_url,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$common$normalize_url,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$common$normalize_url,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$common$normalize_url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$common$normalize_url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$common$normalize_url);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$common$normalize_url);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$common$normalize_url;
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
UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$common$normalize_url = MAKE_MODULE_FRAME(code_objects_af05e6befeccb66a98ca8e4def10f045, module_markdown_it$common$normalize_url);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$common$normalize_url);
assert(Py_REFCNT(frame_frame_markdown_it$common$normalize_url) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$common$normalize_url$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$common$normalize_url$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Callable_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 3;
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
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Callable);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_suppress_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_suppress,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_suppress);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_722c61703da3de8233786376280e683f_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 6;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_quote,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_quote);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_quote, tmp_assign_source_9);
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
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_unquote,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_unquote);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_unquote, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain_urlunparse,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_urlunparse);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse, tmp_assign_source_12);
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
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_mdurl;
tmp_globals_arg_value_5 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 8;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_mdurl, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_markdown_it$common$normalize_url;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__punycode_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 10;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_markdown_it$common$normalize_url,
        mod_consts.const_str_plain__punycode,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__punycode);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_tuple_b031939100717782006a1390ce5786c5_tuple;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_RECODE_HOSTNAME_FOR, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);

tmp_assign_source_16 = MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__1_normalizeLink(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeLink, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);

tmp_assign_source_17 = MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__2_normalizeLinkText(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeLinkText, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$common$normalize_url$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 66;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_cd5d8d4a2e3948e8fecf9cede52a6022_tuple, 0)
);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_BAD_PROTO_RE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_markdown_it$common$normalize_url$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$normalize_url->m_frame.f_lineno = 67;
tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_925b9df79e98b569ecbe9c748152a9fd_tuple, 0)
);

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOD_DATA_RE, tmp_assign_source_19);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$normalize_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$common$normalize_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$normalize_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$common$normalize_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_15a5e3c738429165f4fe5411f3c389a3);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_20 = MAKE_FUNCTION_markdown_it$common$normalize_url$$$function__3_validateLink(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)mod_consts.const_str_plain_validateLink, tmp_assign_source_20);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$common$normalize_url", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.common.normalize_url" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$common$normalize_url);
    return module_markdown_it$common$normalize_url;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$normalize_url, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$common$normalize_url", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

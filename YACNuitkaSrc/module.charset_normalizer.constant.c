/* Generated code for Python module 'charset_normalizer$constant'
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



/* The "module_charset_normalizer$constant" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer$constant;
PyDictObject *moduledict_charset_normalizer$constant;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_plain__codec_tuple;
PyObject *const_frozenset_5284d2e486b290af5a0d35d94229adbf;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_codecs;
PyObject *const_tuple_17230561270cc3dc641b0209d308385d_tuple;
PyObject *const_str_plain_BOM_UTF8;
PyObject *const_str_plain_BOM_UTF16_BE;
PyObject *const_str_plain_BOM_UTF16_LE;
PyObject *const_str_plain_BOM_UTF32_BE;
PyObject *const_str_plain_BOM_UTF32_LE;
PyObject *const_str_digest_17f7455087ff52977baad581ef5a11cb;
PyObject *const_tuple_str_plain_aliases_tuple;
PyObject *const_str_plain_aliases;
PyObject *const_str_plain_re;
PyObject *const_tuple_str_plain_IGNORECASE_tuple;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_tuple_str_plain_compile_tuple;
PyObject *const_str_plain_re_compile;
PyObject *const_str_plain_utf_8;
PyObject *const_str_plain_utf_7;
PyObject *const_list_ae3d289e8b725185deea9f50f984ce8d_list;
PyObject *const_str_plain_gb18030;
PyObject *const_bytes_digest_819c95f2bd270fd12c97a14ba9dbe01f;
PyObject *const_str_plain_utf_32;
PyObject *const_str_plain_utf_16;
PyObject *const_str_plain_ENCODING_MARKS;
PyObject *const_str_digest_18739476dcfccbab298ee7b5e75fd13a;
PyObject *const_int_pos_32;
PyObject *const_str_plain_TOO_SMALL_SEQUENCE;
PyObject *const_int_pos_10000000;
PyObject *const_str_plain_TOO_BIG_SEQUENCE;
PyObject *const_int_pos_1112064;
PyObject *const_str_plain_UTF8_MAXIMAL_ALLOCATION;
PyObject *const_dict_ec9960e687b1436444ea4fb1381ff700;
PyObject *const_str_plain_UNICODE_RANGES_COMBINED;
PyObject *const_str_digest_a99fdec6045f96b9c70422cf340ef045;
PyObject *const_list_dcbb835d1d34c87a32f1fd3911de0f4b_list;
PyObject *const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD;
PyObject *const_str_digest_e457754874b2ab64235a137685f8363a;
PyObject *const_str_digest_5a735065259a46efe0552f64c3e53f35;
PyObject *const_str_plain_RE_POSSIBLE_ENCODING_INDICATION;
PyObject *const_list_b0b5e83f2989ebe26219a6d433ea38f4_list;
PyObject *const_str_plain_IANA_NO_ALIASES;
PyObject *const_str_plain_sorted;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain_values;
PyObject *const_str_plain_IANA_SUPPORTED;
PyObject *const_str_plain_IANA_SUPPORTED_COUNT;
PyObject *const_dict_3c41c3a3c9f4767cc28bf6cd0f331605;
PyObject *const_str_plain_IANA_SUPPORTED_SIMILAR;
PyObject *const_str_digest_5520352aedbd1723efd5efd9a9ba2525;
PyObject *const_dict_90b63d0b83af7081dd9873e98ddedfa9;
PyObject *const_str_plain_CHARDET_CORRESPONDENCE;
PyObject *const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa;
PyObject *const_set_21587d3eabd93ee260daa7ddfe7cdeb1;
PyObject *const_str_plain_COMMON_SAFE_ASCII_CHARACTERS;
PyObject *const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
PyObject *const_set_3095e4b0cc63fea49a7f8b692beb4858;
PyObject *const_str_plain_KO_NAMES;
PyObject *const_set_1b2052ef58e6cb5acb7f5517e2c85545;
PyObject *const_str_plain_ZH_NAMES;
PyObject *const_int_pos_5;
PyObject *const_str_plain_TRACE;
PyObject *const_dict_791508eae29511d59331bf4683683b09;
PyObject *const_str_plain_FREQUENCIES;
PyObject *const_str_plain_LANGUAGE_SUPPORTED_COUNT;
PyObject *const_str_digest_403683699590a8d3190e11a56d8b9b09;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_str_digest_a6026bd8a94168058fd1346704318638;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[72];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("charset_normalizer.constant"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__codec_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_frozenset_5284d2e486b290af5a0d35d94229adbf);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_codecs);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_17230561270cc3dc641b0209d308385d_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF8);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF16_BE);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF16_LE);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_BE);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_LE);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aliases_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_aliases);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IGNORECASE_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compile_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_re_compile);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_8);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_7);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_list_ae3d289e8b725185deea9f50f984ce8d_list);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_gb18030);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_819c95f2bd270fd12c97a14ba9dbe01f);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_32);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_16);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODING_MARKS);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_18739476dcfccbab298ee7b5e75fd13a);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_10000000);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_1112064);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_ec9960e687b1436444ea4fb1381ff700);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_a99fdec6045f96b9c70422cf340ef045);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_list_dcbb835d1d34c87a32f1fd3911de0f4b_list);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a735065259a46efe0552f64c3e53f35);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_list_b0b5e83f2989ebe26219a6d433ea38f4_list);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_NO_ALIASES);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_COUNT);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_3c41c3a3c9f4767cc28bf6cd0f331605);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_90b63d0b83af7081dd9873e98ddedfa9);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHARDET_CORRESPONDENCE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_set_21587d3eabd93ee260daa7ddfe7cdeb1);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_SAFE_ASCII_CHARACTERS);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_set_3095e4b0cc63fea49a7f8b692beb4858);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_KO_NAMES);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_set_1b2052ef58e6cb5acb7f5517e2c85545);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZH_NAMES);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRACE);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_791508eae29511d59331bf4683683b09);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_FREQUENCIES);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_LANGUAGE_SUPPORTED_COUNT);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_403683699590a8d3190e11a56d8b9b09);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6026bd8a94168058fd1346704318638);
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
void checkModuleConstants_charset_normalizer$constant(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__codec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__codec_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_frozenset_5284d2e486b290af5a0d35d94229adbf));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_5284d2e486b290af5a0d35d94229adbf);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_codecs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codecs);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_17230561270cc3dc641b0209d308385d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_17230561270cc3dc641b0209d308385d_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF8);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF16_BE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF16_BE);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF16_LE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF16_LE);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_BE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF32_BE);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_LE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF32_LE);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aliases_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_aliases_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aliases);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IGNORECASE_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IGNORECASE_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_compile_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_re_compile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re_compile);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf_8);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf_7);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_list_ae3d289e8b725185deea9f50f984ce8d_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_ae3d289e8b725185deea9f50f984ce8d_list);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_gb18030));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gb18030);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_819c95f2bd270fd12c97a14ba9dbe01f));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_819c95f2bd270fd12c97a14ba9dbe01f);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf_32);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf_16);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODING_MARKS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENCODING_MARKS);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_18739476dcfccbab298ee7b5e75fd13a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18739476dcfccbab298ee7b5e75fd13a);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_10000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10000000);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_BIG_SEQUENCE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_1112064));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1112064);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_ec9960e687b1436444ea4fb1381ff700));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ec9960e687b1436444ea4fb1381ff700);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_a99fdec6045f96b9c70422cf340ef045));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a99fdec6045f96b9c70422cf340ef045);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_list_dcbb835d1d34c87a32f1fd3911de0f4b_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_dcbb835d1d34c87a32f1fd3911de0f4b_list);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a735065259a46efe0552f64c3e53f35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a735065259a46efe0552f64c3e53f35);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_list_b0b5e83f2989ebe26219a6d433ea38f4_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b0b5e83f2989ebe26219a6d433ea38f4_list);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_NO_ALIASES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IANA_NO_ALIASES);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IANA_SUPPORTED);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_COUNT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IANA_SUPPORTED_COUNT);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_3c41c3a3c9f4767cc28bf6cd0f331605));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c41c3a3c9f4767cc28bf6cd0f331605);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_90b63d0b83af7081dd9873e98ddedfa9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90b63d0b83af7081dd9873e98ddedfa9);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHARDET_CORRESPONDENCE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHARDET_CORRESPONDENCE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_set_21587d3eabd93ee260daa7ddfe7cdeb1));
CHECK_OBJECT_DEEP(mod_consts.const_set_21587d3eabd93ee260daa7ddfe7cdeb1);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_SAFE_ASCII_CHARACTERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMON_SAFE_ASCII_CHARACTERS);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_set_3095e4b0cc63fea49a7f8b692beb4858));
CHECK_OBJECT_DEEP(mod_consts.const_set_3095e4b0cc63fea49a7f8b692beb4858);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_KO_NAMES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KO_NAMES);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_set_1b2052ef58e6cb5acb7f5517e2c85545));
CHECK_OBJECT_DEEP(mod_consts.const_set_1b2052ef58e6cb5acb7f5517e2c85545);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZH_NAMES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZH_NAMES);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRACE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRACE);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_791508eae29511d59331bf4683683b09));
CHECK_OBJECT_DEEP(mod_consts.const_dict_791508eae29511d59331bf4683683b09);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_FREQUENCIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FREQUENCIES);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_LANGUAGE_SUPPORTED_COUNT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LANGUAGE_SUPPORTED_COUNT);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_403683699590a8d3190e11a56d8b9b09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_403683699590a8d3190e11a56d8b9b09);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6026bd8a94168058fd1346704318638));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6026bd8a94168058fd1346704318638);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_charset_normalizer$constant$BOM_UTF16_BE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_BE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF16_BE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF16_BE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF16_BE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF16_BE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_BE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_BE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_BE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$BOM_UTF16_LE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_LE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF16_LE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF16_LE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF16_LE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF16_LE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_LE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_LE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_LE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$BOM_UTF32_BE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_BE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF32_BE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF32_BE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF32_BE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF32_BE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_BE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_BE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_BE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$BOM_UTF32_LE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_LE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF32_LE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF32_LE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF32_LE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF32_LE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_LE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_LE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_LE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$BOM_UTF8(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF8);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF8);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF8, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOM_UTF8);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOM_UTF8, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF8);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF8);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF8);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$FREQUENCIES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_FREQUENCIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FREQUENCIES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FREQUENCIES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FREQUENCIES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FREQUENCIES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_FREQUENCIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_FREQUENCIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FREQUENCIES);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$IANA_NO_ALIASES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_NO_ALIASES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_NO_ALIASES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_NO_ALIASES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_NO_ALIASES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_NO_ALIASES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_NO_ALIASES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_NO_ALIASES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_NO_ALIASES);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$IANA_SUPPORTED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$IGNORECASE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORECASE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IGNORECASE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IGNORECASE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IGNORECASE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IGNORECASE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORECASE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORECASE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORECASE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$aliases(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aliases);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aliases, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aliases);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aliases, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$constant$re_compile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$constant->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$constant->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_re_compile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$constant->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re_compile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re_compile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re_compile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re_compile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_re_compile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_re_compile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re_compile);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2e3cfe2adadd319b74870bdfb9c218aa;
static PyCodeObject *code_objects_7690deba151b3fa0c2d719f3772289ca;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_403683699590a8d3190e11a56d8b9b09); CHECK_OBJECT(module_filename_obj);
code_objects_2e3cfe2adadd319b74870bdfb9c218aa = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_7690deba151b3fa0c2d719f3772289ca = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a6026bd8a94168058fd1346704318638, mod_consts.const_str_digest_a6026bd8a94168058fd1346704318638, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_charset_normalizer$constant$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_charset_normalizer$constant$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$constant$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$constant$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$constant$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$constant$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$constant$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$constant$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_2e3cfe2adadd319b74870bdfb9c218aa, module_charset_normalizer$constant, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$constant$$$function__1_lambda->m_type_description == NULL);
frame_frame_charset_normalizer$constant$$$function__1_lambda = cache_frame_frame_charset_normalizer$constant$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$constant$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_charset_normalizer$constant$$$function__1_lambda) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_endswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$constant$$$function__1_lambda->m_frame.f_lineno = 398;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__codec_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_False;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_2 = par_x;
tmp_cmp_expr_right_2 = mod_consts.const_frozenset_5284d2e486b290af5a0d35d94229adbf;
tmp_res = PySet_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$constant$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$constant$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$constant$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$constant$$$function__1_lambda,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$constant$$$function__1_lambda == cache_frame_frame_charset_normalizer$constant$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$constant$$$function__1_lambda);
    cache_frame_frame_charset_normalizer$constant$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$constant$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$constant$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$constant$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2e3cfe2adadd319b74870bdfb9c218aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_charset_normalizer$constant,
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

static function_impl_code const function_table_charset_normalizer$constant[] = {
impl_charset_normalizer$constant$$$function__1_lambda,
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

    return Nuitka_Function_GetFunctionState(function, function_table_charset_normalizer$constant);
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
        module_charset_normalizer$constant,
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
        function_table_charset_normalizer$constant,
        sizeof(function_table_charset_normalizer$constant) / sizeof(function_impl_code)
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
static char const *module_full_name = "charset_normalizer.constant";
#endif

// Internal entry point for module code.
PyObject *module_code_charset_normalizer$constant(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer$constant");

    // Store the module for future use.
    module_charset_normalizer$constant = module;

    moduledict_charset_normalizer$constant = MODULE_DICT(module_charset_normalizer$constant);

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
        PRINT_STRING("charset_normalizer$constant: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer$constant: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("charset_normalizer$constant: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.constant" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcharset_normalizer$constant\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_charset_normalizer$constant,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$constant,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$constant,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$constant,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$constant,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer$constant);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_charset_normalizer$constant);
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

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$constant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_charset_normalizer$constant = MAKE_MODULE_FRAME(code_objects_7690deba151b3fa0c2d719f3772289ca, module_charset_normalizer$constant);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$constant);
assert(Py_REFCNT(frame_frame_charset_normalizer$constant) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_charset_normalizer$constant$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_charset_normalizer$constant$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_codecs;
tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer$constant;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_17230561270cc3dc641b0209d308385d_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_BOM_UTF8,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_BOM_UTF8);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF8, tmp_assign_source_7);
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
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_BOM_UTF16_BE,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_BOM_UTF16_BE);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_BE, tmp_assign_source_8);
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
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_BOM_UTF16_LE,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BOM_UTF16_LE);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF16_LE, tmp_assign_source_9);
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
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_BOM_UTF32_BE,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_BOM_UTF32_BE);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_BE, tmp_assign_source_10);
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
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_BOM_UTF32_LE,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BOM_UTF32_LE);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_BOM_UTF32_LE, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb;
tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer$constant;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_aliases_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 4;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_aliases,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_aliases);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer$constant;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_IGNORECASE_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 5;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_charset_normalizer$constant,
        mod_consts.const_str_plain_IGNORECASE,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_IGNORECASE);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORECASE, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer$constant;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_compile_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 6;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_charset_normalizer$constant,
        const_str_plain_compile,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, const_str_plain_compile);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_re_compile, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_utf_8;
tmp_dict_value_1 = module_var_accessor_charset_normalizer$constant$BOM_UTF8(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOM_UTF8);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_assign_source_15 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_list_element_1;
PyObject *tmp_list_element_2;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_utf_7;
tmp_dict_value_1 = MAKE_LIST5(tstate, mod_consts.const_list_ae3d289e8b725185deea9f50f984ce8d_list);
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_gb18030;
tmp_dict_value_1 = mod_consts.const_bytes_digest_819c95f2bd270fd12c97a14ba9dbe01f;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_utf_32;
tmp_list_element_1 = module_var_accessor_charset_normalizer$constant$BOM_UTF32_BE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOM_UTF32_BE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_dict_value_1, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_charset_normalizer$constant$BOM_UTF32_LE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOM_UTF32_LE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_dict_value_1, 1, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dict_value_1);
goto dict_build_exception_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_utf_16;
tmp_list_element_2 = module_var_accessor_charset_normalizer$constant$BOM_UTF16_BE(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOM_UTF16_BE);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_dict_value_1, 0, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_charset_normalizer$constant$BOM_UTF16_LE(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOM_UTF16_LE);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_dict_value_1, 1, tmp_list_element_2);
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dict_value_1);
goto dict_build_exception_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS, tmp_assign_source_15);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_18739476dcfccbab298ee7b5e75fd13a;
tmp_ass_subscribed_1 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_ENCODING_MARKS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE, tmp_assign_source_16);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = const_str_plain_int;
tmp_ass_subscribed_2 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_TOO_SMALL_SEQUENCE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_10000000;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = const_str_plain_int;
tmp_ass_subscribed_3 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_TOO_BIG_SEQUENCE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_int_pos_1112064;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = const_str_plain_int;
tmp_ass_subscribed_4 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = DICT_COPY(tstate, mod_consts.const_dict_ec9960e687b1436444ea4fb1381ff700);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED, tmp_assign_source_19);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_a99fdec6045f96b9c70422cf340ef045;
tmp_ass_subscribed_5 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_UNICODE_RANGES_COMBINED;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = LIST_COPY(tstate, mod_consts.const_list_dcbb835d1d34c87a32f1fd3911de0f4b_list);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD, tmp_assign_source_20);
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a;
tmp_ass_subscribed_6 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_UNICODE_SECONDARY_RANGE_KEYWORD;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_charset_normalizer$constant$re_compile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re_compile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_5a735065259a46efe0552f64c3e53f35;
tmp_args_element_value_2 = module_var_accessor_charset_normalizer$constant$IGNORECASE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IGNORECASE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 379;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST9(tstate, mod_consts.const_list_b0b5e83f2989ebe26219a6d433ea38f4_list);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_NO_ALIASES, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_2 != NULL);
tmp_called_value_3 = (PyObject *)&PyFilter_Type;

tmp_args_element_value_4 = MAKE_FUNCTION_charset_normalizer$constant$$$function__1_lambda(tstate);

tmp_expression_value_1 = module_var_accessor_charset_normalizer$constant$aliases(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aliases);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_values);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 400;
tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_list_arg_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = module_var_accessor_charset_normalizer$constant$IANA_NO_ALIASES(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_NO_ALIASES);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 400;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 397;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$constant->m_frame.f_lineno = 396;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED, tmp_assign_source_23);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a;
tmp_ass_subscribed_7 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_IANA_SUPPORTED;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_len_arg_1;
tmp_len_arg_1 = module_var_accessor_charset_normalizer$constant$IANA_SUPPORTED(tstate);
if (unlikely(tmp_len_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED);
}

if (tmp_len_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;

    goto frame_exception_exit_1;
}
tmp_assign_source_24 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_COUNT, tmp_assign_source_24);
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = const_str_plain_int;
tmp_ass_subscribed_8 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_IANA_SUPPORTED_COUNT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_3c41c3a3c9f4767cc28bf6cd0f331605);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR, tmp_assign_source_25);
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525;
tmp_ass_subscribed_9 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = DICT_COPY(tstate, mod_consts.const_dict_90b63d0b83af7081dd9873e98ddedfa9);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_CHARDET_CORRESPONDENCE, tmp_assign_source_26);
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa;
tmp_ass_subscribed_10 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 496;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_CHARDET_CORRESPONDENCE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = PySet_New(mod_consts.const_set_21587d3eabd93ee260daa7ddfe7cdeb1);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_SAFE_ASCII_CHARACTERS, tmp_assign_source_27);
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_11 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 532;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_COMMON_SAFE_ASCII_CHARACTERS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = PySet_New(mod_consts.const_set_3095e4b0cc63fea49a7f8b692beb4858);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_KO_NAMES, tmp_assign_source_28);
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_12 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_KO_NAMES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = PySet_New(mod_consts.const_set_1b2052ef58e6cb5acb7f5517e2c85545);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_ZH_NAMES, tmp_assign_source_29);
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_13 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_ZH_NAMES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE, tmp_assign_source_30);
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = const_str_plain_int;
tmp_ass_subscribed_14 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 557;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_TRACE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_791508eae29511d59331bf4683683b09);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_FREQUENCIES, tmp_assign_source_31);
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525;
tmp_ass_subscribed_15 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 562;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_FREQUENCIES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_len_arg_2;
tmp_len_arg_2 = module_var_accessor_charset_normalizer$constant$FREQUENCIES(tstate);
if (unlikely(tmp_len_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FREQUENCIES);
}

if (tmp_len_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1998;

    goto frame_exception_exit_1;
}
tmp_assign_source_32 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1998;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)mod_consts.const_str_plain_LANGUAGE_SUPPORTED_COUNT, tmp_assign_source_32);
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = const_str_plain_int;
tmp_ass_subscribed_16 = module_var_accessor_charset_normalizer$constant$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1998;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_LANGUAGE_SUPPORTED_COUNT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1998;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$constant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$constant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$constant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_charset_normalizer$constant);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer$constant", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.constant" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_charset_normalizer$constant);
    return module_charset_normalizer$constant;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$constant, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer$constant", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

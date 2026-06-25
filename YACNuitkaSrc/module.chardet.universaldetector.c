/* Generated code for Python module 'chardet$universaldetector'
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



/* The "module_chardet$universaldetector" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$universaldetector;
PyDictObject *moduledict_chardet$universaldetector;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__esc_charset_prober;
PyObject *const_str_plain__utf1632_prober;
PyObject *const_str_plain__charset_probers;
PyObject *const_dict_d37ef741af37f5b54bdff32a259d1680;
PyObject *const_str_plain_result;
PyObject *const_str_plain_done;
PyObject *const_str_plain__got_data;
PyObject *const_str_plain_InputState;
PyObject *const_str_plain_PURE_ASCII;
PyObject *const_str_plain__input_state;
PyObject *const_str_plain__last_char;
PyObject *const_str_plain_lang_filter;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple;
PyObject *const_str_plain_logger;
PyObject *const_str_plain__has_win_bytes;
PyObject *const_str_plain_should_rename_legacy;
PyObject *const_str_plain_reset;
PyObject *const_str_digest_5a49c37b8cb0c5beef9df2c5cccd4f3f;
PyObject *const_str_plain_startswith;
PyObject *const_str_plain_codecs;
PyObject *const_str_plain_BOM_UTF8;
PyObject *const_dict_01fcdc7a9c5c1e213c94f8ba442ea0fd;
PyObject *const_str_plain_BOM_UTF32_LE;
PyObject *const_str_plain_BOM_UTF32_BE;
PyObject *const_dict_5d3fe12ece425a86e42d90bb3e0dcbdd;
PyObject *const_tuple_bytes_digest_e30e450e6bba3fb4f64d528bfb6d3f72_tuple;
PyObject *const_dict_1d46f0fee0f163445a7b3ac8739772ae;
PyObject *const_tuple_bytes_digest_76e3242c8538535434941e0a9f975443_tuple;
PyObject *const_dict_5450117647aeb6cb9b2777c1e82a6132;
PyObject *const_str_plain_BOM_LE;
PyObject *const_str_plain_BOM_BE;
PyObject *const_dict_68ebda5ad3407c1bc4fcd2997d1662cb;
PyObject *const_str_plain_HIGH_BYTE_DETECTOR;
PyObject *const_str_plain_search;
PyObject *const_str_plain_HIGH_BYTE;
PyObject *const_str_plain_ESC_DETECTOR;
PyObject *const_str_plain_ESC_ASCII;
PyObject *const_slice_int_neg_1_none_none;
PyObject *const_str_plain_UTF1632Prober;
PyObject *const_str_plain_state;
PyObject *const_str_plain_ProbingState;
PyObject *const_str_plain_DETECTING;
PyObject *const_str_plain_feed;
PyObject *const_str_plain_FOUND_IT;
PyObject *const_str_plain_charset_name;
PyObject *const_str_plain_confidence;
PyObject *const_str_plain_get_confidence;
PyObject *const_str_plain_language;
PyObject *const_str_plain_EscCharSetProber;
PyObject *const_str_plain_MBCSGroupProber;
PyObject *const_str_plain_LanguageFilter;
PyObject *const_str_plain_NON_CJK;
PyObject *const_str_plain_append;
PyObject *const_str_plain_SBCSGroupProber;
PyObject *const_str_plain_Latin1Prober;
PyObject *const_str_plain_MacRomanProber;
PyObject *const_str_plain_byte_str;
PyObject *const_str_plain_WIN_BYTE_DETECTOR;
PyObject *const_str_digest_15327f20a93a1d332f4d528e2477fdd2;
PyObject *const_str_plain_debug;
PyObject *const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple;
PyObject *const_dict_b866eb9399b73658ba2ebcd2a847aea2;
PyObject *const_str_plain_max_prober_confidence;
PyObject *const_str_plain_max_prober;
PyObject *const_str_plain_MINIMUM_THRESHOLD;
PyObject *const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple;
PyObject *const_str_plain_ISO_WIN_MAP;
PyObject *const_str_plain_LEGACY_MAP;
PyObject *const_str_plain_getEffectiveLevel;
PyObject *const_str_plain_DEBUG;
PyObject *const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple;
PyObject *const_str_plain_CharSetGroupProber;
PyObject *const_str_plain_probers;
PyObject *const_str_plain_self;
PyObject *const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
PyObject *const_str_digest_e291f36373269291c9b04d959d648e3e;
PyObject *const_str_digest_c3d7235cf6152b605329f2bf6301e245;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_charsetgroupprober;
PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
PyObject *const_str_plain_charsetprober;
PyObject *const_tuple_str_plain_CharSetProber_tuple;
PyObject *const_str_plain_CharSetProber;
PyObject *const_str_plain_enums;
PyObject *const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
PyObject *const_str_plain_escprober;
PyObject *const_tuple_str_plain_EscCharSetProber_tuple;
PyObject *const_str_plain_latin1prober;
PyObject *const_tuple_str_plain_Latin1Prober_tuple;
PyObject *const_str_plain_macromanprober;
PyObject *const_tuple_str_plain_MacRomanProber_tuple;
PyObject *const_str_plain_mbcsgroupprober;
PyObject *const_tuple_str_plain_MBCSGroupProber_tuple;
PyObject *const_str_plain_resultdict;
PyObject *const_tuple_str_plain_ResultDict_tuple;
PyObject *const_str_plain_ResultDict;
PyObject *const_str_plain_sbcsgroupprober;
PyObject *const_tuple_str_plain_SBCSGroupProber_tuple;
PyObject *const_str_plain_utf1632prober;
PyObject *const_tuple_str_plain_UTF1632Prober_tuple;
PyObject *const_str_digest_94822410052685fe3f09d986d30eb776;
PyObject *const_str_digest_486d87012723a2b0cd85fc1db31a9dfc;
PyObject *const_str_plain_UniversalDetector;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_56;
PyObject *const_str_plain___firstlineno__;
PyObject *const_float_0_2;
PyObject *const_tuple_bytes_digest_3a3470da5d75587858cb6d687d452d58_tuple;
PyObject *const_tuple_bytes_digest_2c98d1fac9489829e3025ccee0ae07ee_tuple;
PyObject *const_tuple_bytes_digest_94e1272116c87d5e48a7b11812d73e4b_tuple;
PyObject *const_dict_333a65de09d323cc3af3be549308aae5;
PyObject *const_dict_b3b4da2a6db8d0636f9d68d2b564ea8f;
PyObject *const_str_plain_ALL;
PyObject *const_str_plain_return;
PyObject *const_str_digest_b02cb7119ea89aa0380b345063f46f67;
PyObject *const_dict_1259841a0de68bdf7d5f55bbd030b617;
PyObject *const_str_plain_input_state;
PyObject *const_str_digest_9c91c2c479545484f50c7ee31f58e404;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_plain_has_win_bytes;
PyObject *const_str_digest_4f203d9ed40b9baba152dcdeed8eb709;
PyObject *const_str_plain_charset_probers;
PyObject *const_str_digest_a3edf1f94f2fdb266358f9addbd18b41;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_dbc74c402515b6fcd253e5e5ed85973f;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6;
PyObject *const_str_digest_39075591465fa9a7f02dbadc66f77d8e;
PyObject *const_tuple_7b73f01f0ae996f9c42d0db4836c3328_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_7dd57d688c7f7fa285f43c8d53ee2269;
PyObject *const_str_digest_32f1e903be2daff919d233b4544c856e;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_16d73cfa492cac1191e4f50dec0dd2c6_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_469042cffe959430cf42ad9a74190b04_tuple;
PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple;
PyObject *const_tuple_str_plain_self_str_plain_prober_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[145];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("chardet.universaldetector"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__esc_charset_prober);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__utf1632_prober);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__charset_probers);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_dict_d37ef741af37f5b54bdff32a259d1680);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_done);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__got_data);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputState);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_PURE_ASCII);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__input_state);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_char);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_lang_filter);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_win_bytes);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_rename_legacy);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a49c37b8cb0c5beef9df2c5cccd4f3f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_codecs);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF8);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_dict_01fcdc7a9c5c1e213c94f8ba442ea0fd);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_LE);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_BE);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_5d3fe12ece425a86e42d90bb3e0dcbdd);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_e30e450e6bba3fb4f64d528bfb6d3f72_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_1d46f0fee0f163445a7b3ac8739772ae);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_76e3242c8538535434941e0a9f975443_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_5450117647aeb6cb9b2777c1e82a6132);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_LE);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_BE);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_68ebda5ad3407c1bc4fcd2997d1662cb);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE_DETECTOR);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESC_DETECTOR);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESC_ASCII);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_1_none_none);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTF1632Prober);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProbingState);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_DETECTING);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND_IT);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_confidence);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_EscCharSetProber);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_MBCSGroupProber);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_LanguageFilter);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_NON_CJK);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_SBCSGroupProber);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Latin1Prober);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_MacRomanProber);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_WIN_BYTE_DETECTOR);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_15327f20a93a1d332f4d528e2477fdd2);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_b866eb9399b73658ba2ebcd2a847aea2);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_prober_confidence);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_prober);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_THRESHOLD);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO_WIN_MAP);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_MAP);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_getEffectiveLevel);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetGroupProber);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_probers);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_e291f36373269291c9b04d959d648e3e);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3d7235cf6152b605329f2bf6301e245);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_charsetgroupprober);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_enums);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_escprober);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EscCharSetProber_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_latin1prober);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Latin1Prober_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_macromanprober);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MacRomanProber_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_mbcsgroupprober);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MBCSGroupProber_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_resultdict);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultDict_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResultDict);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_sbcsgroupprober);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SBCSGroupProber_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf1632prober);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UTF1632Prober_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_94822410052685fe3f09d986d30eb776);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_486d87012723a2b0cd85fc1db31a9dfc);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniversalDetector);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_56);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_float_0_2);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_3a3470da5d75587858cb6d687d452d58_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_2c98d1fac9489829e3025ccee0ae07ee_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_94e1272116c87d5e48a7b11812d73e4b_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_333a65de09d323cc3af3be549308aae5);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_dict_b3b4da2a6db8d0636f9d68d2b564ea8f);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALL);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_b02cb7119ea89aa0380b345063f46f67);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_state);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c91c2c479545484f50c7ee31f58e404);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_win_bytes);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f203d9ed40b9baba152dcdeed8eb709);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_probers);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3edf1f94f2fdb266358f9addbd18b41);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbc74c402515b6fcd253e5e5ed85973f);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_39075591465fa9a7f02dbadc66f77d8e);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_7b73f01f0ae996f9c42d0db4836c3328_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dd57d688c7f7fa285f43c8d53ee2269);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_32f1e903be2daff919d233b4544c856e);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_16d73cfa492cac1191e4f50dec0dd2c6_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_469042cffe959430cf42ad9a74190b04_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_prober_tuple);
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
void checkModuleConstants_chardet$universaldetector(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__esc_charset_prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__esc_charset_prober);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__utf1632_prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utf1632_prober);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__charset_probers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__charset_probers);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_dict_d37ef741af37f5b54bdff32a259d1680));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d37ef741af37f5b54bdff32a259d1680);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_done);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__got_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__got_data);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputState);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_PURE_ASCII));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PURE_ASCII);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__input_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__input_state);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_char);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_lang_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lang_filter);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_win_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_win_bytes);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_rename_legacy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_rename_legacy);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reset);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a49c37b8cb0c5beef9df2c5cccd4f3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a49c37b8cb0c5beef9df2c5cccd4f3f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_codecs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codecs);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF8);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_dict_01fcdc7a9c5c1e213c94f8ba442ea0fd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_01fcdc7a9c5c1e213c94f8ba442ea0fd);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_LE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF32_LE);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_UTF32_BE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_UTF32_BE);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_5d3fe12ece425a86e42d90bb3e0dcbdd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5d3fe12ece425a86e42d90bb3e0dcbdd);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_e30e450e6bba3fb4f64d528bfb6d3f72_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_e30e450e6bba3fb4f64d528bfb6d3f72_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_1d46f0fee0f163445a7b3ac8739772ae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1d46f0fee0f163445a7b3ac8739772ae);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_76e3242c8538535434941e0a9f975443_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_76e3242c8538535434941e0a9f975443_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_5450117647aeb6cb9b2777c1e82a6132));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5450117647aeb6cb9b2777c1e82a6132);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_LE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_LE);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOM_BE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOM_BE);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_68ebda5ad3407c1bc4fcd2997d1662cb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68ebda5ad3407c1bc4fcd2997d1662cb);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE_DETECTOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HIGH_BYTE_DETECTOR);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HIGH_BYTE);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESC_DETECTOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ESC_DETECTOR);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESC_ASCII));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ESC_ASCII);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_1_none_none);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTF1632Prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UTF1632Prober);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProbingState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProbingState);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_DETECTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DETECTING);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND_IT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOUND_IT);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_name);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confidence);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_confidence);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_EscCharSetProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EscCharSetProber);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_MBCSGroupProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MBCSGroupProber);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_LanguageFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LanguageFilter);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_NON_CJK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NON_CJK);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_SBCSGroupProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SBCSGroupProber);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Latin1Prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Latin1Prober);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_MacRomanProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MacRomanProber);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_str);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_WIN_BYTE_DETECTOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WIN_BYTE_DETECTOR);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_15327f20a93a1d332f4d528e2477fdd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15327f20a93a1d332f4d528e2477fdd2);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_b866eb9399b73658ba2ebcd2a847aea2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b866eb9399b73658ba2ebcd2a847aea2);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_prober_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_prober_confidence);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_prober);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MINIMUM_THRESHOLD);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO_WIN_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO_WIN_MAP);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LEGACY_MAP);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_getEffectiveLevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getEffectiveLevel);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEBUG);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetGroupProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CharSetGroupProber);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_probers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_probers);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_e291f36373269291c9b04d959d648e3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e291f36373269291c9b04d959d648e3e);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3d7235cf6152b605329f2bf6301e245));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3d7235cf6152b605329f2bf6301e245);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_charsetgroupprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charsetgroupprober);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charsetprober);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CharSetProber_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CharSetProber);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_enums));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enums);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_escprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_escprober);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EscCharSetProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EscCharSetProber_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_latin1prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_latin1prober);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Latin1Prober_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Latin1Prober_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_macromanprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_macromanprober);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MacRomanProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MacRomanProber_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_mbcsgroupprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mbcsgroupprober);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MBCSGroupProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MBCSGroupProber_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_resultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resultdict);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResultDict_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResultDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResultDict);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_sbcsgroupprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sbcsgroupprober);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SBCSGroupProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SBCSGroupProber_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf1632prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf1632prober);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UTF1632Prober_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UTF1632Prober_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_94822410052685fe3f09d986d30eb776));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94822410052685fe3f09d986d30eb776);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_486d87012723a2b0cd85fc1db31a9dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_486d87012723a2b0cd85fc1db31a9dfc);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniversalDetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniversalDetector);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_56));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_56);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_float_0_2));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_2);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_3a3470da5d75587858cb6d687d452d58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_3a3470da5d75587858cb6d687d452d58_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_2c98d1fac9489829e3025ccee0ae07ee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_2c98d1fac9489829e3025ccee0ae07ee_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_94e1272116c87d5e48a7b11812d73e4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_94e1272116c87d5e48a7b11812d73e4b_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_333a65de09d323cc3af3be549308aae5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_333a65de09d323cc3af3be549308aae5);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_dict_b3b4da2a6db8d0636f9d68d2b564ea8f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b3b4da2a6db8d0636f9d68d2b564ea8f);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALL);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_b02cb7119ea89aa0380b345063f46f67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b02cb7119ea89aa0380b345063f46f67);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_state);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c91c2c479545484f50c7ee31f58e404));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c91c2c479545484f50c7ee31f58e404);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_win_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_win_bytes);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f203d9ed40b9baba152dcdeed8eb709));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f203d9ed40b9baba152dcdeed8eb709);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_probers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_probers);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3edf1f94f2fdb266358f9addbd18b41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3edf1f94f2fdb266358f9addbd18b41);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbc74c402515b6fcd253e5e5ed85973f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbc74c402515b6fcd253e5e5ed85973f);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_39075591465fa9a7f02dbadc66f77d8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39075591465fa9a7f02dbadc66f77d8e);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_7b73f01f0ae996f9c42d0db4836c3328_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7b73f01f0ae996f9c42d0db4836c3328_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dd57d688c7f7fa285f43c8d53ee2269));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dd57d688c7f7fa285f43c8d53ee2269);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_32f1e903be2daff919d233b4544c856e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32f1e903be2daff919d233b4544c856e);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_16d73cfa492cac1191e4f50dec0dd2c6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_16d73cfa492cac1191e4f50dec0dd2c6_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_469042cffe959430cf42ad9a74190b04_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_469042cffe959430cf42ad9a74190b04_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_prober_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_prober_tuple);
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
static PyObject *module_var_accessor_chardet$universaldetector$CharSetGroupProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharSetGroupProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharSetGroupProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharSetGroupProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharSetGroupProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$CharSetProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharSetProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharSetProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharSetProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharSetProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$EscCharSetProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_EscCharSetProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EscCharSetProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EscCharSetProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EscCharSetProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EscCharSetProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_EscCharSetProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_EscCharSetProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EscCharSetProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$InputState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InputState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InputState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InputState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InputState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$LanguageFilter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_LanguageFilter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LanguageFilter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LanguageFilter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LanguageFilter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LanguageFilter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_LanguageFilter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_LanguageFilter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LanguageFilter);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$Latin1Prober(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Latin1Prober);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Latin1Prober);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Latin1Prober, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Latin1Prober);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Latin1Prober, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Latin1Prober);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Latin1Prober);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Latin1Prober);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$MBCSGroupProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MBCSGroupProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MBCSGroupProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MBCSGroupProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MBCSGroupProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MBCSGroupProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MBCSGroupProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MBCSGroupProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MBCSGroupProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$MacRomanProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MacRomanProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MacRomanProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MacRomanProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MacRomanProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MacRomanProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MacRomanProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MacRomanProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MacRomanProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$ProbingState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProbingState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProbingState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProbingState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProbingState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$ResultDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$SBCSGroupProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_SBCSGroupProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SBCSGroupProber);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SBCSGroupProber, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SBCSGroupProber);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SBCSGroupProber, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_SBCSGroupProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_SBCSGroupProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SBCSGroupProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$UTF1632Prober(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTF1632Prober);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTF1632Prober, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTF1632Prober);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTF1632Prober, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$codecs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_codecs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_codecs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_codecs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_codecs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_codecs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_codecs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_codecs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_codecs);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$universaldetector$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$universaldetector->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$universaldetector->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$universaldetector->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_687d7890db961be70ec5fa8c36d766ed;
static PyCodeObject *code_objects_fb883008a9832fa0a89e57d6bcebc018;
static PyCodeObject *code_objects_417903fc3b37e744dbe2ca01722e6df9;
static PyCodeObject *code_objects_a935ba0fb0ad60c609e77aa57917f91c;
static PyCodeObject *code_objects_1c654aa4297baf93794b7680c8dd2b75;
static PyCodeObject *code_objects_cf6db439722353044316103142844f83;
static PyCodeObject *code_objects_57035c69de9ed126b3ebba15c7c1a9e3;
static PyCodeObject *code_objects_c85e967f850f65ded9953d1daca56e6a;
static PyCodeObject *code_objects_931acb58f1eed4bbed6e4585089b662c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7dd57d688c7f7fa285f43c8d53ee2269); CHECK_OBJECT(module_filename_obj);
code_objects_687d7890db961be70ec5fa8c36d766ed = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_32f1e903be2daff919d233b4544c856e, mod_consts.const_str_digest_32f1e903be2daff919d233b4544c856e, NULL, NULL, 0, 0, 0);
code_objects_fb883008a9832fa0a89e57d6bcebc018 = MAKE_CODE_OBJECT(module_filename_obj, 56, 0, mod_consts.const_str_plain_UniversalDetector, mod_consts.const_str_plain_UniversalDetector, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_417903fc3b37e744dbe2ca01722e6df9 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b02cb7119ea89aa0380b345063f46f67, mod_consts.const_tuple_16d73cfa492cac1191e4f50dec0dd2c6_tuple, NULL, 3, 0, 0);
code_objects_a935ba0fb0ad60c609e77aa57917f91c = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_charset_probers, mod_consts.const_str_digest_a3edf1f94f2fdb266358f9addbd18b41, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1c654aa4297baf93794b7680c8dd2b75 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_39075591465fa9a7f02dbadc66f77d8e, mod_consts.const_tuple_469042cffe959430cf42ad9a74190b04_tuple, NULL, 1, 0, 0);
code_objects_cf6db439722353044316103142844f83 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_feed, mod_consts.const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, NULL, 2, 0, 0);
code_objects_57035c69de9ed126b3ebba15c7c1a9e3 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has_win_bytes, mod_consts.const_str_digest_4f203d9ed40b9baba152dcdeed8eb709, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c85e967f850f65ded9953d1daca56e6a = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_input_state, mod_consts.const_str_digest_9c91c2c479545484f50c7ee31f58e404, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_931acb58f1eed4bbed6e4585089b662c = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reset, mod_consts.const_str_digest_dbc74c402515b6fcd253e5e5ed85973f, mod_consts.const_tuple_str_plain_self_str_plain_prober_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__2_input_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__3_has_win_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__4_charset_probers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__5_reset(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__6_feed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__7_close(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_chardet$universaldetector$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_lang_filter = python_pars[1];
PyObject *par_should_rename_legacy = python_pars[2];
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_417903fc3b37e744dbe2ca01722e6df9, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__1___init__->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__1___init__ = cache_frame_frame_chardet$universaldetector$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__1___init__);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__esc_charset_prober, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__utf1632_prober, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__charset_probers, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = DICT_COPY(tstate, mod_consts.const_dict_d37ef741af37f5b54bdff32a259d1680);
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_result, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_done, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__got_data, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_7;
tmp_expression_value_1 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PURE_ASCII);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__input_state, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = const_bytes_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__last_char, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_lang_filter);
tmp_assattr_value_9 = par_lang_filter;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_lang_filter, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_10;
tmp_called_instance_1 = module_var_accessor_chardet$universaldetector$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__1___init__->m_frame.f_lineno = 118;
tmp_assattr_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple, 0)
);

if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_logger, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__has_win_bytes, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_should_rename_legacy);
tmp_assattr_value_12 = par_should_rename_legacy;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_should_rename_legacy, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_chardet$universaldetector$$$function__1___init__->m_frame.f_lineno = 121;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_reset);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__1___init__,
    type_description_1,
    par_self,
    par_lang_filter,
    par_should_rename_legacy
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__1___init__ == cache_frame_frame_chardet$universaldetector$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__1___init__);
    cache_frame_frame_chardet$universaldetector$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__1___init__);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_lang_filter);
Py_DECREF(par_lang_filter);
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_lang_filter);
Py_DECREF(par_lang_filter);
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__2_input_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__2_input_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__2_input_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__2_input_state)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__2_input_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__2_input_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__2_input_state = MAKE_FUNCTION_FRAME(tstate, code_objects_c85e967f850f65ded9953d1daca56e6a, module_chardet$universaldetector, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__2_input_state->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__2_input_state = cache_frame_frame_chardet$universaldetector$$$function__2_input_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__2_input_state);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__2_input_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__input_state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__2_input_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__2_input_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__2_input_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__2_input_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__2_input_state == cache_frame_frame_chardet$universaldetector$$$function__2_input_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__2_input_state);
    cache_frame_frame_chardet$universaldetector$$$function__2_input_state = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__2_input_state);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__3_has_win_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__3_has_win_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_57035c69de9ed126b3ebba15c7c1a9e3, module_chardet$universaldetector, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__3_has_win_bytes = cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__3_has_win_bytes);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__3_has_win_bytes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__has_win_bytes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__3_has_win_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__3_has_win_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__3_has_win_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__3_has_win_bytes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__3_has_win_bytes == cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes);
    cache_frame_frame_chardet$universaldetector$$$function__3_has_win_bytes = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__3_has_win_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__4_charset_probers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__4_charset_probers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers = MAKE_FUNCTION_FRAME(tstate, code_objects_a935ba0fb0ad60c609e77aa57917f91c, module_chardet$universaldetector, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__4_charset_probers = cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__4_charset_probers);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__4_charset_probers) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__charset_probers);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__4_charset_probers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__4_charset_probers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__4_charset_probers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__4_charset_probers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__4_charset_probers == cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers);
    cache_frame_frame_chardet$universaldetector$$$function__4_charset_probers = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__4_charset_probers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__5_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_prober = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__5_reset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__5_reset = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__5_reset)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__5_reset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__5_reset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__5_reset = MAKE_FUNCTION_FRAME(tstate, code_objects_931acb58f1eed4bbed6e4585089b662c, module_chardet$universaldetector, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__5_reset->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__5_reset = cache_frame_frame_chardet$universaldetector$$$function__5_reset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__5_reset);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__5_reset) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d37ef741af37f5b54bdff32a259d1680);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_result, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_done, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__got_data, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__has_win_bytes, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_5;
tmp_expression_value_1 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PURE_ASCII);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__input_state, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = const_bytes_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__last_char, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 147;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__5_reset->m_frame.f_lineno = 148;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reset);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__utf1632_prober);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__utf1632_prober);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__5_reset->m_frame.f_lineno = 150;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_reset);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__charset_probers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
exception_lineno = 151;
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
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_3;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_prober);
tmp_called_instance_3 = var_prober;
frame_frame_chardet$universaldetector$$$function__5_reset->m_frame.f_lineno = 152;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_reset);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__5_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__5_reset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__5_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__5_reset,
    type_description_1,
    par_self,
    var_prober
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__5_reset == cache_frame_frame_chardet$universaldetector$$$function__5_reset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__5_reset);
    cache_frame_frame_chardet$universaldetector$$$function__5_reset = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__5_reset);

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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_prober);
var_prober = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_prober);
var_prober = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__6_feed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byte_str = python_pars[1];
PyObject *var_prober = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__6_feed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__6_feed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__6_feed)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__6_feed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__6_feed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__6_feed = MAKE_FUNCTION_FRAME(tstate, code_objects_cf6db439722353044316103142844f83, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__6_feed->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__6_feed = cache_frame_frame_chardet$universaldetector$$$function__6_feed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__6_feed);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__6_feed) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_done);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 168;
type_description_1 = "ooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_byte_str);
tmp_operand_value_1 = par_byte_str;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_byte_str);
tmp_isinstance_inst_1 = par_byte_str;
tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_bytearray_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_bytearray_arg_1 = par_byte_str;
tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_byte_str;
    assert(old != NULL);
    par_byte_str = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__got_data);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_3 = par_byte_str;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_chardet$universaldetector$codecs(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codecs);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_BOM_UTF8);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 180;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = DICT_COPY(tstate, mod_consts.const_dict_01fcdc7a9c5c1e213c94f8ba442ea0fd);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_result, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_6;
int tmp_truth_name_3;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_5 = par_byte_str;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_chardet$universaldetector$codecs(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codecs);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_BOM_UTF32_LE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_chardet$universaldetector$codecs(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codecs);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_BOM_UTF32_BE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 187;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = DICT_COPY(tstate, mod_consts.const_dict_5d3fe12ece425a86e42d90bb3e0dcbdd);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_result, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_8 = par_byte_str;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_startswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 191;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_bytes_digest_e30e450e6bba3fb4f64d528bfb6d3f72_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = DICT_COPY(tstate, mod_consts.const_dict_1d46f0fee0f163445a7b3ac8739772ae);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_result, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
int tmp_truth_name_5;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_9 = par_byte_str;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_startswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 199;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_bytes_digest_76e3242c8538535434941e0a9f975443_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = DICT_COPY(tstate, mod_consts.const_dict_5450117647aeb6cb9b2777c1e82a6132);
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_result, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_11;
int tmp_truth_name_6;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_10 = par_byte_str;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_startswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_chardet$universaldetector$codecs(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codecs);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_BOM_LE);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_2);
tmp_expression_value_12 = module_var_accessor_chardet$universaldetector$codecs(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_codecs);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_BOM_BE);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 207;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = DICT_COPY(tstate, mod_consts.const_dict_68ebda5ad3407c1bc4fcd2997d1662cb);
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_result, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
branch_end_8:;
branch_end_7:;
branch_end_6:;
branch_end_5:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__got_data, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_result);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_str_plain_encoding;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_done, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_10:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 219;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_PURE_ASCII);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 219;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_7;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_HIGH_BYTE_DETECTOR);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_byte_str);
tmp_args_element_value_4 = par_byte_str;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 220;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_18;
PyObject *tmp_assattr_target_8;
tmp_expression_value_18 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_HIGH_BYTE);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__input_state, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_12;
branch_no_12:;
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_23;
int tmp_truth_name_8;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_20 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_PURE_ASCII);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ESC_DETECTOR);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_search);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__last_char);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_byte_str);
tmp_add_expr_right_1 = par_byte_str;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 224;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_7);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_7);

exception_lineno = 224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
tmp_condition_result_13 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_13 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_24;
PyObject *tmp_assattr_target_9;
tmp_expression_value_24 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_ESC_ASCII);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__input_state, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_13:;
branch_end_12:;
branch_no_11:;
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_2;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_25 = par_byte_str;
tmp_subscript_value_2 = mod_consts.const_slice_int_neg_1_none_none;
tmp_assattr_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_2);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__last_char, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__utf1632_prober);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_called_value_7;
PyObject *tmp_assattr_target_11;
tmp_called_value_7 = module_var_accessor_chardet$universaldetector$UTF1632Prober(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF1632Prober);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 233;
tmp_assattr_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__utf1632_prober, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_14:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__utf1632_prober);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_state);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_29 = module_var_accessor_chardet$universaldetector$ProbingState(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_DETECTING);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(par_self);
tmp_expression_value_30 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__utf1632_prober);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_byte_str);
tmp_args_element_value_6 = par_byte_str;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 236;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_feed, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_31 = module_var_accessor_chardet$universaldetector$ProbingState(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 236;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_FOUND_IT);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 236;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_assattr_target_12;
tmp_dict_key_1 = const_str_plain_encoding;
CHECK_OBJECT(par_self);
tmp_expression_value_33 = par_self;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain__utf1632_prober);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_charset_name);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_12 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_34;
tmp_res = PyDict_SetItem(tmp_assattr_value_12, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_confidence;
CHECK_OBJECT(par_self);
tmp_expression_value_34 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain__utf1632_prober);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 239;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_confidence);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_12, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_language;
tmp_dict_value_1 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_assattr_value_12, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assattr_value_12);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_result, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_done, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_16:;
branch_no_15:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(par_self);
tmp_expression_value_35 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_36 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_ESC_ASCII);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(par_self);
tmp_expression_value_37 = par_self;
tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_38;
PyObject *tmp_assattr_target_14;
tmp_called_value_8 = module_var_accessor_chardet$universaldetector$EscCharSetProber(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EscCharSetProber);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_38 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_lang_filter);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 251;
tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assattr_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__esc_charset_prober, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_18:;
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(par_self);
tmp_expression_value_39 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_byte_str);
tmp_args_element_value_8 = par_byte_str;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 252;
tmp_cmp_expr_left_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_feed, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_40 = module_var_accessor_chardet$universaldetector$ProbingState(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_FOUND_IT);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_assattr_target_15;
tmp_dict_key_2 = const_str_plain_encoding;
CHECK_OBJECT(par_self);
tmp_expression_value_42 = par_self;
tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_charset_name);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_15 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
tmp_res = PyDict_SetItem(tmp_assattr_value_15, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_confidence;
CHECK_OBJECT(par_self);
tmp_expression_value_43 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 255;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_get_confidence);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_15, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_language;
CHECK_OBJECT(par_self);
tmp_expression_value_45 = par_self;
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain__esc_charset_prober);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_language);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_15, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assattr_value_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_result, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
tmp_assattr_value_16 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_done, tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_19:;
goto branch_end_17;
branch_no_17:;
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(par_self);
tmp_expression_value_46 = par_self;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_47 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_HIGH_BYTE);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(par_self);
tmp_expression_value_48 = par_self;
tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain__charset_probers);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_49;
PyObject *tmp_assattr_target_17;
tmp_called_value_9 = module_var_accessor_chardet$universaldetector$MBCSGroupProber(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MBCSGroupProber);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_49 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_lang_filter);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 267;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_17 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain__charset_probers, tmp_assattr_value_17);
CHECK_OBJECT(tmp_assattr_value_17);
Py_DECREF(tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_22;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(par_self);
tmp_expression_value_50 = par_self;
tmp_bitand_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_lang_filter);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_51 = module_var_accessor_chardet$universaldetector$LanguageFilter(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LanguageFilter);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_NON_CJK);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_53 = par_self;
tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain__charset_probers);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_chardet$universaldetector$SBCSGroupProber(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SBCSGroupProber);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 270;
tmp_args_element_value_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 270;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_22:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_55 = par_self;
tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain__charset_probers);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_chardet$universaldetector$Latin1Prober(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Latin1Prober);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 271;
tmp_args_element_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 271;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_57 = par_self;
tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain__charset_probers);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_chardet$universaldetector$MacRomanProber(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MacRomanProber);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 272;
tmp_args_element_value_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 272;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_21:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(par_self);
tmp_expression_value_58 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain__charset_probers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 273;
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
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_4;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(var_prober);
tmp_expression_value_59 = var_prober;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_feed);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (par_byte_str == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byte_str);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_args_element_value_13 = par_byte_str;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 274;
tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_60 = module_var_accessor_chardet$universaldetector$ProbingState(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_FOUND_IT);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_61;
PyObject *tmp_assattr_target_18;
tmp_dict_key_3 = const_str_plain_encoding;
CHECK_OBJECT(var_prober);
tmp_expression_value_61 = var_prober;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_charset_name);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assattr_value_18 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_62;
tmp_res = PyDict_SetItem(tmp_assattr_value_18, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_confidence;
CHECK_OBJECT(var_prober);
tmp_called_instance_6 = var_prober;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 277;
tmp_dict_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_get_confidence);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_18, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_language;
CHECK_OBJECT(var_prober);
tmp_expression_value_62 = var_prober;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_language);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_18, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_assattr_value_18);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
CHECK_OBJECT(par_self);
tmp_assattr_target_18 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_result, tmp_assattr_value_18);
CHECK_OBJECT(tmp_assattr_value_18);
Py_DECREF(tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_assattr_target_19;
tmp_assattr_value_19 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_19 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain_done, tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
goto loop_end_1;
branch_no_23:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
nuitka_bool tmp_condition_result_24;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_14;
int tmp_truth_name_9;
CHECK_OBJECT(par_self);
tmp_expression_value_64 = par_self;
tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_WIN_BYTE_DETECTOR);
if (tmp_expression_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_search);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_byte_str == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byte_str);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_14 = par_byte_str;
frame_frame_chardet$universaldetector$$$function__6_feed->m_frame.f_lineno = 282;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_11);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_11);

exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_assattr_target_20;
tmp_assattr_value_20 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_20 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain__has_win_bytes, tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_24:;
branch_no_20:;
branch_end_17:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__6_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__6_feed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__6_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__6_feed,
    type_description_1,
    par_self,
    par_byte_str,
    var_prober
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__6_feed == cache_frame_frame_chardet$universaldetector$$$function__6_feed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__6_feed);
    cache_frame_frame_chardet$universaldetector$$$function__6_feed = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__6_feed);

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
Py_XDECREF(par_byte_str);
par_byte_str = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_byte_str);
par_byte_str = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function__7_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_prober_confidence = NULL;
PyObject *var_max_prober_confidence = NULL;
PyObject *var_max_prober = NULL;
PyObject *var_prober = NULL;
PyObject *var_charset_name = NULL;
PyObject *var_lower_charset_name = NULL;
PyObject *var_confidence = NULL;
PyObject *var_group_prober = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$function__7_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$universaldetector$$$function__7_close = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$universaldetector$$$function__7_close)) {
    Py_XDECREF(cache_frame_frame_chardet$universaldetector$$$function__7_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$universaldetector$$$function__7_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$universaldetector$$$function__7_close = MAKE_FUNCTION_FRAME(tstate, code_objects_1c654aa4297baf93794b7680c8dd2b75, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$universaldetector$$$function__7_close->m_type_description == NULL);
frame_frame_chardet$universaldetector$$$function__7_close = cache_frame_frame_chardet$universaldetector$$$function__7_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$function__7_close);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$function__7_close) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_done);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 294;
type_description_1 = "ooooooooo";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_result);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_done, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__got_data);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_logger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 299;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 302;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PURE_ASCII);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 302;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = DICT_COPY(tstate, mod_consts.const_dict_b866eb9399b73658ba2ebcd2a847aea2);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_result, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__input_state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_chardet$universaldetector$InputState(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_HIGH_BYTE);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_prober_confidence == NULL);
Py_INCREF(tmp_assign_source_1);
var_prober_confidence = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_float_0_0;
assert(var_max_prober_confidence == NULL);
Py_INCREF(tmp_assign_source_2);
var_max_prober_confidence = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_max_prober == NULL);
Py_INCREF(tmp_assign_source_3);
var_max_prober = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__charset_probers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 310;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_6;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_prober);
tmp_operand_value_2 = var_prober;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_start_1;
branch_no_5:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_prober);
tmp_called_instance_2 = var_prober;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 313;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_confidence);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_prober_confidence;
    var_prober_confidence = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_prober_confidence);
tmp_cmp_expr_left_3 = var_prober_confidence;
if (var_max_prober_confidence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober_confidence);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 314;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_3 = var_max_prober_confidence;
tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(var_prober_confidence);
tmp_assign_source_8 = var_prober_confidence;
{
    PyObject *old = var_max_prober_confidence;
    var_max_prober_confidence = tmp_assign_source_8;
    Py_INCREF(var_max_prober_confidence);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_prober);
tmp_assign_source_9 = var_prober;
{
    PyObject *old = var_max_prober;
    var_max_prober = tmp_assign_source_9;
    Py_INCREF(var_max_prober);
    Py_XDECREF(old);
}

}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
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
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
if (var_max_prober == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_max_prober);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_max_prober_confidence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober_confidence);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_max_prober_confidence;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MINIMUM_THRESHOLD);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_7 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_11;
if (var_max_prober == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_max_prober;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_charset_name);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_charset_name == NULL);
var_charset_name = tmp_assign_source_10;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_charset_name);
tmp_cmp_expr_left_5 = var_charset_name;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_1;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 319;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 319;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_charset_name);
tmp_expression_value_12 = var_charset_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 320;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_lower_charset_name == NULL);
var_lower_charset_name = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_3;
if (var_max_prober == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = var_max_prober;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 321;
tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_confidence);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_confidence == NULL);
var_confidence = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_lower_charset_name);
tmp_expression_value_13 = var_lower_charset_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 324;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 324;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__has_win_bytes);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 325;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ISO_WIN_MAP);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lower_charset_name);
tmp_args_element_value_1 = var_lower_charset_name;
CHECK_OBJECT(var_charset_name);
tmp_args_element_value_2 = var_charset_name;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_charset_name;
    assert(old != NULL);
    var_charset_name = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_10:;
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_5;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_should_rename_legacy);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 330;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_20;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_LEGACY_MAP);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_charset_name == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = var_charset_name;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 332;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_str_empty;
tmp_expression_value_20 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_20 = tmp_or_left_value_1;
or_end_1:;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_lower);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 332;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 332;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 332;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_charset_name == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_charset_name;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 331;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_charset_name;
    var_charset_name = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
branch_no_11:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_3;
tmp_dict_key_1 = const_str_plain_encoding;
if (var_charset_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = var_charset_name;
tmp_assattr_value_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_21;
tmp_res = PyDict_SetItem(tmp_assattr_value_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_confidence;
CHECK_OBJECT(var_confidence);
tmp_dict_value_1 = var_confidence;
tmp_res = PyDict_SetItem(tmp_assattr_value_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_language;
if (var_max_prober == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_prober);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 337;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}

tmp_expression_value_21 = var_max_prober;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_language);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assattr_value_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_result, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
branch_no_4:;
branch_end_3:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_logger);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 341;
tmp_cmp_expr_left_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_getEffectiveLevel);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = module_var_accessor_chardet$universaldetector$logging(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_DEBUG);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_result);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_str_plain_encoding;
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_logger);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 343;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__charset_probers);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 344;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_17 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_group_prober;
    var_group_prober = tmp_assign_source_17;
    Py_INCREF(var_group_prober);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_group_prober);
tmp_operand_value_3 = var_group_prober;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
goto loop_start_2;
branch_no_14:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_group_prober);
tmp_isinstance_inst_1 = var_group_prober;
tmp_isinstance_cls_1 = module_var_accessor_chardet$universaldetector$CharSetGroupProber(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharSetGroupProber);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(var_group_prober);
tmp_expression_value_28 = var_group_prober;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_probers);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 348;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_20 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_20;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_instance_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_30 = par_self;
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_logger);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_debug);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
CHECK_OBJECT(var_prober);
tmp_expression_value_31 = var_prober;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_charset_name);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 351;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_prober);
tmp_expression_value_32 = var_prober;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_language);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 352;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_prober);
tmp_called_instance_6 = var_prober;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 353;
tmp_args_element_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_get_confidence);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 349;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_instance_7;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_34 = par_self;
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_logger);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_debug);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
CHECK_OBJECT(var_group_prober);
tmp_expression_value_35 = var_group_prober;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_charset_name);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 358;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_group_prober);
tmp_expression_value_36 = var_group_prober;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_language);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_group_prober);
tmp_called_instance_7 = var_group_prober;
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 360;
tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_get_confidence);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 360;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_chardet$universaldetector$$$function__7_close->m_frame.f_lineno = 356;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_15:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
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

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_13:;
branch_no_12:;
{
PyObject *tmp_expression_value_37;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_result);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$function__7_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$function__7_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$function__7_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$function__7_close,
    type_description_1,
    par_self,
    var_prober_confidence,
    var_max_prober_confidence,
    var_max_prober,
    var_prober,
    var_charset_name,
    var_lower_charset_name,
    var_confidence,
    var_group_prober
);


// Release cached frame if used for exception.
if (frame_frame_chardet$universaldetector$$$function__7_close == cache_frame_frame_chardet$universaldetector$$$function__7_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$universaldetector$$$function__7_close);
    cache_frame_frame_chardet$universaldetector$$$function__7_close = NULL;
}

assertFrameObject(frame_frame_chardet$universaldetector$$$function__7_close);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_prober_confidence);
var_prober_confidence = NULL;
Py_XDECREF(var_max_prober_confidence);
var_max_prober_confidence = NULL;
Py_XDECREF(var_max_prober);
var_max_prober = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
Py_XDECREF(var_charset_name);
var_charset_name = NULL;
Py_XDECREF(var_lower_charset_name);
var_lower_charset_name = NULL;
Py_XDECREF(var_confidence);
var_confidence = NULL;
Py_XDECREF(var_group_prober);
var_group_prober = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_prober_confidence);
var_prober_confidence = NULL;
Py_XDECREF(var_max_prober_confidence);
var_max_prober_confidence = NULL;
Py_XDECREF(var_max_prober);
var_max_prober = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
Py_XDECREF(var_charset_name);
var_charset_name = NULL;
Py_XDECREF(var_lower_charset_name);
var_lower_charset_name = NULL;
Py_XDECREF(var_confidence);
var_confidence = NULL;
Py_XDECREF(var_group_prober);
var_group_prober = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b02cb7119ea89aa0380b345063f46f67,
#endif
        code_objects_417903fc3b37e744dbe2ca01722e6df9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__2_input_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__2_input_state,
        mod_consts.const_str_plain_input_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c91c2c479545484f50c7ee31f58e404,
#endif
        code_objects_c85e967f850f65ded9953d1daca56e6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__3_has_win_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__3_has_win_bytes,
        mod_consts.const_str_plain_has_win_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f203d9ed40b9baba152dcdeed8eb709,
#endif
        code_objects_57035c69de9ed126b3ebba15c7c1a9e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__4_charset_probers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__4_charset_probers,
        mod_consts.const_str_plain_charset_probers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3edf1f94f2fdb266358f9addbd18b41,
#endif
        code_objects_a935ba0fb0ad60c609e77aa57917f91c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__5_reset(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__5_reset,
        mod_consts.const_str_plain_reset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dbc74c402515b6fcd253e5e5ed85973f,
#endif
        code_objects_931acb58f1eed4bbed6e4585089b662c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        mod_consts.const_str_digest_5a49c37b8cb0c5beef9df2c5cccd4f3f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__6_feed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__6_feed,
        mod_consts.const_str_plain_feed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1f779cdcc4866e9fd2d7ffc826064f6,
#endif
        code_objects_cf6db439722353044316103142844f83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        mod_consts.const_str_digest_15327f20a93a1d332f4d528e2477fdd2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function__7_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function__7_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39075591465fa9a7f02dbadc66f77d8e,
#endif
        code_objects_1c654aa4297baf93794b7680c8dd2b75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$universaldetector,
        mod_consts.const_str_digest_e291f36373269291c9b04d959d648e3e,
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

static function_impl_code const function_table_chardet$universaldetector[] = {
impl_chardet$universaldetector$$$function__1___init__,
impl_chardet$universaldetector$$$function__2_input_state,
impl_chardet$universaldetector$$$function__3_has_win_bytes,
impl_chardet$universaldetector$$$function__4_charset_probers,
impl_chardet$universaldetector$$$function__5_reset,
impl_chardet$universaldetector$$$function__6_feed,
impl_chardet$universaldetector$$$function__7_close,
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

    return Nuitka_Function_GetFunctionState(function, function_table_chardet$universaldetector);
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
        module_chardet$universaldetector,
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
        function_table_chardet$universaldetector,
        sizeof(function_table_chardet$universaldetector) / sizeof(function_impl_code)
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
static char const *module_full_name = "chardet.universaldetector";
#endif

// Internal entry point for module code.
PyObject *module_code_chardet$universaldetector(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet$universaldetector");

    // Store the module for future use.
    module_chardet$universaldetector = module;

    moduledict_chardet$universaldetector = MODULE_DICT(module_chardet$universaldetector);

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
        PRINT_STRING("chardet$universaldetector: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet$universaldetector: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet$universaldetector: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.universaldetector" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initchardet$universaldetector\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$universaldetector,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$universaldetector);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet$universaldetector);
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

        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_chardet$universaldetector$$$class__1_UniversalDetector_56 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
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
tmp_assign_source_1 = mod_consts.const_str_digest_c3d7235cf6152b605329f2bf6301e245;
UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_chardet$universaldetector = MAKE_MODULE_FRAME(code_objects_687d7890db961be70ec5fa8c36d766ed, module_chardet$universaldetector);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector);
assert(Py_REFCNT(frame_frame_chardet$universaldetector) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_chardet$universaldetector$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_chardet$universaldetector$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_codecs;
tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 39;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_codecs, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 40;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_3 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 41;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_10);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_charsetgroupprober;
tmp_globals_arg_value_4 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 44;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_CharSetGroupProber,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CharSetGroupProber);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_charsetprober;
tmp_globals_arg_value_5 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_CharSetProber_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 45;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_CharSetProber,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_CharSetProber);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_enums;
tmp_globals_arg_value_6 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 46;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_InputState,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_InputState);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_LanguageFilter,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_LanguageFilter);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_LanguageFilter, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_ProbingState,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ProbingState);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState, tmp_assign_source_16);
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
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_escprober;
tmp_globals_arg_value_7 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_EscCharSetProber_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 47;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_EscCharSetProber,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_EscCharSetProber);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_EscCharSetProber, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_latin1prober;
tmp_globals_arg_value_8 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Latin1Prober_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 48;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_Latin1Prober,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Latin1Prober);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_Latin1Prober, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_macromanprober;
tmp_globals_arg_value_9 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_MacRomanProber_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 49;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_MacRomanProber,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MacRomanProber);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MacRomanProber, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_mbcsgroupprober;
tmp_globals_arg_value_10 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_MBCSGroupProber_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 50;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_MBCSGroupProber,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_MBCSGroupProber);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_MBCSGroupProber, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_resultdict;
tmp_globals_arg_value_11 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ResultDict_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 51;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_ResultDict,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ResultDict);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_sbcsgroupprober;
tmp_globals_arg_value_12 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_SBCSGroupProber_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 52;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_SBCSGroupProber,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_SBCSGroupProber);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_SBCSGroupProber, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_utf1632prober;
tmp_globals_arg_value_13 = (PyObject *)moduledict_chardet$universaldetector;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_UTF1632Prober_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 53;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_chardet$universaldetector,
        mod_consts.const_str_plain_UTF1632Prober,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_UTF1632Prober);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_chardet$universaldetector$$$class__1_UniversalDetector_56 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_94822410052685fe3f09d986d30eb776;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_486d87012723a2b0cd85fc1db31a9dfc;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_UniversalDetector;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_56;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_float_0_2;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_MINIMUM_THRESHOLD, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2 = MAKE_CLASS_FRAME(tstate, code_objects_fb883008a9832fa0a89e57d6bcebc018, module_chardet$universaldetector, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2);
assert(Py_REFCNT(frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_chardet$universaldetector$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 74;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_3a3470da5d75587858cb6d687d452d58_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_HIGH_BYTE_DETECTOR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_chardet$universaldetector$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 75;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_2c98d1fac9489829e3025ccee0ae07ee_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_ESC_DETECTOR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_chardet$universaldetector$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 76;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_94e1272116c87d5e48a7b11812d73e4b_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_WIN_BYTE_DETECTOR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = DICT_COPY(tstate, mod_consts.const_dict_333a65de09d323cc3af3be549308aae5);
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_ISO_WIN_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = DICT_COPY(tstate, mod_consts.const_dict_b3b4da2a6db8d0636f9d68d2b564ea8f);
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_LEGACY_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_1 = module_var_accessor_chardet$universaldetector$LanguageFilter(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LanguageFilter);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ALL);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_lang_filter;
tmp_dict_value_1 = module_var_accessor_chardet$universaldetector$LanguageFilter(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LanguageFilter);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_1);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_should_rename_legacy;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);

tmp_args_element_value_1 = MAKE_FUNCTION_chardet$universaldetector$$$function__2_input_state(tstate, tmp_annotations_2);

frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 123;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_input_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_args_element_value_2 = MAKE_FUNCTION_chardet$universaldetector$$$function__3_has_win_bytes(tstate, tmp_annotations_3);

frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_has_win_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_2 = module_var_accessor_chardet$universaldetector$List(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_1 = module_var_accessor_chardet$universaldetector$CharSetProber(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharSetProber);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_chardet$universaldetector$$$function__4_charset_probers(tstate, tmp_annotations_4);

frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame.f_lineno = 131;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_charset_probers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function__5_reset(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_reset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_dict_key_3 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_3 = module_var_accessor_chardet$universaldetector$Union(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function__6_feed(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain_feed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = module_var_accessor_chardet$universaldetector$ResultDict(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultDict);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function__7_close(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_chardet$universaldetector$$$class__1_UniversalDetector_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_7b73f01f0ae996f9c42d0db4836c3328_tuple;
tmp_result = DICT_SET_ITEM(locals_chardet$universaldetector$$$class__1_UniversalDetector_56, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_UniversalDetector;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_chardet$universaldetector$$$class__1_UniversalDetector_56;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_chardet$universaldetector->m_frame.f_lineno = 56;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

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
Py_DECREF(locals_chardet$universaldetector$$$class__1_UniversalDetector_56);
locals_chardet$universaldetector$$$class__1_UniversalDetector_56 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_chardet$universaldetector$$$class__1_UniversalDetector_56);
locals_chardet$universaldetector$$$class__1_UniversalDetector_56 = NULL;
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
exception_lineno = 56;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector, tmp_assign_source_26);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$universaldetector, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$universaldetector->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$universaldetector, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_chardet$universaldetector);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet$universaldetector", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.universaldetector" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_chardet$universaldetector);
    return module_chardet$universaldetector;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$universaldetector", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

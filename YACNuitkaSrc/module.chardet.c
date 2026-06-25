/* Generated code for Python module 'chardet'
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



/* The "module_chardet" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet;
PyDictObject *moduledict_chardet;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_06aa9de8a97b434cdce1d032e6edd96f;
PyObject *const_str_plain_UniversalDetector;
PyObject *const_tuple_str_plain_should_rename_legacy_tuple;
PyObject *const_str_plain_feed;
PyObject *const_str_digest_1d0337cb23b939a08bbe0b9e3d02a5c5;
PyObject *const_str_plain_input_state;
PyObject *const_str_plain_InputState;
PyObject *const_str_plain_HIGH_BYTE;
PyObject *const_str_plain_charset_probers;
PyObject *const_str_plain_CharSetGroupProber;
PyObject *const_str_plain_probers;
PyObject *const_str_plain_get_confidence;
PyObject *const_str_plain_detector;
PyObject *const_str_plain_MINIMUM_THRESHOLD;
PyObject *const_str_plain_charset_name;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple;
PyObject *const_str_plain_has_win_bytes;
PyObject *const_str_plain_ISO_WIN_MAP;
PyObject *const_str_plain_LEGACY_MAP;
PyObject *const_str_plain_results;
PyObject *const_str_plain_confidence;
PyObject *const_str_plain_language;
PyObject *const_str_plain_sorted;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_61df1e5026de9ea24c1dcfc71408a412;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_result;
PyObject *const_str_digest_feecebca91614be2a7d6f72374d3b87b;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_a9808eb111116a1472af21b80521db17;
PyObject *const_str_plain_environ;
PyObject *const_tuple_545a08eab1246246526ab4acb7afc2ba_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_charsetgroupprober;
PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
PyObject *const_str_plain_charsetprober;
PyObject *const_tuple_str_plain_CharSetProber_tuple;
PyObject *const_str_plain_CharSetProber;
PyObject *const_str_plain_enums;
PyObject *const_tuple_str_plain_InputState_tuple;
PyObject *const_str_plain_resultdict;
PyObject *const_tuple_str_plain_ResultDict_tuple;
PyObject *const_str_plain_ResultDict;
PyObject *const_str_plain_universaldetector;
PyObject *const_tuple_str_plain_UniversalDetector_tuple;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain_VERSION_str_plain___version___tuple;
PyObject *const_str_plain_VERSION;
PyObject *const_str_plain___version__;
PyObject *const_list_b87c96596a266e68a37731e9418fd0c7_list;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_byte_str;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_should_rename_legacy;
PyObject *const_str_plain_return;
PyObject *const_str_plain_detect;
PyObject *const_tuple_false_false_tuple;
PyObject *const_str_plain_ignore_threshold;
PyObject *const_str_plain_detect_all;
PyObject *const_str_digest_a6c60c0dffd4624299a9916c2c954d63;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_p_tuple;
PyObject *const_tuple_str_plain_result_tuple;
PyObject *const_str_digest_551c426d190e5d47e74a5e2b3f6d5265;
PyObject *const_tuple_67372390e14257082bae6f27a97eeff7_tuple;
PyObject *const_tuple_6388216eb003b1d1a63d1c13751f0073_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[70];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("chardet"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_06aa9de8a97b434cdce1d032e6edd96f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniversalDetector);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_should_rename_legacy_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d0337cb23b939a08bbe0b9e3d02a5c5);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_state);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputState);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_probers);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetGroupProber);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_probers);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_detector);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_THRESHOLD);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_win_bytes);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO_WIN_MAP);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_MAP);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_results);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_confidence);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_61df1e5026de9ea24c1dcfc71408a412);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_feecebca91614be2a7d6f72374d3b87b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9808eb111116a1472af21b80521db17);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_545a08eab1246246526ab4acb7afc2ba_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_charsetgroupprober);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_enums);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputState_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_resultdict);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultDict_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResultDict);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_universaldetector);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UniversalDetector_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_list_b87c96596a266e68a37731e9418fd0c7_list);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_rename_legacy);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_detect);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_threshold);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_detect_all);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6c60c0dffd4624299a9916c2c954d63);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_p_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_result_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_551c426d190e5d47e74a5e2b3f6d5265);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_67372390e14257082bae6f27a97eeff7_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_6388216eb003b1d1a63d1c13751f0073_tuple);
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
void checkModuleConstants_chardet(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_06aa9de8a97b434cdce1d032e6edd96f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06aa9de8a97b434cdce1d032e6edd96f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniversalDetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniversalDetector);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_should_rename_legacy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_should_rename_legacy_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d0337cb23b939a08bbe0b9e3d02a5c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d0337cb23b939a08bbe0b9e3d02a5c5);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_state);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputState);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_HIGH_BYTE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HIGH_BYTE);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_probers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_probers);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetGroupProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CharSetGroupProber);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_probers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_probers);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_confidence);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_detector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detector);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MINIMUM_THRESHOLD);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_name);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_win_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_win_bytes);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO_WIN_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO_WIN_MAP);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LEGACY_MAP);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_results));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_results);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confidence);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_61df1e5026de9ea24c1dcfc71408a412));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61df1e5026de9ea24c1dcfc71408a412);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_feecebca91614be2a7d6f72374d3b87b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_feecebca91614be2a7d6f72374d3b87b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9808eb111116a1472af21b80521db17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9808eb111116a1472af21b80521db17);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_545a08eab1246246526ab4acb7afc2ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_545a08eab1246246526ab4acb7afc2ba_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_charsetgroupprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charsetgroupprober);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charsetprober);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CharSetProber_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CharSetProber);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_enums));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enums);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputState_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputState_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_resultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resultdict);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResultDict_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResultDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResultDict);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_universaldetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_universaldetector);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UniversalDetector_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UniversalDetector_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_list_b87c96596a266e68a37731e9418fd0c7_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b87c96596a266e68a37731e9418fd0c7_list);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_str);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_rename_legacy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_rename_legacy);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_detect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detect);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_threshold));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore_threshold);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_detect_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detect_all);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6c60c0dffd4624299a9916c2c954d63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6c60c0dffd4624299a9916c2c954d63);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_p_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_p_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_result_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_551c426d190e5d47e74a5e2b3f6d5265));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_551c426d190e5d47e74a5e2b3f6d5265);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_67372390e14257082bae6f27a97eeff7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_67372390e14257082bae6f27a97eeff7_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_6388216eb003b1d1a63d1c13751f0073_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6388216eb003b1d1a63d1c13751f0073_tuple);
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
static PyObject *module_var_accessor_chardet$CharSetGroupProber(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$InputState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$List(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$ResultDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$UniversalDetector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniversalDetector);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniversalDetector, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniversalDetector);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniversalDetector, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bbbcdcd268bac2d744b2bf37c90bd173;
static PyCodeObject *code_objects_349ab0e7a09346856f33784502f69963;
static PyCodeObject *code_objects_61932cbc377de93b4a407f90d7ed15fc;
static PyCodeObject *code_objects_212847b5743cf228d32fdf878ead77cc;
static PyCodeObject *code_objects_631d53ac3a1269510eabda96a1ecd197;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a6c60c0dffd4624299a9916c2c954d63); CHECK_OBJECT(module_filename_obj);
code_objects_bbbcdcd268bac2d744b2bf37c90bd173 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_a9808eb111116a1472af21b80521db17, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_p_tuple, NULL, 1, 0, 0);
code_objects_349ab0e7a09346856f33784502f69963 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_61df1e5026de9ea24c1dcfc71408a412, mod_consts.const_tuple_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_61932cbc377de93b4a407f90d7ed15fc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_551c426d190e5d47e74a5e2b3f6d5265, mod_consts.const_str_digest_551c426d190e5d47e74a5e2b3f6d5265, NULL, NULL, 0, 0, 0);
code_objects_212847b5743cf228d32fdf878ead77cc = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_detect, mod_consts.const_str_plain_detect, mod_consts.const_tuple_67372390e14257082bae6f27a97eeff7_tuple, NULL, 2, 0, 0);
code_objects_631d53ac3a1269510eabda96a1ecd197 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_detect_all, mod_consts.const_str_plain_detect_all, mod_consts.const_tuple_6388216eb003b1d1a63d1c13751f0073_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_chardet$$$function__2_detect_all$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_chardet$$$function__1_detect(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$$$function__2_detect_all(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$$$function__2_detect_all$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_chardet$$$function__1_detect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_byte_str = python_pars[0];
PyObject *par_should_rename_legacy = python_pars[1];
PyObject *var_detector = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$$$function__1_detect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$$$function__1_detect = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$$$function__1_detect)) {
    Py_XDECREF(cache_frame_frame_chardet$$$function__1_detect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$$$function__1_detect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$$$function__1_detect = MAKE_FUNCTION_FRAME(tstate, code_objects_212847b5743cf228d32fdf878ead77cc, module_chardet, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$$$function__1_detect->m_type_description == NULL);
frame_frame_chardet$$$function__1_detect = cache_frame_frame_chardet$$$function__1_detect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$$$function__1_detect);
assert(Py_REFCNT(frame_frame_chardet$$$function__1_detect) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_byte_str);
tmp_isinstance_inst_1 = par_byte_str;
tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_byte_str);
tmp_isinstance_inst_2 = par_byte_str;
tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_06aa9de8a97b434cdce1d032e6edd96f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_byte_str);
tmp_type_arg_1 = par_byte_str;
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
frame_frame_chardet$$$function__1_detect->m_frame.f_lineno = 44;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_bytearray_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_bytearray_arg_1 = par_byte_str;
tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_chardet$UniversalDetector(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UniversalDetector);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_should_rename_legacy);
tmp_kw_call_value_0_1 = par_should_rename_legacy;
frame_frame_chardet$$$function__1_detect->m_frame.f_lineno = 48;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_should_rename_legacy_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_detector == NULL);
var_detector = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_detector);
tmp_called_instance_1 = var_detector;
CHECK_OBJECT(par_byte_str);
tmp_args_element_value_1 = par_byte_str;
frame_frame_chardet$$$function__1_detect->m_frame.f_lineno = 49;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_feed, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_detector);
tmp_called_instance_2 = var_detector;
frame_frame_chardet$$$function__1_detect->m_frame.f_lineno = 50;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$$$function__1_detect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$$$function__1_detect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$$$function__1_detect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$$$function__1_detect,
    type_description_1,
    par_byte_str,
    par_should_rename_legacy,
    var_detector
);


// Release cached frame if used for exception.
if (frame_frame_chardet$$$function__1_detect == cache_frame_frame_chardet$$$function__1_detect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$$$function__1_detect);
    cache_frame_frame_chardet$$$function__1_detect = NULL;
}

assertFrameObject(frame_frame_chardet$$$function__1_detect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_byte_str);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
par_byte_str = NULL;
CHECK_OBJECT(var_detector);
CHECK_OBJECT(var_detector);
Py_DECREF(var_detector);
var_detector = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_byte_str);
par_byte_str = NULL;
Py_XDECREF(var_detector);
var_detector = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$$$function__2_detect_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_byte_str = python_pars[0];
PyObject *par_ignore_threshold = python_pars[1];
PyObject *par_should_rename_legacy = python_pars[2];
PyObject *var_results = NULL;
PyObject *var_probers = NULL;
PyObject *var_detector = NULL;
PyObject *var_prober = NULL;
PyObject *var_charset_name = NULL;
PyObject *var_lower_charset_name = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$$$function__2_detect_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$$$function__2_detect_all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$$$function__2_detect_all)) {
    Py_XDECREF(cache_frame_frame_chardet$$$function__2_detect_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$$$function__2_detect_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$$$function__2_detect_all = MAKE_FUNCTION_FRAME(tstate, code_objects_631d53ac3a1269510eabda96a1ecd197, module_chardet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$$$function__2_detect_all->m_type_description == NULL);
frame_frame_chardet$$$function__2_detect_all = cache_frame_frame_chardet$$$function__2_detect_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$$$function__2_detect_all);
assert(Py_REFCNT(frame_frame_chardet$$$function__2_detect_all) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_byte_str);
tmp_isinstance_inst_1 = par_byte_str;
tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
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
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_byte_str);
tmp_isinstance_inst_2 = par_byte_str;
tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_06aa9de8a97b434cdce1d032e6edd96f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_byte_str);
tmp_type_arg_1 = par_byte_str;
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
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
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_bytearray_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_bytearray_arg_1 = par_byte_str;
tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_byte_str;
    assert(old != NULL);
    par_byte_str = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_chardet$UniversalDetector(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UniversalDetector);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_should_rename_legacy);
tmp_kw_call_value_0_1 = par_should_rename_legacy;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 78;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_should_rename_legacy_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_detector == NULL);
var_detector = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_detector);
tmp_called_instance_1 = var_detector;
CHECK_OBJECT(par_byte_str);
tmp_args_element_value_1 = par_byte_str;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 79;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_feed, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_detector);
tmp_called_instance_2 = var_detector;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 80;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_detector);
tmp_expression_value_1 = var_detector;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_input_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_chardet$InputState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 82;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_HIGH_BYTE);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 82;
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


exception_lineno = 82;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_results == NULL);
var_results = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_probers == NULL);
var_probers = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_detector);
tmp_expression_value_3 = var_detector;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_charset_probers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 85;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_7;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(var_prober);
tmp_isinstance_inst_3 = var_prober;
tmp_isinstance_cls_3 = module_var_accessor_chardet$CharSetGroupProber(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharSetGroupProber);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
if (var_probers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_probers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_probers;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_prober);
tmp_expression_value_4 = var_prober;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_probers);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_value_value_1 = MAKE_GENERATOR_chardet$$$function__2_detect_all$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_1;
if (var_probers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_probers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_probers;
CHECK_OBJECT(var_prober);
tmp_item_value_1 = var_prober;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
if (var_probers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_probers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = var_probers;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 90;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_11 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_prober;
    var_prober = tmp_assign_source_11;
    Py_INCREF(var_prober);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_ignore_threshold);
tmp_truth_name_1 = CHECK_IF_TRUE(par_ignore_threshold);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_prober);
tmp_called_instance_3 = var_prober;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 91;
tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_confidence);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (var_detector == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_detector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_5 = var_detector;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MINIMUM_THRESHOLD);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_12;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_prober);
tmp_expression_value_6 = var_prober;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_charset_name);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_assign_source_12 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_12 = tmp_or_left_value_2;
or_end_2:;
{
    PyObject *old = var_charset_name;
    var_charset_name = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_charset_name);
tmp_expression_value_7 = var_charset_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 93;
tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_lower_charset_name;
    var_lower_charset_name = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
int tmp_truth_name_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
CHECK_OBJECT(var_lower_charset_name);
tmp_expression_value_8 = var_lower_charset_name;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_startswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 96;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_detector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_detector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_9 = var_detector;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_has_win_bytes);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 96;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (var_detector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_detector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = var_detector;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ISO_WIN_MAP);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_lower_charset_name);
tmp_args_element_value_2 = var_lower_charset_name;
CHECK_OBJECT(var_charset_name);
tmp_args_element_value_3 = var_charset_name;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_charset_name;
    assert(old != NULL);
    var_charset_name = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_4;
CHECK_OBJECT(par_should_rename_legacy);
tmp_truth_name_4 = CHECK_IF_TRUE(par_should_rename_legacy);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_5;
if (var_detector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_detector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_13 = var_detector;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_LEGACY_MAP);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (var_charset_name == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_14 = var_charset_name;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_lower);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 103;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (var_charset_name == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = var_charset_name;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_charset_name;
    var_charset_name = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_3 = var_results;
tmp_dict_key_1 = const_str_plain_encoding;
if (var_charset_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_dict_value_1 = var_charset_name;
tmp_item_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_15;
tmp_res = PyDict_SetItem(tmp_item_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_confidence;
CHECK_OBJECT(var_prober);
tmp_called_instance_4 = var_prober;
frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 108;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_get_confidence);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_item_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_language;
CHECK_OBJECT(var_prober);
tmp_expression_value_15 = var_prober;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_language);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_item_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_item_value_2);
goto try_except_handler_4;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_results;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 0;
tmp_condition_result_8 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_7 != NULL);
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = var_results;

tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_chardet$$$function__2_detect_all$$$function__1_lambda(tstate);

frame_frame_chardet$$$function__2_detect_all->m_frame.f_lineno = 113;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_8:;
branch_no_3:;
{
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_16;
if (var_detector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_detector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_detector;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_result);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$$$function__2_detect_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$$$function__2_detect_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$$$function__2_detect_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$$$function__2_detect_all,
    type_description_1,
    par_byte_str,
    par_ignore_threshold,
    par_should_rename_legacy,
    var_results,
    var_probers,
    var_detector,
    var_prober,
    var_charset_name,
    var_lower_charset_name
);


// Release cached frame if used for exception.
if (frame_frame_chardet$$$function__2_detect_all == cache_frame_frame_chardet$$$function__2_detect_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$$$function__2_detect_all);
    cache_frame_frame_chardet$$$function__2_detect_all = NULL;
}

assertFrameObject(frame_frame_chardet$$$function__2_detect_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_byte_str);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
par_byte_str = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_probers);
var_probers = NULL;
Py_XDECREF(var_detector);
var_detector = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
Py_XDECREF(var_charset_name);
var_charset_name = NULL;
Py_XDECREF(var_lower_charset_name);
var_lower_charset_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_byte_str);
par_byte_str = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_probers);
var_probers = NULL;
Py_XDECREF(var_detector);
var_detector = NULL;
Py_XDECREF(var_prober);
var_prober = NULL;
Py_XDECREF(var_charset_name);
var_charset_name = NULL;
Py_XDECREF(var_lower_charset_name);
var_lower_charset_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ignore_threshold);
Py_DECREF(par_ignore_threshold);
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ignore_threshold);
Py_DECREF(par_ignore_threshold);
CHECK_OBJECT(par_should_rename_legacy);
Py_DECREF(par_should_rename_legacy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct chardet$$$function__2_detect_all$$$genexpr__1_genexpr_locals {
PyObject *var_p;
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

static PyObject *chardet$$$function__2_detect_all$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct chardet$$$function__2_detect_all$$$genexpr__1_genexpr_locals *generator_heap = (struct chardet$$$function__2_detect_all$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_p = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_bbbcdcd268bac2d744b2bf37c90bd173, module_chardet, sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 87;
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
    PyObject *old = generator_heap->var_p;
    generator_heap->var_p = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_p);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_p);
tmp_expression_value_1 = generator_heap->var_p;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "No";
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
    generator_heap->var_p
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

Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_chardet$$$function__2_detect_all$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        chardet$$$function__2_detect_all$$$genexpr__1_genexpr_context,
        module_chardet,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a9808eb111116a1472af21b80521db17,
#endif
        code_objects_bbbcdcd268bac2d744b2bf37c90bd173,
        closure,
        1,
#if 1
        sizeof(struct chardet$$$function__2_detect_all$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_chardet$$$function__2_detect_all$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_result = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_349ab0e7a09346856f33784502f69963, module_chardet, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda->m_type_description == NULL);
frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda = cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_result);
tmp_expression_value_1 = par_result;
tmp_subscript_value_1 = mod_consts.const_str_plain_confidence;
tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda,
    type_description_1,
    par_result
);


// Release cached frame if used for exception.
if (frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda == cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda);
    cache_frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_chardet$$$function__2_detect_all$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_result);
Py_DECREF(par_result);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_result);
Py_DECREF(par_result);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_chardet$$$function__1_detect(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$$$function__1_detect,
        mod_consts.const_str_plain_detect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_212847b5743cf228d32fdf878ead77cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet,
        mod_consts.const_str_digest_1d0337cb23b939a08bbe0b9e3d02a5c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$$$function__2_detect_all(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$$$function__2_detect_all,
        mod_consts.const_str_plain_detect_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_631d53ac3a1269510eabda96a1ecd197,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet,
        mod_consts.const_str_digest_feecebca91614be2a7d6f72374d3b87b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$$$function__2_detect_all$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$$$function__2_detect_all$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_61df1e5026de9ea24c1dcfc71408a412,
#endif
        code_objects_349ab0e7a09346856f33784502f69963,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_chardet,
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

static function_impl_code const function_table_chardet[] = {
impl_chardet$$$function__2_detect_all$$$function__1_lambda,
impl_chardet$$$function__1_detect,
impl_chardet$$$function__2_detect_all,
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

    return Nuitka_Function_GetFunctionState(function, function_table_chardet);
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
        module_chardet,
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
        function_table_chardet,
        sizeof(function_table_chardet) / sizeof(function_impl_code)
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
static char const *module_full_name = "chardet";
#endif

// Internal entry point for module code.
PyObject *module_code_chardet(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet");

    // Store the module for future use.
    module_chardet = module;

    moduledict_chardet = MODULE_DICT(module_chardet);

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
        PRINT_STRING("chardet: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initchardet\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet);
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

        UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_chardet;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_chardet = MAKE_MODULE_FRAME(code_objects_61932cbc377de93b4a407f90d7ed15fc, module_chardet);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet);
assert(Py_REFCNT(frame_frame_chardet) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_chardet->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_chardet->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_chardet->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_chardet->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_545a08eab1246246526ab4acb7afc2ba_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_chardet$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_chardet$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_chardet$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_chardet$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_charsetgroupprober;
tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_CharSetGroupProber_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 20;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_CharSetGroupProber,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_CharSetGroupProber);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetGroupProber, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_charsetprober;
tmp_globals_arg_value_2 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_CharSetProber_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 21;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_CharSetProber,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CharSetProber);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_enums;
tmp_globals_arg_value_3 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_InputState_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 22;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_InputState,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_InputState);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_InputState, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_resultdict;
tmp_globals_arg_value_4 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ResultDict_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 23;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_ResultDict,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ResultDict);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultDict, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_universaldetector;
tmp_globals_arg_value_5 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_UniversalDetector_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 24;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_UniversalDetector,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_UniversalDetector);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_UniversalDetector, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_6 = (PyObject *)moduledict_chardet;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_chardet->m_frame.f_lineno = 25;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain_VERSION,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_VERSION);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION, tmp_assign_source_14);
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
        (PyObject *)moduledict_chardet,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain___version__);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_15);
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
tmp_assign_source_16 = MAKE_LIST5(tstate, mod_consts.const_list_b87c96596a266e68a37731e9418fd0c7_list);
UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_3 = module_var_accessor_chardet$Union(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_should_rename_legacy;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = module_var_accessor_chardet$ResultDict(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultDict);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_17 = MAKE_FUNCTION_chardet$$$function__1_detect(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_detect, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_defaults_2 = mod_consts.const_tuple_false_false_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_4 = module_var_accessor_chardet$Union(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_ignore_threshold;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_should_rename_legacy;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_5 = module_var_accessor_chardet$List(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_subscript_value_3 = module_var_accessor_chardet$ResultDict(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultDict);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

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
Py_INCREF(tmp_defaults_2);

tmp_assign_source_18 = MAKE_FUNCTION_chardet$$$function__2_detect_all(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_chardet, (Nuitka_StringObject *)mod_consts.const_str_plain_detect_all, tmp_assign_source_18);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_chardet);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_chardet);
    return module_chardet;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

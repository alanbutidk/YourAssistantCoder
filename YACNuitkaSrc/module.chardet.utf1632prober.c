/* Generated code for Python module 'chardet$utf1632prober'
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



/* The "module_chardet$utf1632prober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$utf1632prober;
PyDictObject *moduledict_chardet$utf1632prober;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_position;
PyObject *const_str_plain_zeros_at_mod;
PyObject *const_str_plain_nonzeros_at_mod;
PyObject *const_str_plain_ProbingState;
PyObject *const_str_plain_DETECTING;
PyObject *const_str_plain__state;
PyObject *const_str_plain_quad;
PyObject *const_str_plain_invalid_utf16be;
PyObject *const_str_plain_invalid_utf16le;
PyObject *const_str_plain_invalid_utf32be;
PyObject *const_str_plain_invalid_utf32le;
PyObject *const_str_plain_first_half_surrogate_pair_detected_16be;
PyObject *const_str_plain_first_half_surrogate_pair_detected_16le;
PyObject *const_str_plain_reset;
PyObject *const_str_plain_is_likely_utf32be;
PyObject *const_str_digest_fe1dc6c0177e62b48fcc6bb37e265da1;
PyObject *const_str_plain_is_likely_utf32le;
PyObject *const_str_digest_b7dba5b4650cbc858f79762d79227761;
PyObject *const_str_plain_is_likely_utf16be;
PyObject *const_str_digest_7d8c029aa14d4038a202ab8b1ce8db36;
PyObject *const_str_plain_is_likely_utf16le;
PyObject *const_str_digest_1313659eb556d37f6d4c08b89c10540f;
PyObject *const_str_digest_913ae8f3439742e034c09e3f599385fd;
PyObject *const_str_plain_max;
PyObject *const_float_4_0;
PyObject *const_float_2_0;
PyObject *const_str_plain_approx_32bit_chars;
PyObject *const_str_plain_MIN_CHARS_FOR_DETECTION;
PyObject *const_str_plain_EXPECTED_RATIO;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_str_plain_approx_16bit_chars;
PyObject *const_int_pos_16;
PyObject *const_int_pos_216;
PyObject *const_int_pos_223;
PyObject *const_str_digest_28bf66892c6278e56ecbe97e9718257c;
PyObject *const_int_pos_219;
PyObject *const_int_pos_220;
PyObject *const_str_digest_9320267197944efedf3854afec6f6db7;
PyObject *const_str_plain_self;
PyObject *const_int_pos_4;
PyObject *const_str_plain_validate_utf32_characters;
PyObject *const_str_plain_validate_utf16_characters;
PyObject *const_slice_int_0_int_pos_2_none;
PyObject *const_slice_int_pos_2_int_pos_4_none;
PyObject *const_str_plain_state;
PyObject *const_str_plain_NOT_ME;
PyObject *const_str_plain_FOUND_IT;
PyObject *const_str_plain_get_confidence;
PyObject *const_float_0_8;
PyObject *const_int_pos_4096;
PyObject *const_float_0_85;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_charsetprober;
PyObject *const_tuple_str_plain_CharSetProber_tuple;
PyObject *const_str_plain_CharSetProber;
PyObject *const_str_plain_enums;
PyObject *const_tuple_str_plain_ProbingState_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_UTF1632Prober;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_db2a3dae3b7a0cad697ad74691f00c3e;
PyObject *const_str_digest_88103871ae3bbde4cb88cf7bd9bc9a6a;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_int_pos_20;
PyObject *const_float_0_94;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_0254fccbe3e379985df31a1ea5af8b30;
PyObject *const_str_digest_832d6e3f3ad48d50f425dadaff97f744;
PyObject *const_str_plain_property;
PyObject *const_str_plain_return;
PyObject *const_str_plain_str;
PyObject *const_str_plain_charset_name;
PyObject *const_str_digest_708c2cfbd58dd322b19613051e1857c9;
PyObject *const_str_plain_language;
PyObject *const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a;
PyObject *const_str_plain_float;
PyObject *const_str_digest_9a92a36e4d3658af354b76e4f596587f;
PyObject *const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb;
PyObject *const_str_plain_bool;
PyObject *const_str_digest_4a51f615bab1c61f77d081a726403b18;
PyObject *const_str_digest_9d95aaa888996c965ee45dd634a1e715;
PyObject *const_str_digest_89871841f041ad5d52bfa398e07820ac;
PyObject *const_str_digest_9b4897244dfa781e9a7fe72fdb588736;
PyObject *const_str_digest_b21c57589f07e1cc16a1862e78858dea;
PyObject *const_str_plain_pair;
PyObject *const_str_digest_a3edf96c1814c6f5c258b11a430942da;
PyObject *const_str_plain_byte_str;
PyObject *const_str_plain_feed;
PyObject *const_str_digest_f52474dab8371f62cc921738813fc4a0;
PyObject *const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2;
PyObject *const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f;
PyObject *const_tuple_40ad11c4ab23969c688515ec84f62ee0_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_f66a5ef4bb8a216bf6a89208d2190c42;
PyObject *const_str_digest_2417f81ac63dd0b1e796c7ac1952c232;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_c_str_plain_mod4_tuple;
PyObject *const_tuple_str_plain_self_str_plain_approx_chars_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pair_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quad_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[111];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("chardet.utf1632prober"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_position);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros_at_mod);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonzeros_at_mod);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProbingState);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_DETECTING);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_quad);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf16be);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf16le);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf32be);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf32le);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf32be);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe1dc6c0177e62b48fcc6bb37e265da1);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf32le);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7dba5b4650cbc858f79762d79227761);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf16be);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d8c029aa14d4038a202ab8b1ce8db36);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf16le);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_1313659eb556d37f6d4c08b89c10540f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_float_4_0);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_float_2_0);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_approx_32bit_chars);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECTED_RATIO);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_approx_16bit_chars);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_216);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_223);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_28bf66892c6278e56ecbe97e9718257c);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_219);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_9320267197944efedf3854afec6f6db7);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_utf32_characters);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_utf16_characters);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_slice_int_0_int_pos_2_none);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_pos_4_none);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_ME);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND_IT);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_float_0_8);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_float_0_85);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_enums);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProbingState_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTF1632Prober);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_db2a3dae3b7a0cad697ad74691f00c3e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_88103871ae3bbde4cb88cf7bd9bc9a6a);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_float_0_94);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_0254fccbe3e379985df31a1ea5af8b30);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_832d6e3f3ad48d50f425dadaff97f744);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_708c2cfbd58dd322b19613051e1857c9);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a92a36e4d3658af354b76e4f596587f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a51f615bab1c61f77d081a726403b18);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d95aaa888996c965ee45dd634a1e715);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_89871841f041ad5d52bfa398e07820ac);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b4897244dfa781e9a7fe72fdb588736);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_b21c57589f07e1cc16a1862e78858dea);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_pair);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3edf96c1814c6f5c258b11a430942da);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_f52474dab8371f62cc921738813fc4a0);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_40ad11c4ab23969c688515ec84f62ee0_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_f66a5ef4bb8a216bf6a89208d2190c42);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_2417f81ac63dd0b1e796c7ac1952c232);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_c_str_plain_mod4_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pair_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quad_tuple);
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
void checkModuleConstants_chardet$utf1632prober(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_position);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros_at_mod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros_at_mod);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonzeros_at_mod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nonzeros_at_mod);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProbingState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProbingState);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_DETECTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DETECTING);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__state);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_quad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quad);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf16be));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_utf16be);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf16le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_utf16le);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf32be));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_utf32be);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_utf32le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_utf32le);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reset);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf32be));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_likely_utf32be);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe1dc6c0177e62b48fcc6bb37e265da1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe1dc6c0177e62b48fcc6bb37e265da1);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf32le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_likely_utf32le);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7dba5b4650cbc858f79762d79227761));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7dba5b4650cbc858f79762d79227761);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf16be));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_likely_utf16be);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d8c029aa14d4038a202ab8b1ce8db36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d8c029aa14d4038a202ab8b1ce8db36);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_likely_utf16le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_likely_utf16le);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_1313659eb556d37f6d4c08b89c10540f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1313659eb556d37f6d4c08b89c10540f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_float_4_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_4_0);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_float_2_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_2_0);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_approx_32bit_chars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_approx_32bit_chars);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECTED_RATIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXPECTED_RATIO);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_approx_16bit_chars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_approx_16bit_chars);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_216));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_216);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_223));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_223);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_28bf66892c6278e56ecbe97e9718257c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28bf66892c6278e56ecbe97e9718257c);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_219));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_219);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_pos_220));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_220);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_9320267197944efedf3854afec6f6db7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9320267197944efedf3854afec6f6db7);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_utf32_characters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_utf32_characters);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_utf16_characters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_utf16_characters);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_slice_int_0_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_0_int_pos_2_none);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_pos_4_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_2_int_pos_4_none);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_ME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_ME);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOUND_IT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOUND_IT);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_confidence);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_float_0_8));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_8);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4096);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_float_0_85));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_85);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_charsetprober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charsetprober);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharSetProber_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CharSetProber_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharSetProber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CharSetProber);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_enums));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enums);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProbingState_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ProbingState_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTF1632Prober));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UTF1632Prober);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_db2a3dae3b7a0cad697ad74691f00c3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db2a3dae3b7a0cad697ad74691f00c3e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_88103871ae3bbde4cb88cf7bd9bc9a6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88103871ae3bbde4cb88cf7bd9bc9a6a);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_float_0_94));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_94);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_0254fccbe3e379985df31a1ea5af8b30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0254fccbe3e379985df31a1ea5af8b30);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_832d6e3f3ad48d50f425dadaff97f744));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_832d6e3f3ad48d50f425dadaff97f744);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_name);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_708c2cfbd58dd322b19613051e1857c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_708c2cfbd58dd322b19613051e1857c9);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a92a36e4d3658af354b76e4f596587f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a92a36e4d3658af354b76e4f596587f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a51f615bab1c61f77d081a726403b18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a51f615bab1c61f77d081a726403b18);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d95aaa888996c965ee45dd634a1e715));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d95aaa888996c965ee45dd634a1e715);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_89871841f041ad5d52bfa398e07820ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89871841f041ad5d52bfa398e07820ac);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b4897244dfa781e9a7fe72fdb588736));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b4897244dfa781e9a7fe72fdb588736);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_b21c57589f07e1cc16a1862e78858dea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b21c57589f07e1cc16a1862e78858dea);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_pair));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pair);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3edf96c1814c6f5c258b11a430942da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3edf96c1814c6f5c258b11a430942da);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_str);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_f52474dab8371f62cc921738813fc4a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f52474dab8371f62cc921738813fc4a0);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_40ad11c4ab23969c688515ec84f62ee0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40ad11c4ab23969c688515ec84f62ee0_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_f66a5ef4bb8a216bf6a89208d2190c42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f66a5ef4bb8a216bf6a89208d2190c42);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_2417f81ac63dd0b1e796c7ac1952c232));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2417f81ac63dd0b1e796c7ac1952c232);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_c_str_plain_mod4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_c_str_plain_mod4_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pair_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_pair_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quad_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_chardet$utf1632prober$CharSetProber(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$utf1632prober->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$utf1632prober->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$utf1632prober->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$utf1632prober$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$utf1632prober->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$utf1632prober->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$utf1632prober->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$utf1632prober$ProbingState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$utf1632prober->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$utf1632prober->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$utf1632prober->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$utf1632prober$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$utf1632prober->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$utf1632prober->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$utf1632prober->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$utf1632prober$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$utf1632prober->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$utf1632prober->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$utf1632prober->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d54d58dfa35475033179c71bcc5a488d;
static PyCodeObject *code_objects_609fa2c762919ad2fbc1d8c327237263;
static PyCodeObject *code_objects_14ad9f33066b169eecc6c17413650e5b;
static PyCodeObject *code_objects_7cc9c1ad45d280b64c98294b596406bc;
static PyCodeObject *code_objects_6c3ca936fb5c4a305f7fa6e70f2f88e0;
static PyCodeObject *code_objects_12f1133c069dd79f51716aad64dc8bf1;
static PyCodeObject *code_objects_395183999c741def5dff76b5d84e0cce;
static PyCodeObject *code_objects_fd5490ca3947d576b3c65d53fb89f98c;
static PyCodeObject *code_objects_0ef56d4045150c35f77840b0bc8ff1f4;
static PyCodeObject *code_objects_b2d11a186157e06635b03fdfaa654960;
static PyCodeObject *code_objects_5510ae519600e8316e12ae2bc9e9d0a8;
static PyCodeObject *code_objects_996b602bee5f2191bf88e57003bbe040;
static PyCodeObject *code_objects_ec053f4e6bbc5d3a4b7ab213ed720c40;
static PyCodeObject *code_objects_b41ae0f86e12a7908a9c4fc0a7fccb49;
static PyCodeObject *code_objects_61b70ab5d35c60b5c84afafbcd0af375;
static PyCodeObject *code_objects_41e197f51d6ca9c64a024de269e4edf5;
static PyCodeObject *code_objects_4578ba4b5ffa2874c41db1eb91cb1a62;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f66a5ef4bb8a216bf6a89208d2190c42); CHECK_OBJECT(module_filename_obj);
code_objects_d54d58dfa35475033179c71bcc5a488d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_2417f81ac63dd0b1e796c7ac1952c232, mod_consts.const_str_digest_2417f81ac63dd0b1e796c7ac1952c232, NULL, NULL, 0, 0, 0);
code_objects_609fa2c762919ad2fbc1d8c327237263 = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts.const_str_plain_UTF1632Prober, mod_consts.const_str_plain_UTF1632Prober, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_14ad9f33066b169eecc6c17413650e5b = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_0254fccbe3e379985df31a1ea5af8b30, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_7cc9c1ad45d280b64c98294b596406bc = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_approx_16bit_chars, mod_consts.const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6c3ca936fb5c4a305f7fa6e70f2f88e0 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_approx_32bit_chars, mod_consts.const_str_digest_9a92a36e4d3658af354b76e4f596587f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_12f1133c069dd79f51716aad64dc8bf1 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_charset_name, mod_consts.const_str_digest_708c2cfbd58dd322b19613051e1857c9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_395183999c741def5dff76b5d84e0cce = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_feed, mod_consts.const_str_digest_f52474dab8371f62cc921738813fc4a0, mod_consts.const_tuple_str_plain_self_str_plain_byte_str_str_plain_c_str_plain_mod4_tuple, NULL, 2, 0, 0);
code_objects_fd5490ca3947d576b3c65d53fb89f98c = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_confidence, mod_consts.const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0ef56d4045150c35f77840b0bc8ff1f4 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_likely_utf16be, mod_consts.const_str_digest_89871841f041ad5d52bfa398e07820ac, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple, NULL, 1, 0, 0);
code_objects_b2d11a186157e06635b03fdfaa654960 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_likely_utf16le, mod_consts.const_str_digest_9b4897244dfa781e9a7fe72fdb588736, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple, NULL, 1, 0, 0);
code_objects_5510ae519600e8316e12ae2bc9e9d0a8 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_likely_utf32be, mod_consts.const_str_digest_4a51f615bab1c61f77d081a726403b18, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple, NULL, 1, 0, 0);
code_objects_996b602bee5f2191bf88e57003bbe040 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_likely_utf32le, mod_consts.const_str_digest_9d95aaa888996c965ee45dd634a1e715, mod_consts.const_tuple_str_plain_self_str_plain_approx_chars_tuple, NULL, 1, 0, 0);
code_objects_ec053f4e6bbc5d3a4b7ab213ed720c40 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_language, mod_consts.const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b41ae0f86e12a7908a9c4fc0a7fccb49 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reset, mod_consts.const_str_digest_832d6e3f3ad48d50f425dadaff97f744, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_61b70ab5d35c60b5c84afafbcd0af375 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_state, mod_consts.const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_41e197f51d6ca9c64a024de269e4edf5 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_validate_utf16_characters, mod_consts.const_str_digest_a3edf96c1814c6f5c258b11a430942da, mod_consts.const_tuple_str_plain_self_str_plain_pair_tuple, NULL, 2, 0, 0);
code_objects_4578ba4b5ffa2874c41db1eb91cb1a62 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_validate_utf32_characters, mod_consts.const_str_digest_b21c57589f07e1cc16a1862e78858dea, mod_consts.const_tuple_str_plain_self_str_plain_quad_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__10_is_likely_utf16le(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__11_validate_utf32_characters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__12_validate_utf16_characters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__13_feed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__14_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__15_get_confidence(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__2_reset(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__3_charset_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__4_language(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__5_approx_32bit_chars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__6_approx_16bit_chars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__7_is_likely_utf32be(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__8_is_likely_utf32le(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__9_is_likely_utf16be(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_chardet$utf1632prober$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_14ad9f33066b169eecc6c17413650e5b, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__1___init__->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__1___init__ = cache_frame_frame_chardet$utf1632prober$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__1___init__);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 42;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_chardet$utf1632prober, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_chardet$utf1632prober$$$function__1___init__->m_frame.f_lineno = 42;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_position, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_zeros_at_mod, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_nonzeros_at_mod, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_4;
tmp_expression_value_1 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DETECTING);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__state, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_quad, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_invalid_utf16be, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_invalid_utf16le, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_invalid_utf32be, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_invalid_utf32le, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_chardet$utf1632prober$$$function__1___init__->m_frame.f_lineno = 54;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_reset);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__1___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__1___init__ == cache_frame_frame_chardet$utf1632prober$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__1___init__);
    cache_frame_frame_chardet$utf1632prober$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__1___init__);

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


static PyObject *impl_chardet$utf1632prober$$$function__2_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__2_reset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__2_reset = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__2_reset)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__2_reset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__2_reset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__2_reset = MAKE_FUNCTION_FRAME(tstate, code_objects_b41ae0f86e12a7908a9c4fc0a7fccb49, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__2_reset->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__2_reset = cache_frame_frame_chardet$utf1632prober$$$function__2_reset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__2_reset);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__2_reset) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_chardet$utf1632prober, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_chardet$utf1632prober$$$function__2_reset->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reset);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_position, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_zeros_at_mod, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_nonzeros_at_mod, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_4;
tmp_expression_value_1 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DETECTING);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__state, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_invalid_utf16be, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_invalid_utf16le, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_invalid_utf32be, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_invalid_utf32le, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = MAKE_LIST_REPEATED(tstate, 4, const_int_0);
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_quad, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__2_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__2_reset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__2_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__2_reset,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__2_reset == cache_frame_frame_chardet$utf1632prober$$$function__2_reset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__2_reset);
    cache_frame_frame_chardet$utf1632prober$$$function__2_reset = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__2_reset);

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


static PyObject *impl_chardet$utf1632prober$$$function__3_charset_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__3_charset_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name = MAKE_FUNCTION_FRAME(tstate, code_objects_12f1133c069dd79f51716aad64dc8bf1, module_chardet$utf1632prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__3_charset_name = cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__3_charset_name);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__3_charset_name) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_frame.f_lineno = 72;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_likely_utf32be);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 72;
type_description_1 = "o";
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
tmp_return_value = mod_consts.const_str_digest_fe1dc6c0177e62b48fcc6bb37e265da1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_frame.f_lineno = 74;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_likely_utf32le);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = mod_consts.const_str_digest_b7dba5b4650cbc858f79762d79227761;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_frame.f_lineno = 76;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_is_likely_utf16be);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = mod_consts.const_str_digest_7d8c029aa14d4038a202ab8b1ce8db36;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_frame.f_lineno = 78;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_likely_utf16le);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = mod_consts.const_str_digest_1313659eb556d37f6d4c08b89c10540f;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__3_charset_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__3_charset_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__3_charset_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__3_charset_name,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__3_charset_name == cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name);
    cache_frame_frame_chardet$utf1632prober$$$function__3_charset_name = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__3_charset_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd;
Py_INCREF(tmp_return_value);
goto function_return_exit;

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


static PyObject *impl_chardet$utf1632prober$$$function__5_approx_32bit_chars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars = MAKE_FUNCTION_FRAME(tstate, code_objects_6c3ca936fb5c4a305f7fa6e70f2f88e0, module_chardet$utf1632prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars = cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_float_1_0;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_position);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_float_4_0;
tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars == cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars);
    cache_frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__5_approx_32bit_chars);

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


static PyObject *impl_chardet$utf1632prober$$$function__6_approx_16bit_chars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars = MAKE_FUNCTION_FRAME(tstate, code_objects_7cc9c1ad45d280b64c98294b596406bc, module_chardet$utf1632prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars = cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_float_1_0;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_position);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_float_2_0;
tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars == cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars);
    cache_frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__6_approx_16bit_chars);

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


static PyObject *impl_chardet$utf1632prober$$$function__7_is_likely_utf32be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_approx_chars = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be = MAKE_FUNCTION_FRAME(tstate, code_objects_5510ae519600e8316e12ae2bc9e9d0a8, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be = cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be->m_frame.f_lineno = 94;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_approx_32bit_chars);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_approx_chars == NULL);
var_approx_chars = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_5;
PyObject *tmp_and_left_value_5;
PyObject *tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_approx_chars);
tmp_cmp_expr_left_1 = var_approx_chars;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_1 = var_approx_chars;
tmp_cmp_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_2 = var_approx_chars;
tmp_cmp_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_int_pos_2;
tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_3 = var_approx_chars;
tmp_cmp_expr_left_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_4);

exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_and_left_value_4);
Py_DECREF(tmp_and_left_value_4);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_int_pos_3;
tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_4, 3);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_4 = var_approx_chars;
tmp_cmp_expr_left_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_5);

exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(tmp_and_left_value_5);
Py_DECREF(tmp_and_left_value_5);
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_invalid_utf32be);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_5);
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be,
    type_description_1,
    par_self,
    var_approx_chars
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be == cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be);
    cache_frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__7_is_likely_utf32be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_approx_chars);
CHECK_OBJECT(var_approx_chars);
Py_DECREF(var_approx_chars);
var_approx_chars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_approx_chars);
var_approx_chars = NULL;
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


static PyObject *impl_chardet$utf1632prober$$$function__8_is_likely_utf32le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_approx_chars = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le = MAKE_FUNCTION_FRAME(tstate, code_objects_996b602bee5f2191bf88e57003bbe040, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le = cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le->m_frame.f_lineno = 104;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_approx_32bit_chars);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_approx_chars == NULL);
var_approx_chars = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_5;
PyObject *tmp_and_left_value_5;
PyObject *tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_approx_chars);
tmp_cmp_expr_left_1 = var_approx_chars;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_1 = var_approx_chars;
tmp_cmp_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 106;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_2 = var_approx_chars;
tmp_cmp_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_int_pos_2;
tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_3 = var_approx_chars;
tmp_cmp_expr_left_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_4);

exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_and_left_value_4);
Py_DECREF(tmp_and_left_value_4);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_int_pos_3;
tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_4, 3);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_4 = var_approx_chars;
tmp_cmp_expr_left_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_5);

exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(tmp_and_left_value_5);
Py_DECREF(tmp_and_left_value_5);
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_invalid_utf32le);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_5);
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le,
    type_description_1,
    par_self,
    var_approx_chars
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le == cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le);
    cache_frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__8_is_likely_utf32le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_approx_chars);
CHECK_OBJECT(var_approx_chars);
Py_DECREF(var_approx_chars);
var_approx_chars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_approx_chars);
var_approx_chars = NULL;
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


static PyObject *impl_chardet$utf1632prober$$$function__9_is_likely_utf16be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_approx_chars = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be = MAKE_FUNCTION_FRAME(tstate, code_objects_0ef56d4045150c35f77840b0bc8ff1f4, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be = cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be->m_frame.f_lineno = 114;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_approx_16bit_chars);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_approx_chars == NULL);
var_approx_chars = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_approx_chars);
tmp_cmp_expr_left_1 = var_approx_chars;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_int_pos_3;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 3);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_1 = var_approx_chars;
tmp_cmp_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_int_pos_2;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_2 = var_approx_chars;
tmp_cmp_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_invalid_utf16be);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be,
    type_description_1,
    par_self,
    var_approx_chars
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be == cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be);
    cache_frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__9_is_likely_utf16be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_approx_chars);
CHECK_OBJECT(var_approx_chars);
Py_DECREF(var_approx_chars);
var_approx_chars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_approx_chars);
var_approx_chars = NULL;
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


static PyObject *impl_chardet$utf1632prober$$$function__10_is_likely_utf16le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_approx_chars = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le = MAKE_FUNCTION_FRAME(tstate, code_objects_b2d11a186157e06635b03fdfaa654960, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le = cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le->m_frame.f_lineno = 124;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_approx_16bit_chars);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_approx_chars == NULL);
var_approx_chars = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_approx_chars);
tmp_cmp_expr_left_1 = var_approx_chars;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_int_pos_2;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_1 = var_approx_chars;
tmp_cmp_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_pos_1;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_int_pos_3;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 3);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_approx_chars);
tmp_truediv_expr_right_2 = var_approx_chars;
tmp_cmp_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_EXPECTED_RATIO);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_invalid_utf16le);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le,
    type_description_1,
    par_self,
    var_approx_chars
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le == cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le);
    cache_frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__10_is_likely_utf16le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_approx_chars);
CHECK_OBJECT(var_approx_chars);
Py_DECREF(var_approx_chars);
var_approx_chars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_approx_chars);
var_approx_chars = NULL;
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


static PyObject *impl_chardet$utf1632prober$$$function__11_validate_utf32_characters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quad = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters = MAKE_FUNCTION_FRAME(tstate, code_objects_4578ba4b5ffa2874c41db1eb91cb1a62, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters = cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_quad);
tmp_expression_value_1 = par_quad;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_quad);
tmp_expression_value_2 = par_quad;
tmp_subscript_value_2 = const_int_pos_1;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_16;
tmp_or_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_quad);
tmp_expression_value_3 = par_quad;
tmp_subscript_value_3 = const_int_0;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_quad);
tmp_expression_value_4 = par_quad;
tmp_subscript_value_4 = const_int_pos_1;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_quad);
tmp_expression_value_5 = par_quad;
tmp_subscript_value_5 = mod_consts.const_int_pos_2;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, 2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_int_pos_216;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_223;
tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_or_right_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_invalid_utf32be, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_quad);
tmp_expression_value_6 = par_quad;
tmp_subscript_value_6 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_6, 3);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_or_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_quad);
tmp_expression_value_7 = par_quad;
tmp_subscript_value_7 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_7, 2);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_16;
tmp_or_left_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(par_quad);
tmp_expression_value_8 = par_quad;
tmp_subscript_value_8 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_8, 3);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = const_int_0;
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_quad);
tmp_expression_value_9 = par_quad;
tmp_subscript_value_9 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_9, 2);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = const_int_0;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(par_quad);
tmp_expression_value_10 = par_quad;
tmp_subscript_value_10 = const_int_pos_1;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_10, 1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__operand_2 == NULL);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = mod_consts.const_int_pos_216;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_11 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_12 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_12 = mod_consts.const_int_pos_223;
tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_or_right_value_4 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_right_value_4 = tmp_and_left_value_3;
and_end_3:;
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_condition_result_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_3 = tmp_or_left_value_3;
or_end_3:;
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
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_invalid_utf32le, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters,
    type_description_1,
    par_self,
    par_quad
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters == cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters);
    cache_frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__11_validate_utf32_characters);

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
CHECK_OBJECT(par_quad);
Py_DECREF(par_quad);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_quad);
Py_DECREF(par_quad);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$utf1632prober$$$function__12_validate_utf16_characters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pair = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_comparison_chain_3__comparison_result = NULL;
PyObject *tmp_comparison_chain_3__operand_2 = NULL;
PyObject *tmp_comparison_chain_4__comparison_result = NULL;
PyObject *tmp_comparison_chain_4__operand_2 = NULL;
PyObject *tmp_comparison_chain_5__comparison_result = NULL;
PyObject *tmp_comparison_chain_5__operand_2 = NULL;
PyObject *tmp_comparison_chain_6__comparison_result = NULL;
PyObject *tmp_comparison_chain_6__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters = MAKE_FUNCTION_FRAME(tstate, code_objects_41e197f51d6ca9c64a024de269e4edf5, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters = cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_pair);
tmp_expression_value_2 = par_pair;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_216;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_1;
branch_no_3:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_219;
tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 166;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_pair);
tmp_expression_value_3 = par_pair;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__operand_2 == NULL);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_int_pos_220;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
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
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_2;
branch_no_5:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_223;
tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_invalid_utf16be, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_outline_return_value_3;
int tmp_truth_name_3;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_pair);
tmp_expression_value_4 = par_pair;
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 0);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_3__operand_2 == NULL);
tmp_comparison_chain_3__operand_2 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_int_pos_220;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_3__operand_2;
tmp_assign_source_6 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_3__comparison_result == NULL);
tmp_comparison_chain_3__comparison_result = tmp_assign_source_6;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_3__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_outline_return_value_3 = tmp_comparison_chain_3__comparison_result;
Py_INCREF(tmp_outline_return_value_3);
goto try_return_handler_3;
branch_no_7:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_3__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_223;
tmp_outline_return_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_outline_return_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
Py_DECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
Py_DECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_3);

exception_lineno = 171;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16be, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_invalid_utf16be, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_end_6:;
branch_end_1:;
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_outline_return_value_4;
int tmp_truth_name_4;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_pair);
tmp_expression_value_6 = par_pair;
tmp_subscript_value_4 = const_int_pos_1;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto try_except_handler_4;
}
assert(tmp_comparison_chain_4__operand_2 == NULL);
tmp_comparison_chain_4__operand_2 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = mod_consts.const_int_pos_216;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_right_7 = tmp_comparison_chain_4__operand_2;
tmp_assign_source_8 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto try_except_handler_4;
}
assert(tmp_comparison_chain_4__comparison_result == NULL);
tmp_comparison_chain_4__comparison_result = tmp_assign_source_8;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_4__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_outline_return_value_4 = tmp_comparison_chain_4__comparison_result;
Py_INCREF(tmp_outline_return_value_4);
goto try_return_handler_4;
branch_no_10:;
{
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_left_8 = tmp_comparison_chain_4__operand_2;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_219;
tmp_outline_return_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_outline_return_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
Py_DECREF(tmp_comparison_chain_4__operand_2);
tmp_comparison_chain_4__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
Py_DECREF(tmp_comparison_chain_4__comparison_result);
tmp_comparison_chain_4__comparison_result = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_4__operand_2);
tmp_comparison_chain_4__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_4__comparison_result);
tmp_comparison_chain_4__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_4);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
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
tmp_assattr_value_5 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_outline_return_value_5;
int tmp_truth_name_5;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_pair);
tmp_expression_value_7 = par_pair;
tmp_subscript_value_5 = const_int_pos_1;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(tmp_comparison_chain_5__operand_2 == NULL);
tmp_comparison_chain_5__operand_2 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = mod_consts.const_int_pos_220;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
tmp_cmp_expr_right_9 = tmp_comparison_chain_5__operand_2;
tmp_assign_source_10 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(tmp_comparison_chain_5__comparison_result == NULL);
tmp_comparison_chain_5__comparison_result = tmp_assign_source_10;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_7;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
tmp_operand_value_7 = tmp_comparison_chain_5__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
tmp_outline_return_value_5 = tmp_comparison_chain_5__comparison_result;
Py_INCREF(tmp_outline_return_value_5);
goto try_return_handler_5;
branch_no_12:;
{
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
tmp_cmp_expr_left_10 = tmp_comparison_chain_5__operand_2;
tmp_cmp_expr_right_10 = mod_consts.const_int_pos_223;
tmp_outline_return_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_outline_return_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oo";
    goto try_except_handler_5;
}
goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
Py_DECREF(tmp_comparison_chain_5__operand_2);
tmp_comparison_chain_5__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
Py_DECREF(tmp_comparison_chain_5__comparison_result);
tmp_comparison_chain_5__comparison_result = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_5__operand_2);
tmp_comparison_chain_5__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_5__comparison_result);
tmp_comparison_chain_5__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_outline_return_value_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_5);

exception_lineno = 179;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_invalid_utf16le, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_11:;
branch_end_9:;
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_outline_return_value_6;
int tmp_truth_name_6;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_pair);
tmp_expression_value_8 = par_pair;
tmp_subscript_value_6 = const_int_pos_1;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_6, 1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_comparison_chain_6__operand_2 == NULL);
tmp_comparison_chain_6__operand_2 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = mod_consts.const_int_pos_220;
CHECK_OBJECT(tmp_comparison_chain_6__operand_2);
tmp_cmp_expr_right_11 = tmp_comparison_chain_6__operand_2;
tmp_assign_source_12 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_comparison_chain_6__comparison_result == NULL);
tmp_comparison_chain_6__comparison_result = tmp_assign_source_12;
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_8;
CHECK_OBJECT(tmp_comparison_chain_6__comparison_result);
tmp_operand_value_8 = tmp_comparison_chain_6__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto try_except_handler_6;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_comparison_chain_6__comparison_result);
tmp_outline_return_value_6 = tmp_comparison_chain_6__comparison_result;
Py_INCREF(tmp_outline_return_value_6);
goto try_return_handler_6;
branch_no_14:;
{
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_comparison_chain_6__operand_2);
tmp_cmp_expr_left_12 = tmp_comparison_chain_6__operand_2;
tmp_cmp_expr_right_12 = mod_consts.const_int_pos_223;
tmp_outline_return_value_6 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_outline_return_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto try_except_handler_6;
}
goto try_return_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_comparison_chain_6__operand_2);
CHECK_OBJECT(tmp_comparison_chain_6__operand_2);
Py_DECREF(tmp_comparison_chain_6__operand_2);
tmp_comparison_chain_6__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_6__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_6__comparison_result);
Py_DECREF(tmp_comparison_chain_6__comparison_result);
tmp_comparison_chain_6__comparison_result = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_6__operand_2);
tmp_comparison_chain_6__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_6__comparison_result);
tmp_comparison_chain_6__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_6:;
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_outline_return_value_6);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_6);

exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_first_half_surrogate_pair_detected_16le, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_invalid_utf16le, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_end_13:;
branch_end_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters,
    type_description_1,
    par_self,
    par_pair
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters == cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters);
    cache_frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__12_validate_utf16_characters);

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
CHECK_OBJECT(par_pair);
Py_DECREF(par_pair);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pair);
Py_DECREF(par_pair);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$utf1632prober$$$function__13_feed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byte_str = python_pars[1];
PyObject *var_c = NULL;
PyObject *var_mod4 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__13_feed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__13_feed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__13_feed)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__13_feed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__13_feed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__13_feed = MAKE_FUNCTION_FRAME(tstate, code_objects_395183999c741def5dff76b5d84e0cce, module_chardet$utf1632prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__13_feed->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__13_feed = cache_frame_frame_chardet$utf1632prober$$$function__13_feed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__13_feed);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__13_feed) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_iter_arg_1 = par_byte_str;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 188;
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
    PyObject *old = var_c;
    var_c = tmp_assign_source_3;
    Py_INCREF(var_c);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = par_self;
tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_position);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = mod_consts.const_int_pos_4;
tmp_assign_source_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_mod4;
    var_mod4 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_c);
tmp_ass_subvalue_1 = var_c;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_quad);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_mod4);
tmp_ass_subscript_1 = var_mod4;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_mod4);
tmp_cmp_expr_left_1 = var_mod4;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_3;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_validate_utf32_characters);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_quad);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_chardet$utf1632prober$$$function__13_feed->m_frame.f_lineno = 192;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_validate_utf16_characters);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_quad);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = mod_consts.const_slice_int_0_int_pos_2_none;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_chardet$utf1632prober$$$function__13_feed->m_frame.f_lineno = 193;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_validate_utf16_characters);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_quad);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_2_int_pos_4_none;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_chardet$utf1632prober$$$function__13_feed->m_frame.f_lineno = 194;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_c);
tmp_cmp_expr_left_2 = var_c;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_11;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_11 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_zeros_at_mod);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_mod4);
tmp_assign_source_6 = var_mod4;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_6;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_12 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_3 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_8;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_13;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 198;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_13 = par_self;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_nonzeros_at_mod);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_mod4);
tmp_assign_source_10 = var_mod4;
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_10;
    Py_INCREF(tmp_inplace_assign_subscript_2__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_14 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_4 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_subscript_2__value;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_12 = tmp_iadd_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_12;

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_3 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_3 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_ass_subscript_3 = tmp_inplace_assign_subscript_2__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
Py_DECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
branch_end_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_15;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_15 = par_self;
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_position);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_assign_source_14 = tmp_iadd_expr_left_3;
tmp_inplace_assign_1__value = tmp_assign_source_14;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_position, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_expression_value_16;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__13_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__13_feed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__13_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__13_feed,
    type_description_1,
    par_self,
    par_byte_str,
    var_c,
    var_mod4
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__13_feed == cache_frame_frame_chardet$utf1632prober$$$function__13_feed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__13_feed);
    cache_frame_frame_chardet$utf1632prober$$$function__13_feed = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__13_feed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_mod4);
var_mod4 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_mod4);
var_mod4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$utf1632prober$$$function__14_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__14_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__14_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__14_state)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__14_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__14_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__14_state = MAKE_FUNCTION_FRAME(tstate, code_objects_61b70ab5d35c60b5c84afafbcd0af375, module_chardet$utf1632prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__14_state->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__14_state = cache_frame_frame_chardet$utf1632prober$$$function__14_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__14_state);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__14_state) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_set_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_NOT_ME);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = PySet_New(NULL);
assert(tmp_cmp_expr_right_1);
tmp_res = PySet_Add(tmp_cmp_expr_right_1, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_set_element_1);
Py_DECREF(tmp_cmp_expr_right_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_3 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_right_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_FOUND_IT);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_right_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_cmp_expr_right_1, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_right_1);
Py_DECREF(tmp_set_element_1);

exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_res = PySet_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__14_state->m_frame.f_lineno = 207;
tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_confidence);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_float_0_8;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_1;
tmp_expression_value_5 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_FOUND_IT);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__state, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_position);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_4096;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
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
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_2;
tmp_expression_value_7 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_NOT_ME);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__state, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
branch_end_2:;
{
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__14_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__14_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__14_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__14_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__14_state == cache_frame_frame_chardet$utf1632prober$$$function__14_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__14_state);
    cache_frame_frame_chardet$utf1632prober$$$function__14_state = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__14_state);

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


static PyObject *impl_chardet$utf1632prober$$$function__15_get_confidence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$function__15_get_confidence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence)) {
    Py_XDECREF(cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence = MAKE_FUNCTION_FRAME(tstate, code_objects_fd5490ca3947d576b3c65d53fb89f98c, module_chardet$utf1632prober, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_type_description == NULL);
frame_frame_chardet$utf1632prober$$$function__15_get_confidence = cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$function__15_get_confidence);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$function__15_get_confidence) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
int tmp_truth_name_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_frame.f_lineno = 219;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_likely_utf16le);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_frame.f_lineno = 220;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_likely_utf16be);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_frame.f_lineno = 221;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_is_likely_utf32le);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_frame.f_lineno = 222;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_likely_utf32be);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_return_value = mod_consts.const_float_0_85;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = const_float_0_0;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$function__15_get_confidence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$function__15_get_confidence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$function__15_get_confidence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$function__15_get_confidence,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$utf1632prober$$$function__15_get_confidence == cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence);
    cache_frame_frame_chardet$utf1632prober$$$function__15_get_confidence = NULL;
}

assertFrameObject(frame_frame_chardet$utf1632prober$$$function__15_get_confidence);

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



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__10_is_likely_utf16le(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__10_is_likely_utf16le,
        mod_consts.const_str_plain_is_likely_utf16le,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9b4897244dfa781e9a7fe72fdb588736,
#endif
        code_objects_b2d11a186157e06635b03fdfaa654960,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__11_validate_utf32_characters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__11_validate_utf32_characters,
        mod_consts.const_str_plain_validate_utf32_characters,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b21c57589f07e1cc16a1862e78858dea,
#endif
        code_objects_4578ba4b5ffa2874c41db1eb91cb1a62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        mod_consts.const_str_digest_28bf66892c6278e56ecbe97e9718257c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__12_validate_utf16_characters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__12_validate_utf16_characters,
        mod_consts.const_str_plain_validate_utf16_characters,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3edf96c1814c6f5c258b11a430942da,
#endif
        code_objects_41e197f51d6ca9c64a024de269e4edf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        mod_consts.const_str_digest_9320267197944efedf3854afec6f6db7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__13_feed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__13_feed,
        mod_consts.const_str_plain_feed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f52474dab8371f62cc921738813fc4a0,
#endif
        code_objects_395183999c741def5dff76b5d84e0cce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__14_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__14_state,
        mod_consts.const_str_plain_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9035ee2dfa5c59dc7530697f3b2a65f2,
#endif
        code_objects_61b70ab5d35c60b5c84afafbcd0af375,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__15_get_confidence(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__15_get_confidence,
        mod_consts.const_str_plain_get_confidence,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7883b9a70c5bdf63e762ca56a8814e6f,
#endif
        code_objects_fd5490ca3947d576b3c65d53fb89f98c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0254fccbe3e379985df31a1ea5af8b30,
#endif
        code_objects_14ad9f33066b169eecc6c17413650e5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__2_reset(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__2_reset,
        mod_consts.const_str_plain_reset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_832d6e3f3ad48d50f425dadaff97f744,
#endif
        code_objects_b41ae0f86e12a7908a9c4fc0a7fccb49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__3_charset_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__3_charset_name,
        mod_consts.const_str_plain_charset_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_708c2cfbd58dd322b19613051e1857c9,
#endif
        code_objects_12f1133c069dd79f51716aad64dc8bf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__4_language(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_language,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f87d80a57135fcd7e8b78fcfe8b7d33a,
#endif
        code_objects_ec053f4e6bbc5d3a4b7ab213ed720c40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, const_str_empty);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__5_approx_32bit_chars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__5_approx_32bit_chars,
        mod_consts.const_str_plain_approx_32bit_chars,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a92a36e4d3658af354b76e4f596587f,
#endif
        code_objects_6c3ca936fb5c4a305f7fa6e70f2f88e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__6_approx_16bit_chars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__6_approx_16bit_chars,
        mod_consts.const_str_plain_approx_16bit_chars,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1efbdfd1e637bac8f2016ab7daefe9bb,
#endif
        code_objects_7cc9c1ad45d280b64c98294b596406bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__7_is_likely_utf32be(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__7_is_likely_utf32be,
        mod_consts.const_str_plain_is_likely_utf32be,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a51f615bab1c61f77d081a726403b18,
#endif
        code_objects_5510ae519600e8316e12ae2bc9e9d0a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__8_is_likely_utf32le(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__8_is_likely_utf32le,
        mod_consts.const_str_plain_is_likely_utf32le,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d95aaa888996c965ee45dd634a1e715,
#endif
        code_objects_996b602bee5f2191bf88e57003bbe040,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf1632prober$$$function__9_is_likely_utf16be(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf1632prober$$$function__9_is_likely_utf16be,
        mod_consts.const_str_plain_is_likely_utf16be,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89871841f041ad5d52bfa398e07820ac,
#endif
        code_objects_0ef56d4045150c35f77840b0bc8ff1f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$utf1632prober,
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

static function_impl_code const function_table_chardet$utf1632prober[] = {
impl_chardet$utf1632prober$$$function__1___init__,
impl_chardet$utf1632prober$$$function__2_reset,
impl_chardet$utf1632prober$$$function__3_charset_name,
impl_chardet$utf1632prober$$$function__5_approx_32bit_chars,
impl_chardet$utf1632prober$$$function__6_approx_16bit_chars,
impl_chardet$utf1632prober$$$function__7_is_likely_utf32be,
impl_chardet$utf1632prober$$$function__8_is_likely_utf32le,
impl_chardet$utf1632prober$$$function__9_is_likely_utf16be,
impl_chardet$utf1632prober$$$function__10_is_likely_utf16le,
impl_chardet$utf1632prober$$$function__11_validate_utf32_characters,
impl_chardet$utf1632prober$$$function__12_validate_utf16_characters,
impl_chardet$utf1632prober$$$function__13_feed,
impl_chardet$utf1632prober$$$function__14_state,
impl_chardet$utf1632prober$$$function__15_get_confidence,
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

    return Nuitka_Function_GetFunctionState(function, function_table_chardet$utf1632prober);
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
        module_chardet$utf1632prober,
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
        function_table_chardet$utf1632prober,
        sizeof(function_table_chardet$utf1632prober) / sizeof(function_impl_code)
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
static char const *module_full_name = "chardet.utf1632prober";
#endif

// Internal entry point for module code.
PyObject *module_code_chardet$utf1632prober(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet$utf1632prober");

    // Store the module for future use.
    module_chardet$utf1632prober = module;

    moduledict_chardet$utf1632prober = MODULE_DICT(module_chardet$utf1632prober);

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
        PRINT_STRING("chardet$utf1632prober: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet$utf1632prober: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet$utf1632prober: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.utf1632prober" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initchardet$utf1632prober\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$utf1632prober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$utf1632prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$utf1632prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf1632prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf1632prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$utf1632prober);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet$utf1632prober);
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

        UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_chardet$utf1632prober = MAKE_MODULE_FRAME(code_objects_d54d58dfa35475033179c71bcc5a488d, module_chardet$utf1632prober);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_chardet$utf1632prober$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_chardet$utf1632prober$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_import_from_1__module = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_chardet$utf1632prober,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_chardet$utf1632prober,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_6);
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
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_charsetprober;
tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet$utf1632prober;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_CharSetProber_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_chardet$utf1632prober->m_frame.f_lineno = 23;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_chardet$utf1632prober,
        mod_consts.const_str_plain_CharSetProber,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_CharSetProber);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_CharSetProber, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enums;
tmp_globals_arg_value_2 = (PyObject *)moduledict_chardet$utf1632prober;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ProbingState_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_chardet$utf1632prober->m_frame.f_lineno = 24;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_chardet$utf1632prober,
        mod_consts.const_str_plain_ProbingState,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ProbingState);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_ProbingState, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_chardet$utf1632prober$CharSetProber(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharSetProber);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_10 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
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


exception_lineno = 27;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_12;
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


exception_lineno = 27;

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
PyObject *tmp_assign_source_13;
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


exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_UTF1632Prober;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_chardet$utf1632prober->m_frame.f_lineno = 27;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
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


exception_lineno = 27;

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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
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


exception_lineno = 27;

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


exception_lineno = 27;

    goto try_except_handler_2;
}
frame_frame_chardet$utf1632prober->m_frame.f_lineno = 27;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
branch_end_1:;
{
PyObject *tmp_assign_source_15;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_db2a3dae3b7a0cad697ad74691f00c3e;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_88103871ae3bbde4cb88cf7bd9bc9a6a;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_UTF1632Prober;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2 = MAKE_CLASS_FRAME(tstate, code_objects_609fa2c762919ad2fbc1d8c327237263, module_chardet$utf1632prober, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2);
assert(Py_REFCNT(frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_MIN_CHARS_FOR_DETECTION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_float_0_94;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_EXPECTED_RATIO, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
tmp_closure_2[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__2_reset(tstate, tmp_annotations_2, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_reset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_chardet$utf1632prober$$$function__3_charset_name(tstate, tmp_annotations_3);

frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_charset_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_str);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_args_element_value_2 = MAKE_FUNCTION_chardet$utf1632prober$$$function__4_language(tstate, tmp_annotations_4);

frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2->m_frame.f_lineno = 83;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_language, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_float);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__5_approx_32bit_chars(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_approx_32bit_chars, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_float);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__6_approx_16bit_chars(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_approx_16bit_chars, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_bool);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__7_is_likely_utf32be(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_is_likely_utf32be, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_bool);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__8_is_likely_utf32le(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_is_likely_utf32le, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_bool);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__9_is_likely_utf16be(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_is_likely_utf16be, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_bool);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__10_is_likely_utf16le(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_is_likely_utf16le, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
tmp_dict_key_9 = mod_consts.const_str_plain_quad;
tmp_expression_value_7 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_List);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_chardet$utf1632prober$List(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_2 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain_int);

if (tmp_subscript_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_2 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_11 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__11_validate_utf32_characters(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_validate_utf32_characters, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
tmp_dict_key_10 = mod_consts.const_str_plain_pair;
tmp_expression_value_8 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_List);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_chardet$utf1632prober$List(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_3 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain_int);

if (tmp_subscript_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_12 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__12_validate_utf16_characters(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_validate_utf16_characters, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_4;
tmp_dict_key_11 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_9 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_Union);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_chardet$utf1632prober$Union(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_4 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain_bytes);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, const_str_plain_bytearray);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyByteArray_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_ProbingState);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_13);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__13_feed(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_feed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
tmp_called_value_4 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_dict_value_12 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_ProbingState);

if (tmp_dict_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_12 = module_var_accessor_chardet$utf1632prober$ProbingState(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProbingState);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_chardet$utf1632prober$$$function__14_state(tstate, tmp_annotations_14);

frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2->m_frame.f_lineno = 202;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = PyObject_GetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_float);

if (tmp_dict_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_13 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$utf1632prober$$$function__15_get_confidence(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain_get_confidence, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_chardet$utf1632prober$$$class__1_UTF1632Prober_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_40ad11c4ab23969c688515ec84f62ee0_tuple;
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

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


exception_lineno = 27;

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
tmp_res = PyObject_SetItem(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_UTF1632Prober;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_chardet$utf1632prober->m_frame.f_lineno = 27;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_16);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_15 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27);
locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27);
locals_chardet$utf1632prober$$$class__1_UTF1632Prober_27 = NULL;
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
exception_lineno = 27;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF1632Prober, tmp_assign_source_15);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$utf1632prober, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$utf1632prober->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$utf1632prober, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_chardet$utf1632prober);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet$utf1632prober", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.utf1632prober" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_chardet$utf1632prober);
    return module_chardet$utf1632prober;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf1632prober, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$utf1632prober", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'winotify$audio'
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



/* The "module_winotify$audio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_winotify$audio;
PyDictObject *moduledict_winotify$audio;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_s;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_04a298d00994ff19a5752ee666d3ff81;
PyObject *const_str_plain_Sound;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_779f199dd930572ff97193f77133beeb;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257;
PyObject *const_tuple_str_plain_s_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_str_digest_c84aee2a5561f335f68b65ade825a896_tuple;
PyObject *const_str_plain_Default;
PyObject *const_tuple_str_digest_9c6e41c9b03222975bfa81c39e82eb51_tuple;
PyObject *const_str_plain_IM;
PyObject *const_tuple_str_digest_3c86625a0d59330cb8c233cf8a7150cb_tuple;
PyObject *const_str_plain_Mail;
PyObject *const_tuple_str_digest_3f0d56788fe7b34e2b024d7ada319c3e_tuple;
PyObject *const_str_plain_Reminder;
PyObject *const_tuple_str_digest_732122d9120dadcda91e3e6bb064d8be_tuple;
PyObject *const_str_plain_SMS;
PyObject *const_tuple_str_digest_97d59d6b5b7725007c49645b8fa81c50_tuple;
PyObject *const_str_plain_LoopingAlarm;
PyObject *const_tuple_str_digest_4baf348edfb95939e43b0d25df71f277_tuple;
PyObject *const_str_plain_LoopingAlarm2;
PyObject *const_tuple_str_digest_6cb5e6957f38ccf6edcc7c582c9418a0_tuple;
PyObject *const_str_plain_LoopingAlarm3;
PyObject *const_tuple_str_digest_9a6b8927f35ae384f87d15579de1ea0f_tuple;
PyObject *const_str_plain_LoopingAlarm4;
PyObject *const_tuple_str_digest_e4aff1e3eb28caa50ea7de6dc0d30bb2_tuple;
PyObject *const_str_plain_LoopingAlarm6;
PyObject *const_tuple_str_digest_8812ddee14dced38c4e957b5c0effb9c_tuple;
PyObject *const_str_plain_LoopingAlarm8;
PyObject *const_tuple_str_digest_761613cf99beb2bef6c6d5ce131c11df_tuple;
PyObject *const_str_plain_LoopingAlarm9;
PyObject *const_tuple_str_digest_7e4dd3cc496631c69a3ece268356e3e5_tuple;
PyObject *const_str_plain_LoopingAlarm10;
PyObject *const_tuple_str_digest_f985457418493fd0cc1077302634291f_tuple;
PyObject *const_str_plain_LoopingCall;
PyObject *const_tuple_str_digest_4bc3c86c1d1ee4a591c455593dfc9832_tuple;
PyObject *const_str_plain_LoopingCall2;
PyObject *const_tuple_str_digest_1638db72e2f7f29131483695d50e8e88_tuple;
PyObject *const_str_plain_LoopingCall3;
PyObject *const_tuple_str_digest_02bbf73b780db6b27cbefcb830f2f4d8_tuple;
PyObject *const_str_plain_LoopingCall4;
PyObject *const_tuple_str_digest_b4cc6ae02a5f779e3661511004965fff_tuple;
PyObject *const_str_plain_LoopingCall5;
PyObject *const_tuple_str_digest_604588c07a54879331c0e4e669e9daea_tuple;
PyObject *const_str_plain_LoopingCall6;
PyObject *const_tuple_str_digest_c0a72879c1970b22080a00aae0547fef_tuple;
PyObject *const_str_plain_LoopingCall7;
PyObject *const_tuple_str_digest_1da470de6f0cecc9014673d44bcf7b91_tuple;
PyObject *const_str_plain_LoopingCall8;
PyObject *const_tuple_str_digest_b56491ae89b218cd283a8775c758f3dd_tuple;
PyObject *const_str_plain_LoopingCall9;
PyObject *const_tuple_str_digest_f67b3e588f682481dcfada4afe2fce71_tuple;
PyObject *const_str_plain_LoopingCall10;
PyObject *const_tuple_str_plain_silent_tuple;
PyObject *const_str_plain_Silent;
PyObject *const_str_digest_dab2a552be200152f95316b77fe6c044;
PyObject *const_str_digest_3258cba7275b34aa49779e6e85212915;
PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("winotify.audio"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_04a298d00994ff19a5752ee666d3ff81);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sound);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_779f199dd930572ff97193f77133beeb);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c84aee2a5561f335f68b65ade825a896_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Default);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9c6e41c9b03222975bfa81c39e82eb51_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_IM);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3c86625a0d59330cb8c233cf8a7150cb_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mail);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3f0d56788fe7b34e2b024d7ada319c3e_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Reminder);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_732122d9120dadcda91e3e6bb064d8be_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMS);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_97d59d6b5b7725007c49645b8fa81c50_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4baf348edfb95939e43b0d25df71f277_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm2);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6cb5e6957f38ccf6edcc7c582c9418a0_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm3);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9a6b8927f35ae384f87d15579de1ea0f_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm4);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e4aff1e3eb28caa50ea7de6dc0d30bb2_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm6);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8812ddee14dced38c4e957b5c0effb9c_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm8);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_761613cf99beb2bef6c6d5ce131c11df_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm9);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7e4dd3cc496631c69a3ece268356e3e5_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm10);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f985457418493fd0cc1077302634291f_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4bc3c86c1d1ee4a591c455593dfc9832_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall2);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1638db72e2f7f29131483695d50e8e88_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall3);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_02bbf73b780db6b27cbefcb830f2f4d8_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall4);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b4cc6ae02a5f779e3661511004965fff_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall5);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_604588c07a54879331c0e4e669e9daea_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall6);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c0a72879c1970b22080a00aae0547fef_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall7);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1da470de6f0cecc9014673d44bcf7b91_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall8);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b56491ae89b218cd283a8775c758f3dd_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall9);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f67b3e588f682481dcfada4afe2fce71_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall10);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Silent);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_dab2a552be200152f95316b77fe6c044);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_3258cba7275b34aa49779e6e85212915);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_winotify$audio(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_04a298d00994ff19a5752ee666d3ff81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04a298d00994ff19a5752ee666d3ff81);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sound);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_779f199dd930572ff97193f77133beeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_779f199dd930572ff97193f77133beeb);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c84aee2a5561f335f68b65ade825a896_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c84aee2a5561f335f68b65ade825a896_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Default);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9c6e41c9b03222975bfa81c39e82eb51_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9c6e41c9b03222975bfa81c39e82eb51_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_IM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IM);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3c86625a0d59330cb8c233cf8a7150cb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3c86625a0d59330cb8c233cf8a7150cb_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mail);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3f0d56788fe7b34e2b024d7ada319c3e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3f0d56788fe7b34e2b024d7ada319c3e_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Reminder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Reminder);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_732122d9120dadcda91e3e6bb064d8be_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_732122d9120dadcda91e3e6bb064d8be_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SMS);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_97d59d6b5b7725007c49645b8fa81c50_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_97d59d6b5b7725007c49645b8fa81c50_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4baf348edfb95939e43b0d25df71f277_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4baf348edfb95939e43b0d25df71f277_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm2);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6cb5e6957f38ccf6edcc7c582c9418a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6cb5e6957f38ccf6edcc7c582c9418a0_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm3);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9a6b8927f35ae384f87d15579de1ea0f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9a6b8927f35ae384f87d15579de1ea0f_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm4);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e4aff1e3eb28caa50ea7de6dc0d30bb2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e4aff1e3eb28caa50ea7de6dc0d30bb2_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm6);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8812ddee14dced38c4e957b5c0effb9c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8812ddee14dced38c4e957b5c0effb9c_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm8);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_761613cf99beb2bef6c6d5ce131c11df_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_761613cf99beb2bef6c6d5ce131c11df_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm9);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7e4dd3cc496631c69a3ece268356e3e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7e4dd3cc496631c69a3ece268356e3e5_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingAlarm10));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingAlarm10);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f985457418493fd0cc1077302634291f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f985457418493fd0cc1077302634291f_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4bc3c86c1d1ee4a591c455593dfc9832_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4bc3c86c1d1ee4a591c455593dfc9832_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall2);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1638db72e2f7f29131483695d50e8e88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1638db72e2f7f29131483695d50e8e88_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall3);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_02bbf73b780db6b27cbefcb830f2f4d8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_02bbf73b780db6b27cbefcb830f2f4d8_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall4);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b4cc6ae02a5f779e3661511004965fff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b4cc6ae02a5f779e3661511004965fff_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall5);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_604588c07a54879331c0e4e669e9daea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_604588c07a54879331c0e4e669e9daea_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall6);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c0a72879c1970b22080a00aae0547fef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c0a72879c1970b22080a00aae0547fef_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall7);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1da470de6f0cecc9014673d44bcf7b91_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1da470de6f0cecc9014673d44bcf7b91_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall8);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b56491ae89b218cd283a8775c758f3dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b56491ae89b218cd283a8775c758f3dd_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall9);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f67b3e588f682481dcfada4afe2fce71_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f67b3e588f682481dcfada4afe2fce71_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoopingCall10));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoopingCall10);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_silent_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Silent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Silent);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_dab2a552be200152f95316b77fe6c044));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dab2a552be200152f95316b77fe6c044);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_3258cba7275b34aa49779e6e85212915));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3258cba7275b34aa49779e6e85212915);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_s_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_winotify$audio$Sound(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$audio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$audio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Sound);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$audio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sound);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sound, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sound);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sound, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Sound);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Sound);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sound);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$audio$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$audio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$audio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$audio->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_498b939953cc6c6c7f89af46e32c7bdf;
static PyCodeObject *code_objects_3275f48a2365387e8c5bc8173797d815;
static PyCodeObject *code_objects_7c98a252564df432591019978fbc9960;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dab2a552be200152f95316b77fe6c044); CHECK_OBJECT(module_filename_obj);
code_objects_498b939953cc6c6c7f89af46e32c7bdf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_3258cba7275b34aa49779e6e85212915, mod_consts.const_str_digest_3258cba7275b34aa49779e6e85212915, NULL, NULL, 0, 0, 0);
code_objects_3275f48a2365387e8c5bc8173797d815 = MAKE_CODE_OBJECT(module_filename_obj, 2, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_779f199dd930572ff97193f77133beeb, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple, NULL, 2, 0, 0);
code_objects_7c98a252564df432591019978fbc9960 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_winotify$audio$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$audio$$$function__2___str__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_winotify$audio$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_s = python_pars[1];
struct Nuitka_FrameObject *frame_frame_winotify$audio$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$audio$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$audio$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_winotify$audio$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$audio$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$audio$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3275f48a2365387e8c5bc8173797d815, module_winotify$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$audio$$$function__1___init__->m_type_description == NULL);
frame_frame_winotify$audio$$$function__1___init__ = cache_frame_frame_winotify$audio$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$audio$$$function__1___init__);
assert(Py_REFCNT(frame_frame_winotify$audio$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_s);
tmp_assattr_value_1 = par_s;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_s, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$audio$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$audio$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$audio$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$audio$$$function__1___init__,
    type_description_1,
    par_self,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_winotify$audio$$$function__1___init__ == cache_frame_frame_winotify$audio$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$audio$$$function__1___init__);
    cache_frame_frame_winotify$audio$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_winotify$audio$$$function__1___init__);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$audio$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$audio$$$function__2___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$audio$$$function__2___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$audio$$$function__2___str__)) {
    Py_XDECREF(cache_frame_frame_winotify$audio$$$function__2___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$audio$$$function__2___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$audio$$$function__2___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7c98a252564df432591019978fbc9960, module_winotify$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$audio$$$function__2___str__->m_type_description == NULL);
frame_frame_winotify$audio$$$function__2___str__ = cache_frame_frame_winotify$audio$$$function__2___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$audio$$$function__2___str__);
assert(Py_REFCNT(frame_frame_winotify$audio$$$function__2___str__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_s);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$audio$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$audio$$$function__2___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$audio$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$audio$$$function__2___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$audio$$$function__2___str__ == cache_frame_frame_winotify$audio$$$function__2___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$audio$$$function__2___str__);
    cache_frame_frame_winotify$audio$$$function__2___str__ = NULL;
}

assertFrameObject(frame_frame_winotify$audio$$$function__2___str__);

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



static PyObject *MAKE_FUNCTION_winotify$audio$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$audio$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_779f199dd930572ff97193f77133beeb,
#endif
        code_objects_3275f48a2365387e8c5bc8173797d815,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$audio$$$function__2___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$audio$$$function__2___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4df92bbe6ac5a50d4bb93dd9b88f9257,
#endif
        code_objects_7c98a252564df432591019978fbc9960,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$audio,
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

static function_impl_code const function_table_winotify$audio[] = {
impl_winotify$audio$$$function__1___init__,
impl_winotify$audio$$$function__2___str__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_winotify$audio);
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
        module_winotify$audio,
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
        function_table_winotify$audio,
        sizeof(function_table_winotify$audio) / sizeof(function_impl_code)
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
static char const *module_full_name = "winotify.audio";
#endif

// Internal entry point for module code.
PyObject *module_code_winotify$audio(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("winotify$audio");

    // Store the module for future use.
    module_winotify$audio = module;

    moduledict_winotify$audio = MODULE_DICT(module_winotify$audio);

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
        PRINT_STRING("winotify$audio: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("winotify$audio: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("winotify$audio: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify.audio" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwinotify$audio\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_winotify$audio,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_winotify$audio,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_winotify$audio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_winotify$audio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_winotify$audio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_winotify$audio);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_winotify$audio);
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

        UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$audio;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_winotify$audio$$$class__1_Sound_1 = NULL;
PyObject *tmp_dictset_value;
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
UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_winotify$audio = MAKE_MODULE_FRAME(code_objects_498b939953cc6c6c7f89af46e32c7bdf, module_winotify$audio);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$audio);
assert(Py_REFCNT(frame_frame_winotify$audio) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_winotify$audio$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_winotify$audio$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_winotify$audio$$$class__1_Sound_1 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_04a298d00994ff19a5752ee666d3ff81;
tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Sound;
tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_int_pos_1;
tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$audio$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$audio$$$function__2___str__(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_s_tuple;
tmp_result = DICT_SET_ITEM(locals_winotify$audio$$$class__1_Sound_1, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_Sound;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_winotify$audio$$$class__1_Sound_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_winotify$audio->m_frame.f_lineno = 1;
tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_7;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_6 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_6);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_winotify$audio$$$class__1_Sound_1);
locals_winotify$audio$$$class__1_Sound_1 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$audio$$$class__1_Sound_1);
locals_winotify$audio$$$class__1_Sound_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 1;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Sound, tmp_assign_source_6);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_winotify$audio$Sound(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_winotify$audio->m_frame.f_lineno = 9;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c84aee2a5561f335f68b65ade825a896_tuple);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Default, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 10;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_9c6e41c9b03222975bfa81c39e82eb51_tuple);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_IM, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 11;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_3c86625a0d59330cb8c233cf8a7150cb_tuple);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Mail, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 12;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_3f0d56788fe7b34e2b024d7ada319c3e_tuple);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Reminder, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 13;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_732122d9120dadcda91e3e6bb064d8be_tuple);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_SMS, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 14;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_97d59d6b5b7725007c49645b8fa81c50_tuple);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 15;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_4baf348edfb95939e43b0d25df71f277_tuple);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm2, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 16;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_6cb5e6957f38ccf6edcc7c582c9418a0_tuple);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm3, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_10;
tmp_called_value_10 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 17;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_digest_9a6b8927f35ae384f87d15579de1ea0f_tuple);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm4, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_11;
tmp_called_value_11 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 18;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_digest_e4aff1e3eb28caa50ea7de6dc0d30bb2_tuple);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm6, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_12;
tmp_called_value_12 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 19;
tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_digest_8812ddee14dced38c4e957b5c0effb9c_tuple);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm8, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_13;
tmp_called_value_13 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 20;
tmp_assign_source_19 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_digest_761613cf99beb2bef6c6d5ce131c11df_tuple);

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm9, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 21;
tmp_assign_source_20 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_digest_7e4dd3cc496631c69a3ece268356e3e5_tuple);

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingAlarm10, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_15;
tmp_called_value_15 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 22;
tmp_assign_source_21 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_digest_f985457418493fd0cc1077302634291f_tuple);

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_16;
tmp_called_value_16 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 23;
tmp_assign_source_22 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_digest_4bc3c86c1d1ee4a591c455593dfc9832_tuple);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall2, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_17;
tmp_called_value_17 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 24;
tmp_assign_source_23 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_digest_1638db72e2f7f29131483695d50e8e88_tuple);

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall3, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_18;
tmp_called_value_18 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 25;
tmp_assign_source_24 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_18, mod_consts.const_tuple_str_digest_02bbf73b780db6b27cbefcb830f2f4d8_tuple);

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall4, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_19;
tmp_called_value_19 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 26;
tmp_assign_source_25 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts.const_tuple_str_digest_b4cc6ae02a5f779e3661511004965fff_tuple);

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall5, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_20;
tmp_called_value_20 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 27;
tmp_assign_source_26 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_20, mod_consts.const_tuple_str_digest_604588c07a54879331c0e4e669e9daea_tuple);

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall6, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_21;
tmp_called_value_21 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 28;
tmp_assign_source_27 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_21, mod_consts.const_tuple_str_digest_c0a72879c1970b22080a00aae0547fef_tuple);

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall7, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_22;
tmp_called_value_22 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 29;
tmp_assign_source_28 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_22, mod_consts.const_tuple_str_digest_1da470de6f0cecc9014673d44bcf7b91_tuple);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall8, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_23;
tmp_called_value_23 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 30;
tmp_assign_source_29 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_23, mod_consts.const_tuple_str_digest_b56491ae89b218cd283a8775c758f3dd_tuple);

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall9, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_24;
tmp_called_value_24 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 31;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_24, mod_consts.const_tuple_str_digest_f67b3e588f682481dcfada4afe2fce71_tuple);

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_LoopingCall10, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_25;
tmp_called_value_25 = module_var_accessor_winotify$audio$Sound(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sound);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
frame_frame_winotify$audio->m_frame.f_lineno = 32;
tmp_assign_source_31 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_25, mod_consts.const_tuple_str_plain_silent_tuple);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$audio, (Nuitka_StringObject *)mod_consts.const_str_plain_Silent, tmp_assign_source_31);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$audio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$audio->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$audio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_winotify$audio);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("winotify$audio", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify.audio" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_winotify$audio);
    return module_winotify$audio;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$audio, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("winotify$audio", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'notify'
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



/* The "module_notify" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_notify;
PyDictObject *moduledict_notify;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_winotify;
PyObject *const_tuple_str_plain_Notification_str_plain_audio_tuple;
PyObject *const_str_plain_Notification;
PyObject *const_str_plain_audio;
PyObject *const_str_plain_YourAssistantCoder;
PyObject *const_str_plain_critical;
PyObject *const_str_plain_long;
PyObject *const_str_plain_short;
PyObject *const_tuple_ee8397d90279a8d0d4e97a67095557ec_tuple;
PyObject *const_str_plain_set_audio;
PyObject *const_str_plain_Reminder;
PyObject *const_dict_d9a57ecbffa479c458f05321ad822509;
PyObject *const_str_plain_show;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_user32;
PyObject *const_str_plain_MessageBoxW;
PyObject *const_int_pos_64;
PyObject *const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_run;
PyObject *const_str_digest_4d49e48774fce5806f9ec323133c7275;
PyObject *const_str_digest_7665ac667d3db26fedd965f4be5df91d;
PyObject *const_str_digest_7d3ae9489dbefcf42b9cd421336e8c03;
PyObject *const_dict_2dcbfbebb4403b834473b695e9a2dfff;
PyObject *const_str_plain_TimeoutExpired;
PyObject *const_str_digest_2ac96ec63cd7c3cbe7349443da1e4239;
PyObject *const_str_plain_wall;
PyObject *const_str_digest_8855701664238f2c8ac50b0aef4f3a91;
PyObject *const_str_digest_77b074f4bb013193ad740cf69d294286;
PyObject *const_str_chr_34;
PyObject *const_str_digest_0baa25a0bcd49b18f540f40734473ca3;
PyObject *const_str_plain_osascript;
PyObject *const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc;
PyObject *const_str_plain_OS;
PyObject *const_str_plain_Windows;
PyObject *const_str_plain__notify_windows;
PyObject *const_str_plain_Linux;
PyObject *const_str_plain__notify_linux;
PyObject *const_str_plain_Darwin;
PyObject *const_str_plain__notify_macos;
PyObject *const_str_digest_112eb5ec5c3f0248fd1e15f1890a08c1;
PyObject *const_str_plain_PFPSNotify;
PyObject *const_str_digest_59731f3bd8d74e0664f52572925ec5cd;
PyObject *const_str_digest_0e69b59ed183d8621b09060e1eb5e90b;
PyObject *const_str_digest_670555a8aa36397b65be6939bc3869a1;
PyObject *const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98;
PyObject *const_str_digest_6c6ecdbe3452d96d7cc7e20d3df0ae35;
PyObject *const_str_digest_5901e71afc3ce5fce4fb523ce77b5fd0;
PyObject *const_str_digest_1c68d6ba6f973f7aead928594d574353;
PyObject *const_str_digest_290554058c81ca2d815599ffeebc753a;
PyObject *const_str_digest_2ae151231ce6845ef4ccb5f4273af8d2;
PyObject *const_str_digest_8dfa52f9e79feddf3119e4136755d02f;
PyObject *const_dict_db67701c6b3cfd5044b091868678eef1;
PyObject *const_str_digest_5cee1bd2ef92c017e511a244dfd7100f;
PyObject *const_str_digest_2b2af5b61223bb34105010c90ae8f695;
PyObject *const_str_digest_2bea82ce832728a824be057b630abb26;
PyObject *const_dict_4b74998358c3aa032f95150b3333892e;
PyObject *const_str_digest_9994f5106c5120b01102ad924d3904c7;
PyObject *const_str_digest_3a1fe8bee13bd4cc08c0f423e2b081c4;
PyObject *const_str_digest_f0ad4b495d243ea71138c735cd7435ff;
PyObject *const_str_digest_ce768067367fa83b407933a10aca5ee2;
PyObject *const_str_digest_eb537882923a59bc19b787e64228f71c;
PyObject *const_str_digest_a7622c546807c2d7a99e3a2ffb4ed871;
PyObject *const_str_digest_4ccce4df0c5615c76d42aa14d5e3d0e5;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_system;
PyObject *const_tuple_str_plain_normal_tuple;
PyObject *const_dict_d6c08770ae56fee7ff45c2baae73cddb;
PyObject *const_dict_0778d77a7b85031b0481c39e3f490256;
PyObject *const_str_plain_notify_token_expired;
PyObject *const_dict_9d50e03d6f854bece3847d623f49463a;
PyObject *const_str_plain_notify_op_limit;
PyObject *const_dict_bd8762a12a80f6543bcd756a7ff48ef3;
PyObject *const_str_plain_notify_contention;
PyObject *const_dict_654fc91c62528207b980d61d6d0837aa;
PyObject *const_str_plain_notify_suspicious_chain;
PyObject *const_dict_b6e39d0a35e583f64c4625cd294acb81;
PyObject *const_str_plain_notify_dirty_session;
PyObject *const_str_plain_notify_agent_resumed;
PyObject *const_str_digest_3785295f77d66d22e30507ca47fdd621;
PyObject *const_str_digest_810f288b65c5c4d4810a9f29de38b3c5;
PyObject *const_tuple_str_plain_title_str_plain_message_str_plain_urgency_tuple;
PyObject *const_tuple_8484b9a83ea79e3f08b5a94378e1d34f_tuple;
PyObject *const_tuple_efb404813e7a176fc247786e41740441_tuple;
PyObject *const_tuple_5d885f630218324abca44cc88b35b77c_tuple;
PyObject *const_tuple_str_plain_filename_tuple;
PyObject *const_tuple_str_plain_session_id_tuple;
PyObject *const_tuple_str_plain_session_id_str_plain_limit_tuple;
PyObject *const_tuple_str_plain_filename_str_plain_chain_str_plain_chain_str_tuple;
PyObject *const_tuple_str_plain_role_str_plain_session_id_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("notify"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_winotify);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Notification_str_plain_audio_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Notification);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_YourAssistantCoder);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_critical);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_long);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_short);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_ee8397d90279a8d0d4e97a67095557ec_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_audio);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Reminder);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_d9a57ecbffa479c458f05321ad822509);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_user32);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageBoxW);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d49e48774fce5806f9ec323133c7275);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_7665ac667d3db26fedd965f4be5df91d);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d3ae9489dbefcf42b9cd421336e8c03);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutExpired);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ac96ec63cd7c3cbe7349443da1e4239);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_wall);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_8855701664238f2c8ac50b0aef4f3a91);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_77b074f4bb013193ad740cf69d294286);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_0baa25a0bcd49b18f540f40734473ca3);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_osascript);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_OS);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Windows);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__notify_windows);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Linux);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__notify_linux);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Darwin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__notify_macos);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_112eb5ec5c3f0248fd1e15f1890a08c1);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_PFPSNotify);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_59731f3bd8d74e0664f52572925ec5cd);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e69b59ed183d8621b09060e1eb5e90b);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_670555a8aa36397b65be6939bc3869a1);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c6ecdbe3452d96d7cc7e20d3df0ae35);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_5901e71afc3ce5fce4fb523ce77b5fd0);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c68d6ba6f973f7aead928594d574353);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_290554058c81ca2d815599ffeebc753a);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ae151231ce6845ef4ccb5f4273af8d2);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dfa52f9e79feddf3119e4136755d02f);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_db67701c6b3cfd5044b091868678eef1);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b2af5b61223bb34105010c90ae8f695);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bea82ce832728a824be057b630abb26);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_4b74998358c3aa032f95150b3333892e);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_9994f5106c5120b01102ad924d3904c7);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a1fe8bee13bd4cc08c0f423e2b081c4);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0ad4b495d243ea71138c735cd7435ff);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce768067367fa83b407933a10aca5ee2);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb537882923a59bc19b787e64228f71c);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7622c546807c2d7a99e3a2ffb4ed871);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ccce4df0c5615c76d42aa14d5e3d0e5);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_system);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normal_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_dict_0778d77a7b85031b0481c39e3f490256);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_token_expired);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_9d50e03d6f854bece3847d623f49463a);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_op_limit);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_contention);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_dict_654fc91c62528207b980d61d6d0837aa);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_suspicious_chain);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_dirty_session);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_agent_resumed);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_3785295f77d66d22e30507ca47fdd621);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_810f288b65c5c4d4810a9f29de38b3c5);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_str_plain_message_str_plain_urgency_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_8484b9a83ea79e3f08b5a94378e1d34f_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_efb404813e7a176fc247786e41740441_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_5d885f630218324abca44cc88b35b77c_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_str_plain_limit_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_chain_str_plain_chain_str_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_session_id_tuple);
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
void checkModuleConstants_notify(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_winotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winotify);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Notification_str_plain_audio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Notification_str_plain_audio_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Notification));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Notification);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_YourAssistantCoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_YourAssistantCoder);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_critical));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_critical);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_long));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_long);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_short));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_short);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_ee8397d90279a8d0d4e97a67095557ec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ee8397d90279a8d0d4e97a67095557ec_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_audio);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Reminder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Reminder);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_d9a57ecbffa479c458f05321ad822509));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d9a57ecbffa479c458f05321ad822509);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_show));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_windll);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_user32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user32);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageBoxW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageBoxW);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d49e48774fce5806f9ec323133c7275));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d49e48774fce5806f9ec323133c7275);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_7665ac667d3db26fedd965f4be5df91d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7665ac667d3db26fedd965f4be5df91d);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d3ae9489dbefcf42b9cd421336e8c03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d3ae9489dbefcf42b9cd421336e8c03);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutExpired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutExpired);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ac96ec63cd7c3cbe7349443da1e4239));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ac96ec63cd7c3cbe7349443da1e4239);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_wall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wall);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_8855701664238f2c8ac50b0aef4f3a91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8855701664238f2c8ac50b0aef4f3a91);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_77b074f4bb013193ad740cf69d294286));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77b074f4bb013193ad740cf69d294286);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_chr_34));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_34);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_0baa25a0bcd49b18f540f40734473ca3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0baa25a0bcd49b18f540f40734473ca3);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_osascript));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_osascript);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_OS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OS);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Windows);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__notify_windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__notify_windows);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Linux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Linux);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__notify_linux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__notify_linux);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Darwin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Darwin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__notify_macos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__notify_macos);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_112eb5ec5c3f0248fd1e15f1890a08c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_112eb5ec5c3f0248fd1e15f1890a08c1);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_PFPSNotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PFPSNotify);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_59731f3bd8d74e0664f52572925ec5cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59731f3bd8d74e0664f52572925ec5cd);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e69b59ed183d8621b09060e1eb5e90b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e69b59ed183d8621b09060e1eb5e90b);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_670555a8aa36397b65be6939bc3869a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_670555a8aa36397b65be6939bc3869a1);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98));
CHECK_OBJECT_DEEP(mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c6ecdbe3452d96d7cc7e20d3df0ae35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c6ecdbe3452d96d7cc7e20d3df0ae35);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_5901e71afc3ce5fce4fb523ce77b5fd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5901e71afc3ce5fce4fb523ce77b5fd0);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c68d6ba6f973f7aead928594d574353));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c68d6ba6f973f7aead928594d574353);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_290554058c81ca2d815599ffeebc753a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_290554058c81ca2d815599ffeebc753a);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ae151231ce6845ef4ccb5f4273af8d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ae151231ce6845ef4ccb5f4273af8d2);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dfa52f9e79feddf3119e4136755d02f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dfa52f9e79feddf3119e4136755d02f);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_db67701c6b3cfd5044b091868678eef1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_db67701c6b3cfd5044b091868678eef1);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b2af5b61223bb34105010c90ae8f695));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b2af5b61223bb34105010c90ae8f695);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bea82ce832728a824be057b630abb26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bea82ce832728a824be057b630abb26);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_4b74998358c3aa032f95150b3333892e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4b74998358c3aa032f95150b3333892e);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_9994f5106c5120b01102ad924d3904c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9994f5106c5120b01102ad924d3904c7);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a1fe8bee13bd4cc08c0f423e2b081c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a1fe8bee13bd4cc08c0f423e2b081c4);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0ad4b495d243ea71138c735cd7435ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0ad4b495d243ea71138c735cd7435ff);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce768067367fa83b407933a10aca5ee2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce768067367fa83b407933a10aca5ee2);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb537882923a59bc19b787e64228f71c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb537882923a59bc19b787e64228f71c);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7622c546807c2d7a99e3a2ffb4ed871));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7622c546807c2d7a99e3a2ffb4ed871);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ccce4df0c5615c76d42aa14d5e3d0e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ccce4df0c5615c76d42aa14d5e3d0e5);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_system));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_normal_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_dict_0778d77a7b85031b0481c39e3f490256));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0778d77a7b85031b0481c39e3f490256);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_token_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_token_expired);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_9d50e03d6f854bece3847d623f49463a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9d50e03d6f854bece3847d623f49463a);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_op_limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_op_limit);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_contention));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_contention);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_dict_654fc91c62528207b980d61d6d0837aa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_654fc91c62528207b980d61d6d0837aa);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_suspicious_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_suspicious_chain);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_dirty_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_dirty_session);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_agent_resumed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_agent_resumed);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_3785295f77d66d22e30507ca47fdd621));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3785295f77d66d22e30507ca47fdd621);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_810f288b65c5c4d4810a9f29de38b3c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_810f288b65c5c4d4810a9f29de38b3c5);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_str_plain_message_str_plain_urgency_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_title_str_plain_message_str_plain_urgency_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_8484b9a83ea79e3f08b5a94378e1d34f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8484b9a83ea79e3f08b5a94378e1d34f_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_efb404813e7a176fc247786e41740441_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_efb404813e7a176fc247786e41740441_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_5d885f630218324abca44cc88b35b77c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5d885f630218324abca44cc88b35b77c_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_id_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_str_plain_limit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_id_str_plain_limit_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_chain_str_plain_chain_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_str_plain_chain_str_plain_chain_str_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_role_str_plain_session_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_role_str_plain_session_id_tuple);
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
static PyObject *module_var_accessor_notify$OS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_OS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_OS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_OS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OS);
    }

    return result;
}

static PyObject *module_var_accessor_notify$PFPSNotify(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PFPSNotify);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PFPSNotify, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PFPSNotify);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PFPSNotify, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify);
    }

    return result;
}

static PyObject *module_var_accessor_notify$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_notify$_notify_linux(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_linux);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_linux);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_linux, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_linux);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_linux, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_linux);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_linux);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_linux);
    }

    return result;
}

static PyObject *module_var_accessor_notify$_notify_macos(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_macos);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_macos);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_macos, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_macos);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_macos, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_macos);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_macos);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_macos);
    }

    return result;
}

static PyObject *module_var_accessor_notify$_notify_windows(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_windows);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_windows);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_windows, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__notify_windows);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__notify_windows, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_windows);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_windows);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_windows);
    }

    return result;
}

static PyObject *module_var_accessor_notify$platform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_notify$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_notify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_notify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_notify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_00050a25d88dbac088258c201b52db76;
static PyCodeObject *code_objects_aba1a74868e9a925ae9d5c4b84ccb681;
static PyCodeObject *code_objects_e11913baf6883696f34971c6542cf1bd;
static PyCodeObject *code_objects_e7b1fad2c18b69f8c6d5d80e1b087e16;
static PyCodeObject *code_objects_9e3a64259c079435f626d0f0d2f417a6;
static PyCodeObject *code_objects_b7f64b3316b10a3d2bdd9b0cb596ef3d;
static PyCodeObject *code_objects_731d914ffa67613bb871e0f0f44f9dbd;
static PyCodeObject *code_objects_fc7a8f9d3dc85df03933136457adb372;
static PyCodeObject *code_objects_f3286aa4f195a58cfcbbcd69ea8796ae;
static PyCodeObject *code_objects_bed10ada48cac2ea3cc0f09fd72a9d4f;
static PyCodeObject *code_objects_f85c981aa35d8fab213b52a431ab2321;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3785295f77d66d22e30507ca47fdd621); CHECK_OBJECT(module_filename_obj);
code_objects_00050a25d88dbac088258c201b52db76 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_810f288b65c5c4d4810a9f29de38b3c5, mod_consts.const_str_digest_810f288b65c5c4d4810a9f29de38b3c5, NULL, NULL, 0, 0, 0);
code_objects_aba1a74868e9a925ae9d5c4b84ccb681 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_PFPSNotify, mod_consts.const_str_plain_PFPSNotify, mod_consts.const_tuple_str_plain_title_str_plain_message_str_plain_urgency_tuple, NULL, 3, 0, 0);
code_objects_e11913baf6883696f34971c6542cf1bd = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__notify_linux, mod_consts.const_str_plain__notify_linux, mod_consts.const_tuple_8484b9a83ea79e3f08b5a94378e1d34f_tuple, NULL, 3, 0, 0);
code_objects_e7b1fad2c18b69f8c6d5d80e1b087e16 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__notify_macos, mod_consts.const_str_plain__notify_macos, mod_consts.const_tuple_efb404813e7a176fc247786e41740441_tuple, NULL, 3, 0, 0);
code_objects_9e3a64259c079435f626d0f0d2f417a6 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__notify_windows, mod_consts.const_str_plain__notify_windows, mod_consts.const_tuple_5d885f630218324abca44cc88b35b77c_tuple, NULL, 3, 0, 0);
code_objects_b7f64b3316b10a3d2bdd9b0cb596ef3d = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_agent_resumed, mod_consts.const_str_plain_notify_agent_resumed, mod_consts.const_tuple_str_plain_filename_tuple, NULL, 1, 0, 0);
code_objects_731d914ffa67613bb871e0f0f44f9dbd = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_contention, mod_consts.const_str_plain_notify_contention, mod_consts.const_tuple_str_plain_filename_tuple, NULL, 1, 0, 0);
code_objects_fc7a8f9d3dc85df03933136457adb372 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_dirty_session, mod_consts.const_str_plain_notify_dirty_session, mod_consts.const_tuple_str_plain_session_id_tuple, NULL, 1, 0, 0);
code_objects_f3286aa4f195a58cfcbbcd69ea8796ae = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_op_limit, mod_consts.const_str_plain_notify_op_limit, mod_consts.const_tuple_str_plain_session_id_str_plain_limit_tuple, NULL, 2, 0, 0);
code_objects_bed10ada48cac2ea3cc0f09fd72a9d4f = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_suspicious_chain, mod_consts.const_str_plain_notify_suspicious_chain, mod_consts.const_tuple_str_plain_filename_str_plain_chain_str_plain_chain_str_tuple, NULL, 2, 0, 0);
code_objects_f85c981aa35d8fab213b52a431ab2321 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_notify_token_expired, mod_consts.const_str_plain_notify_token_expired, mod_consts.const_tuple_str_plain_role_str_plain_session_id_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_notify$$$function__10_notify_agent_resumed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__1__notify_windows(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__2__notify_linux(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__3__notify_macos(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__4_PFPSNotify(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__5_notify_token_expired(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__6_notify_op_limit(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__7_notify_contention(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__8_notify_suspicious_chain(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_notify$$$function__9_notify_dirty_session(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_notify$$$function__1__notify_windows(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_urgency = python_pars[2];
PyObject *var_Notification = NULL;
PyObject *var_audio = NULL;
PyObject *var_toast = NULL;
PyObject *var_ctypes = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_notify$$$function__1__notify_windows;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__1__notify_windows = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_notify$$$function__1__notify_windows)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__1__notify_windows);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__1__notify_windows == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__1__notify_windows = MAKE_FUNCTION_FRAME(tstate, code_objects_9e3a64259c079435f626d0f0d2f417a6, module_notify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__1__notify_windows->m_type_description == NULL);
frame_frame_notify$$$function__1__notify_windows = cache_frame_frame_notify$$$function__1__notify_windows;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__1__notify_windows);
assert(Py_REFCNT(frame_frame_notify$$$function__1__notify_windows) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_winotify;
tmp_globals_arg_value_1 = (PyObject *)moduledict_notify;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Notification_str_plain_audio_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 14;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_notify,
        mod_consts.const_str_plain_Notification,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Notification);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(var_Notification == NULL);
var_Notification = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_notify,
        mod_consts.const_str_plain_audio,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_audio);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(var_audio == NULL);
var_audio = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_Notification);
tmp_called_value_1 = var_Notification;
tmp_kw_call_value_0_1 = mod_consts.const_str_plain_YourAssistantCoder;
CHECK_OBJECT(par_title);
tmp_kw_call_value_1_1 = par_title;
CHECK_OBJECT(par_message);
tmp_kw_call_value_2_1 = par_message;
CHECK_OBJECT(par_urgency);
tmp_cmp_expr_left_1 = par_urgency;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_critical;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_value_3_1 = mod_consts.const_str_plain_long;
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_value_3_1 = mod_consts.const_str_plain_short;
condexpr_end_1:;
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 15;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_ee8397d90279a8d0d4e97a67095557ec_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(var_toast == NULL);
var_toast = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_urgency);
tmp_cmp_expr_left_2 = par_urgency;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_critical;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(var_toast);
tmp_expression_value_1 = var_toast;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set_audio);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_audio);
tmp_expression_value_2 = var_audio;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Reminder);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 22;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d9a57ecbffa479c458f05321ad822509);
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 22;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_toast);
tmp_called_instance_1 = var_toast;
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 23;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_show);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__1__notify_windows, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__1__notify_windows, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_5 == NULL));
assert(var_ctypes == NULL);
Py_INCREF(tmp_assign_source_5);
var_ctypes = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_windll);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
CHECK_OBJECT(par_title);
tmp_args_element_value_3 = par_title;
tmp_args_element_value_4 = mod_consts.const_int_pos_64;
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 28;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_MessageBoxW,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__1__notify_windows, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__1__notify_windows, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_called_value_3 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_3 != NULL);
tmp_tuple_element_2 = mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_title);
tmp_format_value_1 = par_title;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_message);
tmp_format_value_2 = par_message;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = 30;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_notify$$$function__1__notify_windows->m_frame)) {
        frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_6;
branch_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 13;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_notify$$$function__1__notify_windows->m_frame)) {
        frame_frame_notify$$$function__1__notify_windows->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_4;
branch_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__1__notify_windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__1__notify_windows->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__1__notify_windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__1__notify_windows,
    type_description_1,
    par_title,
    par_message,
    par_urgency,
    var_Notification,
    var_audio,
    var_toast,
    var_ctypes
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__1__notify_windows == cache_frame_frame_notify$$$function__1__notify_windows) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__1__notify_windows);
    cache_frame_frame_notify$$$function__1__notify_windows = NULL;
}

assertFrameObject(frame_frame_notify$$$function__1__notify_windows);

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
Py_XDECREF(var_Notification);
var_Notification = NULL;
Py_XDECREF(var_audio);
var_audio = NULL;
Py_XDECREF(var_toast);
var_toast = NULL;
Py_XDECREF(var_ctypes);
var_ctypes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_Notification);
var_Notification = NULL;
Py_XDECREF(var_audio);
var_audio = NULL;
Py_XDECREF(var_toast);
var_toast = NULL;
Py_XDECREF(var_ctypes);
var_ctypes = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__2__notify_linux(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_urgency = python_pars[2];
PyObject *var_broadcast = NULL;
struct Nuitka_FrameObject *frame_frame_notify$$$function__2__notify_linux;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__2__notify_linux = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_notify$$$function__2__notify_linux)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__2__notify_linux);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__2__notify_linux == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__2__notify_linux = MAKE_FUNCTION_FRAME(tstate, code_objects_e11913baf6883696f34971c6542cf1bd, module_notify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__2__notify_linux->m_type_description == NULL);
frame_frame_notify$$$function__2__notify_linux = cache_frame_frame_notify$$$function__2__notify_linux;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__2__notify_linux);
assert(Py_REFCNT(frame_frame_notify$$$function__2__notify_linux) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_run);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_list_element_1 = mod_consts.const_str_digest_4d49e48774fce5806f9ec323133c7275;
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 7);
PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_digest_7665ac667d3db26fedd965f4be5df91d;
PyList_SET_ITEM0(tmp_tuple_element_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_urgency);
tmp_list_element_1 = par_urgency;
PyList_SET_ITEM0(tmp_tuple_element_1, 2, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_digest_7d3ae9489dbefcf42b9cd421336e8c03;
PyList_SET_ITEM0(tmp_tuple_element_1, 3, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_plain_YourAssistantCoder;
PyList_SET_ITEM0(tmp_tuple_element_1, 4, tmp_list_element_1);
CHECK_OBJECT(par_title);
tmp_list_element_1 = par_title;
PyList_SET_ITEM0(tmp_tuple_element_1, 5, tmp_list_element_1);
CHECK_OBJECT(par_message);
tmp_list_element_1 = par_message;
PyList_SET_ITEM0(tmp_tuple_element_1, 6, tmp_list_element_1);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff);
frame_frame_notify$$$function__2__notify_linux->m_frame.f_lineno = 36;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__2__notify_linux, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__2__notify_linux, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_2;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_2 = PyExc_FileNotFoundError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_2);
tmp_expression_value_2 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_TimeoutExpired);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 35;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_notify$$$function__2__notify_linux->m_frame)) {
        frame_frame_notify$$$function__2__notify_linux->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_no_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_2ac96ec63cd7c3cbe7349443da1e4239;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_title);
tmp_format_value_1 = par_title;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_message);
tmp_format_value_2 = par_message;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_broadcast == NULL);
var_broadcast = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_list_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_3 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_list_element_2 = mod_consts.const_str_plain_wall;
tmp_tuple_element_4 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_tuple_element_4, 0, tmp_list_element_2);
CHECK_OBJECT(var_broadcast);
tmp_list_element_2 = var_broadcast;
PyList_SET_ITEM0(tmp_tuple_element_4, 1, tmp_list_element_2);
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_4);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff);
frame_frame_notify$$$function__2__notify_linux->m_frame.f_lineno = 47;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__2__notify_linux, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__2__notify_linux, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_5;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_tuple_element_5 = PyExc_FileNotFoundError;
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_5);
tmp_expression_value_4 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_TimeoutExpired);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_cmp_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 45;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_notify$$$function__2__notify_linux->m_frame)) {
        frame_frame_notify$$$function__2__notify_linux->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__2__notify_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__2__notify_linux->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__2__notify_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__2__notify_linux,
    type_description_1,
    par_title,
    par_message,
    par_urgency,
    var_broadcast
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__2__notify_linux == cache_frame_frame_notify$$$function__2__notify_linux) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__2__notify_linux);
    cache_frame_frame_notify$$$function__2__notify_linux = NULL;
}

assertFrameObject(frame_frame_notify$$$function__2__notify_linux);

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
Py_XDECREF(var_broadcast);
var_broadcast = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_broadcast);
var_broadcast = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__3__notify_macos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_urgency = python_pars[2];
PyObject *var_script = NULL;
struct Nuitka_FrameObject *frame_frame_notify$$$function__3__notify_macos;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__3__notify_macos = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_notify$$$function__3__notify_macos)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__3__notify_macos);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__3__notify_macos == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__3__notify_macos = MAKE_FUNCTION_FRAME(tstate, code_objects_e7b1fad2c18b69f8c6d5d80e1b087e16, module_notify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__3__notify_macos->m_type_description == NULL);
frame_frame_notify$$$function__3__notify_macos = cache_frame_frame_notify$$$function__3__notify_macos;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__3__notify_macos);
assert(Py_REFCNT(frame_frame_notify$$$function__3__notify_macos) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8855701664238f2c8ac50b0aef4f3a91;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_message);
tmp_format_value_1 = par_message;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_77b074f4bb013193ad740cf69d294286;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_title);
tmp_format_value_2 = par_title;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_script == NULL);
var_script = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_urgency);
tmp_cmp_expr_left_1 = par_urgency;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_critical;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_script);
tmp_iadd_expr_left_1 = var_script;
tmp_iadd_expr_right_1 = mod_consts.const_str_digest_0baa25a0bcd49b18f540f40734473ca3;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_script = tmp_assign_source_2;

}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_list_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_run);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_list_element_1 = mod_consts.const_str_plain_osascript;
tmp_tuple_element_2 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_tuple_element_2, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc;
PyList_SET_ITEM0(tmp_tuple_element_2, 1, tmp_list_element_1);
CHECK_OBJECT(var_script);
tmp_list_element_1 = var_script;
PyList_SET_ITEM0(tmp_tuple_element_2, 2, tmp_list_element_1);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2dcbfbebb4403b834473b695e9a2dfff);
frame_frame_notify$$$function__3__notify_macos->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__3__notify_macos, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__3__notify_macos, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_3;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_tuple_element_3 = PyExc_FileNotFoundError;
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_3);
tmp_expression_value_2 = module_var_accessor_notify$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_TimeoutExpired);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_cmp_expr_right_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_4;
tmp_called_value_2 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_2 != NULL);
tmp_tuple_element_4 = mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_title);
tmp_format_value_3 = par_title;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_message);
tmp_format_value_4 = par_message;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_notify$$$function__3__notify_macos->m_frame.f_lineno = 59;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 53;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_notify$$$function__3__notify_macos->m_frame)) {
        frame_frame_notify$$$function__3__notify_macos->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__3__notify_macos, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__3__notify_macos->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__3__notify_macos, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__3__notify_macos,
    type_description_1,
    par_title,
    par_message,
    par_urgency,
    var_script
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__3__notify_macos == cache_frame_frame_notify$$$function__3__notify_macos) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__3__notify_macos);
    cache_frame_frame_notify$$$function__3__notify_macos = NULL;
}

assertFrameObject(frame_frame_notify$$$function__3__notify_macos);

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
Py_XDECREF(var_script);
var_script = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_script);
var_script = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__4_PFPSNotify(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_urgency = python_pars[2];
nuitka_bool tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_match_statement_1__subject = NULL;
struct Nuitka_FrameObject *frame_frame_notify$$$function__4_PFPSNotify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__4_PFPSNotify = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_FALSE;
tmp_match_statement_1__indicator = tmp_assign_source_1;
}
if (isFrameUnusable(cache_frame_frame_notify$$$function__4_PFPSNotify)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__4_PFPSNotify);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__4_PFPSNotify == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__4_PFPSNotify = MAKE_FUNCTION_FRAME(tstate, code_objects_aba1a74868e9a925ae9d5c4b84ccb681, module_notify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__4_PFPSNotify->m_type_description == NULL);
frame_frame_notify$$$function__4_PFPSNotify = cache_frame_frame_notify$$$function__4_PFPSNotify;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__4_PFPSNotify);
assert(Py_REFCNT(frame_frame_notify$$$function__4_PFPSNotify) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_notify$OS(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OS);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_match_statement_1__subject == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_match_statement_1__subject = tmp_assign_source_2;
}
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_cmp_expr_left_1 = tmp_match_statement_1__subject;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_Windows;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto try_except_handler_1;
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
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_notify$_notify_windows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__notify_windows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_title);
tmp_args_element_value_1 = par_title;
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
CHECK_OBJECT(par_urgency);
tmp_args_element_value_3 = par_urgency;
frame_frame_notify$$$function__4_PFPSNotify->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_TRUE;
tmp_match_statement_1__indicator = tmp_assign_source_3;
}
branch_no_1:;
{
bool tmp_condition_result_2;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_match_statement_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_FALSE;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_cmp_expr_left_3 = tmp_match_statement_1__subject;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_Linux;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_notify$_notify_linux(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__notify_linux);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_title);
tmp_args_element_value_4 = par_title;
CHECK_OBJECT(par_message);
tmp_args_element_value_5 = par_message;
CHECK_OBJECT(par_urgency);
tmp_args_element_value_6 = par_urgency;
frame_frame_notify$$$function__4_PFPSNotify->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_match_statement_1__indicator = tmp_assign_source_4;
}
branch_no_3:;
branch_no_2:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_match_statement_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_FALSE;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_cmp_expr_left_5 = tmp_match_statement_1__subject;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_Darwin;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_3 = module_var_accessor_notify$_notify_macos(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__notify_macos);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_title);
tmp_args_element_value_7 = par_title;
CHECK_OBJECT(par_message);
tmp_args_element_value_8 = par_message;
CHECK_OBJECT(par_urgency);
tmp_args_element_value_9 = par_urgency;
frame_frame_notify$$$function__4_PFPSNotify->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_match_statement_1__indicator = tmp_assign_source_5;
}
branch_no_5:;
branch_no_4:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_match_statement_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_FALSE;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_4 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_4 != NULL);
tmp_tuple_element_1 = mod_consts.const_str_digest_c0f751de27d7c4a991f3ea6f0bd46484;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_title);
tmp_format_value_1 = par_title;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_message);
tmp_format_value_2 = par_message;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_10 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_10 == NULL));
frame_frame_notify$$$function__4_PFPSNotify->m_frame.f_lineno = 72;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(tmp_match_statement_1__subject);
CHECK_OBJECT(tmp_match_statement_1__subject);
Py_DECREF(tmp_match_statement_1__subject);
tmp_match_statement_1__subject = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__4_PFPSNotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__4_PFPSNotify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__4_PFPSNotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__4_PFPSNotify,
    type_description_1,
    par_title,
    par_message,
    par_urgency
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__4_PFPSNotify == cache_frame_frame_notify$$$function__4_PFPSNotify) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__4_PFPSNotify);
    cache_frame_frame_notify$$$function__4_PFPSNotify = NULL;
}

assertFrameObject(frame_frame_notify$$$function__4_PFPSNotify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(tmp_match_statement_1__subject);
CHECK_OBJECT(tmp_match_statement_1__subject);
Py_DECREF(tmp_match_statement_1__subject);
tmp_match_statement_1__subject = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_urgency);
Py_DECREF(par_urgency);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__5_notify_token_expired(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_role = python_pars[0];
PyObject *par_session_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_notify$$$function__5_notify_token_expired;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__5_notify_token_expired = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_notify$$$function__5_notify_token_expired)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__5_notify_token_expired);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__5_notify_token_expired == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__5_notify_token_expired = MAKE_FUNCTION_FRAME(tstate, code_objects_f85c981aa35d8fab213b52a431ab2321, module_notify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__5_notify_token_expired->m_type_description == NULL);
frame_frame_notify$$$function__5_notify_token_expired = cache_frame_frame_notify$$$function__5_notify_token_expired;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__5_notify_token_expired);
assert(Py_REFCNT(frame_frame_notify$$$function__5_notify_token_expired) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_59731f3bd8d74e0664f52572925ec5cd;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_role);
tmp_format_value_1 = par_role;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_0e69b59ed183d8621b09060e1eb5e90b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_session_id);
tmp_format_value_2 = par_session_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_670555a8aa36397b65be6939bc3869a1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98);
frame_frame_notify$$$function__5_notify_token_expired->m_frame.f_lineno = 78;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__5_notify_token_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__5_notify_token_expired->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__5_notify_token_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__5_notify_token_expired,
    type_description_1,
    par_role,
    par_session_id
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__5_notify_token_expired == cache_frame_frame_notify$$$function__5_notify_token_expired) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__5_notify_token_expired);
    cache_frame_frame_notify$$$function__5_notify_token_expired = NULL;
}

assertFrameObject(frame_frame_notify$$$function__5_notify_token_expired);

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
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__6_notify_op_limit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_session_id = python_pars[0];
PyObject *par_limit = python_pars[1];
struct Nuitka_FrameObject *frame_frame_notify$$$function__6_notify_op_limit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__6_notify_op_limit = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_notify$$$function__6_notify_op_limit)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__6_notify_op_limit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__6_notify_op_limit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__6_notify_op_limit = MAKE_FUNCTION_FRAME(tstate, code_objects_f3286aa4f195a58cfcbbcd69ea8796ae, module_notify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__6_notify_op_limit->m_type_description == NULL);
frame_frame_notify$$$function__6_notify_op_limit = cache_frame_frame_notify$$$function__6_notify_op_limit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__6_notify_op_limit);
assert(Py_REFCNT(frame_frame_notify$$$function__6_notify_op_limit) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_6c6ecdbe3452d96d7cc7e20d3df0ae35;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_limit);
tmp_format_value_1 = par_limit;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_5901e71afc3ce5fce4fb523ce77b5fd0;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_session_id);
tmp_format_value_2 = par_session_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_1c68d6ba6f973f7aead928594d574353;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98);
frame_frame_notify$$$function__6_notify_op_limit->m_frame.f_lineno = 85;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__6_notify_op_limit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__6_notify_op_limit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__6_notify_op_limit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__6_notify_op_limit,
    type_description_1,
    par_session_id,
    par_limit
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__6_notify_op_limit == cache_frame_frame_notify$$$function__6_notify_op_limit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__6_notify_op_limit);
    cache_frame_frame_notify$$$function__6_notify_op_limit = NULL;
}

assertFrameObject(frame_frame_notify$$$function__6_notify_op_limit);

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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__7_notify_contention(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
struct Nuitka_FrameObject *frame_frame_notify$$$function__7_notify_contention;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__7_notify_contention = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_notify$$$function__7_notify_contention)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__7_notify_contention);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__7_notify_contention == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__7_notify_contention = MAKE_FUNCTION_FRAME(tstate, code_objects_731d914ffa67613bb871e0f0f44f9dbd, module_notify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__7_notify_contention->m_type_description == NULL);
frame_frame_notify$$$function__7_notify_contention = cache_frame_frame_notify$$$function__7_notify_contention;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__7_notify_contention);
assert(Py_REFCNT(frame_frame_notify$$$function__7_notify_contention) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_290554058c81ca2d815599ffeebc753a;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_2 = mod_consts.const_str_digest_2ae151231ce6845ef4ccb5f4273af8d2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_filename);
tmp_format_value_1 = par_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_8dfa52f9e79feddf3119e4136755d02f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_db67701c6b3cfd5044b091868678eef1);
frame_frame_notify$$$function__7_notify_contention->m_frame.f_lineno = 92;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__7_notify_contention, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__7_notify_contention->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__7_notify_contention, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__7_notify_contention,
    type_description_1,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__7_notify_contention == cache_frame_frame_notify$$$function__7_notify_contention) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__7_notify_contention);
    cache_frame_frame_notify$$$function__7_notify_contention = NULL;
}

assertFrameObject(frame_frame_notify$$$function__7_notify_contention);

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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__8_notify_suspicious_chain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
PyObject *par_chain = python_pars[1];
PyObject *var_chain_str = NULL;
struct Nuitka_FrameObject *frame_frame_notify$$$function__8_notify_suspicious_chain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__8_notify_suspicious_chain = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_notify$$$function__8_notify_suspicious_chain)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__8_notify_suspicious_chain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__8_notify_suspicious_chain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__8_notify_suspicious_chain = MAKE_FUNCTION_FRAME(tstate, code_objects_bed10ada48cac2ea3cc0f09fd72a9d4f, module_notify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__8_notify_suspicious_chain->m_type_description == NULL);
frame_frame_notify$$$function__8_notify_suspicious_chain = cache_frame_frame_notify$$$function__8_notify_suspicious_chain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__8_notify_suspicious_chain);
assert(Py_REFCNT(frame_frame_notify$$$function__8_notify_suspicious_chain) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_digest_5cee1bd2ef92c017e511a244dfd7100f;
CHECK_OBJECT(par_chain);
tmp_iterable_value_1 = par_chain;
tmp_assign_source_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_chain_str == NULL);
var_chain_str = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_2b2af5b61223bb34105010c90ae8f695;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_2 = mod_consts.const_str_digest_2bea82ce832728a824be057b630abb26;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_filename);
tmp_format_value_1 = par_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_chain_str);
tmp_tuple_element_2 = var_chain_str;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_4b74998358c3aa032f95150b3333892e);
frame_frame_notify$$$function__8_notify_suspicious_chain->m_frame.f_lineno = 100;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__8_notify_suspicious_chain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__8_notify_suspicious_chain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__8_notify_suspicious_chain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__8_notify_suspicious_chain,
    type_description_1,
    par_filename,
    par_chain,
    var_chain_str
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__8_notify_suspicious_chain == cache_frame_frame_notify$$$function__8_notify_suspicious_chain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__8_notify_suspicious_chain);
    cache_frame_frame_notify$$$function__8_notify_suspicious_chain = NULL;
}

assertFrameObject(frame_frame_notify$$$function__8_notify_suspicious_chain);

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
CHECK_OBJECT(var_chain_str);
CHECK_OBJECT(var_chain_str);
Py_DECREF(var_chain_str);
var_chain_str = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_chain_str);
var_chain_str = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_chain);
Py_DECREF(par_chain);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_chain);
Py_DECREF(par_chain);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__9_notify_dirty_session(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_session_id = python_pars[0];
struct Nuitka_FrameObject *frame_frame_notify$$$function__9_notify_dirty_session;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__9_notify_dirty_session = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_notify$$$function__9_notify_dirty_session)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__9_notify_dirty_session);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__9_notify_dirty_session == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__9_notify_dirty_session = MAKE_FUNCTION_FRAME(tstate, code_objects_fc7a8f9d3dc85df03933136457adb372, module_notify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__9_notify_dirty_session->m_type_description == NULL);
frame_frame_notify$$$function__9_notify_dirty_session = cache_frame_frame_notify$$$function__9_notify_dirty_session;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__9_notify_dirty_session);
assert(Py_REFCNT(frame_frame_notify$$$function__9_notify_dirty_session) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_9994f5106c5120b01102ad924d3904c7;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_2 = mod_consts.const_str_digest_3a1fe8bee13bd4cc08c0f423e2b081c4;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_session_id);
tmp_format_value_1 = par_session_id;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_f0ad4b495d243ea71138c735cd7435ff;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_46a1d90f0f3bdd724fcb1f17dc0aed98);
frame_frame_notify$$$function__9_notify_dirty_session->m_frame.f_lineno = 107;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__9_notify_dirty_session, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__9_notify_dirty_session->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__9_notify_dirty_session, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__9_notify_dirty_session,
    type_description_1,
    par_session_id
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__9_notify_dirty_session == cache_frame_frame_notify$$$function__9_notify_dirty_session) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__9_notify_dirty_session);
    cache_frame_frame_notify$$$function__9_notify_dirty_session = NULL;
}

assertFrameObject(frame_frame_notify$$$function__9_notify_dirty_session);

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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_notify$$$function__10_notify_agent_resumed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
struct Nuitka_FrameObject *frame_frame_notify$$$function__10_notify_agent_resumed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_notify$$$function__10_notify_agent_resumed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_notify$$$function__10_notify_agent_resumed)) {
    Py_XDECREF(cache_frame_frame_notify$$$function__10_notify_agent_resumed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_notify$$$function__10_notify_agent_resumed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_notify$$$function__10_notify_agent_resumed = MAKE_FUNCTION_FRAME(tstate, code_objects_b7f64b3316b10a3d2bdd9b0cb596ef3d, module_notify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_notify$$$function__10_notify_agent_resumed->m_type_description == NULL);
frame_frame_notify$$$function__10_notify_agent_resumed = cache_frame_frame_notify$$$function__10_notify_agent_resumed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify$$$function__10_notify_agent_resumed);
assert(Py_REFCNT(frame_frame_notify$$$function__10_notify_agent_resumed) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_notify$PFPSNotify(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PFPSNotify);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_ce768067367fa83b407933a10aca5ee2;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_2 = mod_consts.const_str_digest_eb537882923a59bc19b787e64228f71c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_filename);
tmp_format_value_1 = par_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_a7622c546807c2d7a99e3a2ffb4ed871;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_db67701c6b3cfd5044b091868678eef1);
frame_frame_notify$$$function__10_notify_agent_resumed->m_frame.f_lineno = 114;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_notify$$$function__10_notify_agent_resumed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify$$$function__10_notify_agent_resumed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify$$$function__10_notify_agent_resumed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_notify$$$function__10_notify_agent_resumed,
    type_description_1,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_notify$$$function__10_notify_agent_resumed == cache_frame_frame_notify$$$function__10_notify_agent_resumed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_notify$$$function__10_notify_agent_resumed);
    cache_frame_frame_notify$$$function__10_notify_agent_resumed = NULL;
}

assertFrameObject(frame_frame_notify$$$function__10_notify_agent_resumed);

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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_notify$$$function__10_notify_agent_resumed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__10_notify_agent_resumed,
        mod_consts.const_str_plain_notify_agent_resumed,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b7f64b3316b10a3d2bdd9b0cb596ef3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__1__notify_windows(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__1__notify_windows,
        mod_consts.const_str_plain__notify_windows,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9e3a64259c079435f626d0f0d2f417a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__2__notify_linux(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__2__notify_linux,
        mod_consts.const_str_plain__notify_linux,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e11913baf6883696f34971c6542cf1bd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__3__notify_macos(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__3__notify_macos,
        mod_consts.const_str_plain__notify_macos,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7b1fad2c18b69f8c6d5d80e1b087e16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__4_PFPSNotify(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__4_PFPSNotify,
        mod_consts.const_str_plain_PFPSNotify,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aba1a74868e9a925ae9d5c4b84ccb681,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        mod_consts.const_str_digest_112eb5ec5c3f0248fd1e15f1890a08c1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__5_notify_token_expired(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__5_notify_token_expired,
        mod_consts.const_str_plain_notify_token_expired,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f85c981aa35d8fab213b52a431ab2321,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__6_notify_op_limit(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__6_notify_op_limit,
        mod_consts.const_str_plain_notify_op_limit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f3286aa4f195a58cfcbbcd69ea8796ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__7_notify_contention(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__7_notify_contention,
        mod_consts.const_str_plain_notify_contention,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_731d914ffa67613bb871e0f0f44f9dbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__8_notify_suspicious_chain(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__8_notify_suspicious_chain,
        mod_consts.const_str_plain_notify_suspicious_chain,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bed10ada48cac2ea3cc0f09fd72a9d4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_notify$$$function__9_notify_dirty_session(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_notify$$$function__9_notify_dirty_session,
        mod_consts.const_str_plain_notify_dirty_session,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc7a8f9d3dc85df03933136457adb372,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_notify,
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

static function_impl_code const function_table_notify[] = {
impl_notify$$$function__1__notify_windows,
impl_notify$$$function__2__notify_linux,
impl_notify$$$function__3__notify_macos,
impl_notify$$$function__4_PFPSNotify,
impl_notify$$$function__5_notify_token_expired,
impl_notify$$$function__6_notify_op_limit,
impl_notify$$$function__7_notify_contention,
impl_notify$$$function__8_notify_suspicious_chain,
impl_notify$$$function__9_notify_dirty_session,
impl_notify$$$function__10_notify_agent_resumed,
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

    return Nuitka_Function_GetFunctionState(function, function_table_notify);
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
        module_notify,
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
        function_table_notify,
        sizeof(function_table_notify) / sizeof(function_impl_code)
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
static char const *module_full_name = "notify";
#endif

// Internal entry point for module code.
PyObject *module_code_notify(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("notify");

    // Store the module for future use.
    module_notify = module;

    moduledict_notify = MODULE_DICT(module_notify);

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
        PRINT_STRING("notify: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("notify: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("notify: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "notify" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnotify\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_notify,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_notify,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_notify,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_notify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_notify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_notify);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_notify);
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

        UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_notify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_4ccce4df0c5615c76d42aa14d5e3d0e5;
UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_notify = MAKE_MODULE_FRAME(code_objects_00050a25d88dbac088258c201b52db76, module_notify);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_notify);
assert(Py_REFCNT(frame_frame_notify) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_notify$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_notify$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_notify, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_1 = (PyObject *)moduledict_notify;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_notify->m_frame.f_lineno = 6;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_notify;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_notify->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_notify$platform(tstate);
assert(!(tmp_called_instance_1 == NULL));
frame_frame_notify->m_frame.f_lineno = 9;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_system);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_OS, tmp_assign_source_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_notify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_notify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_notify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_notify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_normal_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_7 = MAKE_FUNCTION_notify$$$function__1__notify_windows(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_windows, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_str_plain_normal_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_8 = MAKE_FUNCTION_notify$$$function__2__notify_linux(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_linux, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_str_plain_normal_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_9 = MAKE_FUNCTION_notify$$$function__3__notify_macos(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain__notify_macos, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_4;
tmp_defaults_4 = mod_consts.const_tuple_str_plain_normal_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_d6c08770ae56fee7ff45c2baae73cddb);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_10 = MAKE_FUNCTION_notify$$$function__4_PFPSNotify(tstate, tmp_defaults_4, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_PFPSNotify, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0778d77a7b85031b0481c39e3f490256);

tmp_assign_source_11 = MAKE_FUNCTION_notify$$$function__5_notify_token_expired(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_token_expired, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_9d50e03d6f854bece3847d623f49463a);

tmp_assign_source_12 = MAKE_FUNCTION_notify$$$function__6_notify_op_limit(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_op_limit, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);

tmp_assign_source_13 = MAKE_FUNCTION_notify$$$function__7_notify_contention(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_contention, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_654fc91c62528207b980d61d6d0837aa);

tmp_assign_source_14 = MAKE_FUNCTION_notify$$$function__8_notify_suspicious_chain(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_suspicious_chain, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_b6e39d0a35e583f64c4625cd294acb81);

tmp_assign_source_15 = MAKE_FUNCTION_notify$$$function__9_notify_dirty_session(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_dirty_session, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_bd8762a12a80f6543bcd756a7ff48ef3);

tmp_assign_source_16 = MAKE_FUNCTION_notify$$$function__10_notify_agent_resumed(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_notify, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_agent_resumed, tmp_assign_source_16);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("notify", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "notify" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_notify);
    return module_notify;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_notify, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("notify", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

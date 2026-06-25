/* Generated code for Python module 'keyring$backends$macOS$api'
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



/* The "module_keyring$backends$macOS$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_keyring$backends$macOS$api;
PyDictObject *moduledict_keyring$backends$macOS$api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain_in_dll;
PyObject *const_str_plain__sec;
PyObject *const_str_plain_bit_length;
PyObject *const_int_pos_31;
PyObject *const_str_plain_CFNumberCreate;
PyObject *const_int_pos_9;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_c_int32;
PyObject *const_str_plain_CFStringCreateWithCString;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_utf8_tuple;
PyObject *const_int_hex_8000100;
PyObject *const_str_plain_CFDictionaryCreate;
PyObject *const_str_plain_k_;
PyObject *const_str_plain_create_cf;
PyObject *const_str_plain_values;
PyObject *const_str_plain__found;
PyObject *const_str_plain_kCFTypeDictionaryKeyCallBacks;
PyObject *const_str_plain_kCFTypeDictionaryValueCallBacks;
PyObject *const_str_plain_string_at;
PyObject *const_str_plain_CFDataGetBytePtr;
PyObject *const_str_plain_CFDataGetLength;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_error;
PyObject *const_str_plain_item_not_found;
PyObject *const_str_plain_NotFound;
PyObject *const_str_digest_12fe7f8a875e8c8e74e86d88b2ba6b35;
PyObject *const_str_plain_keychain_denied;
PyObject *const_str_plain_KeychainDenied;
PyObject *const_str_digest_de82bfc26ec7d36a43565820fde897cf;
PyObject *const_str_plain_sec_auth_failed;
PyObject *const_str_plain_plist_missing;
PyObject *const_str_plain_SecAuthFailure;
PyObject *const_str_digest_21f67aa474ca4c628727f23a5a87b960;
PyObject *const_str_digest_b927801ad617a70d873bc13bd1e65de7;
PyObject *const_str_plain_create_query;
PyObject *const_tuple_str_plain_kSecClassGenericPassword_tuple;
PyObject *const_tuple_str_plain_kSecMatchLimitOne_tuple;
PyObject *const_tuple_cf8c33fdc43ff5708b716f155c08d259_tuple;
PyObject *const_str_plain_SecItemCopyMatching;
PyObject *const_str_plain_Error;
PyObject *const_str_plain_raise_for_status;
PyObject *const_str_plain_cfstr_to_str;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_suppress;
PyObject *const_str_plain_delete_generic_password;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_86b84cdc8899262b03074e80914ba26f_tuple;
PyObject *const_str_plain_SecItemAdd;
PyObject *const_tuple_cb63c6adb407b9c5f0bb5a6077ce3554_tuple;
PyObject *const_str_plain_SecItemDelete;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_c_uint32;
PyObject *const_str_plain_find_library;
PyObject *const_str_plain_OS_status;
PyObject *const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_int_neg_25300;
PyObject *const_int_neg_128;
PyObject *const_int_neg_25293;
PyObject *const_int_neg_67030;
PyObject *const_int_neg_25308;
PyObject *const_str_plain_sec_interaction_not_allowed;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_CDLL;
PyObject *const_tuple_str_plain_Security_tuple;
PyObject *const_tuple_str_plain_CoreServices_tuple;
PyObject *const_str_plain__core;
PyObject *const_tuple_str_plain_Foundation_tuple;
PyObject *const_str_plain_restype;
PyObject *const_str_plain_argtypes;
PyObject *const_str_plain_singledispatch;
PyObject *const_tuple_type_bool_tuple;
PyObject *const_tuple_type_int_tuple;
PyObject *const_dict_6ae832e81f0e358d683abc0b2a669423;
PyObject *const_dict_ded95cdc940f7a8fced2f96f862d7317;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_111;
PyObject *const_str_digest_ca5cb58c40187883179cf273efff0502;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_129;
PyObject *const_int_pos_133;
PyObject *const_int_pos_137;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_find_generic_password;
PyObject *const_str_plain_set_generic_password;
PyObject *const_str_digest_e69bba6ce21e8e9a95c1f083bef150a9;
PyObject *const_str_digest_2d2263a48bce7221bbce1687626ddd39;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_s_str_plain_kCFStringEncodingUTF8_tuple;
PyObject *const_tuple_str_plain_val_str_plain_int32_tuple;
PyObject *const_tuple_str_plain_data_tuple;
PyObject *const_tuple_str_plain_ob_tuple;
PyObject *const_tuple_str_plain_kwargs_tuple;
PyObject *const_tuple_67e6c4275886bd1fa74bd4a834adc615_tuple;
PyObject *const_tuple_1c3f4137ac50165b2ee9e07595ebee4c_tuple;
PyObject *const_tuple_str_plain_s_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_status_tuple;
PyObject *const_tuple_636f004f58f338c561aedb819aeabe30_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("keyring.backends.macOS.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_in_dll);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__sec);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_bit_length);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFNumberCreate);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int32);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFStringCreateWithCString);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utf8_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_hex_8000100);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFDictionaryCreate);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_k_);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_cf);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__found);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_kCFTypeDictionaryKeyCallBacks);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_kCFTypeDictionaryValueCallBacks);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_string_at);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFDataGetBytePtr);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFDataGetLength);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_item_not_found);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotFound);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_12fe7f8a875e8c8e74e86d88b2ba6b35);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_keychain_denied);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeychainDenied);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_de82bfc26ec7d36a43565820fde897cf);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_sec_auth_failed);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_plist_missing);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecAuthFailure);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_21f67aa474ca4c628727f23a5a87b960);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_b927801ad617a70d873bc13bd1e65de7);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_query);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kSecMatchLimitOne_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_cf8c33fdc43ff5708b716f155c08d259_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemCopyMatching);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Error);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_for_status);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_cfstr_to_str);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_generic_password);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_86b84cdc8899262b03074e80914ba26f_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemAdd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_cb63c6adb407b9c5f0bb5a6077ce3554_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemDelete);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_uint32);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_library);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_OS_status);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_neg_25300);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_neg_128);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_neg_25293);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_neg_67030);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_neg_25308);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_sec_interaction_not_allowed);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_CDLL);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Security_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CoreServices_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Foundation_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_singledispatch);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bool_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_6ae832e81f0e358d683abc0b2a669423);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_ded95cdc940f7a8fced2f96f862d7317);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_111);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca5cb58c40187883179cf273efff0502);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_129);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_133);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_137);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_generic_password);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_generic_password);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_e69bba6ce21e8e9a95c1f083bef150a9);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d2263a48bce7221bbce1687626ddd39);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_kCFStringEncodingUTF8_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_val_str_plain_int32_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ob_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kwargs_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_67e6c4275886bd1fa74bd4a834adc615_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_1c3f4137ac50165b2ee9e07595ebee4c_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_status_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_636f004f58f338c561aedb819aeabe30_tuple);
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
void checkModuleConstants_keyring$backends$macOS$api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_in_dll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_in_dll);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__sec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sec);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_bit_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bit_length);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_int_pos_31));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_31);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFNumberCreate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFNumberCreate);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_9));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_9);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byref);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_int32);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFStringCreateWithCString));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFStringCreateWithCString);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utf8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_utf8_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_hex_8000100));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_8000100);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFDictionaryCreate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFDictionaryCreate);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_k_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k_);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_cf);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__found);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_kCFTypeDictionaryKeyCallBacks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kCFTypeDictionaryKeyCallBacks);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_kCFTypeDictionaryValueCallBacks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kCFTypeDictionaryValueCallBacks);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_string_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string_at);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFDataGetBytePtr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFDataGetBytePtr);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFDataGetLength));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CFDataGetLength);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_item_not_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item_not_found);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotFound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotFound);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_12fe7f8a875e8c8e74e86d88b2ba6b35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12fe7f8a875e8c8e74e86d88b2ba6b35);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_keychain_denied));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keychain_denied);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeychainDenied));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeychainDenied);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_de82bfc26ec7d36a43565820fde897cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de82bfc26ec7d36a43565820fde897cf);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_sec_auth_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sec_auth_failed);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_plist_missing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plist_missing);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecAuthFailure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecAuthFailure);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_21f67aa474ca4c628727f23a5a87b960));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21f67aa474ca4c628727f23a5a87b960);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_b927801ad617a70d873bc13bd1e65de7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b927801ad617a70d873bc13bd1e65de7);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_query);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kSecMatchLimitOne_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kSecMatchLimitOne_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_cf8c33fdc43ff5708b716f155c08d259_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cf8c33fdc43ff5708b716f155c08d259_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemCopyMatching));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecItemCopyMatching);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Error);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_for_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_for_status);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_cfstr_to_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cfstr_to_str);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_generic_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_generic_password);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_86b84cdc8899262b03074e80914ba26f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_86b84cdc8899262b03074e80914ba26f_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemAdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecItemAdd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_cb63c6adb407b9c5f0bb5a6077ce3554_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb63c6adb407b9c5f0bb5a6077ce3554_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecItemDelete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecItemDelete);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_uint32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_uint32);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_library);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_OS_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OS_status);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_neg_25300));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_25300);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_neg_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_128);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_neg_25293));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_25293);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_neg_67030));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_67030);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_neg_25308));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_25308);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_sec_interaction_not_allowed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sec_interaction_not_allowed);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_CDLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CDLL);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Security_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Security_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CoreServices_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CoreServices_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Foundation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Foundation_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_restype);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_singledispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_singledispatch);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bool_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_6ae832e81f0e358d683abc0b2a669423));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6ae832e81f0e358d683abc0b2a669423);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_ded95cdc940f7a8fced2f96f862d7317));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ded95cdc940f7a8fced2f96f862d7317);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_111));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_111);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca5cb58c40187883179cf273efff0502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca5cb58c40187883179cf273efff0502);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_129));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_129);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_133));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_133);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_137));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_137);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_generic_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_generic_password);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_generic_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_generic_password);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_e69bba6ce21e8e9a95c1f083bef150a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e69bba6ce21e8e9a95c1f083bef150a9);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d2263a48bce7221bbce1687626ddd39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d2263a48bce7221bbce1687626ddd39);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_kCFStringEncodingUTF8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_str_plain_kCFStringEncodingUTF8_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_val_str_plain_int32_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_val_str_plain_int32_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ob_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ob_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kwargs_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_67e6c4275886bd1fa74bd4a834adc615_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_67e6c4275886bd1fa74bd4a834adc615_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_1c3f4137ac50165b2ee9e07595ebee4c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1c3f4137ac50165b2ee9e07595ebee4c_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_status_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_status_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_636f004f58f338c561aedb819aeabe30_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_636f004f58f338c561aedb819aeabe30_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 28
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
static PyObject *module_var_accessor_keyring$backends$macOS$api$CFDataGetBytePtr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetBytePtr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDataGetBytePtr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDataGetBytePtr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDataGetBytePtr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDataGetBytePtr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetBytePtr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetBytePtr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetBytePtr);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$CFDataGetLength(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetLength);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDataGetLength);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDataGetLength, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDataGetLength);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDataGetLength, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetLength);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetLength);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetLength);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$CFDictionaryCreate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDictionaryCreate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDictionaryCreate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDictionaryCreate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFDictionaryCreate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFDictionaryCreate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDictionaryCreate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDictionaryCreate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDictionaryCreate);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$CFNumberCreate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFNumberCreate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFNumberCreate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFNumberCreate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFNumberCreate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFNumberCreate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFNumberCreate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFNumberCreate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CFNumberCreate);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$CFStringCreateWithCString(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFStringCreateWithCString);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFStringCreateWithCString);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFStringCreateWithCString, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CFStringCreateWithCString);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CFStringCreateWithCString, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFStringCreateWithCString);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFStringCreateWithCString);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CFStringCreateWithCString);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$Error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$KeychainDenied(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_KeychainDenied);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeychainDenied);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeychainDenied, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeychainDenied);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeychainDenied, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_KeychainDenied);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_KeychainDenied);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeychainDenied);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$NotFound(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFound);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotFound);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotFound, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotFound);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotFound, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFound);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFound);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFound);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$OS_status(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_OS_status);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OS_status);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OS_status, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OS_status);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OS_status, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_OS_status);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_OS_status);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OS_status);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$SecAuthFailure(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecAuthFailure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecAuthFailure);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecAuthFailure, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecAuthFailure);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecAuthFailure, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecAuthFailure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecAuthFailure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecAuthFailure);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$SecItemAdd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemAdd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemAdd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemAdd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemAdd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemAdd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemAdd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemAdd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemAdd);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$SecItemCopyMatching(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemCopyMatching);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemCopyMatching);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemCopyMatching, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemCopyMatching);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemCopyMatching, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemCopyMatching);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemCopyMatching);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemCopyMatching);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$SecItemDelete(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemDelete);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemDelete);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemDelete, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecItemDelete);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecItemDelete, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemDelete);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemDelete);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemDelete);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$_found(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__found);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__found);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__found, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__found);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__found, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__found);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__found);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__found);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$_sec(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__sec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__sec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__sec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__sec);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$byref(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_byref);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_byref, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_byref);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_byref, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$c_int32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_int32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_int32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_int32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_int32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int32);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$c_uint32(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_uint32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_uint32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_uint32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_uint32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_uint32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_uint32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_uint32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_uint32);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$c_void_p(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_void_p);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_void_p, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_void_p);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_void_p, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$cfstr_to_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cfstr_to_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cfstr_to_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cfstr_to_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cfstr_to_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cfstr_to_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cfstr_to_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cfstr_to_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cfstr_to_str);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$create_cf(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cf);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cf);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cf, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cf);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cf, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cf);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cf);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cf);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$create_query(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_query);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_query);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_query, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_query);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_query, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_query);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_query);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_query);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$delete_generic_password(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_generic_password);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_delete_generic_password);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_delete_generic_password, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_delete_generic_password);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_delete_generic_password, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_generic_password);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_generic_password);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_generic_password);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$find_library(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_find_library);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_library);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_library, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_library);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_library, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_find_library);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_find_library);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_find_library);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backends$macOS$api$k_(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backends$macOS$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backends$macOS$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_k_);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backends$macOS$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k_);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k_, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k_);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k_, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_k_);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_k_);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_k_);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f0f98189fcd7e6b66841f98c43a7d4b5;
static PyCodeObject *code_objects_617341421f15801557a463486ce9c369;
static PyCodeObject *code_objects_42c3f84fc7b1d0adb541757ece730f1d;
static PyCodeObject *code_objects_835729ca81b948d75de3c914a0ec3892;
static PyCodeObject *code_objects_e7f568e294f7efde9204c2c0f80b40c2;
static PyCodeObject *code_objects_bece5da09346078e36e27d6db123281f;
static PyCodeObject *code_objects_b4b183801fff0ec7a085d8f89108285a;
static PyCodeObject *code_objects_84a5cbcea46f0b98874870ffa92c23d5;
static PyCodeObject *code_objects_53341d4fd7e66b20078ee99d54a7ff5f;
static PyCodeObject *code_objects_38d5550a4a8c4fc4b32c354d467b4830;
static PyCodeObject *code_objects_88dfe78f19bbb0128b5a1b9b5f60b301;
static PyCodeObject *code_objects_9f8b98f2c4a717c6d5eebba56c91881a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e69bba6ce21e8e9a95c1f083bef150a9); CHECK_OBJECT(module_filename_obj);
code_objects_f0f98189fcd7e6b66841f98c43a7d4b5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2d2263a48bce7221bbce1687626ddd39, mod_consts.const_str_digest_2d2263a48bce7221bbce1687626ddd39, NULL, NULL, 0, 0, 0);
code_objects_617341421f15801557a463486ce9c369 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Error, mod_consts.const_str_plain_Error, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_42c3f84fc7b1d0adb541757ece730f1d = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_underscore, const_str_underscore, mod_consts.const_tuple_str_plain_s_str_plain_kCFStringEncodingUTF8_tuple, NULL, 1, 0, 0);
code_objects_835729ca81b948d75de3c914a0ec3892 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_underscore, const_str_underscore, mod_consts.const_tuple_str_plain_val_str_plain_int32_tuple, NULL, 1, 0, 0);
code_objects_e7f568e294f7efde9204c2c0f80b40c2 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cfstr_to_str, mod_consts.const_str_plain_cfstr_to_str, mod_consts.const_tuple_str_plain_data_tuple, NULL, 1, 0, 0);
code_objects_bece5da09346078e36e27d6db123281f = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_cf, mod_consts.const_str_plain_create_cf, mod_consts.const_tuple_str_plain_ob_tuple, NULL, 1, 0, 0);
code_objects_b4b183801fff0ec7a085d8f89108285a = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_query, mod_consts.const_str_plain_create_query, mod_consts.const_tuple_str_plain_kwargs_tuple, NULL, 0, 0, 0);
code_objects_84a5cbcea46f0b98874870ffa92c23d5 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete_generic_password, mod_consts.const_str_plain_delete_generic_password, mod_consts.const_tuple_67e6c4275886bd1fa74bd4a834adc615_tuple, NULL, 3, 0, 0);
code_objects_53341d4fd7e66b20078ee99d54a7ff5f = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_find_generic_password, mod_consts.const_str_plain_find_generic_password, mod_consts.const_tuple_1c3f4137ac50165b2ee9e07595ebee4c_tuple, NULL, 4, 0, 0);
code_objects_38d5550a4a8c4fc4b32c354d467b4830 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_k_, mod_consts.const_str_plain_k_, mod_consts.const_tuple_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_88dfe78f19bbb0128b5a1b9b5f60b301 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raise_for_status, mod_consts.const_str_digest_ca5cb58c40187883179cf273efff0502, mod_consts.const_tuple_str_plain_cls_str_plain_status_tuple, NULL, 2, 0, 0);
code_objects_9f8b98f2c4a717c6d5eebba56c91881a = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_generic_password, mod_consts.const_str_plain_set_generic_password, mod_consts.const_tuple_636f004f58f338c561aedb819aeabe30_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__10_delete_generic_password(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__1_k_(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__2_create_cf(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__3__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__4__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__5_create_query(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__6_cfstr_to_str(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__7_raise_for_status(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__8_find_generic_password(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__9_set_generic_password(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_keyring$backends$macOS$api$$$function__1_k_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__1_k_;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_ = MAKE_FUNCTION_FRAME(tstate, code_objects_38d5550a4a8c4fc4b32c354d467b4830, module_keyring$backends$macOS$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__1_k_ = cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__1_k_);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__1_k_) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_in_dll);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_keyring$backends$macOS$api$_sec(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sec);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_2 = par_s;
frame_frame_keyring$backends$macOS$api$$$function__1_k_->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__1_k_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__1_k_->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__1_k_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__1_k_,
    type_description_1,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__1_k_ == cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_);
    cache_frame_frame_keyring$backends$macOS$api$$$function__1_k_ = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__1_k_);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__2_create_cf(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ob = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_ob);
tmp_return_value = par_ob;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ob);
Py_DECREF(par_ob);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__3__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_val = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__3__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__3__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__3__)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__3__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__3__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__3__ = MAKE_FUNCTION_FRAME(tstate, code_objects_835729ca81b948d75de3c914a0ec3892, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__3__->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__3__ = cache_frame_frame_keyring$backends$macOS$api$$$function__3__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__3__);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__3__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_val);
tmp_called_instance_1 = par_val;
frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame.f_lineno = 82;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bit_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_31;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
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
CHECK_OBJECT(par_val);
tmp_make_exception_arg_1 = par_val;
frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame.f_lineno = 83;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OverflowError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$CFNumberCreate(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFNumberCreate);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
tmp_args_element_value_2 = mod_consts.const_int_pos_9;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byref);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$c_int32(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int32);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 85;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_args_element_value_5 = par_val;
frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame.f_lineno = 85;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 85;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame.f_lineno = 85;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__3__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__3__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__3__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__3__,
    type_description_1,
    par_val,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__3__ == cache_frame_frame_keyring$backends$macOS$api$$$function__3__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__3__);
    cache_frame_frame_keyring$backends$macOS$api$$$function__3__ = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__3__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_val);
Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__4__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__4__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__4__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__4__)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__4__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__4__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__4__ = MAKE_FUNCTION_FRAME(tstate, code_objects_42c3f84fc7b1d0adb541757ece730f1d, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__4__->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__4__ = cache_frame_frame_keyring$backends$macOS$api$$$function__4__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__4__);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__4__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$CFStringCreateWithCString(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFStringCreateWithCString);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__4__->m_frame.f_lineno = 91;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_utf8_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_int_hex_8000100;
frame_frame_keyring$backends$macOS$api$$$function__4__->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__4__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__4__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__4__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__4__,
    type_description_1,
    par_s,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__4__ == cache_frame_frame_keyring$backends$macOS$api$$$function__4__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__4__);
    cache_frame_frame_keyring$backends$macOS$api$$$function__4__ = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__4__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__5_create_query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_kwargs = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__5_create_query;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query = MAKE_FUNCTION_FRAME(tstate, code_objects_b4b183801fff0ec7a085d8f89108285a, module_keyring$backends$macOS$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__5_create_query = cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__5_create_query);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__5_create_query) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_dict_arg_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_len_arg_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_8;
PyObject *tmp_len_arg_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$CFDictionaryCreate(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDictionaryCreate);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
tmp_mult_expr_left_1 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_len_arg_1 = par_kwargs;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_mult_expr_right_1 == NULL));
tmp_direct_call_arg1_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = (PyObject *)&PyMap_Type;
tmp_args_element_value_3 = module_var_accessor_keyring$backends$macOS$api$k_(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k_);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_1 = par_kwargs;
tmp_args_element_value_4 = DICT_ITERKEYS(tstate, tmp_dict_arg_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_direct_call_arg2_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_args_element_value_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_mult_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_len_arg_2 = par_kwargs;
tmp_mult_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_mult_expr_right_2 == NULL));
tmp_direct_call_arg1_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = (PyObject *)&PyMap_Type;
tmp_args_element_value_6 = module_var_accessor_keyring$backends$macOS$api$create_cf(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cf);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_direct_call_arg1_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_expression_value_1 = par_kwargs;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_values);
assert(!(tmp_called_value_4 == NULL));
frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_frame.f_lineno = 98;
tmp_args_element_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_direct_call_arg1_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_frame.f_lineno = 98;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_direct_call_arg2_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_direct_call_arg2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_direct_call_arg1_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_args_element_value_5 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_len_arg_3 = par_kwargs;
tmp_args_element_value_8 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_args_element_value_8 == NULL));
tmp_expression_value_2 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kCFTypeDictionaryKeyCallBacks);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_kCFTypeDictionaryValueCallBacks);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_5, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__5_create_query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__5_create_query->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__5_create_query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__5_create_query,
    type_description_1,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__5_create_query == cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query);
    cache_frame_frame_keyring$backends$macOS$api$$$function__5_create_query = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__5_create_query);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__6_cfstr_to_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str = MAKE_FUNCTION_FRAME(tstate, code_objects_e7f568e294f7efde9204c2c0f80b40c2, module_keyring$backends$macOS$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str = cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_string_at);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$CFDataGetBytePtr(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDataGetBytePtr);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_frame.f_lineno = 106;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_keyring$backends$macOS$api$CFDataGetLength(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDataGetLength);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_frame.f_lineno = 106;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_frame.f_lineno = 106;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str,
    type_description_1,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str == cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str);
    cache_frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__6_cfstr_to_str);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__7_raise_for_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_status = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status = MAKE_FUNCTION_FRAME(tstate, code_objects_88dfe78f19bbb0128b5a1b9b5f60b301, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status = cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_status);
tmp_cmp_expr_left_1 = par_status;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_status);
tmp_cmp_expr_left_2 = par_status;
tmp_expression_value_1 = module_var_accessor_keyring$backends$macOS$api$error(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_item_not_found);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$NotFound(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotFound);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_status);
tmp_args_element_value_1 = par_status;
tmp_args_element_value_2 = mod_consts.const_str_digest_12fe7f8a875e8c8e74e86d88b2ba6b35;
frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_status);
tmp_cmp_expr_left_3 = par_status;
tmp_expression_value_2 = module_var_accessor_keyring$backends$macOS$api$error(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_keychain_denied);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_keyring$backends$macOS$api$KeychainDenied(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeychainDenied);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_status);
tmp_args_element_value_3 = par_status;
tmp_args_element_value_4 = mod_consts.const_str_digest_de82bfc26ec7d36a43565820fde897cf;
frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 119;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_status);
tmp_cmp_expr_left_4 = par_status;
tmp_expression_value_3 = module_var_accessor_keyring$backends$macOS$api$error(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sec_auth_failed);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_status);
tmp_cmp_expr_left_5 = par_status;
tmp_expression_value_4 = module_var_accessor_keyring$backends$macOS$api$error(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_plist_missing);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$SecAuthFailure(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecAuthFailure);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_status);
tmp_args_element_value_5 = par_status;
tmp_args_element_value_6 = mod_consts.const_str_digest_21f67aa474ca4c628727f23a5a87b960;
frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_cls);
tmp_called_value_4 = par_cls;
CHECK_OBJECT(par_status);
tmp_args_element_value_7 = par_status;
tmp_args_element_value_8 = mod_consts.const_str_digest_b927801ad617a70d873bc13bd1e65de7;
frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status,
    type_description_1,
    par_cls,
    par_status
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status == cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status);
    cache_frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__7_raise_for_status);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_status);
Py_DECREF(par_status);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__8_find_generic_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_kc_name = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *par_not_found_ok = python_pars[3];
PyObject *var_q = NULL;
PyObject *var_data = NULL;
PyObject *var_status = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password = MAKE_FUNCTION_FRAME(tstate, code_objects_53341d4fd7e66b20078ee99d54a7ff5f, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password = cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$create_query(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_query);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_keyring$backends$macOS$api$k_(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k_);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 143;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple);

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$k_(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k_);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 144;
tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_kSecMatchLimitOne_tuple);

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service);
tmp_kw_call_value_2_1 = par_service;
CHECK_OBJECT(par_username);
tmp_kw_call_value_3_1 = par_username;
tmp_kw_call_value_4_1 = Py_True;
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 142;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_cf8c33fdc43ff5708b716f155c08d259_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_q == NULL);
var_q = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 150;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
tmp_called_value_5 = module_var_accessor_keyring$backends$macOS$api$SecItemCopyMatching(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemCopyMatching);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_q);
tmp_args_element_value_1 = var_q;
tmp_called_value_6 = module_var_accessor_keyring$backends$macOS$api$byref(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_3 = var_data;
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 151;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_status == NULL);
var_status = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_1 = var_status;
tmp_expression_value_1 = module_var_accessor_keyring$backends$macOS$api$error(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_item_not_found);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_not_found_ok);
tmp_truth_name_1 = CHECK_IF_TRUE(par_not_found_ok);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_status);
tmp_args_element_value_4 = var_status;
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 156;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_raise_for_status, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
tmp_called_value_7 = module_var_accessor_keyring$backends$macOS$api$cfstr_to_str(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cfstr_to_str);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_5 = var_data;
frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame.f_lineno = 158;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password,
    type_description_1,
    par_kc_name,
    par_service,
    par_username,
    par_not_found_ok,
    var_q,
    var_data,
    var_status
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password == cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password);
    cache_frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__8_find_generic_password);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_status);
CHECK_OBJECT(var_status);
Py_DECREF(var_status);
var_status = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_status);
var_status = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_kc_name);
Py_DECREF(par_kc_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_not_found_ok);
Py_DECREF(par_not_found_ok);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_kc_name);
Py_DECREF(par_kc_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_not_found_ok);
Py_DECREF(par_not_found_ok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__9_set_generic_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *par_password = python_pars[3];
PyObject *var_q = NULL;
PyObject *var_status = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password = MAKE_FUNCTION_FRAME(tstate, code_objects_9f8b98f2c4a717c6d5eebba56c91881a, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password = cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backends$macOS$api$contextlib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_suppress);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = module_var_accessor_keyring$backends$macOS$api$NotFound(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotFound);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 162;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 162;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$delete_generic_password(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_delete_generic_password);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_2 = par_name;
CHECK_OBJECT(par_service);
tmp_args_element_value_3 = par_service;
CHECK_OBJECT(par_username);
tmp_args_element_value_4 = par_username;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
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
    exception_lineno = 162;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame)) {
        frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 162;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame)) {
        frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_1:;
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
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 162;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 162;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
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
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
tmp_called_value_7 = module_var_accessor_keyring$backends$macOS$api$create_query(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_query);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = module_var_accessor_keyring$backends$macOS$api$k_(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k_);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 166;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple);

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service);
tmp_kw_call_value_1_1 = par_service;
CHECK_OBJECT(par_username);
tmp_kw_call_value_2_1 = par_username;
CHECK_OBJECT(par_password);
tmp_kw_call_value_3_1 = par_password;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 165;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_86b84cdc8899262b03074e80914ba26f_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_q == NULL);
var_q = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_9 = module_var_accessor_keyring$backends$macOS$api$SecItemAdd(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemAdd);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_q);
tmp_args_element_value_8 = var_q;
tmp_args_element_value_9 = Py_None;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 172;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_status == NULL);
var_status = tmp_assign_source_7;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
tmp_called_instance_1 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_status);
tmp_args_element_value_10 = var_status;
frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame.f_lineno = 173;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_raise_for_status, tmp_args_element_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password,
    type_description_1,
    par_name,
    par_service,
    par_username,
    par_password,
    var_q,
    var_status
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password == cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password);
    cache_frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__9_set_generic_password);

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
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_status);
CHECK_OBJECT(var_status);
Py_DECREF(var_status);
var_status = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_status);
var_status = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backends$macOS$api$$$function__10_delete_generic_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *var_q = NULL;
PyObject *var_status = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password = MAKE_FUNCTION_FRAME(tstate, code_objects_84a5cbcea46f0b98874870ffa92c23d5, module_keyring$backends$macOS$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_type_description == NULL);
frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password = cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_1 = module_var_accessor_keyring$backends$macOS$api$create_query(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_query);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_keyring$backends$macOS$api$k_(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k_);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_frame.f_lineno = 178;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_kSecClassGenericPassword_tuple);

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service);
tmp_kw_call_value_1_1 = par_service;
CHECK_OBJECT(par_username);
tmp_kw_call_value_2_1 = par_username;
frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_frame.f_lineno = 177;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_cb63c6adb407b9c5f0bb5a6077ce3554_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_q == NULL);
var_q = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$SecItemDelete(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemDelete);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_q);
tmp_args_element_value_1 = var_q;
frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_frame.f_lineno = 183;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_status == NULL);
var_status = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_status);
tmp_args_element_value_2 = var_status;
frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_frame.f_lineno = 184;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_raise_for_status, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password,
    type_description_1,
    par_name,
    par_service,
    par_username,
    var_q,
    var_status
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password == cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password);
    cache_frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password = NULL;
}

assertFrameObject(frame_frame_keyring$backends$macOS$api$$$function__10_delete_generic_password);

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
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_status);
CHECK_OBJECT(var_status);
Py_DECREF(var_status);
var_status = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_status);
var_status = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__10_delete_generic_password(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__10_delete_generic_password,
        mod_consts.const_str_plain_delete_generic_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84a5cbcea46f0b98874870ffa92c23d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__1_k_(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__1_k_,
        mod_consts.const_str_plain_k_,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_38d5550a4a8c4fc4b32c354d467b4830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__2_create_cf(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__2_create_cf,
        mod_consts.const_str_plain_create_cf,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bece5da09346078e36e27d6db123281f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__3__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__3__,
        const_str_underscore,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_835729ca81b948d75de3c914a0ec3892,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__4__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__4__,
        const_str_underscore,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42c3f84fc7b1d0adb541757ece730f1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__5_create_query(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__5_create_query,
        mod_consts.const_str_plain_create_query,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b4b183801fff0ec7a085d8f89108285a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__6_cfstr_to_str(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__6_cfstr_to_str,
        mod_consts.const_str_plain_cfstr_to_str,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7f568e294f7efde9204c2c0f80b40c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__7_raise_for_status(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__7_raise_for_status,
        mod_consts.const_str_plain_raise_for_status,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca5cb58c40187883179cf273efff0502,
#endif
        code_objects_88dfe78f19bbb0128b5a1b9b5f60b301,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__8_find_generic_password(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__8_find_generic_password,
        mod_consts.const_str_plain_find_generic_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_53341d4fd7e66b20078ee99d54a7ff5f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backends$macOS$api$$$function__9_set_generic_password(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backends$macOS$api$$$function__9_set_generic_password,
        mod_consts.const_str_plain_set_generic_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9f8b98f2c4a717c6d5eebba56c91881a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backends$macOS$api,
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

static function_impl_code const function_table_keyring$backends$macOS$api[] = {
impl_keyring$backends$macOS$api$$$function__1_k_,
impl_keyring$backends$macOS$api$$$function__2_create_cf,
impl_keyring$backends$macOS$api$$$function__3__,
impl_keyring$backends$macOS$api$$$function__4__,
impl_keyring$backends$macOS$api$$$function__5_create_query,
impl_keyring$backends$macOS$api$$$function__6_cfstr_to_str,
impl_keyring$backends$macOS$api$$$function__7_raise_for_status,
impl_keyring$backends$macOS$api$$$function__8_find_generic_password,
impl_keyring$backends$macOS$api$$$function__9_set_generic_password,
impl_keyring$backends$macOS$api$$$function__10_delete_generic_password,
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

    return Nuitka_Function_GetFunctionState(function, function_table_keyring$backends$macOS$api);
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
        module_keyring$backends$macOS$api,
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
        function_table_keyring$backends$macOS$api,
        sizeof(function_table_keyring$backends$macOS$api) / sizeof(function_impl_code)
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
static char const *module_full_name = "keyring.backends.macOS.api";
#endif

// Internal entry point for module code.
PyObject *module_code_keyring$backends$macOS$api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("keyring$backends$macOS$api");

    // Store the module for future use.
    module_keyring$backends$macOS$api = module;

    moduledict_keyring$backends$macOS$api = MODULE_DICT(module_keyring$backends$macOS$api);

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
        PRINT_STRING("keyring$backends$macOS$api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("keyring$backends$macOS$api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("keyring$backends$macOS$api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.backends.macOS.api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initkeyring$backends$macOS$api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_keyring$backends$macOS$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_keyring$backends$macOS$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_keyring$backends$macOS$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$backends$macOS$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$backends$macOS$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_keyring$backends$macOS$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_keyring$backends$macOS$api);
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

        UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_keyring$backends$macOS$api$$$class__1_error_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_ctypes_cdll_class;
int tmp_res;
PyObject *locals_keyring$backends$macOS$api$$$class__2_Error_111 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backends$macOS$api$$$class__2_Error_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_keyring$backends$macOS$api$$$class__3_NotFound_129 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_keyring$backends$macOS$api = MAKE_MODULE_FRAME(code_objects_f0f98189fcd7e6b66841f98c43a7d4b5, module_keyring$backends$macOS$api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_keyring$backends$macOS$api$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_keyring$backends$macOS$api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_keyring$backends$macOS$api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_keyring$backends$macOS$api,
        mod_consts.const_str_plain_byref,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_byref);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_byref, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_keyring$backends$macOS$api,
        mod_consts.const_str_plain_c_int32,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_c_int32);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int32, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_keyring$backends$macOS$api,
        mod_consts.const_str_plain_c_uint32,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_c_uint32);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_uint32, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_keyring$backends$macOS$api,
        mod_consts.const_str_plain_c_void_p,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p, tmp_assign_source_12);
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
PyObject *tmp_import_name_from_5;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 12;
tmp_import_name_from_5 = IMPORT_HARD_CTYPES__UTIL();
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_keyring$backends$macOS$api,
        mod_consts.const_str_plain_find_library,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_find_library);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_find_library, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = module_var_accessor_keyring$backends$macOS$api$c_int32(tstate);
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_OS_status, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_keyring$backends$macOS$api$$$class__1_error_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_error;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_neg_25300;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain_item_not_found, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_neg_128;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain_keychain_denied, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_neg_25293;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain_sec_auth_failed, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_neg_67030;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain_plist_missing, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_neg_25308;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain_sec_interaction_not_allowed, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_keyring$backends$macOS$api$$$class__1_error_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_error;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_keyring$backends$macOS$api$$$class__1_error_17;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 17;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_18;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_17 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_keyring$backends$macOS$api$$$class__1_error_17);
locals_keyring$backends$macOS$api$$$class__1_error_17 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backends$macOS$api$$$class__1_error_17);
locals_keyring$backends$macOS$api$$$class__1_error_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_error, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_2;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
tmp_called_value_2 = module_var_accessor_keyring$backends$macOS$api$find_library(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_library);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 25;
tmp_name_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Security_tuple);

if (tmp_name_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
{
    PyObject *args[] = {tmp_name_value_2,NULL,NULL,NULL,NULL,NULL};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_19 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__sec, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_3;
PyObject *tmp_called_value_3;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
tmp_called_value_3 = module_var_accessor_keyring$backends$macOS$api$find_library(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_library);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 26;
tmp_name_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_CoreServices_tuple);

if (tmp_name_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
{
    PyObject *args[] = {tmp_name_value_3,NULL,NULL,NULL,NULL,NULL};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_20 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
CHECK_OBJECT(tmp_name_value_3);
Py_DECREF(tmp_name_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__core, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_4;
PyObject *tmp_called_value_4;
{
    PyObject *hard_module = IMPORT_HARD_CTYPES();
    tmp_ctypes_cdll_class = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_CDLL);
}
assert(!(tmp_ctypes_cdll_class == NULL));
tmp_called_value_4 = module_var_accessor_keyring$backends$macOS$api$find_library(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_library);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 27;
tmp_name_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_Foundation_tuple);

if (tmp_name_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ctypes_cdll_class);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
{
    PyObject *args[] = {tmp_name_value_4,NULL,NULL,NULL,NULL,NULL};
    char const *arg_names[] = {"name","mode","handle","use_errno","use_last_error","winmode"};

    tmp_assign_source_21 = CALL_BUILTIN_KW_ARGS(
        tstate,
        tmp_ctypes_cdll_class,
        args,
        arg_names,
        sizeof(args) / sizeof(PyObject *),
        0
    );
}

CHECK_OBJECT(tmp_ctypes_cdll_class);
Py_DECREF(tmp_ctypes_cdll_class);
CHECK_OBJECT(tmp_name_value_4);
Py_DECREF(tmp_name_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain__found, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CFDictionaryCreate);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDictionaryCreate, tmp_assign_source_22);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_keyring$backends$macOS$api$CFDictionaryCreate(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_restype, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_assattr_target_4;
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_assattr_value_4 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_assattr_value_4, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assattr_value_4, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assattr_value_4, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_int32(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int32);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assattr_value_4, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assattr_value_4, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assattr_value_4, 5, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assattr_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_target_4 = module_var_accessor_keyring$backends$macOS$api$CFDictionaryCreate(tstate);
if (unlikely(tmp_assattr_target_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDictionaryCreate);
}

if (tmp_assattr_target_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_4);

exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_argtypes, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CFStringCreateWithCString);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFStringCreateWithCString, tmp_assign_source_23);
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_assattr_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assattr_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assattr_target_5 = module_var_accessor_keyring$backends$macOS$api$CFStringCreateWithCString(tstate);
assert(!(tmp_assattr_target_5 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_restype, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_list_element_1;
PyObject *tmp_assattr_target_6;
tmp_list_element_1 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_assattr_value_6 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_assattr_value_6, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_assattr_value_6, 1, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_keyring$backends$macOS$api$c_uint32(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_uint32);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_assattr_value_6, 2, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assattr_value_6);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_assattr_target_6 = module_var_accessor_keyring$backends$macOS$api$CFStringCreateWithCString(tstate);
if (unlikely(tmp_assattr_target_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFStringCreateWithCString);
}

if (tmp_assattr_target_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_6);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_argtypes, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CFNumberCreate);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFNumberCreate, tmp_assign_source_24);
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_assattr_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assattr_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_assattr_target_7 = module_var_accessor_keyring$backends$macOS$api$CFNumberCreate(tstate);
assert(!(tmp_assattr_target_7 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_restype, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_list_element_2;
PyObject *tmp_assattr_target_8;
tmp_list_element_2 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assattr_value_8 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_4;
PyList_SET_ITEM0(tmp_assattr_value_8, 0, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_keyring$backends$macOS$api$c_uint32(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_uint32);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_assattr_value_8, 1, tmp_list_element_2);
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_void_p);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assattr_value_8, 2, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_assattr_value_8);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_assattr_target_8 = module_var_accessor_keyring$backends$macOS$api$CFNumberCreate(tstate);
if (unlikely(tmp_assattr_target_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFNumberCreate);
}

if (tmp_assattr_target_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_8);

exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_argtypes, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_keyring$backends$macOS$api$_sec(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sec);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SecItemAdd);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemAdd, tmp_assign_source_25);
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = module_var_accessor_keyring$backends$macOS$api$OS_status(tstate);
if (unlikely(tmp_assattr_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OS_status);
}

if (tmp_assattr_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_assattr_target_9 = module_var_accessor_keyring$backends$macOS$api$SecItemAdd(tstate);
assert(!(tmp_assattr_target_9 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_restype, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_tuple_element_3;
PyObject *tmp_assattr_target_10;
tmp_tuple_element_3 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_assattr_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_10, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assattr_value_10, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assattr_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assattr_target_10 = module_var_accessor_keyring$backends$macOS$api$SecItemAdd(tstate);
if (unlikely(tmp_assattr_target_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemAdd);
}

if (tmp_assattr_target_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_10);

exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_argtypes, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_keyring$backends$macOS$api$_sec(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sec);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SecItemCopyMatching);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemCopyMatching, tmp_assign_source_26);
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = module_var_accessor_keyring$backends$macOS$api$OS_status(tstate);
if (unlikely(tmp_assattr_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OS_status);
}

if (tmp_assattr_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_assattr_target_11 = module_var_accessor_keyring$backends$macOS$api$SecItemCopyMatching(tstate);
assert(!(tmp_assattr_target_11 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_restype, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_tuple_element_4;
PyObject *tmp_assattr_target_12;
tmp_tuple_element_4 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_assattr_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_12, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_assattr_value_12, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assattr_value_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assattr_target_12 = module_var_accessor_keyring$backends$macOS$api$SecItemCopyMatching(tstate);
if (unlikely(tmp_assattr_target_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemCopyMatching);
}

if (tmp_assattr_target_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_12);

exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_argtypes, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_keyring$backends$macOS$api$_sec(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sec);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SecItemDelete);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecItemDelete, tmp_assign_source_27);
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = module_var_accessor_keyring$backends$macOS$api$OS_status(tstate);
if (unlikely(tmp_assattr_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OS_status);
}

if (tmp_assattr_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto frame_exception_exit_1;
}
tmp_assattr_target_13 = module_var_accessor_keyring$backends$macOS$api$SecItemDelete(tstate);
assert(!(tmp_assattr_target_13 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_restype, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_tuple_element_5;
PyObject *tmp_assattr_target_14;
tmp_tuple_element_5 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_assattr_value_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assattr_value_14, 0, tmp_tuple_element_5);
tmp_assattr_target_14 = module_var_accessor_keyring$backends$macOS$api$SecItemDelete(tstate);
if (unlikely(tmp_assattr_target_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecItemDelete);
}

if (tmp_assattr_target_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_14);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_argtypes, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_assign_source_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CFDataGetBytePtr);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetBytePtr, tmp_assign_source_28);
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
tmp_assattr_value_15 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_assattr_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assattr_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_assattr_target_15 = module_var_accessor_keyring$backends$macOS$api$CFDataGetBytePtr(tstate);
assert(!(tmp_assattr_target_15 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_restype, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_tuple_element_6;
PyObject *tmp_assattr_target_16;
tmp_tuple_element_6 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_assattr_value_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assattr_value_16, 0, tmp_tuple_element_6);
tmp_assattr_target_16 = module_var_accessor_keyring$backends$macOS$api$CFDataGetBytePtr(tstate);
if (unlikely(tmp_assattr_target_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDataGetBytePtr);
}

if (tmp_assattr_target_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_16);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_argtypes, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_keyring$backends$macOS$api$_found(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__found);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CFDataGetLength);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CFDataGetLength, tmp_assign_source_29);
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = module_var_accessor_keyring$backends$macOS$api$c_int32(tstate);
if (unlikely(tmp_assattr_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int32);
}

if (tmp_assattr_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_assattr_target_17 = module_var_accessor_keyring$backends$macOS$api$CFDataGetLength(tstate);
assert(!(tmp_assattr_target_17 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_restype, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_tuple_element_7;
PyObject *tmp_assattr_target_18;
tmp_tuple_element_7 = module_var_accessor_keyring$backends$macOS$api$c_void_p(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto frame_exception_exit_1;
}
tmp_assattr_value_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assattr_value_18, 0, tmp_tuple_element_7);
tmp_assattr_target_18 = module_var_accessor_keyring$backends$macOS$api$CFDataGetLength(tstate);
if (unlikely(tmp_assattr_target_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CFDataGetLength);
}

if (tmp_assattr_target_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_18);

exception_lineno = 66;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_argtypes, tmp_assattr_value_18);
CHECK_OBJECT(tmp_assattr_value_18);
Py_DECREF(tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__1_k_(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_k_, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));

tmp_args_element_value_1 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__2_create_cf(tstate);

frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 73;
tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_singledispatch, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cf, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_1;
tmp_called_instance_2 = module_var_accessor_keyring$backends$macOS$api$create_cf(tstate);
assert(!(tmp_called_instance_2 == NULL));
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 79;
tmp_called_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_register,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_bool_tuple, 0)
);

if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_keyring$backends$macOS$api$create_cf(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cf);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 80;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 80;
tmp_called_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_register,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_int_tuple, 0)
);

if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6ae832e81f0e358d683abc0b2a669423);

tmp_args_element_value_3 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__3__(tstate, tmp_annotations_1);

frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 80;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 80;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 79;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_underscore, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
tmp_called_instance_4 = module_var_accessor_keyring$backends$macOS$api$create_cf(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cf);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ded95cdc940f7a8fced2f96f862d7317);

tmp_args_element_value_4 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__4__(tstate, tmp_annotations_2);

frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 88;
tmp_assign_source_33 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_register, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_underscore, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__5_create_query(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_create_query, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;

tmp_assign_source_35 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__6_cfstr_to_str(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cfstr_to_str, tmp_assign_source_35);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Error;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 111;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_5;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 111;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 111;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
branch_end_1:;
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_keyring$backends$macOS$api$$$class__2_Error_111 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Error;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_111;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
frame_frame_keyring$backends$macOS$api$$$class__2_Error_2 = MAKE_CLASS_FRAME(tstate, code_objects_617341421f15801557a463486ce9c369, module_keyring$backends$macOS$api, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backends$macOS$api$$$class__2_Error_2);
assert(Py_REFCNT(frame_frame_keyring$backends$macOS$api$$$class__2_Error_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
tmp_called_value_8 = PyObject_GetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, const_str_plain_classmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__7_raise_for_status(tstate);

frame_frame_keyring$backends$macOS$api$$$class__2_Error_2->m_frame.f_lineno = 112;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, mod_consts.const_str_plain_raise_for_status, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api$$$class__2_Error_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api$$$class__2_Error_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api$$$class__2_Error_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backends$macOS$api$$$class__2_Error_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_keyring$backends$macOS$api$$$class__2_Error_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__2_Error_111, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_Error;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_keyring$backends$macOS$api$$$class__2_Error_111;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 111;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_41 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_keyring$backends$macOS$api$$$class__2_Error_111);
locals_keyring$backends$macOS$api$$$class__2_Error_111 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backends$macOS$api$$$class__2_Error_111);
locals_keyring$backends$macOS$api$$$class__2_Error_111 = NULL;
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
exception_lineno = 111;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Error, tmp_assign_source_41);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto try_except_handler_8;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_NotFound;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 129;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_8;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 129;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 129;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_48;
}
branch_end_4:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_keyring$backends$macOS$api$$$class__3_NotFound_129 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__3_NotFound_129, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_NotFound;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__3_NotFound_129, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_129;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__3_NotFound_129, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__3_NotFound_129, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__3_NotFound_129, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_NotFound;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_keyring$backends$macOS$api$$$class__3_NotFound_129;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 129;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_49 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_keyring$backends$macOS$api$$$class__3_NotFound_129);
locals_keyring$backends$macOS$api$$$class__3_NotFound_129 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backends$macOS$api$$$class__3_NotFound_129);
locals_keyring$backends$macOS$api$$$class__3_NotFound_129 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 129;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFound, tmp_assign_source_49);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto try_except_handler_11;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_KeychainDenied;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 133;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_11;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 133;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_56;
}
branch_end_7:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_KeychainDenied;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_133;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_KeychainDenied;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 133;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_57 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133);
locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133);
locals_keyring$backends$macOS$api$$$class__4_KeychainDenied_133 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 133;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_KeychainDenied, tmp_assign_source_57);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_19;
tmp_tuple_element_19 = module_var_accessor_keyring$backends$macOS$api$Error(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;

    goto try_except_handler_14;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_SecAuthFailure;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 137;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_8, tmp_default_value_4);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 137;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 137;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_64;
}
branch_end_10:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9b9306e21aec411e4c51e142ec3d68b3;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_SecAuthFailure;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_137;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
branch_no_12:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_SecAuthFailure;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_keyring$backends$macOS$api->m_frame.f_lineno = 137;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_16;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_65 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137);
locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137);
locals_keyring$backends$macOS$api$$$class__5_SecAuthFailure_137 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 137;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_SecAuthFailure, tmp_assign_source_65);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
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
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backends$macOS$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backends$macOS$api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backends$macOS$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_keyring$backends$macOS$api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_67 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__8_find_generic_password(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_find_generic_password, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;

tmp_assign_source_68 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__9_set_generic_password(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_set_generic_password, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;

tmp_assign_source_69 = MAKE_FUNCTION_keyring$backends$macOS$api$$$function__10_delete_generic_password(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_generic_password, tmp_assign_source_69);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("keyring$backends$macOS$api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.backends.macOS.api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_keyring$backends$macOS$api);
    return module_keyring$backends$macOS$api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backends$macOS$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("keyring$backends$macOS$api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

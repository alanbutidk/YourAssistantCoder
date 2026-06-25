/* Generated code for Python module 'keyring$core'
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



/* The "module_keyring$core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_keyring$core;
PyDictObject *moduledict_keyring$core;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_backend;
PyObject *const_str_plain_KeyringBackend;
PyObject *const_str_digest_a2d9273095622f9bcd6d6c504ea6cbb3;
PyObject *const_str_plain__keyring_backend;
PyObject *const_str_digest_1791969910c5945b7bc144b3a0c92d7b;
PyObject *const_str_plain_init_backend;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_64e0383a89eda2914d9c60f479c063c5;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_config_root;
PyObject *const_str_plain_makedirs;
PyObject *const_str_plain_join;
PyObject *const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce;
PyObject *const_str_digest_54b9d4d7b49b0183d9c516bd6c3f42e0;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain_write;
PyObject *const_tuple_str_digest_77123de2e1a07f3749ec1529e62adbde_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_8fc9fff08148a6ec17aad8a8abcc344f;
PyObject *const_str_plain_get_keyring;
PyObject *const_str_plain_get_password;
PyObject *const_str_digest_bd9dd7701b9606c891cc90645e42f7ba;
PyObject *const_str_plain_set_password;
PyObject *const_str_digest_9e24ff1212eb301fcea77be17eed0ae6;
PyObject *const_str_plain_delete_password;
PyObject *const_str_digest_332853fb40a9c72bddd72f633055802c;
PyObject *const_str_plain_get_credential;
PyObject *const_str_digest_bea78d984d766ebf435e2b15b3f8148b;
PyObject *const_str_plain_priority;
PyObject *const_str_plain_set_keyring;
PyObject *const_str_plain__detect_backend;
PyObject *const_str_digest_5b0680911cc627139e60ff50657e3594;
PyObject *const_str_plain__limit;
PyObject *const_str_plain_load_env;
PyObject *const_str_plain_load_config;
PyObject *const_str_plain_max;
PyObject *const_str_plain_get_all_keyring;
PyObject *const_str_plain_fail;
PyObject *const_str_plain_Keyring;
PyObject *const_str_plain_by_priority;
PyObject *const_tuple_str_plain_default_str_plain_key_tuple;
PyObject *const_str_digest_2272b60b955d23cb6e2ed0e7de4d9abe;
PyObject *const_str_plain_rpartition;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_modules;
PyObject *const_str_digest_1b8644c9a6238d3d586d28627ac4ed42;
PyObject *const_str_plain__load_keyring_class;
PyObject *const_str_digest_f3c600eedad00902b7cbceba2ef8dfc8;
PyObject *const_str_plain_load_keyring;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_PYTHON_KEYRING_BACKEND;
PyObject *const_str_digest_61c91373031131aca510411c2e502380;
PyObject *const_str_plain_configparser;
PyObject *const_str_plain_RawConfigParser;
PyObject *const_str_plain__ensure_path;
PyObject *const_str_plain__config_path;
PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
PyObject *const_str_plain__load_keyring_path;
PyObject *const_str_plain_has_section;
PyObject *const_tuple_str_plain_backend_tuple;
PyObject *const_tuple_0368d10dd7ba78c25c93a9b48dda6c67_tuple;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_NoOptionError;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_plain_keyring_tuple;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_cc54d02b99251c188eb5b980afe01b4f;
PyObject *const_str_digest_1655204bcfd20d48da982bb8d3841fbf;
PyObject *const_str_digest_91aafc032205df56b52df8f8aa5cabe9;
PyObject *const_tuple_b4d66879cda6fcdcaf37bb43c9052739_tuple;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_expanduser;
PyObject *const_str_plain_NoSectionError;
PyObject *const_str_digest_d1a005b9d7c1f1c29f1e70ea5c197fe2;
PyObject *const_str_digest_887d1b962163d40ce1ef49dde4bc0885;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_tuple_str_plain_backend_str_plain_credentials_tuple;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_backends;
PyObject *const_tuple_str_plain_fail_tuple;
PyObject *const_str_plain_util;
PyObject *const_tuple_str_plain_platform__tuple;
PyObject *const_str_plain_platform_;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_LimitCallable;
PyObject *const_tuple_str_digest_ffc9a1f27ed3e18ee79df1bc1eb98e2f_tuple;
PyObject *const_str_plain_log;
PyObject *const_dict_daea8136c148787637f8ca8670496ea9;
PyObject *const_dict_ff37587a7306c602593f62a30a8bbf2f;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_disable;
PyObject *const_dict_9dc911ff1a1d82966dcc3ab6e0d9db9a;
PyObject *const_dict_5602234e9e36b6369142ae439bfe688c;
PyObject *const_dict_5ab05b916584b47611e4376299d193e3;
PyObject *const_dict_a029e74a5a8913757c9e9d3d66bc5024;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_recommended;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_7903f4ffd9f07bcf72eddf65e25421d1;
PyObject *const_dict_0996a5f61bb3cb6ea798b5ae87e1b89a;
PyObject *const_dict_97130012611822f16c6fbfbc02b95f5a;
PyObject *const_dict_9cd74e0193bd944034a7b9fb8c3a10ad;
PyObject *const_dict_ed0e115389ec3045ba8e710b55ca868d;
PyObject *const_str_digest_dce81a9b87b571eaba69332b7d78973a;
PyObject *const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65;
PyObject *const_tuple_str_plain_limit_tuple;
PyObject *const_tuple_str_plain_path_tuple;
PyObject *const_tuple_6bed7a19580624b8a22122d24c436cc4_tuple;
PyObject *const_tuple_str_plain_config_str_plain_path_tuple;
PyObject *const_tuple_str_plain_service_name_str_plain_username_tuple;
PyObject *const_tuple_6cb670df8721a2766d0ebce2b2961982_tuple;
PyObject *const_tuple_str_plain_config_str_plain_keyring_name_str_plain_logger_tuple;
PyObject *const_tuple_str_plain_keyring_name_str_plain_class__tuple;
PyObject *const_tuple_str_plain_service_name_str_plain_username_str_plain_password_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("keyring.core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackend);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2d9273095622f9bcd6d6c504ea6cbb3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__keyring_backend);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_1791969910c5945b7bc144b3a0c92d7b);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_init_backend);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_64e0383a89eda2914d9c60f479c063c5);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_config_root);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_54b9d4d7b49b0183d9c516bd6c3f42e0);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_77123de2e1a07f3749ec1529e62adbde_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fc9fff08148a6ec17aad8a8abcc344f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_keyring);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_password);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd9dd7701b9606c891cc90645e42f7ba);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_password);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e24ff1212eb301fcea77be17eed0ae6);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_332853fb40a9c72bddd72f633055802c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_credential);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_bea78d984d766ebf435e2b15b3f8148b);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_priority);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_keyring);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__detect_backend);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b0680911cc627139e60ff50657e3594);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__limit);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_env);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_config);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_all_keyring);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Keyring);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_by_priority);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_str_plain_key_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_2272b60b955d23cb6e2ed0e7de4d9abe);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b8644c9a6238d3d586d28627ac4ed42);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_keyring_class);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3c600eedad00902b7cbceba2ef8dfc8);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_keyring);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYTHON_KEYRING_BACKEND);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_61c91373031131aca510411c2e502380);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_configparser);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_RawConfigParser);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_path);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__config_path);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_keyring_path);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_section);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_0368d10dd7ba78c25c93a9b48dda6c67_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoOptionError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyring_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc54d02b99251c188eb5b980afe01b4f);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_1655204bcfd20d48da982bb8d3841fbf);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_91aafc032205df56b52df8f8aa5cabe9);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_b4d66879cda6fcdcaf37bb43c9052739_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_expanduser);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoSectionError);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1a005b9d7c1f1c29f1e70ea5c197fe2);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_887d1b962163d40ce1ef49dde4bc0885);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_credentials_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_backends);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fail_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_platform__tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform_);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_LimitCallable);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffc9a1f27ed3e18ee79df1bc1eb98e2f_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_daea8136c148787637f8ca8670496ea9);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_ff37587a7306c602593f62a30a8bbf2f);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_disable);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_9dc911ff1a1d82966dcc3ab6e0d9db9a);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_5602234e9e36b6369142ae439bfe688c);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_5ab05b916584b47611e4376299d193e3);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_a029e74a5a8913757c9e9d3d66bc5024);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_recommended);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_7903f4ffd9f07bcf72eddf65e25421d1);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_0996a5f61bb3cb6ea798b5ae87e1b89a);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_97130012611822f16c6fbfbc02b95f5a);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_9cd74e0193bd944034a7b9fb8c3a10ad);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_ed0e115389ec3045ba8e710b55ca868d);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_dce81a9b87b571eaba69332b7d78973a);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_limit_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_6bed7a19580624b8a22122d24c436cc4_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_path_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_6cb670df8721a2766d0ebce2b2961982_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_keyring_name_str_plain_logger_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyring_name_str_plain_class__tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_name_str_plain_username_str_plain_password_tuple);
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
void checkModuleConstants_keyring$core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backend);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyringBackend);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2d9273095622f9bcd6d6c504ea6cbb3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2d9273095622f9bcd6d6c504ea6cbb3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__keyring_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__keyring_backend);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_1791969910c5945b7bc144b3a0c92d7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1791969910c5945b7bc144b3a0c92d7b);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_init_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_init_backend);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_64e0383a89eda2914d9c60f479c063c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64e0383a89eda2914d9c60f479c063c5);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_config_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config_root);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_makedirs);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_54b9d4d7b49b0183d9c516bd6c3f42e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54b9d4d7b49b0183d9c516bd6c3f42e0);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_77123de2e1a07f3749ec1529e62adbde_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_77123de2e1a07f3749ec1529e62adbde_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fc9fff08148a6ec17aad8a8abcc344f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fc9fff08148a6ec17aad8a8abcc344f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_keyring);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_password);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd9dd7701b9606c891cc90645e42f7ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd9dd7701b9606c891cc90645e42f7ba);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_password);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e24ff1212eb301fcea77be17eed0ae6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e24ff1212eb301fcea77be17eed0ae6);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_password);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_332853fb40a9c72bddd72f633055802c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_332853fb40a9c72bddd72f633055802c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_credential);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_bea78d984d766ebf435e2b15b3f8148b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bea78d984d766ebf435e2b15b3f8148b);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_priority));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_priority);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_keyring);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__detect_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__detect_backend);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b0680911cc627139e60ff50657e3594));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b0680911cc627139e60ff50657e3594);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__limit);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_env);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_config);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_all_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_all_keyring);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Keyring);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_by_priority));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_by_priority);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_str_plain_key_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_2272b60b955d23cb6e2ed0e7de4d9abe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2272b60b955d23cb6e2ed0e7de4d9abe);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rpartition);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b8644c9a6238d3d586d28627ac4ed42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b8644c9a6238d3d586d28627ac4ed42);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_keyring_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_keyring_class);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3c600eedad00902b7cbceba2ef8dfc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3c600eedad00902b7cbceba2ef8dfc8);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_keyring);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYTHON_KEYRING_BACKEND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYTHON_KEYRING_BACKEND);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_61c91373031131aca510411c2e502380));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61c91373031131aca510411c2e502380);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_configparser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_configparser);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_RawConfigParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RawConfigParser);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ensure_path);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__config_path);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_keyring_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_keyring_path);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_section));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_section);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_backend_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_0368d10dd7ba78c25c93a9b48dda6c67_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0368d10dd7ba78c25c93a9b48dda6c67_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoOptionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoOptionError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyring_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keyring_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc54d02b99251c188eb5b980afe01b4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc54d02b99251c188eb5b980afe01b4f);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_1655204bcfd20d48da982bb8d3841fbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1655204bcfd20d48da982bb8d3841fbf);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_91aafc032205df56b52df8f8aa5cabe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91aafc032205df56b52df8f8aa5cabe9);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_b4d66879cda6fcdcaf37bb43c9052739_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b4d66879cda6fcdcaf37bb43c9052739_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_insert);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_expanduser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expanduser);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoSectionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoSectionError);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1a005b9d7c1f1c29f1e70ea5c197fe2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1a005b9d7c1f1c29f1e70ea5c197fe2);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_887d1b962163d40ce1ef49dde4bc0885));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_887d1b962163d40ce1ef49dde4bc0885);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_backend_str_plain_credentials_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_backends));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backends);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fail_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fail_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_util);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_platform__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_platform__tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform_);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_LimitCallable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LimitCallable);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffc9a1f27ed3e18ee79df1bc1eb98e2f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ffc9a1f27ed3e18ee79df1bc1eb98e2f_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_daea8136c148787637f8ca8670496ea9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_daea8136c148787637f8ca8670496ea9);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_ff37587a7306c602593f62a30a8bbf2f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ff37587a7306c602593f62a30a8bbf2f);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_disable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_disable);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_9dc911ff1a1d82966dcc3ab6e0d9db9a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9dc911ff1a1d82966dcc3ab6e0d9db9a);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_5602234e9e36b6369142ae439bfe688c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5602234e9e36b6369142ae439bfe688c);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_5ab05b916584b47611e4376299d193e3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5ab05b916584b47611e4376299d193e3);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_a029e74a5a8913757c9e9d3d66bc5024));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a029e74a5a8913757c9e9d3d66bc5024);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_recommended));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recommended);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_7903f4ffd9f07bcf72eddf65e25421d1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7903f4ffd9f07bcf72eddf65e25421d1);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_0996a5f61bb3cb6ea798b5ae87e1b89a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0996a5f61bb3cb6ea798b5ae87e1b89a);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_97130012611822f16c6fbfbc02b95f5a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_97130012611822f16c6fbfbc02b95f5a);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_9cd74e0193bd944034a7b9fb8c3a10ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9cd74e0193bd944034a7b9fb8c3a10ad);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_ed0e115389ec3045ba8e710b55ca868d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ed0e115389ec3045ba8e710b55ca868d);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_dce81a9b87b571eaba69332b7d78973a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dce81a9b87b571eaba69332b7d78973a);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_limit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_limit_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_path_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_6bed7a19580624b8a22122d24c436cc4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6bed7a19580624b8a22122d24c436cc4_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_path_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_6cb670df8721a2766d0ebce2b2961982_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6cb670df8721a2766d0ebce2b2961982_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_keyring_name_str_plain_logger_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_keyring_name_str_plain_logger_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyring_name_str_plain_class__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keyring_name_str_plain_class__tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_name_str_plain_username_str_plain_password_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_service_name_str_plain_username_str_plain_password_tuple);
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
static PyObject *module_var_accessor_keyring$core$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_config_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__config_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__config_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__config_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__config_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__config_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__config_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__config_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__config_path);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_detect_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__detect_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__detect_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__detect_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__detect_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__detect_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__detect_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__detect_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__detect_backend);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_ensure_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ensure_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ensure_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_path);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_keyring_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__keyring_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__keyring_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__keyring_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__keyring_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_load_keyring_class(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_class);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_keyring_class);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_keyring_class, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_keyring_class);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_keyring_class, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_class);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_class);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_class);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$_load_keyring_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_keyring_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_keyring_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_keyring_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_keyring_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_path);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$configparser(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_configparser);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_configparser);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_configparser, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_configparser);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_configparser, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_configparser);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_configparser);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_configparser);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$fail(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_fail);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_fail);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_fail);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fail);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$get_keyring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_keyring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_keyring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_keyring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_keyring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_keyring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_keyring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_keyring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_keyring);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$init_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_init_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_init_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_init_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_init_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_init_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_init_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_init_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_init_backend);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$load_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_config);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_config);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_config, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_config);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_config, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_config);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_config);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_config);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$load_env(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_env);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_env);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_env, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_env);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_env, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_env);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_env);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_env);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$load_keyring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_keyring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_keyring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_keyring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_keyring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_keyring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_keyring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_keyring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_keyring);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$platform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$core$set_keyring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_set_keyring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_keyring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_keyring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_keyring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_keyring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_set_keyring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_set_keyring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_keyring);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_311a0aa78872fc8a7dc8eb4c2d819f3e;
static PyCodeObject *code_objects_fde671af76e49ed83e28bdf652cfa40d;
static PyCodeObject *code_objects_c872bb6569198b9f69b737d9bdbd7144;
static PyCodeObject *code_objects_0f0c3e946ee7653e42f7e8e62894b99b;
static PyCodeObject *code_objects_9ea90db46b05093dafd521bd19e8aa7d;
static PyCodeObject *code_objects_3ec57ea8006d23ab14d06cae68a4501c;
static PyCodeObject *code_objects_8559af952c1bdf509dbe6e9f704d356a;
static PyCodeObject *code_objects_b8195a10bfcf6dcb2c418ac34a8f68ce;
static PyCodeObject *code_objects_3c3db22d683e308142c61e1b1a73e45f;
static PyCodeObject *code_objects_38f6aa57dde1cec029fdc80d086df19f;
static PyCodeObject *code_objects_83630251e5b120acaac51552eb0afdbe;
static PyCodeObject *code_objects_a48b524d28c88c742a18171b8a66cd7f;
static PyCodeObject *code_objects_59f2ba9ac9b2309209a890390b284619;
static PyCodeObject *code_objects_9de27bdf2d86271191a80c2327fe8947;
static PyCodeObject *code_objects_95bb4f5a3eda76786f1d67405d2d4e57;
static PyCodeObject *code_objects_8bb967bc23d18bc4cdb9e63369ef4e4c;
static PyCodeObject *code_objects_5a2d64a658cae506591f4418e5428e41;
static PyCodeObject *code_objects_afeca6a007b258fcf9a935866fcf9b85;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dce81a9b87b571eaba69332b7d78973a); CHECK_OBJECT(module_filename_obj);
code_objects_311a0aa78872fc8a7dc8eb4c2d819f3e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65, mod_consts.const_str_digest_c7e359137d4c7b05296e7a1d2b6acb65, NULL, NULL, 0, 0, 0);
code_objects_fde671af76e49ed83e28bdf652cfa40d = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__config_path, mod_consts.const_str_plain__config_path, NULL, NULL, 0, 0, 0);
code_objects_c872bb6569198b9f69b737d9bdbd7144 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__detect_backend, mod_consts.const_str_plain__detect_backend, mod_consts.const_tuple_str_plain_limit_tuple, NULL, 1, 0, 0);
code_objects_0f0c3e946ee7653e42f7e8e62894b99b = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ensure_path, mod_consts.const_str_plain__ensure_path, mod_consts.const_tuple_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_9ea90db46b05093dafd521bd19e8aa7d = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__load_keyring_class, mod_consts.const_str_plain__load_keyring_class, mod_consts.const_tuple_6bed7a19580624b8a22122d24c436cc4_tuple, NULL, 1, 0, 0);
code_objects_3ec57ea8006d23ab14d06cae68a4501c = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__load_keyring_path, mod_consts.const_str_plain__load_keyring_path, mod_consts.const_tuple_str_plain_config_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_8559af952c1bdf509dbe6e9f704d356a = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete_password, mod_consts.const_str_plain_delete_password, mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple, NULL, 2, 0, 0);
code_objects_b8195a10bfcf6dcb2c418ac34a8f68ce = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_disable, mod_consts.const_str_plain_disable, mod_consts.const_tuple_6cb670df8721a2766d0ebce2b2961982_tuple, NULL, 0, 0, 0);
code_objects_3c3db22d683e308142c61e1b1a73e45f = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_credential, mod_consts.const_str_plain_get_credential, mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple, NULL, 2, 0, 0);
code_objects_38f6aa57dde1cec029fdc80d086df19f = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_keyring, mod_consts.const_str_plain_get_keyring, NULL, NULL, 0, 0, 0);
code_objects_83630251e5b120acaac51552eb0afdbe = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_password, mod_consts.const_str_plain_get_password, mod_consts.const_tuple_str_plain_service_name_str_plain_username_tuple, NULL, 2, 0, 0);
code_objects_a48b524d28c88c742a18171b8a66cd7f = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_init_backend, mod_consts.const_str_plain_init_backend, mod_consts.const_tuple_str_plain_limit_tuple, NULL, 1, 0, 0);
code_objects_59f2ba9ac9b2309209a890390b284619 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load_config, mod_consts.const_str_plain_load_config, mod_consts.const_tuple_str_plain_config_str_plain_keyring_name_str_plain_logger_tuple, NULL, 0, 0, 0);
code_objects_9de27bdf2d86271191a80c2327fe8947 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load_env, mod_consts.const_str_plain_load_env, NULL, NULL, 0, 0, 0);
code_objects_95bb4f5a3eda76786f1d67405d2d4e57 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load_keyring, mod_consts.const_str_plain_load_keyring, mod_consts.const_tuple_str_plain_keyring_name_str_plain_class__tuple, NULL, 1, 0, 0);
code_objects_8bb967bc23d18bc4cdb9e63369ef4e4c = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_recommended, mod_consts.const_str_plain_recommended, mod_consts.const_tuple_str_plain_backend_tuple, NULL, 1, 0, 0);
code_objects_5a2d64a658cae506591f4418e5428e41 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_keyring, mod_consts.const_str_plain_set_keyring, mod_consts.const_tuple_str_plain_keyring_tuple, NULL, 1, 0, 0);
code_objects_afeca6a007b258fcf9a935866fcf9b85 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_password, mod_consts.const_str_plain_set_password, mod_consts.const_tuple_str_plain_service_name_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_keyring$core$$$function__10__detect_backend(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__11__load_keyring_class(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__12_load_keyring(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__13_load_env(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__14__config_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__15__ensure_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__16_load_config(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__17__load_keyring_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__1_set_keyring(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__2_get_keyring(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__3_disable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__4_get_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__5_set_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__6_delete_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__7_get_credential(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__8_recommended(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$core$$$function__9_init_backend(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_keyring$core$$$function__1_set_keyring(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_keyring = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__1_set_keyring;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__1_set_keyring = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__1_set_keyring)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__1_set_keyring);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__1_set_keyring == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__1_set_keyring = MAKE_FUNCTION_FRAME(tstate, code_objects_5a2d64a658cae506591f4418e5428e41, module_keyring$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__1_set_keyring->m_type_description == NULL);
frame_frame_keyring$core$$$function__1_set_keyring = cache_frame_frame_keyring$core$$$function__1_set_keyring;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__1_set_keyring);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__1_set_keyring) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_keyring);
tmp_isinstance_inst_1 = par_keyring;
tmp_expression_value_1 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_KeyringBackend);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a2d9273095622f9bcd6d6c504ea6cbb3;
frame_frame_keyring$core$$$function__1_set_keyring->m_frame.f_lineno = 28;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 28;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__1_set_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__1_set_keyring->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__1_set_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__1_set_keyring,
    type_description_1,
    par_keyring
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__1_set_keyring == cache_frame_frame_keyring$core$$$function__1_set_keyring) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__1_set_keyring);
    cache_frame_frame_keyring$core$$$function__1_set_keyring = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__1_set_keyring);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_keyring);
tmp_assign_source_1 = par_keyring;
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keyring);
Py_DECREF(par_keyring);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keyring);
Py_DECREF(par_keyring);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__2_get_keyring(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__2_get_keyring;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__2_get_keyring = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__2_get_keyring)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__2_get_keyring);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__2_get_keyring == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__2_get_keyring = MAKE_FUNCTION_FRAME(tstate, code_objects_38f6aa57dde1cec029fdc80d086df19f, module_keyring$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__2_get_keyring->m_type_description == NULL);
frame_frame_keyring$core$$$function__2_get_keyring = cache_frame_frame_keyring$core$$$function__2_get_keyring;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__2_get_keyring);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__2_get_keyring) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_keyring$core$_keyring_backend(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__keyring_backend);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
tmp_called_value_1 = module_var_accessor_keyring$core$init_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_init_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__2_get_keyring->m_frame.f_lineno = 35;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_KeyringBackend);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_keyring$core$_keyring_backend(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__keyring_backend);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__2_get_keyring->m_frame.f_lineno = 36;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__2_get_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__2_get_keyring->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__2_get_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__2_get_keyring,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__2_get_keyring == cache_frame_frame_keyring$core$$$function__2_get_keyring) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__2_get_keyring);
    cache_frame_frame_keyring$core$$$function__2_get_keyring = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__2_get_keyring);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__3_disable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_root = NULL;
PyObject *var_filename = NULL;
PyObject *var_msg = NULL;
PyObject *var_file = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__3_disable;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__3_disable = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__3_disable)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__3_disable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__3_disable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__3_disable = MAKE_FUNCTION_FRAME(tstate, code_objects_b8195a10bfcf6dcb2c418ac34a8f68ce, module_keyring$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__3_disable->m_type_description == NULL);
frame_frame_keyring$core$$$function__3_disable = cache_frame_frame_keyring$core$$$function__3_disable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__3_disable);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__3_disable) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$core$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 50;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_config_root);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_root == NULL);
var_root = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_root);
tmp_args_element_value_1 = var_root;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 52;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_makedirs, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__3_disable, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__3_disable, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
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
    exception_lineno = 51;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__3_disable->m_frame)) {
        frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = exception_tb->tb_lineno;
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
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_root);
tmp_args_element_value_2 = var_root;
tmp_args_element_value_3 = mod_consts.const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 55;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_exists_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_filename);
tmp_exists_arg_1 = var_filename;
tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_54b9d4d7b49b0183d9c516bd6c3f42e0;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_filename);
tmp_format_value_1 = var_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooo";
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 58;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
CHECK_OBJECT(var_filename);
tmp_open_filename_1 = var_filename;
tmp_open_mode_1 = const_str_plain_w;
tmp_open_encoding_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_4 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 59;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_8 = tmp_with_1__enter;
assert(var_file == NULL);
Py_INCREF(tmp_assign_source_8);
var_file = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_file);
tmp_called_instance_3 = var_file;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 60;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_77123de2e1a07f3749ec1529e62adbde_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__3_disable, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__3_disable, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 59;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__3_disable->m_frame)) {
        frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_7;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__3_disable->m_frame)) {
        frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_7;
branch_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 59;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_5:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_keyring$core$$$function__3_disable->m_frame.f_lineno = 59;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__3_disable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__3_disable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__3_disable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__3_disable,
    type_description_1,
    var_root,
    var_filename,
    var_msg,
    var_file
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__3_disable == cache_frame_frame_keyring$core$$$function__3_disable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__3_disable);
    cache_frame_frame_keyring$core$$$function__3_disable = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__3_disable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_root);
CHECK_OBJECT(var_root);
Py_DECREF(var_root);
var_root = NULL;
CHECK_OBJECT(var_filename);
CHECK_OBJECT(var_filename);
Py_DECREF(var_filename);
var_filename = NULL;
CHECK_OBJECT(var_file);
CHECK_OBJECT(var_file);
Py_DECREF(var_file);
var_file = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_root);
var_root = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_file);
var_file = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__4_get_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_service_name = python_pars[0];
PyObject *par_username = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__4_get_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__4_get_password = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__4_get_password)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__4_get_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__4_get_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__4_get_password = MAKE_FUNCTION_FRAME(tstate, code_objects_83630251e5b120acaac51552eb0afdbe, module_keyring$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__4_get_password->m_type_description == NULL);
frame_frame_keyring$core$$$function__4_get_password = cache_frame_frame_keyring$core$$$function__4_get_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__4_get_password);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__4_get_password) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_keyring$core$get_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__4_get_password->m_frame.f_lineno = 65;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service_name);
tmp_args_element_value_1 = par_service_name;
CHECK_OBJECT(par_username);
tmp_args_element_value_2 = par_username;
frame_frame_keyring$core$$$function__4_get_password->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_get_password,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__4_get_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__4_get_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__4_get_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__4_get_password,
    type_description_1,
    par_service_name,
    par_username
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__4_get_password == cache_frame_frame_keyring$core$$$function__4_get_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__4_get_password);
    cache_frame_frame_keyring$core$$$function__4_get_password = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__4_get_password);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__5_set_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_service_name = python_pars[0];
PyObject *par_username = python_pars[1];
PyObject *par_password = python_pars[2];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__5_set_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__5_set_password = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__5_set_password)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__5_set_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__5_set_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__5_set_password = MAKE_FUNCTION_FRAME(tstate, code_objects_afeca6a007b258fcf9a935866fcf9b85, module_keyring$core, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__5_set_password->m_type_description == NULL);
frame_frame_keyring$core$$$function__5_set_password = cache_frame_frame_keyring$core$$$function__5_set_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__5_set_password);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__5_set_password) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_keyring$core$get_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__5_set_password->m_frame.f_lineno = 70;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service_name);
tmp_args_element_value_1 = par_service_name;
CHECK_OBJECT(par_username);
tmp_args_element_value_2 = par_username;
CHECK_OBJECT(par_password);
tmp_args_element_value_3 = par_password;
frame_frame_keyring$core$$$function__5_set_password->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_set_password,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__5_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__5_set_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__5_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__5_set_password,
    type_description_1,
    par_service_name,
    par_username,
    par_password
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__5_set_password == cache_frame_frame_keyring$core$$$function__5_set_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__5_set_password);
    cache_frame_frame_keyring$core$$$function__5_set_password = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__5_set_password);

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
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
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


static PyObject *impl_keyring$core$$$function__6_delete_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_service_name = python_pars[0];
PyObject *par_username = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__6_delete_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__6_delete_password = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__6_delete_password)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__6_delete_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__6_delete_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__6_delete_password = MAKE_FUNCTION_FRAME(tstate, code_objects_8559af952c1bdf509dbe6e9f704d356a, module_keyring$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__6_delete_password->m_type_description == NULL);
frame_frame_keyring$core$$$function__6_delete_password = cache_frame_frame_keyring$core$$$function__6_delete_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__6_delete_password);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__6_delete_password) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_keyring$core$get_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__6_delete_password->m_frame.f_lineno = 75;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service_name);
tmp_args_element_value_1 = par_service_name;
CHECK_OBJECT(par_username);
tmp_args_element_value_2 = par_username;
frame_frame_keyring$core$$$function__6_delete_password->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_delete_password,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__6_delete_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__6_delete_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__6_delete_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__6_delete_password,
    type_description_1,
    par_service_name,
    par_username
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__6_delete_password == cache_frame_frame_keyring$core$$$function__6_delete_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__6_delete_password);
    cache_frame_frame_keyring$core$$$function__6_delete_password = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__6_delete_password);

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
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__7_get_credential(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_service_name = python_pars[0];
PyObject *par_username = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__7_get_credential;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__7_get_credential = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__7_get_credential)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__7_get_credential);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__7_get_credential == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__7_get_credential = MAKE_FUNCTION_FRAME(tstate, code_objects_3c3db22d683e308142c61e1b1a73e45f, module_keyring$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__7_get_credential->m_type_description == NULL);
frame_frame_keyring$core$$$function__7_get_credential = cache_frame_frame_keyring$core$$$function__7_get_credential;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__7_get_credential);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__7_get_credential) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_keyring$core$get_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__7_get_credential->m_frame.f_lineno = 82;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service_name);
tmp_args_element_value_1 = par_service_name;
CHECK_OBJECT(par_username);
tmp_args_element_value_2 = par_username;
frame_frame_keyring$core$$$function__7_get_credential->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_get_credential,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__7_get_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__7_get_credential->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__7_get_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__7_get_credential,
    type_description_1,
    par_service_name,
    par_username
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__7_get_credential == cache_frame_frame_keyring$core$$$function__7_get_credential) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__7_get_credential);
    cache_frame_frame_keyring$core$$$function__7_get_credential = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__7_get_credential);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__8_recommended(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_backend = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__8_recommended;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__8_recommended = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__8_recommended)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__8_recommended);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__8_recommended == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__8_recommended = MAKE_FUNCTION_FRAME(tstate, code_objects_8bb967bc23d18bc4cdb9e63369ef4e4c, module_keyring$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__8_recommended->m_type_description == NULL);
frame_frame_keyring$core$$$function__8_recommended = cache_frame_frame_keyring$core$$$function__8_recommended;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__8_recommended);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__8_recommended) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_backend);
tmp_expression_value_1 = par_backend;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_priority);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__8_recommended, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__8_recommended->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__8_recommended, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__8_recommended,
    type_description_1,
    par_backend
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__8_recommended == cache_frame_frame_keyring$core$$$function__8_recommended) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__8_recommended);
    cache_frame_frame_keyring$core$$$function__8_recommended = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__8_recommended);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__9_init_backend(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_limit = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__9_init_backend;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__9_init_backend = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__9_init_backend)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__9_init_backend);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__9_init_backend == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__9_init_backend = MAKE_FUNCTION_FRAME(tstate, code_objects_a48b524d28c88c742a18171b8a66cd7f, module_keyring$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__9_init_backend->m_type_description == NULL);
frame_frame_keyring$core$$$function__9_init_backend = cache_frame_frame_keyring$core$$$function__9_init_backend;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__9_init_backend);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__9_init_backend) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_keyring$core$set_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_keyring$core$_detect_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__detect_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limit);
tmp_args_element_value_2 = par_limit;
frame_frame_keyring$core$$$function__9_init_backend->m_frame.f_lineno = 93;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__9_init_backend->m_frame.f_lineno = 93;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__9_init_backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__9_init_backend->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__9_init_backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__9_init_backend,
    type_description_1,
    par_limit
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__9_init_backend == cache_frame_frame_keyring$core$$$function__9_init_backend) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__9_init_backend);
    cache_frame_frame_keyring$core$$$function__9_init_backend = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__9_init_backend);

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
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__10__detect_backend(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_limit = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__10__detect_backend;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__10__detect_backend = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__10__detect_backend)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__10__detect_backend);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__10__detect_backend == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__10__detect_backend = MAKE_FUNCTION_FRAME(tstate, code_objects_c872bb6569198b9f69b737d9bdbd7144, module_keyring$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__10__detect_backend->m_type_description == NULL);
frame_frame_keyring$core$$$function__10__detect_backend = cache_frame_frame_keyring$core$$$function__10__detect_backend;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__10__detect_backend);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__10__detect_backend) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_limit);
tmp_assattr_value_1 = par_limit;
tmp_assattr_target_1 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_assattr_target_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_assattr_target_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__limit, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_keyring$core$load_env(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_env);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 107;
tmp_or_left_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 107;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_called_value_2 = module_var_accessor_keyring$core$load_config(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_config);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 108;
tmp_or_left_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
tmp_called_value_4 = (PyObject *)&PyFilter_Type;
CHECK_OBJECT(par_limit);
tmp_args_element_value_1 = par_limit;
tmp_called_instance_1 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 111;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_all_keyring);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_keyring$core$fail(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fail);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 112;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 112;
tmp_kw_call_dict_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Keyring);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 112;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_by_priority);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__10__detect_backend->m_frame.f_lineno = 109;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_default_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__10__detect_backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__10__detect_backend->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__10__detect_backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__10__detect_backend,
    type_description_1,
    par_limit
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__10__detect_backend == cache_frame_frame_keyring$core$$$function__10__detect_backend) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__10__detect_backend);
    cache_frame_frame_keyring$core$$$function__10__detect_backend = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__10__detect_backend);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__11__load_keyring_class(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_keyring_name = python_pars[0];
PyObject *var_module_name = NULL;
PyObject *var_sep = NULL;
PyObject *var_class_name = NULL;
PyObject *var_module = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__11__load_keyring_class;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__11__load_keyring_class = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__11__load_keyring_class)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__11__load_keyring_class);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__11__load_keyring_class == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__11__load_keyring_class = MAKE_FUNCTION_FRAME(tstate, code_objects_9ea90db46b05093dafd521bd19e8aa7d, module_keyring$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__11__load_keyring_class->m_type_description == NULL);
frame_frame_keyring$core$$$function__11__load_keyring_class = cache_frame_frame_keyring$core$$$function__11__load_keyring_class;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__11__load_keyring_class);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__11__load_keyring_class) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_keyring_name);
tmp_expression_value_1 = par_keyring_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rpartition);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__11__load_keyring_class->m_frame.f_lineno = 133;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_module_name == NULL);
Py_INCREF(tmp_assign_source_5);
var_module_name = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_sep == NULL);
Py_INCREF(tmp_assign_source_6);
var_sep = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
assert(var_class_name == NULL);
Py_INCREF(tmp_assign_source_7);
var_class_name = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_name_value_1;
PyObject *tmp_imported_value_1;
CHECK_OBJECT(var_module_name);
tmp_name_value_1 = var_module_name;
frame_frame_keyring$core$$$function__11__load_keyring_class->m_frame.f_lineno = 134;
tmp_imported_value_1 = IMPORT_MODULE1(tstate, tmp_name_value_1);
if (tmp_imported_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_imported_value_1);
Py_DECREF(tmp_imported_value_1);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_modules);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_module_name);
tmp_subscript_value_1 = var_module_name;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_module == NULL);
var_module = tmp_assign_source_8;
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
CHECK_OBJECT(var_module);
tmp_expression_value_4 = var_module;
CHECK_OBJECT(var_class_name);
tmp_name_value_2 = var_class_name;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_2, NULL);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__11__load_keyring_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__11__load_keyring_class->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__11__load_keyring_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__11__load_keyring_class,
    type_description_1,
    par_keyring_name,
    var_module_name,
    var_sep,
    var_class_name,
    var_module
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__11__load_keyring_class == cache_frame_frame_keyring$core$$$function__11__load_keyring_class) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__11__load_keyring_class);
    cache_frame_frame_keyring$core$$$function__11__load_keyring_class = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__11__load_keyring_class);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_module_name);
CHECK_OBJECT(var_module_name);
Py_DECREF(var_module_name);
var_module_name = NULL;
CHECK_OBJECT(var_sep);
CHECK_OBJECT(var_sep);
Py_DECREF(var_sep);
var_sep = NULL;
CHECK_OBJECT(var_class_name);
CHECK_OBJECT(var_class_name);
Py_DECREF(var_class_name);
var_class_name = NULL;
CHECK_OBJECT(var_module);
CHECK_OBJECT(var_module);
Py_DECREF(var_module);
var_module = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_module_name);
var_module_name = NULL;
Py_XDECREF(var_sep);
var_sep = NULL;
Py_XDECREF(var_class_name);
var_class_name = NULL;
Py_XDECREF(var_module);
var_module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keyring_name);
Py_DECREF(par_keyring_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keyring_name);
Py_DECREF(par_keyring_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__12_load_keyring(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_keyring_name = python_pars[0];
PyObject *var_class_ = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__12_load_keyring;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__12_load_keyring = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__12_load_keyring)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__12_load_keyring);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__12_load_keyring == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__12_load_keyring = MAKE_FUNCTION_FRAME(tstate, code_objects_95bb4f5a3eda76786f1d67405d2d4e57, module_keyring$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__12_load_keyring->m_type_description == NULL);
frame_frame_keyring$core$$$function__12_load_keyring = cache_frame_frame_keyring$core$$$function__12_load_keyring;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__12_load_keyring);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__12_load_keyring) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_keyring$core$_load_keyring_class(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_keyring_class);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keyring_name);
tmp_args_element_value_1 = par_keyring_name;
frame_frame_keyring$core$$$function__12_load_keyring->m_frame.f_lineno = 144;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_class_ == NULL);
var_class_ = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
CHECK_OBJECT(var_class_);
tmp_expression_value_1 = var_class_;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_priority);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
}
{
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_class_);
tmp_called_value_2 = var_class_;
frame_frame_keyring$core$$$function__12_load_keyring->m_frame.f_lineno = 147;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__12_load_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__12_load_keyring->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__12_load_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__12_load_keyring,
    type_description_1,
    par_keyring_name,
    var_class_
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__12_load_keyring == cache_frame_frame_keyring$core$$$function__12_load_keyring) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__12_load_keyring);
    cache_frame_frame_keyring$core$$$function__12_load_keyring = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__12_load_keyring);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_class_);
CHECK_OBJECT(var_class_);
Py_DECREF(var_class_);
var_class_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_class_);
var_class_ = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keyring_name);
Py_DECREF(par_keyring_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keyring_name);
Py_DECREF(par_keyring_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__13_load_env(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__13_load_env;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__13_load_env = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__13_load_env)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__13_load_env);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__13_load_env == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__13_load_env = MAKE_FUNCTION_FRAME(tstate, code_objects_9de27bdf2d86271191a80c2327fe8947, module_keyring$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__13_load_env->m_type_description == NULL);
frame_frame_keyring$core$$$function__13_load_env = cache_frame_frame_keyring$core$$$function__13_load_env;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__13_load_env);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__13_load_env) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_keyring$core$load_keyring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_keyring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto try_except_handler_1;
}
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_PYTHON_KEYRING_BACKEND;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_1;
}
frame_frame_keyring$core$$$function__13_load_env->m_frame.f_lineno = 153;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__13_load_env, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__13_load_env, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__13_load_env->m_frame)) {
        frame_frame_keyring$core$$$function__13_load_env->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__13_load_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__13_load_env->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__13_load_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__13_load_env,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__13_load_env == cache_frame_frame_keyring$core$$$function__13_load_env) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__13_load_env);
    cache_frame_frame_keyring$core$$$function__13_load_env = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__13_load_env);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__14__config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__14__config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__14__config_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__14__config_path)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__14__config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__14__config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__14__config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_fde671af76e49ed83e28bdf652cfa40d, module_keyring$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__14__config_path->m_type_description == NULL);
frame_frame_keyring$core$$$function__14__config_path = cache_frame_frame_keyring$core$$$function__14__config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__14__config_path);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__14__config_path) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$core$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__14__config_path->m_frame.f_lineno = 159;
tmp_truediv_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_config_root);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_65a83d5d16e847ba9183ca29a71ce0ce;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__14__config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__14__config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__14__config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__14__config_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__14__config_path == cache_frame_frame_keyring$core$$$function__14__config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__14__config_path);
    cache_frame_frame_keyring$core$$$function__14__config_path = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__14__config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__15__ensure_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__15__ensure_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__15__ensure_path = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__15__ensure_path)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__15__ensure_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__15__ensure_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__15__ensure_path = MAKE_FUNCTION_FRAME(tstate, code_objects_0f0c3e946ee7653e42f7e8e62894b99b, module_keyring$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__15__ensure_path->m_type_description == NULL);
frame_frame_keyring$core$$$function__15__ensure_path = cache_frame_frame_keyring$core$$$function__15__ensure_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__15__ensure_path);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__15__ensure_path) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_path);
tmp_called_instance_1 = par_path;
frame_frame_keyring$core$$$function__15__ensure_path->m_frame.f_lineno = 163;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "o";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_path);
tmp_make_exception_arg_1 = par_path;
frame_frame_keyring$core$$$function__15__ensure_path->m_frame.f_lineno = 164;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_FileNotFoundError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__15__ensure_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__15__ensure_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__15__ensure_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__15__ensure_path,
    type_description_1,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__15__ensure_path == cache_frame_frame_keyring$core$$$function__15__ensure_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__15__ensure_path);
    cache_frame_frame_keyring$core$$$function__15__ensure_path = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__15__ensure_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_path);
tmp_return_value = par_path;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__16_load_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_config = NULL;
PyObject *var_keyring_name = NULL;
PyObject *var_logger = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__16_load_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__16_load_config = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__16_load_config)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__16_load_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__16_load_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__16_load_config = MAKE_FUNCTION_FRAME(tstate, code_objects_59f2ba9ac9b2309209a890390b284619, module_keyring$core, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__16_load_config->m_type_description == NULL);
frame_frame_keyring$core$$$function__16_load_config = cache_frame_frame_keyring$core$$$function__16_load_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__16_load_config);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__16_load_config) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$core$configparser(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_configparser);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 171;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_RawConfigParser);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_config == NULL);
var_config = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(var_config);
tmp_expression_value_1 = var_config;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_read);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = module_var_accessor_keyring$core$_ensure_path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ensure_path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = module_var_accessor_keyring$core$_config_path(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__config_path);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 173;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 173;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 173;
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


exception_lineno = 173;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__16_load_config, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__16_load_config, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_FileNotFoundError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 172;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__16_load_config->m_frame)) {
        frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_keyring$core$_load_keyring_path(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_keyring_path);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_config);
tmp_args_element_value_2 = var_config;
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 176;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
// Tried code:
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_config);
tmp_called_instance_2 = var_config;
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 180;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_has_section,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_backend_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 180;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_config);
tmp_expression_value_3 = var_config;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 181;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_0368d10dd7ba78c25c93a9b48dda6c67_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 181;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(var_keyring_name == NULL);
var_keyring_name = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_2:;
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__16_load_config, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__16_load_config, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_keyring$core$configparser(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_configparser);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_NoOptionError);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = PyExc_ImportError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_2);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_keyring$core$logging(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 186;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_keyring_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
assert(var_logger == NULL);
var_logger = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_logger);
tmp_expression_value_5 = var_logger;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_warning);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_add_expr_left_1 = mod_consts.const_str_digest_cc54d02b99251c188eb5b980afe01b4f;
tmp_tuple_element_3 = mod_consts.const_str_digest_1655204bcfd20d48da982bb8d3841fbf;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_8;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
tmp_called_value_8 = module_var_accessor_keyring$core$_config_path(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__config_path);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 189;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_add_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 187;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_5;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 179;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__16_load_config->m_frame)) {
        frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
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
// End of try:
try_end_2:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
tmp_called_value_9 = module_var_accessor_keyring$core$load_keyring(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_keyring);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_keyring_name);
tmp_args_element_value_4 = var_keyring_name;
frame_frame_keyring$core$$$function__16_load_config->m_frame.f_lineno = 193;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__16_load_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__16_load_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__16_load_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__16_load_config,
    type_description_1,
    var_config,
    var_keyring_name,
    var_logger
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__16_load_config == cache_frame_frame_keyring$core$$$function__16_load_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__16_load_config);
    cache_frame_frame_keyring$core$$$function__16_load_config = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__16_load_config);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_config);
CHECK_OBJECT(var_config);
Py_DECREF(var_config);
var_config = NULL;
Py_XDECREF(var_keyring_name);
var_keyring_name = NULL;
Py_XDECREF(var_logger);
var_logger = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_config);
var_config = NULL;
Py_XDECREF(var_keyring_name);
var_keyring_name = NULL;
Py_XDECREF(var_logger);
var_logger = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$core$$$function__17__load_keyring_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_config = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core$$$function__17__load_keyring_path;
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
static struct Nuitka_FrameObject *cache_frame_frame_keyring$core$$$function__17__load_keyring_path = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$core$$$function__17__load_keyring_path)) {
    Py_XDECREF(cache_frame_frame_keyring$core$$$function__17__load_keyring_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$core$$$function__17__load_keyring_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$core$$$function__17__load_keyring_path = MAKE_FUNCTION_FRAME(tstate, code_objects_3ec57ea8006d23ab14d06cae68a4501c, module_keyring$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$core$$$function__17__load_keyring_path->m_type_description == NULL);
frame_frame_keyring$core$$$function__17__load_keyring_path = cache_frame_frame_keyring$core$$$function__17__load_keyring_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core$$$function__17__load_keyring_path);
assert(Py_REFCNT(frame_frame_keyring$core$$$function__17__load_keyring_path) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_config);
tmp_expression_value_2 = par_config;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame.f_lineno = 199;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_b4d66879cda6fcdcaf37bb43c9052739_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame.f_lineno = 199;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_4 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_insert);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = const_int_0;
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_path);
tmp_args_element_value_3 = var_path;
frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame.f_lineno = 200;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_expanduser, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 200;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame.f_lineno = 200;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__17__load_keyring_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__17__load_keyring_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_5 = module_var_accessor_keyring$core$configparser(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_configparser);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_NoOptionError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_keyring$core$configparser(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_configparser);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_NoSectionError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 201;
type_description_1 = "oo";
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
    exception_lineno = 198;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame)) {
        frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core$$$function__17__load_keyring_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core$$$function__17__load_keyring_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core$$$function__17__load_keyring_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$core$$$function__17__load_keyring_path,
    type_description_1,
    par_config,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_keyring$core$$$function__17__load_keyring_path == cache_frame_frame_keyring$core$$$function__17__load_keyring_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$core$$$function__17__load_keyring_path);
    cache_frame_frame_keyring$core$$$function__17__load_keyring_path = NULL;
}

assertFrameObject(frame_frame_keyring$core$$$function__17__load_keyring_path);

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
Py_XDECREF(var_path);
var_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_config);
Py_DECREF(par_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__10__detect_backend(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__10__detect_backend,
        mod_consts.const_str_plain__detect_backend,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c872bb6569198b9f69b737d9bdbd7144,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_2272b60b955d23cb6e2ed0e7de4d9abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__11__load_keyring_class(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__11__load_keyring_class,
        mod_consts.const_str_plain__load_keyring_class,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9ea90db46b05093dafd521bd19e8aa7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_1b8644c9a6238d3d586d28627ac4ed42,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__12_load_keyring(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__12_load_keyring,
        mod_consts.const_str_plain_load_keyring,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95bb4f5a3eda76786f1d67405d2d4e57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_f3c600eedad00902b7cbceba2ef8dfc8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__13_load_env(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__13_load_env,
        mod_consts.const_str_plain_load_env,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9de27bdf2d86271191a80c2327fe8947,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_61c91373031131aca510411c2e502380,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__14__config_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__14__config_path,
        mod_consts.const_str_plain__config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fde671af76e49ed83e28bdf652cfa40d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__15__ensure_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__15__ensure_path,
        mod_consts.const_str_plain__ensure_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0f0c3e946ee7653e42f7e8e62894b99b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__16_load_config(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__16_load_config,
        mod_consts.const_str_plain_load_config,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_59f2ba9ac9b2309209a890390b284619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_91aafc032205df56b52df8f8aa5cabe9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__17__load_keyring_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__17__load_keyring_path,
        mod_consts.const_str_plain__load_keyring_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3ec57ea8006d23ab14d06cae68a4501c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_d1a005b9d7c1f1c29f1e70ea5c197fe2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__1_set_keyring(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__1_set_keyring,
        mod_consts.const_str_plain_set_keyring,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5a2d64a658cae506591f4418e5428e41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_1791969910c5945b7bc144b3a0c92d7b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__2_get_keyring(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__2_get_keyring,
        mod_consts.const_str_plain_get_keyring,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_38f6aa57dde1cec029fdc80d086df19f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_64e0383a89eda2914d9c60f479c063c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__3_disable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__3_disable,
        mod_consts.const_str_plain_disable,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b8195a10bfcf6dcb2c418ac34a8f68ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_8fc9fff08148a6ec17aad8a8abcc344f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__4_get_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__4_get_password,
        mod_consts.const_str_plain_get_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_83630251e5b120acaac51552eb0afdbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_bd9dd7701b9606c891cc90645e42f7ba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__5_set_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__5_set_password,
        mod_consts.const_str_plain_set_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_afeca6a007b258fcf9a935866fcf9b85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_9e24ff1212eb301fcea77be17eed0ae6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__6_delete_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__6_delete_password,
        mod_consts.const_str_plain_delete_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8559af952c1bdf509dbe6e9f704d356a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_332853fb40a9c72bddd72f633055802c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__7_get_credential(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__7_get_credential,
        mod_consts.const_str_plain_get_credential,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3c3db22d683e308142c61e1b1a73e45f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_bea78d984d766ebf435e2b15b3f8148b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__8_recommended(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__8_recommended,
        mod_consts.const_str_plain_recommended,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8bb967bc23d18bc4cdb9e63369ef4e4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$core$$$function__9_init_backend(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$core$$$function__9_init_backend,
        mod_consts.const_str_plain_init_backend,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a48b524d28c88c742a18171b8a66cd7f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$core,
        mod_consts.const_str_digest_5b0680911cc627139e60ff50657e3594,
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

static function_impl_code const function_table_keyring$core[] = {
impl_keyring$core$$$function__1_set_keyring,
impl_keyring$core$$$function__2_get_keyring,
impl_keyring$core$$$function__3_disable,
impl_keyring$core$$$function__4_get_password,
impl_keyring$core$$$function__5_set_password,
impl_keyring$core$$$function__6_delete_password,
impl_keyring$core$$$function__7_get_credential,
impl_keyring$core$$$function__8_recommended,
impl_keyring$core$$$function__9_init_backend,
impl_keyring$core$$$function__10__detect_backend,
impl_keyring$core$$$function__11__load_keyring_class,
impl_keyring$core$$$function__12_load_keyring,
impl_keyring$core$$$function__13_load_env,
impl_keyring$core$$$function__14__config_path,
impl_keyring$core$$$function__15__ensure_path,
impl_keyring$core$$$function__16_load_config,
impl_keyring$core$$$function__17__load_keyring_path,
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

    return Nuitka_Function_GetFunctionState(function, function_table_keyring$core);
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
        module_keyring$core,
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
        function_table_keyring$core,
        sizeof(function_table_keyring$core) / sizeof(function_impl_code)
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
static char const *module_full_name = "keyring.core";
#endif

// Internal entry point for module code.
PyObject *module_code_keyring$core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("keyring$core");

    // Store the module for future use.
    module_keyring$core = module;

    moduledict_keyring$core = MODULE_DICT(module_keyring$core);

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
        PRINT_STRING("keyring$core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("keyring$core: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("keyring$core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.core" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initkeyring$core\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_keyring$core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_keyring$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_keyring$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_keyring$core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_keyring$core);
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

        UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$core;
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
tmp_assign_source_1 = mod_consts.const_str_digest_887d1b962163d40ce1ef49dde4bc0885;
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_keyring$core = MAKE_MODULE_FRAME(code_objects_311a0aa78872fc8a7dc8eb4c2d819f3e, module_keyring$core);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$core);
assert(Py_REFCNT(frame_frame_keyring$core) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_keyring$core$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_keyring$core$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_configparser;
tmp_globals_arg_value_1 = (PyObject *)moduledict_keyring$core;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_keyring$core->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_configparser, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_keyring$core;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_keyring$core->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_keyring$core;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_backend_str_plain_credentials_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_keyring$core->m_frame.f_lineno = 13;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_keyring$core,
        mod_consts.const_str_plain_backend,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_backend);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_keyring$core,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_credentials);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials, tmp_assign_source_12);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_backends;
tmp_globals_arg_value_4 = (PyObject *)moduledict_keyring$core;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_fail_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_keyring$core->m_frame.f_lineno = 14;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_keyring$core,
        mod_consts.const_str_plain_fail,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_fail);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_fail, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_5 = (PyObject *)moduledict_keyring$core;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_platform__tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_keyring$core->m_frame.f_lineno = 15;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_keyring$core,
        mod_consts.const_str_plain_platform_,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_platform_);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_keyring$core$backend(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_1);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_KeyringBackend);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyBool_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_LimitCallable, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$core$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_keyring$core->m_frame.f_lineno = 19;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ffc9a1f27ed3e18ee79df1bc1eb98e2f_tuple, 0)
);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_16);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$core->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_keyring$core);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_None;
UPDATE_STRING_DICT0(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__keyring_backend, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_daea8136c148787637f8ca8670496ea9);

tmp_assign_source_18 = MAKE_FUNCTION_keyring$core$$$function__1_set_keyring(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_set_keyring, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ff37587a7306c602593f62a30a8bbf2f);

tmp_assign_source_19 = MAKE_FUNCTION_keyring$core$$$function__2_get_keyring(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_keyring, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_20 = MAKE_FUNCTION_keyring$core$$$function__3_disable(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_disable, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_9dc911ff1a1d82966dcc3ab6e0d9db9a);

tmp_assign_source_21 = MAKE_FUNCTION_keyring$core$$$function__4_get_password(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_password, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_5602234e9e36b6369142ae439bfe688c);

tmp_assign_source_22 = MAKE_FUNCTION_keyring$core$$$function__5_set_password(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_set_password, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_5ab05b916584b47611e4376299d193e3);

tmp_assign_source_23 = MAKE_FUNCTION_keyring$core$$$function__6_delete_password(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_delete_password, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_a029e74a5a8913757c9e9d3d66bc5024);

tmp_assign_source_24 = MAKE_FUNCTION_keyring$core$$$function__7_get_credential(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_get_credential, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_25 = MAKE_FUNCTION_keyring$core$$$function__8_recommended(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_recommended, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_9;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_7903f4ffd9f07bcf72eddf65e25421d1);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_26 = MAKE_FUNCTION_keyring$core$$$function__9_init_backend(tstate, tmp_defaults_1, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_init_backend, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_10;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_7903f4ffd9f07bcf72eddf65e25421d1);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_27 = MAKE_FUNCTION_keyring$core$$$function__10__detect_backend(tstate, tmp_defaults_2, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__detect_backend, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0996a5f61bb3cb6ea798b5ae87e1b89a);

tmp_assign_source_28 = MAKE_FUNCTION_keyring$core$$$function__11__load_keyring_class(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_class, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_97130012611822f16c6fbfbc02b95f5a);

tmp_assign_source_29 = MAKE_FUNCTION_keyring$core$$$function__12_load_keyring(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_keyring, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_9cd74e0193bd944034a7b9fb8c3a10ad);

tmp_assign_source_30 = MAKE_FUNCTION_keyring$core$$$function__13_load_env(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_env, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_keyring$core$$$function__14__config_path(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__config_path, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_keyring$core$$$function__15__ensure_path(tstate);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__ensure_path, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_9cd74e0193bd944034a7b9fb8c3a10ad);

tmp_assign_source_33 = MAKE_FUNCTION_keyring$core$$$function__16_load_config(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain_load_config, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_ed0e115389ec3045ba8e710b55ca868d);

tmp_assign_source_34 = MAKE_FUNCTION_keyring$core$$$function__17__load_keyring_path(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_keyring$core, (Nuitka_StringObject *)mod_consts.const_str_plain__load_keyring_path, tmp_assign_source_34);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("keyring$core", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.core" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_keyring$core);
    return module_keyring$core;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("keyring$core", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

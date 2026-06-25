/* Generated code for Python module 'keyring$backend'
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



/* The "module_keyring$backend" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_keyring$backend;
PyDictObject *moduledict_keyring$backend;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__register;
PyObject *const_str_plain__validate_username_in_set_password;
PyObject *const_str_plain__classes;
PyObject *const_str_plain_add;
PyObject *const_str_plain_set_password;
PyObject *const_str_plain_wraps;
PyObject *const_str_plain_wrapper;
PyObject *const_str_digest_fc74ceebf5996081ede14aeae49d66da;
PyObject *const_str_digest_a0c25ec43480979298ec21bb6d614f38;
PyObject *const_str_plain__validate_username;
PyObject *const_str_plain_orig;
PyObject *const_str_plain_set_properties_from_env;
PyObject *const_str_digest_1d37363a490fed63cdf2a3078726cc63;
PyObject *const_str_plain_priority;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_attrgetter;
PyObject *const_tuple_str_plain_viable_tuple;
PyObject *const_str_digest_b7b02a09cf118ecc3fda6c51c97b3394;
PyObject *const_str_plain_rpartition;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_underscore_str_space_tuple;
PyObject *const_str_space;
PyObject *const_str_digest_4f064173a069dea21eca360a5f319393;
PyObject *const_str_digest_70c13f39a3d94c2759c573772a24858e;
PyObject *const_str_plain_g;
PyObject *const_str_chr_41;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_7cf4e3c97ec8848441e489b4ae804aad;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
PyObject *const_str_digest_5f6f5fa53b40c63b2e46bea753e07a46;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_PasswordSetError;
PyObject *const_tuple_str_plain_reason_tuple;
PyObject *const_str_digest_7c2b11a3596e56ce8b5f26e8f913a8b3;
PyObject *const_str_plain_PasswordDeleteError;
PyObject *const_str_digest_74ba8a2c195ee4b8866052793587b991;
PyObject *const_str_plain_get_password;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_SimpleCredential;
PyObject *const_str_digest_f00d7ff548fdba94a6d58a272b28c9e2;
PyObject *const_dict_35d4517b521294de1f3d3d4896612209;
PyObject *const_str_plain_parse;
PyObject *const_str_digest_c89571532f18b5e9d4ce54672e2f6bff;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_items;
PyObject *const_str_digest_4f943d4b0b9c44a38e4f14337c003caa;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_plain_KEYRING_PROPERTY__tuple;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_update;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_entry_points;
PyObject *const_tuple_str_digest_2540683222c2073d834f932041c6152d_tuple;
PyObject *const_tuple_str_plain_group_tuple;
PyObject *const_str_plain_log;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_e2f6f0c07660e7a89fa62fe84869b838;
PyObject *const_str_plain_load;
PyObject *const_str_plain_callable;
PyObject *const_str_plain_exception;
PyObject *const_str_digest_de3f53c7d224fcc7ee8d716aae0b4246;
PyObject *const_str_digest_cc213ad4cf557816a76d40c47316c632;
PyObject *const_str_plain__load_plugins;
PyObject *const_str_plain_KeyringBackend;
PyObject *const_str_plain_get_viable_backends;
PyObject *const_str_plain_util;
PyObject *const_str_plain_suppress_exceptions;
PyObject *const_dict_4043ffee063245e397dd0c5a5c63c2e4;
PyObject *const_str_digest_e8e43de54a3507377bd61ad1d8b18a0b;
PyObject *const_str_plain_schemes;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_username;
PyObject *const_str_plain_service;
PyObject *const_str_digest_f46affcea39cbab761e35d15d5794e37;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_aad53f1bd79f95821813351ca232841a;
PyObject *const_tuple_str_plain_ExceptionTrap_tuple;
PyObject *const_str_plain_ExceptionTrap;
PyObject *const_str_digest_d01458dcd807c3c1d61760cdb5538360;
PyObject *const_tuple_str_plain_once_tuple;
PyObject *const_str_plain_once;
PyObject *const_tuple_str_plain_credentials_str_plain_errors_str_plain_util_tuple;
PyObject *const_str_plain_compat;
PyObject *const_tuple_str_plain_properties_tuple;
PyObject *const_str_plain_properties;
PyObject *const_str_digest_22f5b75bdf15f80a572cd48b02ae5681;
PyObject *const_tuple_str_plain_metadata_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60_tuple;
PyObject *const_tuple_str_plain_priority_tuple;
PyObject *const_str_plain_by_priority;
PyObject *const_str_plain__limit;
PyObject *const_str_digest_8444d93fb3038c0422795fa8bf3f982d;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_KeyringBackendMeta;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
PyObject *const_str_digest_60890bf26da32be54967cea12572b2fa;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_30;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c;
PyObject *const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c;
PyObject *const_str_digest_c8b8e23a908260c7c2087b261cc0351a;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_metaclass;
PyObject *const_tuple_str_plain_KeyringBackend_tuple_empty_tuple;
PyObject *const_str_digest_bb51ea3a0c26d8c79653153536c4bc43;
PyObject *const_int_pos_65;
PyObject *const_str_digest_959540a35d96e6c419720eba1029c8fd;
PyObject *const_str_plain_classproperty;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_f95e11a921cc9b6f5f55798a1f135d55;
PyObject *const_str_plain_passes;
PyObject *const_str_plain_viable;
PyObject *const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8;
PyObject *const_dict_99e571df66a545bdaf41e3a0fe244bd0;
PyObject *const_str_digest_a111004c4b92d7014c87e24336651d87;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_16b0ffb30b6fb0679003ca204925e01d;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_3df881ffb2c385bc61b7efc807f31672;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_06f93d56b6321f36a6550d0f31337b3a;
PyObject *const_str_digest_08502858ff99393875d0a431bf662c40;
PyObject *const_str_digest_2568fd01fc8960899405af0aaf9777dd;
PyObject *const_dict_3cc034e17be37e28c46f6a94f48d57bd;
PyObject *const_str_digest_3d55600af35e9c29f8eef9dd9f421228;
PyObject *const_dict_7c40e7a8faf23b0e805997eb2eb6af47;
PyObject *const_str_digest_27b2c400a6242c315a181181d022f1bb;
PyObject *const_dict_d294369df68a975d3c506734035b50f6;
PyObject *const_str_plain_delete_password;
PyObject *const_str_digest_b6c0631e7dc689c9230589c147804cd9;
PyObject *const_dict_136ec17860f969c6bed7f591f95f73a7;
PyObject *const_str_plain_get_credential;
PyObject *const_str_digest_d3c19159a13f55e5f2bd47a072cffa95;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_aff64cd7b1f50165b228ca6f22300ef7;
PyObject *const_dict_ca68871dd25540ecd1a96465edd2473e;
PyObject *const_str_plain_with_properties;
PyObject *const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a;
PyObject *const_str_digest_bc85784e4ab60072be598694ac043db7;
PyObject *const_str_plain_Crypter;
PyObject *const_int_pos_201;
PyObject *const_str_digest_8c323f1bba4110eea5eb03427eb3d988;
PyObject *const_str_plain_encrypt;
PyObject *const_str_digest_04dbea4e989e117dc71d2620a3e1697a;
PyObject *const_str_digest_5c443173ec025c690a1334f3f37b0d5e;
PyObject *const_str_plain_decrypt;
PyObject *const_str_digest_a8070656ce866a602171f0e3b0efe5eb;
PyObject *const_str_plain_NullCrypter;
PyObject *const_str_digest_74e5ab69d1e4c3ebb6261a30a01db285;
PyObject *const_int_pos_215;
PyObject *const_str_digest_47d503e768d70da283b35aced2b3e694;
PyObject *const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73;
PyObject *const_dict_471a6c893d68fc04bf3aeea6af37f7b7;
PyObject *const_str_plain_get_all_keyring;
PyObject *const_str_digest_d745afb9559b428caf0ca792a7e7cdca;
PyObject *const_str_plain_SchemeSelectable;
PyObject *const_int_pos_263;
PyObject *const_str_plain_default;
PyObject *const_dict_f7ee7574e1d22b79daafd1b6e4d4c842;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_289cadaa037cd9ec5891364860fc2449;
PyObject *const_str_plain__query;
PyObject *const_str_digest_52620817349bf19fe15cc8d39b57f5a8;
PyObject *const_str_digest_5a46452375be78d5d5cc9772e90e2ba5;
PyObject *const_str_digest_5a085d699ed27881074f9bc6d7186d88;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6b8a2c6cf6cd63af90bf4d908d118438_tuple;
PyObject *const_tuple_str_plain_self_str_plain_keyring_class_tuple;
PyObject *const_tuple_str_plain_ep_str_plain_init_func_tuple;
PyObject *const_tuple_d45f193bd7e08ca045c20369cdd472ca_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_classes_tuple;
PyObject *const_tuple_str_plain_self_str_plain_username_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_orig_str_plain_wrapper_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple;
PyObject *const_tuple_str_plain_viable_classes_str_plain_rings_tuple;
PyObject *const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_tuple_a821816a891fd9959b61387b8bb76f79_tuple;
PyObject *const_tuple_71a024400e294280f655ee515e1de661_tuple;
PyObject *const_tuple_6fd4be0a67a176e1140641a48ea06c60_tuple;
PyObject *const_tuple_str_plain_self_str_plain_kwargs_str_plain_alt_tuple;
PyObject *const_tuple_fe4544baa20d4349b16e045ebd10f2fd_tuple;
PyObject *const_tuple_str_plain_orig_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[202];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("keyring.backend"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__register);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_username_in_set_password);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__classes);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_password);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc74ceebf5996081ede14aeae49d66da);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0c25ec43480979298ec21bb6d614f38);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_username);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_properties_from_env);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d37363a490fed63cdf2a3078726cc63);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_priority);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrgetter);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_viable_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7b02a09cf118ecc3fda6c51c97b3394);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_str_space_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f064173a069dea21eca360a5f319393);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_70c13f39a3d94c2759c573772a24858e);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_g);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cf4e3c97ec8848441e489b4ae804aad);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f6f5fa53b40c63b2e46bea753e07a46);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordSetError);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c2b11a3596e56ce8b5f26e8f913a8b3);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordDeleteError);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_74ba8a2c195ee4b8866052793587b991);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_password);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_SimpleCredential);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_f00d7ff548fdba94a6d58a272b28c9e2);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_35d4517b521294de1f3d3d4896612209);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_c89571532f18b5e9d4ce54672e2f6bff);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f943d4b0b9c44a38e4f14337c003caa);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_KEYRING_PROPERTY__tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_entry_points);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2540683222c2073d834f932041c6152d_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_group_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2f6f0c07660e7a89fa62fe84869b838);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_exception);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_de3f53c7d224fcc7ee8d716aae0b4246);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc213ad4cf557816a76d40c47316c632);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_plugins);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackend);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_viable_backends);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_exceptions);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_4043ffee063245e397dd0c5a5c63c2e4);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8e43de54a3507377bd61ad1d8b18a0b);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_schemes);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_username);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_service);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_f46affcea39cbab761e35d15d5794e37);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExceptionTrap_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExceptionTrap);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_d01458dcd807c3c1d61760cdb5538360);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_once_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_once);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_str_plain_errors_str_plain_util_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_properties_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_properties);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_22f5b75bdf15f80a572cd48b02ae5681);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metadata_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_priority_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_by_priority);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__limit);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_8444d93fb3038c0422795fa8bf3f982d);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackendMeta);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_60890bf26da32be54967cea12572b2fa);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8b8e23a908260c7c2087b261cc0351a);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_KeyringBackend_tuple_empty_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb51ea3a0c26d8c79653153536c4bc43);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_959540a35d96e6c419720eba1029c8fd);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_classproperty);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_f95e11a921cc9b6f5f55798a1f135d55);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_passes);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_viable);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_99e571df66a545bdaf41e3a0fe244bd0);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_a111004c4b92d7014c87e24336651d87);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_16b0ffb30b6fb0679003ca204925e01d);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_3df881ffb2c385bc61b7efc807f31672);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_06f93d56b6321f36a6550d0f31337b3a);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_08502858ff99393875d0a431bf662c40);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_2568fd01fc8960899405af0aaf9777dd);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_3cc034e17be37e28c46f6a94f48d57bd);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d55600af35e9c29f8eef9dd9f421228);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_7c40e7a8faf23b0e805997eb2eb6af47);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_27b2c400a6242c315a181181d022f1bb);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_d294369df68a975d3c506734035b50f6);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6c0631e7dc689c9230589c147804cd9);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_136ec17860f969c6bed7f591f95f73a7);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_credential);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3c19159a13f55e5f2bd47a072cffa95);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_aff64cd7b1f50165b228ca6f22300ef7);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_ca68871dd25540ecd1a96465edd2473e);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_properties);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc85784e4ab60072be598694ac043db7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Crypter);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_201);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c323f1bba4110eea5eb03427eb3d988);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_04dbea4e989e117dc71d2620a3e1697a);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c443173ec025c690a1334f3f37b0d5e);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8070656ce866a602171f0e3b0efe5eb);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_NullCrypter);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_74e5ab69d1e4c3ebb6261a30a01db285);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_215);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_47d503e768d70da283b35aced2b3e694);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_471a6c893d68fc04bf3aeea6af37f7b7);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_all_keyring);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_d745afb9559b428caf0ca792a7e7cdca);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemeSelectable);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_263);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_f7ee7574e1d22b79daafd1b6e4d4c842);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_289cadaa037cd9ec5891364860fc2449);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain__query);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_52620817349bf19fe15cc8d39b57f5a8);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a46452375be78d5d5cc9772e90e2ba5);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a085d699ed27881074f9bc6d7186d88);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_6b8a2c6cf6cd63af90bf4d908d118438_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_keyring_class_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ep_str_plain_init_func_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_d45f193bd7e08ca045c20369cdd472ca_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_classes_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_username_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_orig_str_plain_wrapper_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_viable_classes_str_plain_rings_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_a821816a891fd9959b61387b8bb76f79_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_71a024400e294280f655ee515e1de661_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_6fd4be0a67a176e1140641a48ea06c60_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_alt_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_fe4544baa20d4349b16e045ebd10f2fd_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_orig_tuple);
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
void checkModuleConstants_keyring$backend(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__register));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__register);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_username_in_set_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_username_in_set_password);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__classes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__classes);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_password);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapper);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc74ceebf5996081ede14aeae49d66da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc74ceebf5996081ede14aeae49d66da);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0c25ec43480979298ec21bb6d614f38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0c25ec43480979298ec21bb6d614f38);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_username));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_username);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_orig);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_properties_from_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_properties_from_env);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d37363a490fed63cdf2a3078726cc63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d37363a490fed63cdf2a3078726cc63);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_priority));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_priority);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrgetter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrgetter);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_viable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_viable_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7b02a09cf118ecc3fda6c51c97b3394));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7b02a09cf118ecc3fda6c51c97b3394);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rpartition);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_str_space_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f064173a069dea21eca360a5f319393));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f064173a069dea21eca360a5f319393);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_70c13f39a3d94c2759c573772a24858e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70c13f39a3d94c2759c573772a24858e);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_g));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_g);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cf4e3c97ec8848441e489b4ae804aad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cf4e3c97ec8848441e489b4ae804aad);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f6f5fa53b40c63b2e46bea753e07a46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f6f5fa53b40c63b2e46bea753e07a46);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordSetError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PasswordSetError);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reason_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c2b11a3596e56ce8b5f26e8f913a8b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c2b11a3596e56ce8b5f26e8f913a8b3);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordDeleteError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PasswordDeleteError);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_74ba8a2c195ee4b8866052793587b991));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74ba8a2c195ee4b8866052793587b991);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_password);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_SimpleCredential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SimpleCredential);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_f00d7ff548fdba94a6d58a272b28c9e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f00d7ff548fdba94a6d58a272b28c9e2);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_35d4517b521294de1f3d3d4896612209));
CHECK_OBJECT_DEEP(mod_consts.const_dict_35d4517b521294de1f3d3d4896612209);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_c89571532f18b5e9d4ce54672e2f6bff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c89571532f18b5e9d4ce54672e2f6bff);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f943d4b0b9c44a38e4f14337c003caa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f943d4b0b9c44a38e4f14337c003caa);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_KEYRING_PROPERTY__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_KEYRING_PROPERTY__tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_entry_points));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_entry_points);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2540683222c2073d834f932041c6152d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2540683222c2073d834f932041c6152d_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_group_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_group_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2f6f0c07660e7a89fa62fe84869b838));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2f6f0c07660e7a89fa62fe84869b838);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exception);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_de3f53c7d224fcc7ee8d716aae0b4246));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de3f53c7d224fcc7ee8d716aae0b4246);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc213ad4cf557816a76d40c47316c632));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc213ad4cf557816a76d40c47316c632);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_plugins));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_plugins);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyringBackend);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_viable_backends));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_viable_backends);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_util);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress_exceptions);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_4043ffee063245e397dd0c5a5c63c2e4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4043ffee063245e397dd0c5a5c63c2e4);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8e43de54a3507377bd61ad1d8b18a0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8e43de54a3507377bd61ad1d8b18a0b);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_schemes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schemes);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_username));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_username);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_service));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_service);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_f46affcea39cbab761e35d15d5794e37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f46affcea39cbab761e35d15d5794e37);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExceptionTrap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ExceptionTrap_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExceptionTrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExceptionTrap);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_d01458dcd807c3c1d61760cdb5538360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d01458dcd807c3c1d61760cdb5538360);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_once_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_once_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_once));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_once);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_str_plain_errors_str_plain_util_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_credentials_str_plain_errors_str_plain_util_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compat);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_properties_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_properties_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_properties));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_properties);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_22f5b75bdf15f80a572cd48b02ae5681));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22f5b75bdf15f80a572cd48b02ae5681);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metadata_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_priority_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_priority_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_by_priority));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_by_priority);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__limit);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_8444d93fb3038c0422795fa8bf3f982d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8444d93fb3038c0422795fa8bf3f982d);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyringBackendMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyringBackendMeta);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_60890bf26da32be54967cea12572b2fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60890bf26da32be54967cea12572b2fa);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8b8e23a908260c7c2087b261cc0351a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8b8e23a908260c7c2087b261cc0351a);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_KeyringBackend_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_KeyringBackend_tuple_empty_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb51ea3a0c26d8c79653153536c4bc43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb51ea3a0c26d8c79653153536c4bc43);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_65));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_959540a35d96e6c419720eba1029c8fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_959540a35d96e6c419720eba1029c8fd);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_classproperty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_classproperty);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_f95e11a921cc9b6f5f55798a1f135d55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f95e11a921cc9b6f5f55798a1f135d55);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_passes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_passes);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_viable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_viable);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_99e571df66a545bdaf41e3a0fe244bd0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_99e571df66a545bdaf41e3a0fe244bd0);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_a111004c4b92d7014c87e24336651d87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a111004c4b92d7014c87e24336651d87);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_16b0ffb30b6fb0679003ca204925e01d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16b0ffb30b6fb0679003ca204925e01d);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_3df881ffb2c385bc61b7efc807f31672));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3df881ffb2c385bc61b7efc807f31672);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_06f93d56b6321f36a6550d0f31337b3a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_06f93d56b6321f36a6550d0f31337b3a);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_08502858ff99393875d0a431bf662c40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08502858ff99393875d0a431bf662c40);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_2568fd01fc8960899405af0aaf9777dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2568fd01fc8960899405af0aaf9777dd);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_3cc034e17be37e28c46f6a94f48d57bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3cc034e17be37e28c46f6a94f48d57bd);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d55600af35e9c29f8eef9dd9f421228));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d55600af35e9c29f8eef9dd9f421228);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_7c40e7a8faf23b0e805997eb2eb6af47));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7c40e7a8faf23b0e805997eb2eb6af47);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_27b2c400a6242c315a181181d022f1bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27b2c400a6242c315a181181d022f1bb);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_d294369df68a975d3c506734035b50f6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d294369df68a975d3c506734035b50f6);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_password);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6c0631e7dc689c9230589c147804cd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6c0631e7dc689c9230589c147804cd9);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_136ec17860f969c6bed7f591f95f73a7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_136ec17860f969c6bed7f591f95f73a7);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_credential);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3c19159a13f55e5f2bd47a072cffa95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3c19159a13f55e5f2bd47a072cffa95);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_aff64cd7b1f50165b228ca6f22300ef7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aff64cd7b1f50165b228ca6f22300ef7);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_ca68871dd25540ecd1a96465edd2473e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ca68871dd25540ecd1a96465edd2473e);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_properties));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_properties);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc85784e4ab60072be598694ac043db7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc85784e4ab60072be598694ac043db7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Crypter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Crypter);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_201));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_201);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c323f1bba4110eea5eb03427eb3d988));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c323f1bba4110eea5eb03427eb3d988);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypt);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_04dbea4e989e117dc71d2620a3e1697a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04dbea4e989e117dc71d2620a3e1697a);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c443173ec025c690a1334f3f37b0d5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c443173ec025c690a1334f3f37b0d5e);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decrypt);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8070656ce866a602171f0e3b0efe5eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8070656ce866a602171f0e3b0efe5eb);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_NullCrypter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NullCrypter);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_74e5ab69d1e4c3ebb6261a30a01db285));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74e5ab69d1e4c3ebb6261a30a01db285);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_215));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_215);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_47d503e768d70da283b35aced2b3e694));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47d503e768d70da283b35aced2b3e694);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_471a6c893d68fc04bf3aeea6af37f7b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_471a6c893d68fc04bf3aeea6af37f7b7);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_all_keyring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_all_keyring);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_d745afb9559b428caf0ca792a7e7cdca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d745afb9559b428caf0ca792a7e7cdca);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemeSelectable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemeSelectable);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_263));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_263);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_f7ee7574e1d22b79daafd1b6e4d4c842));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f7ee7574e1d22b79daafd1b6e4d4c842);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_289cadaa037cd9ec5891364860fc2449));
CHECK_OBJECT_DEEP(mod_consts.const_dict_289cadaa037cd9ec5891364860fc2449);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain__query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__query);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_52620817349bf19fe15cc8d39b57f5a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52620817349bf19fe15cc8d39b57f5a8);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a46452375be78d5d5cc9772e90e2ba5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a46452375be78d5d5cc9772e90e2ba5);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a085d699ed27881074f9bc6d7186d88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a085d699ed27881074f9bc6d7186d88);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_6b8a2c6cf6cd63af90bf4d908d118438_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6b8a2c6cf6cd63af90bf4d908d118438_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_keyring_class_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_keyring_class_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ep_str_plain_init_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ep_str_plain_init_func_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_d45f193bd7e08ca045c20369cdd472ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d45f193bd7e08ca045c20369cdd472ca_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_classes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_classes_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_username_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_username_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_orig_str_plain_wrapper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_orig_str_plain_wrapper_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_viable_classes_str_plain_rings_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_viable_classes_str_plain_rings_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_a821816a891fd9959b61387b8bb76f79_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a821816a891fd9959b61387b8bb76f79_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_71a024400e294280f655ee515e1de661_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_71a024400e294280f655ee515e1de661_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_6fd4be0a67a176e1140641a48ea06c60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6fd4be0a67a176e1140641a48ea06c60_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_alt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_alt_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_fe4544baa20d4349b16e045ebd10f2fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fe4544baa20d4349b16e045ebd10f2fd_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_orig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_orig_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_keyring$backend$Crypter(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Crypter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Crypter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Crypter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Crypter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Crypter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Crypter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Crypter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Crypter);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$ExceptionTrap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExceptionTrap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExceptionTrap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExceptionTrap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExceptionTrap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$KeyringBackend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyringBackend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyringBackend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyringBackend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyringBackend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackend);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$KeyringBackendMeta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackendMeta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyringBackendMeta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyringBackendMeta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyringBackendMeta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyringBackendMeta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackendMeta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackendMeta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackendMeta);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$_load_plugins(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain__load_plugins);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_plugins);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_plugins, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_plugins);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_plugins, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain__load_plugins);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain__load_plugins);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_plugins);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$errors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errors);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errors, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errors);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errors, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$metadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_metadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_metadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_metadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metadata);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$once(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_once);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_once);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_once, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_once);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_once, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_once);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_once);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_once);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$operator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$properties(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_properties);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_properties);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_properties, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_properties);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_properties, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_properties);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_properties);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_properties);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$util(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_util);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_util);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_util, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_util);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_util, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_util);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_util);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_util);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$backend$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ef0894d8321674152e1a5b1755277588;
static PyCodeObject *code_objects_519bbca9e8d97a59de285eebb1f52703;
static PyCodeObject *code_objects_df109cf8d90d74015fc28e8191f5a2cf;
static PyCodeObject *code_objects_865aad93449e4e6d284856f2b0c01353;
static PyCodeObject *code_objects_dfec6bc89232c9e17f3ff84d1e4bce26;
static PyCodeObject *code_objects_1b1b9a2b9544b65078b20b95e1dec208;
static PyCodeObject *code_objects_032dbfb79345625e42499c11251940a7;
static PyCodeObject *code_objects_f08828cc4377e12cfd4357fa3da9a6d8;
static PyCodeObject *code_objects_e5a76e5309e70ffbc46d81340172de7e;
static PyCodeObject *code_objects_9846833e2a6aa6fe831d8917beb0ac71;
static PyCodeObject *code_objects_39f49b78af95a2cda90e4b4874b5a2da;
static PyCodeObject *code_objects_ed6b0c049f06459d7c78a542701e26fc;
static PyCodeObject *code_objects_88d4d7bd326e40db453222af234ec73d;
static PyCodeObject *code_objects_878f869c601f9e0eb0aee4bf67d1dfff;
static PyCodeObject *code_objects_c949e13ea464d9399d99a5f5c76b6738;
static PyCodeObject *code_objects_093b823f9a5d0e3274408133e39f5b97;
static PyCodeObject *code_objects_8cc222a99067e49059a02222937cacd0;
static PyCodeObject *code_objects_88716a86813b9fb5cbc81f7fcc75beeb;
static PyCodeObject *code_objects_591781578da5a3e83b4ff673bd79e0f3;
static PyCodeObject *code_objects_6ec6b8f5d99e7ab2f2696a1b42502ee9;
static PyCodeObject *code_objects_75ffb61c38169d473a53a70bcaae68ef;
static PyCodeObject *code_objects_16c335b9a4ba0bc6fd7cfd81bed613e8;
static PyCodeObject *code_objects_8ec005d5765bca7c6dc9acf2ef100fe3;
static PyCodeObject *code_objects_61aa04130746e695b95d0e9599129989;
static PyCodeObject *code_objects_832a5a54af74df33c00058f4371d2b90;
static PyCodeObject *code_objects_4057ef856168ebfc6c225714728741f2;
static PyCodeObject *code_objects_e7f4444111f35188e4f7d44e36289d1a;
static PyCodeObject *code_objects_5eec269dcf0296fc3b0407d80810f2d3;
static PyCodeObject *code_objects_a65e38bbd3163f52e2f76b84f3d8b79e;
static PyCodeObject *code_objects_3a1cf08de5caf09a22943143d351e5b7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5a46452375be78d5d5cc9772e90e2ba5); CHECK_OBJECT(module_filename_obj);
code_objects_ef0894d8321674152e1a5b1755277588 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_5a085d699ed27881074f9bc6d7186d88, mod_consts.const_str_digest_5a085d699ed27881074f9bc6d7186d88, NULL, NULL, 0, 0, 0);
code_objects_519bbca9e8d97a59de285eebb1f52703 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Crypter, mod_consts.const_str_plain_Crypter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_df109cf8d90d74015fc28e8191f5a2cf = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KeyringBackend, mod_consts.const_str_plain_KeyringBackend, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_865aad93449e4e6d284856f2b0c01353 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KeyringBackendMeta, mod_consts.const_str_plain_KeyringBackendMeta, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dfec6bc89232c9e17f3ff84d1e4bce26 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_NullCrypter, mod_consts.const_str_plain_NullCrypter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1b1b9a2b9544b65078b20b95e1dec208 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_959540a35d96e6c419720eba1029c8fd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_032dbfb79345625e42499c11251940a7 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c, mod_consts.const_tuple_6b8a2c6cf6cd63af90bf4d908d118438_tuple, mod_consts.const_tuple_str_plain___class___tuple, 4, 0, 0);
code_objects_f08828cc4377e12cfd4357fa3da9a6d8 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_3df881ffb2c385bc61b7efc807f31672, mod_consts.const_tuple_str_plain_self_str_plain_keyring_class_tuple, NULL, 1, 0, 0);
code_objects_e5a76e5309e70ffbc46d81340172de7e = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__load_plugins, mod_consts.const_str_plain__load_plugins, mod_consts.const_tuple_str_plain_ep_str_plain_init_func_tuple, NULL, 0, 0, 0);
code_objects_9846833e2a6aa6fe831d8917beb0ac71 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__query, mod_consts.const_str_digest_52620817349bf19fe15cc8d39b57f5a8, mod_consts.const_tuple_d45f193bd7e08ca045c20369cdd472ca_tuple, NULL, 3, 0, 0);
code_objects_39f49b78af95a2cda90e4b4874b5a2da = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__register, mod_consts.const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c, mod_consts.const_tuple_str_plain_cls_str_plain_classes_tuple, NULL, 1, 0, 0);
code_objects_ed6b0c049f06459d7c78a542701e26fc = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_username, mod_consts.const_str_digest_3d55600af35e9c29f8eef9dd9f421228, mod_consts.const_tuple_str_plain_self_str_plain_username_tuple, NULL, 2, 0, 0);
code_objects_88d4d7bd326e40db453222af234ec73d = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_username_in_set_password, mod_consts.const_str_digest_c8b8e23a908260c7c2087b261cc0351a, mod_consts.const_tuple_str_plain_cls_str_plain_orig_str_plain_wrapper_tuple, NULL, 1, 0, 0);
code_objects_878f869c601f9e0eb0aee4bf67d1dfff = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_digest_a8070656ce866a602171f0e3b0efe5eb, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_c949e13ea464d9399d99a5f5c76b6738 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_093b823f9a5d0e3274408133e39f5b97 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete_password, mod_consts.const_str_digest_b6c0631e7dc689c9230589c147804cd9, mod_consts.const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple, NULL, 3, 0, 0);
code_objects_8cc222a99067e49059a02222937cacd0 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_digest_04dbea4e989e117dc71d2620a3e1697a, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_88716a86813b9fb5cbc81f7fcc75beeb = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_digest_47d503e768d70da283b35aced2b3e694, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_591781578da5a3e83b4ff673bd79e0f3 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_all_keyring, mod_consts.const_str_plain_get_all_keyring, mod_consts.const_tuple_str_plain_viable_classes_str_plain_rings_tuple, NULL, 0, 0, 0);
code_objects_6ec6b8f5d99e7ab2f2696a1b42502ee9 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_credential, mod_consts.const_str_digest_d3c19159a13f55e5f2bd47a072cffa95, mod_consts.const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple, NULL, 3, 0, 0);
code_objects_75ffb61c38169d473a53a70bcaae68ef = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_password, mod_consts.const_str_digest_2568fd01fc8960899405af0aaf9777dd, mod_consts.const_tuple_str_plain_self_str_plain_service_str_plain_username_tuple, NULL, 3, 0, 0);
code_objects_16c335b9a4ba0bc6fd7cfd81bed613e8 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_viable_backends, mod_consts.const_str_digest_a111004c4b92d7014c87e24336651d87, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_8ec005d5765bca7c6dc9acf2ef100fe3 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_name, mod_consts.const_str_digest_16b0ffb30b6fb0679003ca204925e01d, mod_consts.const_tuple_a821816a891fd9959b61387b8bb76f79_tuple, NULL, 1, 0, 0);
code_objects_61aa04130746e695b95d0e9599129989 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_c89571532f18b5e9d4ce54672e2f6bff, mod_consts.const_tuple_71a024400e294280f655ee515e1de661_tuple, NULL, 1, 0, 0);
code_objects_832a5a54af74df33c00058f4371d2b90 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_priority, mod_consts.const_str_digest_f95e11a921cc9b6f5f55798a1f135d55, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4057ef856168ebfc6c225714728741f2 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_password, mod_consts.const_str_digest_27b2c400a6242c315a181181d022f1bb, mod_consts.const_tuple_ec143a4442af82b02fbc5dc5044438bf_tuple, NULL, 4, 0, 0);
code_objects_e7f4444111f35188e4f7d44e36289d1a = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_properties_from_env, mod_consts.const_str_digest_aff64cd7b1f50165b228ca6f22300ef7, mod_consts.const_tuple_6fd4be0a67a176e1140641a48ea06c60_tuple, NULL, 1, 0, 0);
code_objects_5eec269dcf0296fc3b0407d80810f2d3 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_viable, mod_consts.const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_a65e38bbd3163f52e2f76b84f3d8b79e = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_properties, mod_consts.const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_alt_tuple, NULL, 1, 0, 0);
code_objects_3a1cf08de5caf09a22943143d351e5b7 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapper, mod_consts.const_str_digest_fc74ceebf5996081ede14aeae49d66da, mod_consts.const_tuple_fe4544baa20d4349b16e045ebd10f2fd_tuple, mod_consts.const_tuple_str_plain_orig_tuple, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__10_get_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__11__validate_username(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__12_set_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__13_delete_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__14_get_credential(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__16_with_properties(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__17_encrypt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__18_decrypt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__19_encrypt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__20_decrypt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__21__load_plugins(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__22_get_all_keyring(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__23__query(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__2__register(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__4___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__5_priority(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__6_viable(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__7_get_viable_backends(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__8_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_keyring$backend$$$function__9___str__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_keyring$backend$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_bases = python_pars[2];
PyObject *par_dict = python_pars[3];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_032dbfb79345625e42499c11251940a7, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__1___init__->m_type_description == NULL);
frame_frame_keyring$backend$$$function__1___init__ = cache_frame_frame_keyring$backend$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__1___init__);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 40;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_keyring$backend, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_bases);
tmp_args_element_value_2 = par_bases;
CHECK_OBJECT(par_dict);
tmp_args_element_value_3 = par_dict;
frame_frame_keyring$backend$$$function__1___init__->m_frame.f_lineno = 40;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        const_str_plain___init__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_cls);
tmp_called_instance_2 = par_cls;
frame_frame_keyring$backend$$$function__1___init__->m_frame.f_lineno = 41;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__register);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_cls);
tmp_called_instance_3 = par_cls;
frame_frame_keyring$backend$$$function__1___init__->m_frame.f_lineno = 42;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__validate_username_in_set_password);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__1___init__,
    type_description_1,
    par_cls,
    par_name,
    par_bases,
    par_dict,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__1___init__ == cache_frame_frame_keyring$backend$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__1___init__);
    cache_frame_frame_keyring$backend$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__1___init__);

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
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
CHECK_OBJECT(par_dict);
Py_DECREF(par_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
CHECK_OBJECT(par_dict);
Py_DECREF(par_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__2__register(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_classes = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__2__register;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__2__register = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__2__register)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__2__register);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__2__register == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__2__register = MAKE_FUNCTION_FRAME(tstate, code_objects_39f49b78af95a2cda90e4b4874b5a2da, module_keyring$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__2__register->m_type_description == NULL);
frame_frame_keyring$backend$$$function__2__register = cache_frame_frame_keyring$backend$$$function__2__register;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__2__register);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__2__register) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__classes);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = PySet_New(NULL);
CHECK_OBJECT(par_cls);
tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__classes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__classes);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_classes == NULL);
var_classes = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_cls);
tmp_expression_value_3 = par_cls;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___abstractmethods__);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
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
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_classes);
tmp_called_instance_1 = var_classes;
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_keyring$backend$$$function__2__register->m_frame.f_lineno = 49;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__2__register, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__2__register->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__2__register, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__2__register,
    type_description_1,
    par_cls,
    var_classes
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__2__register == cache_frame_frame_keyring$backend$$$function__2__register) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__2__register);
    cache_frame_frame_keyring$backend$$$function__2__register = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__2__register);

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
CHECK_OBJECT(var_classes);
CHECK_OBJECT(var_classes);
Py_DECREF(var_classes);
var_classes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_classes);
var_classes = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__3__validate_username_in_set_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *var_orig = Nuitka_Cell_NewEmpty();
PyObject *var_wrapper = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__3__validate_username_in_set_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password = MAKE_FUNCTION_FRAME(tstate, code_objects_88d4d7bd326e40db453222af234ec73d, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password->m_type_description == NULL);
frame_frame_keyring$backend$$$function__3__validate_username_in_set_password = cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__3__validate_username_in_set_password);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set_password);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_orig) == NULL);
Nuitka_Cell_SET(var_orig, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(var_orig));
tmp_args_element_value_1 = Nuitka_Cell_GET(var_orig);
frame_frame_keyring$backend$$$function__3__validate_username_in_set_password->m_frame.f_lineno = 57;
tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wraps, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = var_orig;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_2 = MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper(tstate, tmp_closure_1);

frame_frame_keyring$backend$$$function__3__validate_username_in_set_password->m_frame.f_lineno = 57;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
assert(var_wrapper == NULL);
var_wrapper = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_wrapper);
tmp_assattr_value_1 = var_wrapper;
CHECK_OBJECT(par_cls);
tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_set_password, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__3__validate_username_in_set_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__3__validate_username_in_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__3__validate_username_in_set_password,
    type_description_1,
    par_cls,
    var_orig,
    var_wrapper
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__3__validate_username_in_set_password == cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password);
    cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password);

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
CHECK_OBJECT(var_orig);
CHECK_OBJECT(var_orig);
Py_DECREF(var_orig);
var_orig = NULL;
CHECK_OBJECT(var_wrapper);
CHECK_OBJECT(var_wrapper);
Py_DECREF(var_wrapper);
var_wrapper = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_orig);
CHECK_OBJECT(var_orig);
Py_DECREF(var_orig);
var_orig = NULL;
Py_XDECREF(var_wrapper);
var_wrapper = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_system = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *par_args = python_pars[3];
PyObject *par_kwargs = python_pars[4];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper = MAKE_FUNCTION_FRAME(tstate, code_objects_3a1cf08de5caf09a22943143d351e5b7, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper->m_type_description == NULL);
frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper = cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_username);
tmp_args_element_value_1 = par_username;
frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper->m_frame.f_lineno = 59;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__validate_username, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_system);
tmp_tuple_element_1 = par_system;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_username);
tmp_tuple_element_1 = par_username;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper,
    type_description_1,
    par_self,
    par_system,
    par_username,
    par_args,
    par_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper == cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper);
    cache_frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper);

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
CHECK_OBJECT(par_system);
Py_DECREF(par_system);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_system);
Py_DECREF(par_system);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1b1b9a2b9544b65078b20b95e1dec208, module_keyring$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__4___init__->m_type_description == NULL);
frame_frame_keyring$backend$$$function__4___init__ = cache_frame_frame_keyring$backend$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__4___init__);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_keyring$backend$$$function__4___init__->m_frame.f_lineno = 71;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_properties_from_env);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__4___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__4___init__ == cache_frame_frame_keyring$backend$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__4___init__);
    cache_frame_frame_keyring$backend$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__4___init__);

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


static PyObject *impl_keyring$backend$$$function__5_priority(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__5_priority;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__5_priority = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__5_priority)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__5_priority);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__5_priority == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__5_priority = MAKE_FUNCTION_FRAME(tstate, code_objects_832a5a54af74df33c00058f4371d2b90, module_keyring$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__5_priority->m_type_description == NULL);
frame_frame_keyring$backend$$$function__5_priority = cache_frame_frame_keyring$backend$$$function__5_priority;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__5_priority);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__5_priority) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 89;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__5_priority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__5_priority->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__5_priority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__5_priority,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__5_priority == cache_frame_frame_keyring$backend$$$function__5_priority) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__5_priority);
    cache_frame_frame_keyring$backend$$$function__5_priority = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__5_priority);

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

}


static PyObject *impl_keyring$backend$$$function__6_viable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__6_viable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__6_viable = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__6_viable)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__6_viable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__6_viable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__6_viable = MAKE_FUNCTION_FRAME(tstate, code_objects_5eec269dcf0296fc3b0407d80810f2d3, module_keyring$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__6_viable->m_type_description == NULL);
frame_frame_keyring$backend$$$function__6_viable = cache_frame_frame_keyring$backend$$$function__6_viable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__6_viable);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__6_viable) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_priority);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__6_viable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__6_viable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__6_viable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__6_viable,
    type_description_1,
    par_cls
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__6_viable == cache_frame_frame_keyring$backend$$$function__6_viable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__6_viable);
    cache_frame_frame_keyring$backend$$$function__6_viable = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__6_viable);

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
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__7_get_viable_backends(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__7_get_viable_backends;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__7_get_viable_backends = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__7_get_viable_backends)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__7_get_viable_backends);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__7_get_viable_backends == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__7_get_viable_backends = MAKE_FUNCTION_FRAME(tstate, code_objects_16c335b9a4ba0bc6fd7cfd81bed613e8, module_keyring$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__7_get_viable_backends->m_type_description == NULL);
frame_frame_keyring$backend$$$function__7_get_viable_backends = cache_frame_frame_keyring$backend$$$function__7_get_viable_backends;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__7_get_viable_backends);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__7_get_viable_backends) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = (PyObject *)&PyFilter_Type;
tmp_called_instance_1 = module_var_accessor_keyring$backend$operator(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__7_get_viable_backends->m_frame.f_lineno = 106;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_attrgetter,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_viable_tuple, 0)
);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__classes);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__7_get_viable_backends->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__7_get_viable_backends, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__7_get_viable_backends->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__7_get_viable_backends, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__7_get_viable_backends,
    type_description_1,
    par_cls
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__7_get_viable_backends == cache_frame_frame_keyring$backend$$$function__7_get_viable_backends) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__7_get_viable_backends);
    cache_frame_frame_keyring$backend$$$function__7_get_viable_backends = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__7_get_viable_backends);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__8_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_parent = NULL;
PyObject *var_sep = NULL;
PyObject *var_mod_name = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__8_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__8_name = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__8_name)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__8_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__8_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__8_name = MAKE_FUNCTION_FRAME(tstate, code_objects_8ec005d5765bca7c6dc9acf2ef100fe3, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__8_name->m_type_description == NULL);
frame_frame_keyring$backend$$$function__8_name = cache_frame_frame_keyring$backend$$$function__8_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__8_name);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__8_name) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___module__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rpartition);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_keyring$backend$$$function__8_name->m_frame.f_lineno = 115;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
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



exception_lineno = 115;
type_description_1 = "oooo";
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



exception_lineno = 115;
type_description_1 = "oooo";
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



exception_lineno = 115;
type_description_1 = "oooo";
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



exception_lineno = 115;
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
assert(var_parent == NULL);
Py_INCREF(tmp_assign_source_5);
var_parent = tmp_assign_source_5;
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
assert(var_mod_name == NULL);
Py_INCREF(tmp_assign_source_7);
var_mod_name = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_mod_name);
tmp_expression_value_3 = var_mod_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_replace);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__8_name->m_frame.f_lineno = 116;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_underscore_str_space_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mod_name;
    assert(old != NULL);
    var_mod_name = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(var_mod_name);
tmp_list_element_1 = var_mod_name;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_cls);
tmp_expression_value_4 = par_cls;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__8_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__8_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__8_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__8_name,
    type_description_1,
    par_cls,
    var_parent,
    var_sep,
    var_mod_name
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__8_name == cache_frame_frame_keyring$backend$$$function__8_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__8_name);
    cache_frame_frame_keyring$backend$$$function__8_name = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__8_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_parent);
CHECK_OBJECT(var_parent);
Py_DECREF(var_parent);
var_parent = NULL;
CHECK_OBJECT(var_sep);
CHECK_OBJECT(var_sep);
Py_DECREF(var_sep);
var_sep = NULL;
CHECK_OBJECT(var_mod_name);
CHECK_OBJECT(var_mod_name);
Py_DECREF(var_mod_name);
var_mod_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parent);
var_parent = NULL;
Py_XDECREF(var_sep);
var_sep = NULL;
Py_XDECREF(var_mod_name);
var_mod_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__9___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_keyring_class = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__9___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__9___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_keyring_class == NULL);
var_keyring_class = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__9___str__)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__9___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__9___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__9___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f08828cc4377e12cfd4357fa3da9a6d8, module_keyring$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__9___str__->m_type_description == NULL);
frame_frame_keyring$backend$$$function__9___str__ = cache_frame_frame_keyring$backend$$$function__9___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__9___str__);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__9___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_keyring_class);
tmp_expression_value_1 = var_keyring_class;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___module__);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_keyring_class);
tmp_expression_value_2 = var_keyring_class;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
assert(!(tmp_format_value_2 == NULL));
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_70c13f39a3d94c2759c573772a24858e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_keyring_class);
tmp_expression_value_3 = var_keyring_class;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_priority);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = mod_consts.const_str_plain_g;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__9___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__9___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__9___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__9___str__,
    type_description_1,
    par_self,
    var_keyring_class
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__9___str__ == cache_frame_frame_keyring$backend$$$function__9___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__9___str__);
    cache_frame_frame_keyring$backend$$$function__9___str__ = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__9___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_keyring_class);
CHECK_OBJECT(var_keyring_class);
Py_DECREF(var_keyring_class);
var_keyring_class = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_keyring_class);
CHECK_OBJECT(var_keyring_class);
Py_DECREF(var_keyring_class);
var_keyring_class = NULL;
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


static PyObject *impl_keyring$backend$$$function__11__validate_username(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_username = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__11__validate_username;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__11__validate_username = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__11__validate_username)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__11__validate_username);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__11__validate_username == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__11__validate_username = MAKE_FUNCTION_FRAME(tstate, code_objects_ed6b0c049f06459d7c78a542701e26fc, module_keyring$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__11__validate_username->m_type_description == NULL);
frame_frame_keyring$backend$$$function__11__validate_username = cache_frame_frame_keyring$backend$$$function__11__validate_username;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__11__validate_username);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__11__validate_username) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_username);
tmp_operand_value_1 = par_username;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backend$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_7cf4e3c97ec8848441e489b4ae804aad;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_keyring$backend$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
frame_frame_keyring$backend$$$function__11__validate_username->m_frame.f_lineno = 134;
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


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__11__validate_username, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__11__validate_username->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__11__validate_username, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__11__validate_username,
    type_description_1,
    par_self,
    par_username
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__11__validate_username == cache_frame_frame_keyring$backend$$$function__11__validate_username) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__11__validate_username);
    cache_frame_frame_keyring$backend$$$function__11__validate_username = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__11__validate_username);

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
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__12_set_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *par_password = python_pars[3];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__12_set_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__12_set_password = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__12_set_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__12_set_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__12_set_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__12_set_password = MAKE_FUNCTION_FRAME(tstate, code_objects_4057ef856168ebfc6c225714728741f2, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__12_set_password->m_type_description == NULL);
frame_frame_keyring$backend$$$function__12_set_password = cache_frame_frame_keyring$backend$$$function__12_set_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__12_set_password);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__12_set_password) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$backend$errors(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__12_set_password->m_frame.f_lineno = 148;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PasswordSetError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_reason_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__12_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__12_set_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__12_set_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__12_set_password,
    type_description_1,
    par_self,
    par_service,
    par_username,
    par_password
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__12_set_password == cache_frame_frame_keyring$backend$$$function__12_set_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__12_set_password);
    cache_frame_frame_keyring$backend$$$function__12_set_password = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__12_set_password);

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
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_keyring$backend$$$function__13_delete_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__13_delete_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__13_delete_password = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__13_delete_password)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__13_delete_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__13_delete_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__13_delete_password = MAKE_FUNCTION_FRAME(tstate, code_objects_093b823f9a5d0e3274408133e39f5b97, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__13_delete_password->m_type_description == NULL);
frame_frame_keyring$backend$$$function__13_delete_password = cache_frame_frame_keyring$backend$$$function__13_delete_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__13_delete_password);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__13_delete_password) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$backend$errors(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__13_delete_password->m_frame.f_lineno = 159;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PasswordDeleteError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_reason_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 159;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__13_delete_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__13_delete_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__13_delete_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__13_delete_password,
    type_description_1,
    par_self,
    par_service,
    par_username
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__13_delete_password == cache_frame_frame_keyring$backend$$$function__13_delete_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__13_delete_password);
    cache_frame_frame_keyring$backend$$$function__13_delete_password = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__13_delete_password);

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
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_keyring$backend$$$function__14_get_credential(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *var_password = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__14_get_credential;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__14_get_credential = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__14_get_credential)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__14_get_credential);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__14_get_credential == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__14_get_credential = MAKE_FUNCTION_FRAME(tstate, code_objects_6ec6b8f5d99e7ab2f2696a1b42502ee9, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__14_get_credential->m_type_description == NULL);
frame_frame_keyring$backend$$$function__14_get_credential = cache_frame_frame_keyring$backend$$$function__14_get_credential;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__14_get_credential);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__14_get_credential) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_username);
tmp_cmp_expr_left_1 = par_username;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_service);
tmp_args_element_value_1 = par_service;
CHECK_OBJECT(par_username);
tmp_args_element_value_2 = par_username;
frame_frame_keyring$backend$$$function__14_get_credential->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_get_password,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_password == NULL);
var_password = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_password);
tmp_cmp_expr_left_2 = var_password;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_keyring$backend$credentials(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_username);
tmp_args_element_value_3 = par_username;
CHECK_OBJECT(var_password);
tmp_args_element_value_4 = var_password;
frame_frame_keyring$backend$$$function__14_get_credential->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_SimpleCredential,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__14_get_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__14_get_credential->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__14_get_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__14_get_credential,
    type_description_1,
    par_self,
    par_service,
    par_username,
    var_password
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__14_get_credential == cache_frame_frame_keyring$backend$$$function__14_get_credential) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__14_get_credential);
    cache_frame_frame_keyring$backend$$$function__14_get_credential = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__14_get_credential);

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
Py_XDECREF(var_password);
var_password = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_password);
var_password = NULL;
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
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
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


static PyObject *impl_keyring$backend$$$function__15_set_properties_from_env(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_props = NULL;
PyObject *var_parse = NULL;
PyObject *var_name = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__15_set_properties_from_env;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_35d4517b521294de1f3d3d4896612209);

tmp_assign_source_1 = MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse(tstate, tmp_annotations_1);

assert(var_parse == NULL);
var_parse = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env = MAKE_FUNCTION_FRAME(tstate, code_objects_e7f4444111f35188e4f7d44e36289d1a, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env->m_type_description == NULL);
frame_frame_keyring$backend$$$function__15_set_properties_from_env = cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__15_set_properties_from_env);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__15_set_properties_from_env) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = (PyObject *)&PyFilter_Type;
tmp_args_element_value_1 = Py_None;
tmp_called_value_2 = (PyObject *)&PyMap_Type;
CHECK_OBJECT(var_parse);
tmp_args_element_value_3 = var_parse;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__15_set_properties_from_env->m_frame.f_lineno = 191;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__15_set_properties_from_env->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__15_set_properties_from_env->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_props == NULL);
var_props = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_props);
tmp_iter_arg_1 = var_props;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 192;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_8;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_9;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
CHECK_OBJECT(var_name);
tmp_name_value_1 = var_name;
CHECK_OBJECT(var_value);
tmp_value_value_1 = var_value;
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_3, tmp_name_value_1, tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__15_set_properties_from_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__15_set_properties_from_env->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__15_set_properties_from_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__15_set_properties_from_env,
    type_description_1,
    par_self,
    var_props,
    var_parse,
    var_name,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__15_set_properties_from_env == cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env);
    cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__15_set_properties_from_env);

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
CHECK_OBJECT(var_props);
CHECK_OBJECT(var_props);
Py_DECREF(var_props);
var_props = NULL;
CHECK_OBJECT(var_parse);
CHECK_OBJECT(var_parse);
Py_DECREF(var_parse);
var_parse = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_props);
var_props = NULL;
CHECK_OBJECT(var_parse);
CHECK_OBJECT(var_parse);
Py_DECREF(var_parse);
var_parse = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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


static PyObject *impl_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_item = python_pars[0];
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *var_pre = NULL;
PyObject *var_sep = NULL;
PyObject *var_name = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_61aa04130746e695b95d0e9599129989, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse->m_type_description == NULL);
frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse = cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_item);
tmp_iter_arg_1 = par_item;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "oooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_4);
var_key = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_value == NULL);
Py_INCREF(tmp_assign_source_5);
var_value = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_key);
tmp_expression_value_1 = var_key;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_partition);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse->m_frame.f_lineno = 188;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_KEYRING_PROPERTY__tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
assert(var_pre == NULL);
Py_INCREF(tmp_assign_source_10);
var_pre = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
assert(var_sep == NULL);
Py_INCREF(tmp_assign_source_11);
var_sep = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_3;
assert(var_name == NULL);
Py_INCREF(tmp_assign_source_12);
var_name = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_sep);
tmp_and_left_value_1 = var_sep;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_name);
tmp_expression_value_2 = var_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse->m_frame.f_lineno = 189;
tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_and_right_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_value);
tmp_tuple_element_1 = var_value;
PyTuple_SET_ITEM0(tmp_and_right_value_1, 1, tmp_tuple_element_1);
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse,
    type_description_1,
    par_item,
    var_key,
    var_value,
    var_pre,
    var_sep,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse == cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse);
    cache_frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
CHECK_OBJECT(var_pre);
CHECK_OBJECT(var_pre);
Py_DECREF(var_pre);
var_pre = NULL;
CHECK_OBJECT(var_sep);
CHECK_OBJECT(var_sep);
Py_DECREF(var_sep);
var_sep = NULL;
CHECK_OBJECT(var_name);
CHECK_OBJECT(var_name);
Py_DECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_pre);
var_pre = NULL;
Py_XDECREF(var_sep);
var_sep = NULL;
Py_XDECREF(var_name);
var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_item);
Py_DECREF(par_item);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_item);
Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__16_with_properties(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_alt = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__16_with_properties;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__16_with_properties = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__16_with_properties)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__16_with_properties);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__16_with_properties == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__16_with_properties = MAKE_FUNCTION_FRAME(tstate, code_objects_a65e38bbd3163f52e2f76b84f3d8b79e, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__16_with_properties->m_type_description == NULL);
frame_frame_keyring$backend$$$function__16_with_properties = cache_frame_frame_keyring$backend$$$function__16_with_properties;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__16_with_properties);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__16_with_properties) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backend$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_keyring$backend$$$function__16_with_properties->m_frame.f_lineno = 196;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_alt == NULL);
var_alt = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_vars_arg_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_alt);
tmp_vars_arg_1 = var_alt;
tmp_expression_value_2 = LOOKUP_VARS(tstate, tmp_vars_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_2 = par_kwargs;
frame_frame_keyring$backend$$$function__16_with_properties->m_frame.f_lineno = 197;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__16_with_properties, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__16_with_properties->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__16_with_properties, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__16_with_properties,
    type_description_1,
    par_self,
    par_kwargs,
    var_alt
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__16_with_properties == cache_frame_frame_keyring$backend$$$function__16_with_properties) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__16_with_properties);
    cache_frame_frame_keyring$backend$$$function__16_with_properties = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__16_with_properties);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_alt);
tmp_return_value = var_alt;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_alt);
CHECK_OBJECT(var_alt);
Py_DECREF(var_alt);
var_alt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_alt);
var_alt = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__19_encrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__20_decrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$backend$$$function__21__load_plugins(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_ep = NULL;
PyObject *var_init_func = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__21__load_plugins;
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
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__21__load_plugins = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__21__load_plugins)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__21__load_plugins);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__21__load_plugins == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__21__load_plugins = MAKE_FUNCTION_FRAME(tstate, code_objects_e5a76e5309e70ffbc46d81340172de7e, module_keyring$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__21__load_plugins->m_type_description == NULL);
frame_frame_keyring$backend$$$function__21__load_plugins = cache_frame_frame_keyring$backend$$$function__21__load_plugins;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__21__load_plugins);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__21__load_plugins) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backend$metadata(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metadata);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_entry_points);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 241;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2540683222c2073d834f932041c6152d_tuple, 0), mod_consts.const_tuple_str_plain_group_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
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
exception_lineno = 241;
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
    PyObject *old = var_ep;
    var_ep = tmp_assign_source_3;
    Py_INCREF(var_ep);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_keyring$backend$log(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_debug);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_e2f6f0c07660e7a89fa62fe84869b838;
CHECK_OBJECT(var_ep);
tmp_expression_value_3 = var_ep;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 243;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_ep);
tmp_called_instance_1 = var_ep;
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 244;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_init_func;
    var_init_func = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(var_init_func);
tmp_args_element_value_3 = var_init_func;
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 245;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 245;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_init_func);
tmp_called_value_4 = var_init_func;
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 246;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__21__load_plugins, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__21__load_plugins, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_4 = module_var_accessor_keyring$backend$log(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_exception);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_de3f53c7d224fcc7ee8d716aae0b4246;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_ep);
tmp_format_value_1 = var_ep;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = 248;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 242;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_keyring$backend$$$function__21__load_plugins->m_frame)) {
        frame_frame_keyring$backend$$$function__21__load_plugins->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__21__load_plugins, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__21__load_plugins->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__21__load_plugins, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__21__load_plugins,
    type_description_1,
    var_ep,
    var_init_func
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__21__load_plugins == cache_frame_frame_keyring$backend$$$function__21__load_plugins) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__21__load_plugins);
    cache_frame_frame_keyring$backend$$$function__21__load_plugins = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__21__load_plugins);

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
Py_XDECREF(var_ep);
var_ep = NULL;
Py_XDECREF(var_init_func);
var_init_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ep);
var_ep = NULL;
Py_XDECREF(var_init_func);
var_init_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_keyring$backend$$$function__22_get_all_keyring(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_viable_classes = NULL;
PyObject *var_rings = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__22_get_all_keyring;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__22_get_all_keyring = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__22_get_all_keyring)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__22_get_all_keyring);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__22_get_all_keyring == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__22_get_all_keyring = MAKE_FUNCTION_FRAME(tstate, code_objects_591781578da5a3e83b4ff673bd79e0f3, module_keyring$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__22_get_all_keyring->m_type_description == NULL);
frame_frame_keyring$backend$$$function__22_get_all_keyring = cache_frame_frame_keyring$backend$$$function__22_get_all_keyring;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__22_get_all_keyring);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__22_get_all_keyring) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
tmp_called_value_1 = module_var_accessor_keyring$backend$_load_plugins(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_plugins);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__22_get_all_keyring->m_frame.f_lineno = 257;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$backend$KeyringBackend(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyringBackend);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$backend$$$function__22_get_all_keyring->m_frame.f_lineno = 258;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_viable_backends);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_viable_classes == NULL);
var_viable_classes = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backend$util(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_util);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_suppress_exceptions);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_viable_classes);
tmp_tuple_element_1 = var_viable_classes;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_4043ffee063245e397dd0c5a5c63c2e4);
frame_frame_keyring$backend$$$function__22_get_all_keyring->m_frame.f_lineno = 259;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_rings == NULL);
var_rings = tmp_assign_source_2;
}
{
PyObject *tmp_list_arg_1;
CHECK_OBJECT(var_rings);
tmp_list_arg_1 = var_rings;
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__22_get_all_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__22_get_all_keyring->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__22_get_all_keyring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__22_get_all_keyring,
    type_description_1,
    var_viable_classes,
    var_rings
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__22_get_all_keyring == cache_frame_frame_keyring$backend$$$function__22_get_all_keyring) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__22_get_all_keyring);
    cache_frame_frame_keyring$backend$$$function__22_get_all_keyring = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__22_get_all_keyring);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_viable_classes);
CHECK_OBJECT(var_viable_classes);
Py_DECREF(var_viable_classes);
var_viable_classes = NULL;
CHECK_OBJECT(var_rings);
CHECK_OBJECT(var_rings);
Py_DECREF(var_rings);
var_rings = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_viable_classes);
var_viable_classes = NULL;
Py_XDECREF(var_rings);
var_rings = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_keyring$backend$$$function__23__query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_service = python_pars[1];
PyObject *par_username = python_pars[2];
PyObject *par_base = python_pars[3];
PyObject *var_scheme = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$function__23__query;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$backend$$$function__23__query = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$backend$$$function__23__query)) {
    Py_XDECREF(cache_frame_frame_keyring$backend$$$function__23__query);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$backend$$$function__23__query == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$backend$$$function__23__query = MAKE_FUNCTION_FRAME(tstate, code_objects_9846833e2a6aa6fe831d8917beb0ac71, module_keyring$backend, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$backend$$$function__23__query->m_type_description == NULL);
frame_frame_keyring$backend$$$function__23__query = cache_frame_frame_keyring$backend$$$function__23__query;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$function__23__query);
assert(Py_REFCNT(frame_frame_keyring$backend$$$function__23__query) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_schemes);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_scheme == NULL);
var_scheme = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = (PyObject *)&PyDict_Type;
CHECK_OBJECT(par_username);
tmp_cmp_expr_left_1 = par_username;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_scheme);
tmp_expression_value_4 = var_scheme;
tmp_subscript_value_2 = mod_consts.const_str_plain_username;
tmp_dict_key_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_username);
tmp_dict_value_1 = par_username;
tmp_tuple_element_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_scheme);
tmp_expression_value_5 = var_scheme;
tmp_subscript_value_3 = mod_consts.const_str_plain_service;
tmp_dict_key_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(par_service);
tmp_dict_value_1 = par_service;
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_tuple_element_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_scheme);
tmp_expression_value_6 = var_scheme;
tmp_subscript_value_4 = mod_consts.const_str_plain_service;
tmp_dict_key_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_service);
tmp_dict_value_2 = par_service;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto dict_build_exception_2;
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_tuple_element_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
condexpr_end_1:;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_base);
tmp_direct_call_arg3_1 = par_base;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$function__23__query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$function__23__query->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$function__23__query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$function__23__query,
    type_description_1,
    par_self,
    par_service,
    par_username,
    par_base,
    var_scheme
);


// Release cached frame if used for exception.
if (frame_frame_keyring$backend$$$function__23__query == cache_frame_frame_keyring$backend$$$function__23__query) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$backend$$$function__23__query);
    cache_frame_frame_keyring$backend$$$function__23__query = NULL;
}

assertFrameObject(frame_frame_keyring$backend$$$function__23__query);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
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
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_service);
Py_DECREF(par_service);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__10_get_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_password,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2568fd01fc8960899405af0aaf9777dd,
#endif
        code_objects_75ffb61c38169d473a53a70bcaae68ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_08502858ff99393875d0a431bf662c40,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__11__validate_username(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__11__validate_username,
        mod_consts.const_str_plain__validate_username,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d55600af35e9c29f8eef9dd9f421228,
#endif
        code_objects_ed6b0c049f06459d7c78a542701e26fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_5f6f5fa53b40c63b2e46bea753e07a46,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__12_set_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__12_set_password,
        mod_consts.const_str_plain_set_password,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27b2c400a6242c315a181181d022f1bb,
#endif
        code_objects_4057ef856168ebfc6c225714728741f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_7c2b11a3596e56ce8b5f26e8f913a8b3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__13_delete_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__13_delete_password,
        mod_consts.const_str_plain_delete_password,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6c0631e7dc689c9230589c147804cd9,
#endif
        code_objects_093b823f9a5d0e3274408133e39f5b97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_74ba8a2c195ee4b8866052793587b991,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__14_get_credential(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__14_get_credential,
        mod_consts.const_str_plain_get_credential,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d3c19159a13f55e5f2bd47a072cffa95,
#endif
        code_objects_6ec6b8f5d99e7ab2f2696a1b42502ee9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_f00d7ff548fdba94a6d58a272b28c9e2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__15_set_properties_from_env,
        mod_consts.const_str_plain_set_properties_from_env,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aff64cd7b1f50165b228ca6f22300ef7,
#endif
        code_objects_e7f4444111f35188e4f7d44e36289d1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_4f943d4b0b9c44a38e4f14337c003caa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c89571532f18b5e9d4ce54672e2f6bff,
#endif
        code_objects_61aa04130746e695b95d0e9599129989,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__16_with_properties(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__16_with_properties,
        mod_consts.const_str_plain_with_properties,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9e1e62a0a0610492d5139dfcbfeda9a,
#endif
        code_objects_a65e38bbd3163f52e2f76b84f3d8b79e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__17_encrypt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04dbea4e989e117dc71d2620a3e1697a,
#endif
        code_objects_8cc222a99067e49059a02222937cacd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_8c323f1bba4110eea5eb03427eb3d988,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__18_decrypt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a8070656ce866a602171f0e3b0efe5eb,
#endif
        code_objects_878f869c601f9e0eb0aee4bf67d1dfff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_5c443173ec025c690a1334f3f37b0d5e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__19_encrypt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__19_encrypt,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47d503e768d70da283b35aced2b3e694,
#endif
        code_objects_88716a86813b9fb5cbc81f7fcc75beeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__1___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_070a2e2e40c63f587b2d86a12f0b1c9c,
#endif
        code_objects_032dbfb79345625e42499c11251940a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__20_decrypt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__20_decrypt,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b595add9f4b402df7cd63ec9e9f2a73,
#endif
        code_objects_c949e13ea464d9399d99a5f5c76b6738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__21__load_plugins(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__21__load_plugins,
        mod_consts.const_str_plain__load_plugins,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e5a76e5309e70ffbc46d81340172de7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_cc213ad4cf557816a76d40c47316c632,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__22_get_all_keyring(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__22_get_all_keyring,
        mod_consts.const_str_plain_get_all_keyring,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_591781578da5a3e83b4ff673bd79e0f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_e8e43de54a3507377bd61ad1d8b18a0b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__23__query(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__23__query,
        mod_consts.const_str_plain__query,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_52620817349bf19fe15cc8d39b57f5a8,
#endif
        code_objects_9846833e2a6aa6fe831d8917beb0ac71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__2__register(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__2__register,
        mod_consts.const_str_plain__register,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3964731cdd6eb4b44b6e5f187cbd737c,
#endif
        code_objects_39f49b78af95a2cda90e4b4874b5a2da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__3__validate_username_in_set_password,
        mod_consts.const_str_plain__validate_username_in_set_password,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8b8e23a908260c7c2087b261cc0351a,
#endif
        code_objects_88d4d7bd326e40db453222af234ec73d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_a0c25ec43480979298ec21bb6d614f38,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper,
        mod_consts.const_str_plain_wrapper,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc74ceebf5996081ede14aeae49d66da,
#endif
        code_objects_3a1cf08de5caf09a22943143d351e5b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__4___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_959540a35d96e6c419720eba1029c8fd,
#endif
        code_objects_1b1b9a2b9544b65078b20b95e1dec208,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__5_priority(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__5_priority,
        mod_consts.const_str_plain_priority,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f95e11a921cc9b6f5f55798a1f135d55,
#endif
        code_objects_832a5a54af74df33c00058f4371d2b90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_1d37363a490fed63cdf2a3078726cc63,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__6_viable(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__6_viable,
        mod_consts.const_str_plain_viable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f20ea7bf737e28ae8bf0aa5beb7d74e8,
#endif
        code_objects_5eec269dcf0296fc3b0407d80810f2d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$backend,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__7_get_viable_backends(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__7_get_viable_backends,
        mod_consts.const_str_plain_get_viable_backends,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a111004c4b92d7014c87e24336651d87,
#endif
        code_objects_16c335b9a4ba0bc6fd7cfd81bed613e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_b7b02a09cf118ecc3fda6c51c97b3394,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__8_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__8_name,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_16b0ffb30b6fb0679003ca204925e01d,
#endif
        code_objects_8ec005d5765bca7c6dc9acf2ef100fe3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
        mod_consts.const_str_digest_4f064173a069dea21eca360a5f319393,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$backend$$$function__9___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$backend$$$function__9___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3df881ffb2c385bc61b7efc807f31672,
#endif
        code_objects_f08828cc4377e12cfd4357fa3da9a6d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_keyring$backend,
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

static function_impl_code const function_table_keyring$backend[] = {
impl_keyring$backend$$$function__3__validate_username_in_set_password$$$function__1_wrapper,
impl_keyring$backend$$$function__15_set_properties_from_env$$$function__1_parse,
impl_keyring$backend$$$function__1___init__,
impl_keyring$backend$$$function__2__register,
impl_keyring$backend$$$function__3__validate_username_in_set_password,
impl_keyring$backend$$$function__4___init__,
impl_keyring$backend$$$function__5_priority,
impl_keyring$backend$$$function__6_viable,
impl_keyring$backend$$$function__7_get_viable_backends,
impl_keyring$backend$$$function__8_name,
impl_keyring$backend$$$function__9___str__,
impl_keyring$backend$$$function__11__validate_username,
impl_keyring$backend$$$function__12_set_password,
impl_keyring$backend$$$function__13_delete_password,
impl_keyring$backend$$$function__14_get_credential,
impl_keyring$backend$$$function__15_set_properties_from_env,
impl_keyring$backend$$$function__16_with_properties,
impl_keyring$backend$$$function__19_encrypt,
impl_keyring$backend$$$function__20_decrypt,
impl_keyring$backend$$$function__21__load_plugins,
impl_keyring$backend$$$function__22_get_all_keyring,
impl_keyring$backend$$$function__23__query,
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

    return Nuitka_Function_GetFunctionState(function, function_table_keyring$backend);
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
        module_keyring$backend,
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
        function_table_keyring$backend,
        sizeof(function_table_keyring$backend) / sizeof(function_impl_code)
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
static char const *module_full_name = "keyring.backend";
#endif

// Internal entry point for module code.
PyObject *module_code_keyring$backend(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("keyring$backend");

    // Store the module for future use.
    module_keyring$backend = module;

    moduledict_keyring$backend = MODULE_DICT(module_keyring$backend);

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
        PRINT_STRING("keyring$backend: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("keyring$backend: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("keyring$backend: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.backend" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initkeyring$backend\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_keyring$backend,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_keyring$backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_keyring$backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_keyring$backend);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_keyring$backend);
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

        UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_keyring$backend$$$class__1_KeyringBackendMeta_30 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_keyring$backend$$$class__2_KeyringBackend_65 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$class__2_KeyringBackend_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_keyring$backend$$$class__3_Crypter_201 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$class__3_Crypter_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_keyring$backend$$$class__4_NullCrypter_215 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$backend$$$class__4_NullCrypter_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_keyring$backend$$$class__5_SchemeSelectable_263 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_f46affcea39cbab761e35d15d5794e37;
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_keyring$backend = MAKE_MODULE_FRAME(code_objects_ef0894d8321674152e1a5b1755277588, module_keyring$backend);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend);
assert(Py_REFCNT(frame_frame_keyring$backend) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_keyring$backend$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_keyring$backend$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 10;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_4 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 11;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_operator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_5 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 14;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_aad53f1bd79f95821813351ca232841a;
tmp_globals_arg_value_6 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ExceptionTrap_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 16;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_ExceptionTrap,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ExceptionTrap);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ExceptionTrap, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_d01458dcd807c3c1d61760cdb5538360;
tmp_globals_arg_value_7 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_once_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_keyring$backend->m_frame.f_lineno = 17;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_once,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_once);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_once, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = const_str_empty;
tmp_globals_arg_value_8 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_credentials_str_plain_errors_str_plain_util_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_keyring$backend->m_frame.f_lineno = 19;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_credentials);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_errors,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_errors);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_errors, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_util,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_util);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_util, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_9 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_properties_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_keyring$backend->m_frame.f_lineno = 20;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_properties,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_properties);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_properties, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_22f5b75bdf15f80a572cd48b02ae5681;
tmp_globals_arg_value_10 = (PyObject *)moduledict_keyring$backend;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_metadata_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_keyring$backend->m_frame.f_lineno = 21;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_keyring$backend,
        mod_consts.const_str_plain_metadata,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_metadata);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_metadata, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_keyring$backend$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backend->m_frame.f_lineno = 23;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60_tuple, 0)
);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_keyring$backend$operator(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_keyring$backend->m_frame.f_lineno = 26;
tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_attrgetter,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_priority_tuple, 0)
);

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_by_priority, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_None;
UPDATE_STRING_DICT0(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain__limit, tmp_assign_source_24);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_8444d93fb3038c0422795fa8bf3f982d;
tmp_ass_subscribed_1 = module_var_accessor_keyring$backend$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__limit;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_keyring$backend$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_KeyringBackendMeta;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 30;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_11, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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


exception_lineno = 30;

    goto try_except_handler_2;
}
frame_frame_keyring$backend->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
branch_end_1:;
{
PyObject *tmp_assign_source_31;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_keyring$backend$$$class__1_KeyringBackendMeta_30 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_60890bf26da32be54967cea12572b2fa;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyringBackendMeta;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2 = MAKE_CLASS_FRAME(tstate, code_objects_865aad93449e4e6d284856f2b0c01353, module_keyring$backend, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2);
assert(Py_REFCNT(frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2) == 2);

// Framed code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__1___init__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__2__register(tstate);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain__register, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__3__validate_username_in_set_password(tstate);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain__validate_username_in_set_password, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_keyring$backend$$$class__1_KeyringBackendMeta_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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


exception_lineno = 30;

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
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__1_KeyringBackendMeta_30, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_KeyringBackendMeta;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_keyring$backend$$$class__1_KeyringBackendMeta_30;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 30;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_32);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_31 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_keyring$backend$$$class__1_KeyringBackendMeta_30);
locals_keyring$backend$$$class__1_KeyringBackendMeta_30 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backend$$$class__1_KeyringBackendMeta_30);
locals_keyring$backend$$$class__1_KeyringBackendMeta_30 = NULL;
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
exception_lineno = 30;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackendMeta, tmp_assign_source_31);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_1 = module_var_accessor_keyring$backend$KeyringBackendMeta(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyringBackendMeta);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_assign_source_33 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
bool tmp_condition_result_5;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_34 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_34 == NULL) {
    tmp_assign_source_34 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_34);
}
assert(!(tmp_assign_source_34 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_34 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_34);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_KeyringBackend_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 65;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_12, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
frame_frame_keyring$backend->m_frame.f_lineno = 65;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
branch_end_5:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_keyring$backend$$$class__2_KeyringBackend_65 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_bb51ea3a0c26d8c79653153536c4bc43;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyringBackend;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_65;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
frame_frame_keyring$backend$$$class__2_KeyringBackend_3 = MAKE_CLASS_FRAME(tstate, code_objects_df109cf8d90d74015fc28e8191f5a2cf, module_keyring$backend, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$class__2_KeyringBackend_3);
assert(Py_REFCNT(frame_frame_keyring$backend$$$class__2_KeyringBackend_3) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__4___init__(tstate);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_instance_3 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_properties);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_keyring$backend$properties(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_properties);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_1 = MAKE_FUNCTION_keyring$backend$$$function__5_priority(tstate, tmp_annotations_1);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 73;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_classproperty, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_priority, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_4;
tmp_called_value_4 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_ExceptionTrap);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_keyring$backend$ExceptionTrap(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExceptionTrap);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 92;
tmp_expression_value_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_passes);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_passes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
tmp_expression_value_14 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_properties);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_keyring$backend$properties(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_properties);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_classproperty);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_called_value_6 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_passes);

if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_passes);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_args_element_value_3 = MAKE_FUNCTION_keyring$backend$$$function__6_viable(tstate);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 95;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 94;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_viable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
tmp_called_value_7 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, const_str_plain_classmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_99e571df66a545bdaf41e3a0fe244bd0);

tmp_args_element_value_4 = MAKE_FUNCTION_keyring$backend$$$function__7_get_viable_backends(tstate, tmp_annotations_2);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 99;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_get_viable_backends, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_3;
tmp_called_instance_4 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_properties);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_keyring$backend$properties(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_properties);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_5 = MAKE_FUNCTION_keyring$backend$$$function__8_name(tstate, tmp_annotations_3);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 108;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_classproperty, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__9___str__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_5;
tmp_called_instance_5 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_keyring$backend$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_06f93d56b6321f36a6550d0f31337b3a);

tmp_args_element_value_6 = MAKE_FUNCTION_keyring$backend$$$function__10_get_password(tstate, tmp_annotations_5);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 124;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_get_password, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3cc034e17be37e28c46f6a94f48d57bd);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__11__validate_username(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain__validate_username, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
tmp_called_instance_6 = PyObject_GetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_keyring$backend$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_7c40e7a8faf23b0e805997eb2eb6af47);

tmp_args_element_value_7 = MAKE_FUNCTION_keyring$backend$$$function__12_set_password(tstate, tmp_annotations_7);

frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame.f_lineno = 141;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_set_password, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_d294369df68a975d3c506734035b50f6);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__13_delete_password(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_delete_password, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_136ec17860f969c6bed7f591f95f73a7);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__14_get_credential(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_get_credential, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__15_set_properties_from_env(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_set_properties_from_env, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_ca68871dd25540ecd1a96465edd2473e);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__16_with_properties(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain_with_properties, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$class__2_KeyringBackend_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$class__2_KeyringBackend_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$class__2_KeyringBackend_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$class__2_KeyringBackend_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_keyring$backend$$$class__2_KeyringBackend_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__2_KeyringBackend_65, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_KeyringBackend;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_keyring$backend$$$class__2_KeyringBackend_65;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 65;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_37 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_keyring$backend$$$class__2_KeyringBackend_65);
locals_keyring$backend$$$class__2_KeyringBackend_65 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backend$$$class__2_KeyringBackend_65);
locals_keyring$backend$$$class__2_KeyringBackend_65 = NULL;
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
exception_lineno = 65;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyringBackend, tmp_assign_source_37);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
// Tried code:
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_keyring$backend$$$class__3_Crypter_201 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_bc85784e4ab60072be598694ac043db7;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Crypter;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_201;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_keyring$backend$$$class__3_Crypter_4 = MAKE_CLASS_FRAME(tstate, code_objects_519bbca9e8d97a59de285eebb1f52703, module_keyring$backend, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$class__3_Crypter_4);
assert(Py_REFCNT(frame_frame_keyring$backend$$$class__3_Crypter_4) == 2);

// Framed code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_7 = module_var_accessor_keyring$backend$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_args_element_value_8 = MAKE_FUNCTION_keyring$backend$$$function__17_encrypt(tstate);

frame_frame_keyring$backend$$$class__3_Crypter_4->m_frame.f_lineno = 204;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, mod_consts.const_str_plain_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_8 = module_var_accessor_keyring$backend$abc(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_args_element_value_9 = MAKE_FUNCTION_keyring$backend$$$function__18_decrypt(tstate);

frame_frame_keyring$backend$$$class__3_Crypter_4->m_frame.f_lineno = 209;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, mod_consts.const_str_plain_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$class__3_Crypter_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$class__3_Crypter_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$class__3_Crypter_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$class__3_Crypter_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_keyring$backend$$$class__3_Crypter_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__3_Crypter_201, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_5;
tmp_called_value_9 = (PyObject *)&PyType_Type;
tmp_tuple_element_7 = mod_consts.const_str_plain_Crypter;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_keyring$backend$$$class__3_Crypter_201;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 201;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_41 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_keyring$backend$$$class__3_Crypter_201);
locals_keyring$backend$$$class__3_Crypter_201 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backend$$$class__3_Crypter_201);
locals_keyring$backend$$$class__3_Crypter_201 = NULL;
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
exception_lineno = 201;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Crypter, tmp_assign_source_41);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_keyring$backend$Crypter(tstate);
assert(!(tmp_tuple_element_8 == NULL));
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_2;
PyObject *tmp_type_arg_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
if (tmp_type_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
CHECK_OBJECT(tmp_type_arg_4);
Py_DECREF(tmp_type_arg_4);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_NullCrypter;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 215;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_13, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_5 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_5);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_11;
}
frame_frame_keyring$backend->m_frame.f_lineno = 215;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 215;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_48;
}
branch_end_7:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_keyring$backend$$$class__4_NullCrypter_215 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_74e5ab69d1e4c3ebb6261a30a01db285;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_NullCrypter;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_215;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
frame_frame_keyring$backend$$$class__4_NullCrypter_5 = MAKE_CLASS_FRAME(tstate, code_objects_dfec6bc89232c9e17f3ff84d1e4bce26, module_keyring$backend, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$backend$$$class__4_NullCrypter_5);
assert(Py_REFCNT(frame_frame_keyring$backend$$$class__4_NullCrypter_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__19_encrypt(tstate);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__20_decrypt(tstate);

tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend$$$class__4_NullCrypter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend$$$class__4_NullCrypter_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend$$$class__4_NullCrypter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$backend$$$class__4_NullCrypter_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_keyring$backend$$$class__4_NullCrypter_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_13;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

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
tmp_res = PyObject_SetItem(locals_keyring$backend$$$class__4_NullCrypter_215, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_NullCrypter;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_keyring$backend$$$class__4_NullCrypter_215;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 215;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_49 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_keyring$backend$$$class__4_NullCrypter_215);
locals_keyring$backend$$$class__4_NullCrypter_215 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backend$$$class__4_NullCrypter_215);
locals_keyring$backend$$$class__4_NullCrypter_215 = NULL;
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
exception_lineno = 215;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_NullCrypter, tmp_assign_source_49);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
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
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_51 = MAKE_FUNCTION_keyring$backend$$$function__21__load_plugins(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain__load_plugins, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_13;
tmp_called_value_12 = module_var_accessor_keyring$backend$once(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_once);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_471a6c893d68fc04bf3aeea6af37f7b7);

tmp_args_element_value_10 = MAKE_FUNCTION_keyring$backend$$$function__22_get_all_keyring(tstate, tmp_annotations_13);

frame_frame_keyring$backend->m_frame.f_lineno = 251;
tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_get_all_keyring, tmp_assign_source_52);
}
{
PyObject *tmp_outline_return_value_5;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_54;
}
// Tried code:
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_keyring$backend$$$class__5_SchemeSelectable_263 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_8c54fb52d4c9b436dc2afbab38bc9d60;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_d745afb9559b428caf0ca792a7e7cdca;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_SchemeSelectable;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_263;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_default;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain_scheme, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = DEEP_COPY_DICT(tstate, mod_consts.const_dict_f7ee7574e1d22b79daafd1b6e4d4c842);
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain_schemes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_14;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_289cadaa037cd9ec5891364860fc2449);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_keyring$backend$$$function__23__query(tstate, tmp_defaults_1, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain__query, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_keyring$backend$$$class__5_SchemeSelectable_263, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_13 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_SchemeSelectable;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_keyring$backend$$$class__5_SchemeSelectable_263;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_keyring$backend->m_frame.f_lineno = 263;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto try_except_handler_16;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_55 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_keyring$backend$$$class__5_SchemeSelectable_263);
locals_keyring$backend$$$class__5_SchemeSelectable_263 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$backend$$$class__5_SchemeSelectable_263);
locals_keyring$backend$$$class__5_SchemeSelectable_263 = NULL;
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
exception_lineno = 263;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_keyring$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemeSelectable, tmp_assign_source_55);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
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

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$backend->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_keyring$backend);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("keyring$backend", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.backend" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_keyring$backend);
    return module_keyring$backend;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$backend, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("keyring$backend", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

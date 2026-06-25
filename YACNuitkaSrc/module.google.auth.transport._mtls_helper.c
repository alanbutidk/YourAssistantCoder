/* Generated code for Python module 'google$auth$transport$_mtls_helper'
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



/* The "module_google$auth$transport$_mtls_helper" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$transport$_mtls_helper;
PyDictObject *moduledict_google$auth$transport$_mtls_helper;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_expanduser;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_93815b04f93dd1a8ae8579274bc91901;
PyObject *const_str_digest_b853bb123d9bcad6a5af2b44e792173f;
PyObject *const_str_plain_json;
PyObject *const_str_plain_load;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_ClientCertError;
PyObject *const_str_plain_json_data;
PyObject *const_str_digest_2ab5cd0006f0283bc44a9fb33908d29e;
PyObject *const_str_plain__get_workload_cert_and_key_paths;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain__read_cert_and_key_files;
PyObject *const_str_digest_ba7eb085bf46458c979fe81129562268;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG;
PyObject *const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d;
PyObject *const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH;
PyObject *const_str_digest_49374ff2f781a678c2efd6fe4661ceed;
PyObject *const_str_plain__get_cert_config_path;
PyObject *const_str_plain__load_json_file;
PyObject *const_str_plain_cert_configs;
PyObject *const_str_digest_f380b31845fd208d913380733ff0e42b;
PyObject *const_str_plain_workload;
PyObject *const_str_plain_cert_path;
PyObject *const_str_plain_key_path;
PyObject *const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH;
PyObject *const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH;
PyObject *const_str_digest_8b69875097b705e0a3f527b1c8da024b;
PyObject *const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH;
PyObject *const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH;
PyObject *const_str_plain__read_cert_file;
PyObject *const_str_plain__read_key_file;
PyObject *const_str_plain_re;
PyObject *const_str_plain_findall;
PyObject *const_str_plain__CERT_REGEX;
PyObject *const_str_plain_cert_data;
PyObject *const_str_digest_26322865abb2b784b3d8ad2d9849772f;
PyObject *const_str_plain__KEY_REGEX;
PyObject *const_str_plain_key_data;
PyObject *const_str_digest_a2fbf27191a9b2719c8770ce9c13c006;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_Popen;
PyObject *const_str_plain_PIPE;
PyObject *const_tuple_str_plain_stdout_str_plain_stderr_tuple;
PyObject *const_str_plain_communicate;
PyObject *const_str_plain_returncode;
PyObject *const_str_digest_dd48a155c201e84723b6030cba7ce8db;
PyObject *const_tuple_str_digest_8bbc92718514cae09de019194fbf48db_tuple;
PyObject *const_tuple_str_digest_baeff5022141ac909d4c5260166ab2ca_tuple;
PyObject *const_str_plain__PASSPHRASE_REGEX;
PyObject *const_tuple_str_digest_a68436d9aea52df6c4edba22b7912d26_tuple;
PyObject *const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405;
PyObject *const_tuple_str_digest_ce415fab553c3e1b6cae6585a3920b38_tuple;
PyObject *const_str_plain_strip;
PyObject *const_tuple_str_digest_ac2a7f2330bf72e4a4820f9c6805c7b0_tuple;
PyObject *const_tuple_str_digest_1eb1174582f17e9e39dd702417869d4e_tuple;
PyObject *const_str_digest_b8b8f078358f8365b6150f58f6b03fb2;
PyObject *const_str_plain__get_workload_cert_and_key;
PyObject *const_str_plain__check_config_path;
PyObject *const_str_plain__CERT_PROVIDER_COMMAND;
PyObject *const_tuple_str_digest_7179bd22406a9d9298ec62e04244d9b6_tuple;
PyObject *const_str_digest_9e069044e39a5dbaad6cef0bd4c333aa;
PyObject *const_str_plain_append;
PyObject *const_tuple_str_digest_9e069044e39a5dbaad6cef0bd4c333aa_tuple;
PyObject *const_str_plain__run_cert_provider_command;
PyObject *const_tuple_str_plain_expect_encrypted_key_tuple;
PyObject *const_tuple_false_none_none_none_tuple;
PyObject *const_str_digest_714309ca597e7aba9aa84bc4ca23b107;
PyObject *const_str_plain_get_client_ssl_credentials;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_generate_encrypted_key_tuple;
PyObject *const_str_digest_2fd1ed6518564925963980b8fac93099;
PyObject *const_str_plain_OpenSSL;
PyObject *const_tuple_str_plain_crypto_tuple;
PyObject *const_str_plain_crypto;
PyObject *const_str_plain_load_privatekey;
PyObject *const_str_plain_FILETYPE_PEM;
PyObject *const_tuple_str_plain_passphrase_tuple;
PyObject *const_str_plain_dump_privatekey;
PyObject *const_str_digest_9c07d282c34526b827e30c62bc33c9e1;
PyObject *const_str_plain_getenv;
PyObject *const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE;
PyObject *const_str_digest_60822a906f0610ea59f70a1265882b97;
PyObject *const_str_plain_true;
PyObject *const_str_plain_JSONDecodeError;
PyObject *const_str_digest_e935f7a545d58cd0cbb5007d8024f2fd;
PyObject *const_str_digest_d69c6dc7c67284b8cf3eceb55179e9b6;
PyObject *const_str_plain_call_client_cert_callback;
PyObject *const_str_plain__agent_identity_utils;
PyObject *const_str_plain_parse_certificate;
PyObject *const_str_plain_calculate_certificate_fingerprint;
PyObject *const_str_plain_get_cached_cert_fingerprint;
PyObject *const_str_digest_7d385a571052bee6bb73012745eb31e2;
PyObject *const_tuple_true_tuple;
PyObject *const_str_digest_f197542601a2d598c1e19da21b8eeee6;
PyObject *const_str_digest_2520770e4403b8c740208cbc8df975b7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__agent_identity_utils_tuple;
PyObject *const_tuple_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_99bb8ce9e9a41c7d7552baea4c857814;
PyObject *const_str_plain_CONTEXT_AWARE_METADATA_PATH;
PyObject *const_str_digest_aaa3f02044eb6e0da3e5d14da53fc078;
PyObject *const_str_plain_cert_provider_command;
PyObject *const_bytes_digest_8d30f025f18f8efe7f4ea366dbccf3ae;
PyObject *const_str_plain_DOTALL;
PyObject *const_bytes_digest_7bb4383ebf5a79b6f8237c0d3a9ec147;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_76c4c07798963223889b12fc60a097b0_tuple;
PyObject *const_bytes_digest_942700470f7806993d25aad04e1c0244;
PyObject *const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0;
PyObject *const_str_digest_b706629896765221f68689e024f867ae;
PyObject *const_str_digest_77efc00b217530ca6e0020504e73fa28;
PyObject *const_str_digest_ff48e6ed9b38a9561fb53a3702e880ab;
PyObject *const_tuple_none_true_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_get_client_cert_and_key;
PyObject *const_str_plain_decrypt_private_key;
PyObject *const_str_plain_check_use_client_cert;
PyObject *const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac;
PyObject *const_str_digest_18ebf16aa30546341cff5f2ca9b59f92;
PyObject *const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5;
PyObject *const_tuple_str_plain_config_path_tuple;
PyObject *const_tuple_5677c94cf911bee5774f91e9c87b879c_tuple;
PyObject *const_tuple_2860d933a30585c21cb8ba38e168fa16_tuple;
PyObject *const_tuple_06fdb56e266825efa38802c2bd94ccfd_tuple;
PyObject *const_tuple_e07649eed2c5aad066083a4881c87adf_tuple;
PyObject *const_tuple_605065182ec0e4eaa19eaf1404f15499_tuple;
PyObject *const_tuple_e3326032dd4492d1157ffdbc22bce413_tuple;
PyObject *const_tuple_adbbd315edbecf381f154be0d2b73a14_tuple;
PyObject *const_tuple_eeac2ad3e16da76a5fb0e63e8ca3631b_tuple;
PyObject *const_tuple_05682d77350598f2938e678f8883de5d_tuple;
PyObject *const_tuple_6469a136f3c5f350ab895949c0da4603_tuple;
PyObject *const_tuple_44a728755a786757756b3f24924d2762_tuple;
PyObject *const_tuple_fcde12326ddf2375db3047503cc3b175_tuple;
PyObject *const_tuple_6cb33b9055109eb728b5ad7443653fa6_tuple;
PyObject *const_tuple_695ea976b228966fd583c5e42dab0217_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[144];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.transport._mtls_helper"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_expanduser);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_93815b04f93dd1a8ae8579274bc91901);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_b853bb123d9bcad6a5af2b44e792173f);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_data);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ab5cd0006f0283bc44a9fb33908d29e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key_paths);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_and_key_files);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba7eb085bf46458c979fe81129562268);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_49374ff2f781a678c2efd6fe4661ceed);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_cert_config_path);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_json_file);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_configs);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_f380b31845fd208d913380733ff0e42b);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_workload);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_path);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_path);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b69875097b705e0a3f527b1c8da024b);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_file);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_key_file);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_findall);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__CERT_REGEX);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_data);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_26322865abb2b784b3d8ad2d9849772f);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__KEY_REGEX);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_data);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2fbf27191a9b2719c8770ce9c13c006);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Popen);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_communicate);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_returncode);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd48a155c201e84723b6030cba7ce8db);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8bbc92718514cae09de019194fbf48db_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_baeff5022141ac909d4c5260166ab2ca_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__PASSPHRASE_REGEX);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a68436d9aea52df6c4edba22b7912d26_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce415fab553c3e1b6cae6585a3920b38_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ac2a7f2330bf72e4a4820f9c6805c7b0_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1eb1174582f17e9e39dd702417869d4e_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b8f078358f8365b6150f58f6b03fb2);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_config_path);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7179bd22406a9d9298ec62e04244d9b6_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e069044e39a5dbaad6cef0bd4c333aa);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9e069044e39a5dbaad6cef0bd4c333aa_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_cert_provider_command);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expect_encrypted_key_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_none_none_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_714309ca597e7aba9aa84bc4ca23b107);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_ssl_credentials);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_generate_encrypted_key_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypto);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_privatekey);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_passphrase_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump_privatekey);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c07d282c34526b827e30c62bc33c9e1);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_e935f7a545d58cd0cbb5007d8024f2fd);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_d69c6dc7c67284b8cf3eceb55179e9b6);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_client_cert_callback);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cached_cert_fingerprint);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d385a571052bee6bb73012745eb31e2);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_f197542601a2d598c1e19da21b8eeee6);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_2520770e4403b8c740208cbc8df975b7);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_99bb8ce9e9a41c7d7552baea4c857814);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_aaa3f02044eb6e0da3e5d14da53fc078);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_provider_command);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_8d30f025f18f8efe7f4ea366dbccf3ae);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_7bb4383ebf5a79b6f8237c0d3a9ec147);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_76c4c07798963223889b12fc60a097b0_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_942700470f7806993d25aad04e1c0244);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_b706629896765221f68689e024f867ae);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_77efc00b217530ca6e0020504e73fa28);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff48e6ed9b38a9561fb53a3702e880ab);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_private_key);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_18ebf16aa30546341cff5f2ca9b59f92);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_path_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_5677c94cf911bee5774f91e9c87b879c_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_2860d933a30585c21cb8ba38e168fa16_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_06fdb56e266825efa38802c2bd94ccfd_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_e07649eed2c5aad066083a4881c87adf_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_605065182ec0e4eaa19eaf1404f15499_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_e3326032dd4492d1157ffdbc22bce413_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_adbbd315edbecf381f154be0d2b73a14_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_eeac2ad3e16da76a5fb0e63e8ca3631b_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_05682d77350598f2938e678f8883de5d_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_6469a136f3c5f350ab895949c0da4603_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_44a728755a786757756b3f24924d2762_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_fcde12326ddf2375db3047503cc3b175_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_6cb33b9055109eb728b5ad7443653fa6_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_695ea976b228966fd583c5e42dab0217_tuple);
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
void checkModuleConstants_google$auth$transport$_mtls_helper(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_expanduser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expanduser);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_93815b04f93dd1a8ae8579274bc91901));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93815b04f93dd1a8ae8579274bc91901);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_b853bb123d9bcad6a5af2b44e792173f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b853bb123d9bcad6a5af2b44e792173f);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientCertError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_data);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ab5cd0006f0283bc44a9fb33908d29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ab5cd0006f0283bc44a9fb33908d29e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_workload_cert_and_key_paths);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_and_key_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_cert_and_key_files);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba7eb085bf46458c979fe81129562268));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba7eb085bf46458c979fe81129562268);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_49374ff2f781a678c2efd6fe4661ceed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49374ff2f781a678c2efd6fe4661ceed);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_cert_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_cert_config_path);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_json_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_json_file);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_configs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_configs);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_f380b31845fd208d913380733ff0e42b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f380b31845fd208d913380733ff0e42b);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_workload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_workload);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_path);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_path);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b69875097b705e0a3f527b1c8da024b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b69875097b705e0a3f527b1c8da024b);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_cert_file);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_key_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_key_file);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_findall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_findall);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__CERT_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CERT_REGEX);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_data);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_26322865abb2b784b3d8ad2d9849772f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26322865abb2b784b3d8ad2d9849772f);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__KEY_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__KEY_REGEX);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_data);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2fbf27191a9b2719c8770ce9c13c006));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2fbf27191a9b2719c8770ce9c13c006);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Popen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Popen);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PIPE);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_communicate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_communicate);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_returncode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_returncode);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd48a155c201e84723b6030cba7ce8db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd48a155c201e84723b6030cba7ce8db);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8bbc92718514cae09de019194fbf48db_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8bbc92718514cae09de019194fbf48db_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_baeff5022141ac909d4c5260166ab2ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_baeff5022141ac909d4c5260166ab2ca_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__PASSPHRASE_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PASSPHRASE_REGEX);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a68436d9aea52df6c4edba22b7912d26_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a68436d9aea52df6c4edba22b7912d26_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce415fab553c3e1b6cae6585a3920b38_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ce415fab553c3e1b6cae6585a3920b38_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ac2a7f2330bf72e4a4820f9c6805c7b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ac2a7f2330bf72e4a4820f9c6805c7b0_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1eb1174582f17e9e39dd702417869d4e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1eb1174582f17e9e39dd702417869d4e_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b8f078358f8365b6150f58f6b03fb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b8f078358f8365b6150f58f6b03fb2);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_workload_cert_and_key);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check_config_path);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7179bd22406a9d9298ec62e04244d9b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7179bd22406a9d9298ec62e04244d9b6_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e069044e39a5dbaad6cef0bd4c333aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e069044e39a5dbaad6cef0bd4c333aa);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9e069044e39a5dbaad6cef0bd4c333aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9e069044e39a5dbaad6cef0bd4c333aa_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_cert_provider_command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_cert_provider_command);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expect_encrypted_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_expect_encrypted_key_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_none_none_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_714309ca597e7aba9aa84bc4ca23b107));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_714309ca597e7aba9aa84bc4ca23b107);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_ssl_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_ssl_credentials);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_generate_encrypted_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_generate_encrypted_key_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenSSL);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_crypto_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypto);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_privatekey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_privatekey);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILETYPE_PEM);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_passphrase_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_passphrase_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump_privatekey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump_privatekey);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c07d282c34526b827e30c62bc33c9e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c07d282c34526b827e30c62bc33c9e1);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JSONDecodeError);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_e935f7a545d58cd0cbb5007d8024f2fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e935f7a545d58cd0cbb5007d8024f2fd);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_d69c6dc7c67284b8cf3eceb55179e9b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d69c6dc7c67284b8cf3eceb55179e9b6);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_client_cert_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_client_cert_callback);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__agent_identity_utils);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_certificate);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_certificate_fingerprint);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cached_cert_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cached_cert_fingerprint);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d385a571052bee6bb73012745eb31e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d385a571052bee6bb73012745eb31e2);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_f197542601a2d598c1e19da21b8eeee6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f197542601a2d598c1e19da21b8eeee6);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_2520770e4403b8c740208cbc8df975b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2520770e4403b8c740208cbc8df975b7);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_vars_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_99bb8ce9e9a41c7d7552baea4c857814));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99bb8ce9e9a41c7d7552baea4c857814);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_aaa3f02044eb6e0da3e5d14da53fc078));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aaa3f02044eb6e0da3e5d14da53fc078);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_provider_command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_provider_command);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_8d30f025f18f8efe7f4ea366dbccf3ae));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_8d30f025f18f8efe7f4ea366dbccf3ae);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOTALL);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_7bb4383ebf5a79b6f8237c0d3a9ec147));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_7bb4383ebf5a79b6f8237c0d3a9ec147);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_76c4c07798963223889b12fc60a097b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_76c4c07798963223889b12fc60a097b0_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_942700470f7806993d25aad04e1c0244));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_942700470f7806993d25aad04e1c0244);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_b706629896765221f68689e024f867ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b706629896765221f68689e024f867ae);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_77efc00b217530ca6e0020504e73fa28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77efc00b217530ca6e0020504e73fa28);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff48e6ed9b38a9561fb53a3702e880ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff48e6ed9b38a9561fb53a3702e880ab);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_true_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_cert_and_key);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_private_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decrypt_private_key);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_use_client_cert);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_18ebf16aa30546341cff5f2ca9b59f92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18ebf16aa30546341cff5f2ca9b59f92);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_path_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_5677c94cf911bee5774f91e9c87b879c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5677c94cf911bee5774f91e9c87b879c_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_2860d933a30585c21cb8ba38e168fa16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2860d933a30585c21cb8ba38e168fa16_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_06fdb56e266825efa38802c2bd94ccfd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_06fdb56e266825efa38802c2bd94ccfd_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_e07649eed2c5aad066083a4881c87adf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e07649eed2c5aad066083a4881c87adf_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_605065182ec0e4eaa19eaf1404f15499_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_605065182ec0e4eaa19eaf1404f15499_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_e3326032dd4492d1157ffdbc22bce413_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e3326032dd4492d1157ffdbc22bce413_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_adbbd315edbecf381f154be0d2b73a14_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_adbbd315edbecf381f154be0d2b73a14_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_eeac2ad3e16da76a5fb0e63e8ca3631b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eeac2ad3e16da76a5fb0e63e8ca3631b_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_05682d77350598f2938e678f8883de5d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_05682d77350598f2938e678f8883de5d_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_6469a136f3c5f350ab895949c0da4603_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6469a136f3c5f350ab895949c0da4603_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_44a728755a786757756b3f24924d2762_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44a728755a786757756b3f24924d2762_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_fcde12326ddf2375db3047503cc3b175_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fcde12326ddf2375db3047503cc3b175_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_6cb33b9055109eb728b5ad7443653fa6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6cb33b9055109eb728b5ad7443653fa6_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_695ea976b228966fd583c5e42dab0217_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_695ea976b228966fd583c5e42dab0217_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 32
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
static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$CERTIFICATE_CONFIGURATION_DEFAULT_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$CONTEXT_AWARE_METADATA_PATH(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_CERT_PROVIDER_COMMAND(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_CERT_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERT_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERT_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERT_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERT_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_INCORRECT_CLOUD_RUN_CERT_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_INCORRECT_CLOUD_RUN_KEY_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_KEY_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__KEY_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__KEY_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__KEY_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__KEY_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__KEY_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__KEY_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__KEY_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__KEY_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_PASSPHRASE_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__PASSPHRASE_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PASSPHRASE_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PASSPHRASE_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PASSPHRASE_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PASSPHRASE_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__PASSPHRASE_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__PASSPHRASE_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PASSPHRASE_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_CERT_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_KEY_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_agent_identity_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__agent_identity_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__agent_identity_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__agent_identity_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__agent_identity_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__agent_identity_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__agent_identity_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__agent_identity_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__agent_identity_utils);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_check_config_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__check_config_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_config_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_config_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_config_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_config_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__check_config_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__check_config_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__check_config_path);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_get_cert_config_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_cert_config_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_cert_config_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_cert_config_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_cert_config_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_cert_config_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_cert_config_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_cert_config_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_cert_config_path);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_get_workload_cert_and_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_workload_cert_and_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_workload_cert_and_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_workload_cert_and_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_workload_cert_and_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_get_workload_cert_and_key_paths(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key_paths);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_workload_cert_and_key_paths);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_workload_cert_and_key_paths, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_workload_cert_and_key_paths);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_workload_cert_and_key_paths, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key_paths);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key_paths);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key_paths);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_load_json_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__load_json_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_json_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_json_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_json_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_json_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__load_json_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__load_json_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_json_file);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_read_cert_and_key_files(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_and_key_files);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_cert_and_key_files);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_cert_and_key_files, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_cert_and_key_files);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_cert_and_key_files, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_and_key_files);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_and_key_files);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_and_key_files);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_read_cert_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_cert_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_cert_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_cert_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_cert_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_file);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_read_key_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_key_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_key_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_key_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_key_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_key_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_key_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_key_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__read_key_file);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$_run_cert_provider_command(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__run_cert_provider_command);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_cert_provider_command);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_cert_provider_command, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_cert_provider_command);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_cert_provider_command, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__run_cert_provider_command);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__run_cert_provider_command);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_cert_provider_command);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$call_client_cert_callback(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_call_client_cert_callback);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_call_client_cert_callback);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_call_client_cert_callback, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_call_client_cert_callback);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_call_client_cert_callback, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_call_client_cert_callback);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_call_client_cert_callback);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_call_client_cert_callback);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$environ(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environ);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environ);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environ, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environ);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environ, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environ);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environ);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environ);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$get_client_ssl_credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_ssl_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_ssl_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_client_ssl_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_client_ssl_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$getenv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_getenv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getenv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getenv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getenv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getenv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_getenv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_getenv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getenv);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$_mtls_helper$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$_mtls_helper->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$_mtls_helper->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$_mtls_helper->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3f71d4cbeed3a8766fe2861a4b1779ad;
static PyCodeObject *code_objects_506897e8d8edd356443db025c9c30eaf;
static PyCodeObject *code_objects_557c023fb8a40bc1b14a5001d4d0e672;
static PyCodeObject *code_objects_4cd5123b91c3e59326b6a3ad2e8cc80f;
static PyCodeObject *code_objects_08aeae4867d0e8b896a55c47d00af761;
static PyCodeObject *code_objects_b5ab3e09b7396fbad97ae55f3e517e07;
static PyCodeObject *code_objects_9f20a16a28fe6953de54dbafbe47e73f;
static PyCodeObject *code_objects_cd51f58bd7447236c61cfbb5f11eb5bb;
static PyCodeObject *code_objects_daed71e21a8c6b241d6885d8f4aea4dd;
static PyCodeObject *code_objects_b5375012bfdd24e60f317817db0b7f7a;
static PyCodeObject *code_objects_94ef2311ed63fb8f77e413b7637c04a1;
static PyCodeObject *code_objects_1e166d2a6b1ea51db05b39640a4d5eb3;
static PyCodeObject *code_objects_807c10b17de8effce2b5c6a179a3aa8a;
static PyCodeObject *code_objects_6cf0b39c2276f07f00bee20a595e4032;
static PyCodeObject *code_objects_7718ea8eb966e00c16c306f00d77f95f;
static PyCodeObject *code_objects_cff1de5729e85a5a5cac2ad72f563312;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_18ebf16aa30546341cff5f2ca9b59f92); CHECK_OBJECT(module_filename_obj);
code_objects_3f71d4cbeed3a8766fe2861a4b1779ad = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5, mod_consts.const_str_digest_6fb820ea288453ee0fdbe5c3d12545c5, NULL, NULL, 0, 0, 0);
code_objects_506897e8d8edd356443db025c9c30eaf = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__check_config_path, mod_consts.const_str_plain__check_config_path, mod_consts.const_tuple_str_plain_config_path_tuple, NULL, 1, 0, 0);
code_objects_557c023fb8a40bc1b14a5001d4d0e672 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_cert_config_path, mod_consts.const_str_plain__get_cert_config_path, mod_consts.const_tuple_5677c94cf911bee5774f91e9c87b879c_tuple, NULL, 2, 0, 0);
code_objects_4cd5123b91c3e59326b6a3ad2e8cc80f = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_workload_cert_and_key, mod_consts.const_str_plain__get_workload_cert_and_key, mod_consts.const_tuple_2860d933a30585c21cb8ba38e168fa16_tuple, NULL, 2, 0, 0);
code_objects_08aeae4867d0e8b896a55c47d00af761 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_workload_cert_and_key_paths, mod_consts.const_str_plain__get_workload_cert_and_key_paths, mod_consts.const_tuple_06fdb56e266825efa38802c2bd94ccfd_tuple, NULL, 2, 0, 0);
code_objects_b5ab3e09b7396fbad97ae55f3e517e07 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_json_file, mod_consts.const_str_plain__load_json_file, mod_consts.const_tuple_e07649eed2c5aad066083a4881c87adf_tuple, NULL, 1, 0, 0);
code_objects_9f20a16a28fe6953de54dbafbe47e73f = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__read_cert_and_key_files, mod_consts.const_str_plain__read_cert_and_key_files, mod_consts.const_tuple_605065182ec0e4eaa19eaf1404f15499_tuple, NULL, 2, 0, 0);
code_objects_cd51f58bd7447236c61cfbb5f11eb5bb = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__read_cert_file, mod_consts.const_str_plain__read_cert_file, mod_consts.const_tuple_e3326032dd4492d1157ffdbc22bce413_tuple, NULL, 1, 0, 0);
code_objects_daed71e21a8c6b241d6885d8f4aea4dd = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__read_key_file, mod_consts.const_str_plain__read_key_file, mod_consts.const_tuple_adbbd315edbecf381f154be0d2b73a14_tuple, NULL, 1, 0, 0);
code_objects_b5375012bfdd24e60f317817db0b7f7a = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__run_cert_provider_command, mod_consts.const_str_plain__run_cert_provider_command, mod_consts.const_tuple_eeac2ad3e16da76a5fb0e63e8ca3631b_tuple, NULL, 2, 0, 0);
code_objects_94ef2311ed63fb8f77e413b7637c04a1 = MAKE_CODE_OBJECT(module_filename_obj, 526, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_call_client_cert_callback, mod_consts.const_str_plain_call_client_cert_callback, mod_consts.const_tuple_05682d77350598f2938e678f8883de5d_tuple, NULL, 0, 0, 0);
code_objects_1e166d2a6b1ea51db05b39640a4d5eb3 = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac, mod_consts.const_tuple_6469a136f3c5f350ab895949c0da4603_tuple, NULL, 1, 0, 0);
code_objects_807c10b17de8effce2b5c6a179a3aa8a = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_use_client_cert, mod_consts.const_str_plain_check_use_client_cert, mod_consts.const_tuple_44a728755a786757756b3f24924d2762_tuple, NULL, 0, 0, 0);
code_objects_6cf0b39c2276f07f00bee20a595e4032 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decrypt_private_key, mod_consts.const_str_plain_decrypt_private_key, mod_consts.const_tuple_fcde12326ddf2375db3047503cc3b175_tuple, NULL, 2, 0, 0);
code_objects_7718ea8eb966e00c16c306f00d77f95f = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_client_cert_and_key, mod_consts.const_str_plain_get_client_cert_and_key, mod_consts.const_tuple_6cb33b9055109eb728b5ad7443653fa6_tuple, NULL, 1, 0, 0);
code_objects_cff1de5729e85a5a5cac2ad72f563312 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_client_ssl_credentials, mod_consts.const_str_plain_get_client_ssl_credentials, mod_consts.const_tuple_695ea976b228966fd583c5e42dab0217_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__1__check_config_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__2__load_json_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__7__read_cert_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__8__read_key_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$transport$_mtls_helper$$$function__1__check_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_config_path = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_506897e8d8edd356443db025c9c30eaf, module_google$auth$transport$_mtls_helper, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_config_path);
tmp_args_element_value_1 = par_config_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path->m_frame.f_lineno = 78;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_expanduser, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_config_path;
    assert(old != NULL);
    par_config_path = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_exists_arg_1;
CHECK_OBJECT(par_config_path);
tmp_exists_arg_1 = par_config_path;
tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_mtls_helper$_LOGGER(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_93815b04f93dd1a8ae8579274bc91901;
CHECK_OBJECT(par_config_path);
tmp_args_element_value_3 = par_config_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path->m_frame.f_lineno = 80;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path,
    type_description_1,
    par_config_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__1__check_config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_config_path);
tmp_return_value = par_config_path;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_config_path);
CHECK_OBJECT(par_config_path);
Py_DECREF(par_config_path);
par_config_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_config_path);
par_config_path = NULL;
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


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__2__load_json_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *var_f = NULL;
PyObject *var_json_data = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file = MAKE_FUNCTION_FRAME(tstate, code_objects_b5ab3e09b7396fbad97ae55f3e517e07, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
CHECK_OBJECT(par_path);
tmp_open_filename_1 = par_path;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 99;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_5);
var_f = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_mtls_helper$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_f);
tmp_args_element_value_1 = var_f;
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 100;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(var_json_data == NULL);
var_json_data = tmp_assign_source_6;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
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
try_except_handler_4:;
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 99;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 99;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_8);
var_caught_exc = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_5 = var_caught_exc;
frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = 102;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ClientCertError, tmp_args_element_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_9;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 103;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
goto try_except_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 98;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_7;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
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
if (var_json_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_json_data;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file,
    type_description_1,
    par_path,
    var_f,
    var_json_data,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__2__load_json_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
Py_XDECREF(var_json_data);
var_json_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_json_data);
var_json_data = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_certificate_config_path = python_pars[0];
PyObject *par_include_context_aware = python_pars[1];
PyObject *var_cert_path = NULL;
PyObject *var_key_path = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key = MAKE_FUNCTION_FRAME(tstate, code_objects_4cd5123b91c3e59326b6a3ad2e8cc80f, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$_get_workload_cert_and_key_paths(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_workload_cert_and_key_paths);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_certificate_config_path);
tmp_args_element_value_1 = par_certificate_config_path;
CHECK_OBJECT(par_include_context_aware);
tmp_args_element_value_2 = par_include_context_aware;
frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooo";
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



exception_lineno = 130;
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
assert(var_cert_path == NULL);
Py_INCREF(tmp_assign_source_4);
var_cert_path = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_key_path == NULL);
Py_INCREF(tmp_assign_source_5);
var_key_path = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_cert_path);
tmp_cmp_expr_left_1 = var_cert_path;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_key_path);
tmp_cmp_expr_left_2 = var_key_path;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$_read_cert_and_key_files(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_cert_and_key_files);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_path);
tmp_args_element_value_3 = var_cert_path;
CHECK_OBJECT(var_key_path);
tmp_args_element_value_4 = var_key_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key,
    type_description_1,
    par_certificate_config_path,
    par_include_context_aware,
    var_cert_path,
    var_key_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_path);
CHECK_OBJECT(var_cert_path);
Py_DECREF(var_cert_path);
var_cert_path = NULL;
CHECK_OBJECT(var_key_path);
CHECK_OBJECT(var_key_path);
Py_DECREF(var_key_path);
var_key_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_key_path);
var_key_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_certificate_config_path = python_pars[0];
PyObject *par_include_context_aware = python_pars[1];
PyObject *var_env_path = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_557c023fb8a40bc1b14a5001d4d0e672, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_certificate_config_path);
tmp_cmp_expr_left_1 = par_certificate_config_path;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$environ(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environ);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_None;
frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_env_path == NULL);
var_env_path = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_env_path);
tmp_cmp_expr_left_2 = var_env_path;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_env_path);
tmp_cmp_expr_left_3 = var_env_path;
tmp_cmp_expr_right_3 = const_str_empty;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_env_path);
tmp_assign_source_2 = var_env_path;
{
    PyObject *old = par_certificate_config_path;
    assert(old != NULL);
    par_certificate_config_path = tmp_assign_source_2;
    Py_INCREF(par_certificate_config_path);
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$environ(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environ);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 165;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 165;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = Py_None;
frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_env_path;
    assert(old != NULL);
    var_env_path = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_1;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_include_context_aware);
tmp_truth_name_1 = CHECK_IF_TRUE(par_include_context_aware);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_env_path);
tmp_cmp_expr_left_4 = var_env_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_env_path);
tmp_cmp_expr_left_5 = var_env_path;
tmp_cmp_expr_right_5 = const_str_empty;
tmp_and_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(var_env_path);
tmp_assign_source_4 = var_env_path;
{
    PyObject *old = par_certificate_config_path;
    assert(old != NULL);
    par_certificate_config_path = tmp_assign_source_4;
    Py_INCREF(par_certificate_config_path);
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = module_var_accessor_google$auth$transport$_mtls_helper$CERTIFICATE_CONFIGURATION_DEFAULT_PATH(tstate);
if (unlikely(tmp_assign_source_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_certificate_config_path;
    assert(old != NULL);
    par_certificate_config_path = tmp_assign_source_5;
    Py_INCREF(par_certificate_config_path);
    Py_DECREF(old);
}

}
branch_end_3:;
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_certificate_config_path);
tmp_args_element_value_5 = par_certificate_config_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path->m_frame.f_lineno = 173;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_expanduser, tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_certificate_config_path;
    assert(old != NULL);
    par_certificate_config_path = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_exists_arg_1;
CHECK_OBJECT(par_certificate_config_path);
tmp_exists_arg_1 = par_certificate_config_path;
tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path,
    type_description_1,
    par_certificate_config_path,
    par_include_context_aware,
    var_env_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_certificate_config_path);
tmp_return_value = par_certificate_config_path;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_certificate_config_path);
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);
par_certificate_config_path = NULL;
Py_XDECREF(var_env_path);
var_env_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_certificate_config_path);
par_certificate_config_path = NULL;
Py_XDECREF(var_env_path);
var_env_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_config_path = python_pars[0];
PyObject *par_include_context_aware = python_pars[1];
PyObject *var_absolute_path = NULL;
PyObject *var_data = NULL;
PyObject *var_cert_configs = NULL;
PyObject *var_workload = NULL;
PyObject *var_cert_path = NULL;
PyObject *var_key_path = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_08aeae4867d0e8b896a55c47d00af761, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$_get_cert_config_path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_cert_config_path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_path);
tmp_args_element_value_1 = par_config_path;
CHECK_OBJECT(par_include_context_aware);
tmp_args_element_value_2 = par_include_context_aware;
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_absolute_path == NULL);
var_absolute_path = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_absolute_path);
tmp_cmp_expr_left_1 = var_absolute_path;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$_load_json_file(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_json_file);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_absolute_path);
tmp_args_element_value_3 = var_absolute_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame.f_lineno = 184;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_cert_configs;
CHECK_OBJECT(var_data);
tmp_cmp_expr_right_2 = var_data;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ClientCertError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_f380b31845fd208d913380733ff0e42b;
CHECK_OBJECT(var_absolute_path);
tmp_kw_call_arg_value_1_1 = var_absolute_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame.f_lineno = 188;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame.f_lineno = 187;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_data);
tmp_expression_value_2 = var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_cert_configs;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_configs == NULL);
var_cert_configs = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_workload;
CHECK_OBJECT(var_cert_configs);
tmp_cmp_expr_right_3 = var_cert_configs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooo";
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
tmp_return_value = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_cert_configs);
tmp_expression_value_3 = var_cert_configs;
tmp_subscript_value_2 = mod_consts.const_str_plain_workload;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_workload == NULL);
var_workload = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_cert_path;
CHECK_OBJECT(var_workload);
tmp_cmp_expr_right_4 = var_workload;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooo";
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
tmp_return_value = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_workload);
tmp_expression_value_4 = var_workload;
tmp_subscript_value_3 = mod_consts.const_str_plain_cert_path;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_path == NULL);
var_cert_path = tmp_assign_source_5;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_str_plain_key_path;
CHECK_OBJECT(var_workload);
tmp_cmp_expr_right_5 = var_workload;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_workload);
tmp_expression_value_5 = var_workload;
tmp_subscript_value_4 = mod_consts.const_str_plain_key_path;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_path == NULL);
var_key_path = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_cert_path);
tmp_cmp_expr_left_6 = var_cert_path;
tmp_cmp_expr_right_6 = module_var_accessor_google$auth$transport$_mtls_helper$_INCORRECT_CLOUD_RUN_CERT_PATH(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_key_path);
tmp_cmp_expr_left_7 = var_key_path;
tmp_cmp_expr_right_7 = module_var_accessor_google$auth$transport$_mtls_helper$_INCORRECT_CLOUD_RUN_KEY_PATH(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
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
bool tmp_condition_result_7;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_exists_arg_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_exists_arg_2;
CHECK_OBJECT(var_cert_path);
tmp_exists_arg_1 = var_cert_path;
tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_key_path);
tmp_exists_arg_2 = var_key_path;
tmp_operand_value_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_6 = module_var_accessor_google$auth$transport$_mtls_helper$_LOGGER(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_debug);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_8b69875097b705e0a3f527b1c8da024b;
CHECK_OBJECT(var_cert_path);
tmp_args_element_value_6 = var_cert_path;
CHECK_OBJECT(var_key_path);
tmp_args_element_value_7 = var_key_path;
tmp_args_element_value_8 = module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_CERT_PATH(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 223;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_KEY_PATH(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 224;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame.f_lineno = 217;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_CERT_PATH(tstate);
if (unlikely(tmp_assign_source_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cert_path;
    assert(old != NULL);
    var_cert_path = tmp_assign_source_7;
    Py_INCREF(var_cert_path);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = module_var_accessor_google$auth$transport$_mtls_helper$_WELL_KNOWN_CLOUD_RUN_KEY_PATH(tstate);
if (unlikely(tmp_assign_source_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key_path;
    assert(old != NULL);
    var_key_path = tmp_assign_source_8;
    Py_INCREF(var_key_path);
    Py_DECREF(old);
}

}
branch_no_7:;
branch_no_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths,
    type_description_1,
    par_config_path,
    par_include_context_aware,
    var_absolute_path,
    var_data,
    var_cert_configs,
    var_workload,
    var_cert_path,
    var_key_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_cert_path);
tmp_tuple_element_1 = var_cert_path;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key_path);
tmp_tuple_element_1 = var_key_path;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_absolute_path);
CHECK_OBJECT(var_absolute_path);
Py_DECREF(var_absolute_path);
var_absolute_path = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_cert_configs);
var_cert_configs = NULL;
Py_XDECREF(var_workload);
var_workload = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_key_path);
var_key_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_absolute_path);
var_absolute_path = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_cert_configs);
var_cert_configs = NULL;
Py_XDECREF(var_workload);
var_workload = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_key_path);
var_key_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_config_path);
Py_DECREF(par_config_path);
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_config_path);
Py_DECREF(par_config_path);
CHECK_OBJECT(par_include_context_aware);
Py_DECREF(par_include_context_aware);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert_path = python_pars[0];
PyObject *par_key_path = python_pars[1];
PyObject *var_cert_data = NULL;
PyObject *var_key_data = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files = MAKE_FUNCTION_FRAME(tstate, code_objects_9f20a16a28fe6953de54dbafbe47e73f, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$_read_cert_file(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_cert_file);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cert_path);
tmp_args_element_value_1 = par_cert_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files->m_frame.f_lineno = 234;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cert_data == NULL);
var_cert_data = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$_read_key_file(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_key_file);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key_path);
tmp_args_element_value_2 = par_key_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files->m_frame.f_lineno = 235;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_key_data == NULL);
var_key_data = tmp_assign_source_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files,
    type_description_1,
    par_cert_path,
    par_key_path,
    var_cert_data,
    var_key_data
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_cert_data);
tmp_tuple_element_1 = var_cert_data;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key_data);
tmp_tuple_element_1 = var_key_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_data);
CHECK_OBJECT(var_cert_data);
Py_DECREF(var_cert_data);
var_cert_data = NULL;
CHECK_OBJECT(var_key_data);
CHECK_OBJECT(var_key_data);
Py_DECREF(var_key_data);
var_key_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_data);
var_cert_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert_path);
Py_DECREF(par_cert_path);
CHECK_OBJECT(par_key_path);
Py_DECREF(par_key_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert_path);
Py_DECREF(par_cert_path);
CHECK_OBJECT(par_key_path);
Py_DECREF(par_key_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__7__read_cert_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert_path = python_pars[0];
PyObject *var_cert_file = NULL;
PyObject *var_cert_data = NULL;
PyObject *var_cert_match = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file = MAKE_FUNCTION_FRAME(tstate, code_objects_cd51f58bd7447236c61cfbb5f11eb5bb, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_cert_path);
tmp_open_filename_1 = par_cert_path;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 241;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_cert_file == NULL);
Py_INCREF(tmp_assign_source_5);
var_cert_file = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_cert_file);
tmp_called_instance_1 = var_cert_file;
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 242;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_cert_data == NULL);
var_cert_data = tmp_assign_source_6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
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
    exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 241;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 241;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_findall);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$_CERT_REGEX(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CERT_REGEX);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 244;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_cert_data == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_cert_data;
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cert_match == NULL);
var_cert_match = tmp_assign_source_8;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_cert_match);
tmp_len_arg_1 = var_cert_match;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 1;
tmp_condition_result_5 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ClientCertError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_26322865abb2b784b3d8ad2d9849772f;
CHECK_OBJECT(par_cert_path);
tmp_kw_call_arg_value_1_1 = par_cert_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 247;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 247;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame.f_lineno = 246;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 246;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_cert_match);
tmp_expression_value_5 = var_cert_match;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file,
    type_description_1,
    par_cert_path,
    var_cert_file,
    var_cert_data,
    var_cert_match
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__7__read_cert_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_file);
CHECK_OBJECT(var_cert_file);
Py_DECREF(var_cert_file);
var_cert_file = NULL;
Py_XDECREF(var_cert_data);
var_cert_data = NULL;
CHECK_OBJECT(var_cert_match);
CHECK_OBJECT(var_cert_match);
Py_DECREF(var_cert_match);
var_cert_match = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_file);
var_cert_file = NULL;
Py_XDECREF(var_cert_data);
var_cert_data = NULL;
Py_XDECREF(var_cert_match);
var_cert_match = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert_path);
Py_DECREF(par_cert_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert_path);
Py_DECREF(par_cert_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__8__read_key_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_path = python_pars[0];
PyObject *var_key_file = NULL;
PyObject *var_key_data = NULL;
PyObject *var_key_match = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file = MAKE_FUNCTION_FRAME(tstate, code_objects_daed71e21a8c6b241d6885d8f4aea4dd, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_key_path);
tmp_open_filename_1 = par_key_path;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 255;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_key_file == NULL);
Py_INCREF(tmp_assign_source_5);
var_key_file = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_key_file);
tmp_called_instance_1 = var_key_file;
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 256;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_key_data == NULL);
var_key_data = tmp_assign_source_6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
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
    exception_lineno = 255;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 255;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 255;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 255;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_findall);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$_KEY_REGEX(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__KEY_REGEX);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_key_data == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_key_data;
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_key_match == NULL);
var_key_match = tmp_assign_source_8;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_key_match);
tmp_len_arg_1 = var_key_match;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 1;
tmp_condition_result_5 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ClientCertError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_a2fbf27191a9b2719c8770ce9c13c006;
CHECK_OBJECT(par_key_path);
tmp_kw_call_arg_value_1_1 = par_key_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 261;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 261;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame.f_lineno = 260;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_key_match);
tmp_expression_value_5 = var_key_match;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file,
    type_description_1,
    par_key_path,
    var_key_file,
    var_key_data,
    var_key_match
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__8__read_key_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key_file);
CHECK_OBJECT(var_key_file);
Py_DECREF(var_key_file);
var_key_file = NULL;
Py_XDECREF(var_key_data);
var_key_data = NULL;
CHECK_OBJECT(var_key_match);
CHECK_OBJECT(var_key_match);
Py_DECREF(var_key_match);
var_key_match = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key_file);
var_key_file = NULL;
Py_XDECREF(var_key_data);
var_key_data = NULL;
Py_XDECREF(var_key_match);
var_key_match = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_path);
Py_DECREF(par_key_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key_path);
Py_DECREF(par_key_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_command = python_pars[0];
PyObject *par_expect_encrypted_key = python_pars[1];
PyObject *var_process = NULL;
PyObject *var_stdout = NULL;
PyObject *var_stderr = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_cert_match = NULL;
PyObject *var_key_match = NULL;
PyObject *var_passphrase_match = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command = MAKE_FUNCTION_FRAME(tstate, code_objects_b5375012bfdd24e60f317817db0b7f7a, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$subprocess(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Popen);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_command);
tmp_kw_call_arg_value_0_1 = par_command;
tmp_expression_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_PIPE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$subprocess(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 287;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PIPE);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 287;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 286;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_stdout_str_plain_stderr_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_process == NULL);
var_process = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_process);
tmp_called_instance_1 = var_process;
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 289;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_communicate);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooooooo";
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
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_5);
var_caught_exc = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_1 = var_caught_exc;
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 291;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ClientCertError, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_6;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 292;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 285;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_5;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var_stdout == NULL);
Py_INCREF(tmp_assign_source_7);
var_stdout = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_stderr == NULL);
Py_INCREF(tmp_assign_source_8);
var_stderr = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_process);
tmp_expression_value_4 = var_process;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_returncode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ClientCertError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_dd48a155c201e84723b6030cba7ce8db;
CHECK_OBJECT(var_process);
tmp_expression_value_6 = var_process;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_returncode);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 296;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 296;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_7 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_findall);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$_CERT_REGEX(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CERT_REGEX);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_4 = var_stdout;
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_match == NULL);
var_cert_match = tmp_assign_source_9;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_cert_match);
tmp_len_arg_1 = var_cert_match;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 1;
tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 303;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8bbc92718514cae09de019194fbf48db_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 303;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_8 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_findall);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$_KEY_REGEX(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__KEY_REGEX);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_6 = var_stdout;
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_match == NULL);
var_key_match = tmp_assign_source_10;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_key_match);
tmp_len_arg_2 = var_key_match;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 1;
tmp_condition_result_4 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 306;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_baeff5022141ac909d4c5260166ab2ca_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_9 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_findall);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_google$auth$transport$_mtls_helper$_PASSPHRASE_REGEX(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PASSPHRASE_REGEX);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_8 = var_stdout;
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_passphrase_match == NULL);
var_passphrase_match = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
CHECK_OBJECT(par_expect_encrypted_key);
tmp_truth_name_1 = CHECK_IF_TRUE(par_expect_encrypted_key);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(var_passphrase_match);
tmp_len_arg_3 = var_passphrase_match;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = 1;
tmp_condition_result_6 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 311;
tmp_raise_type_input_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a68436d9aea52df6c4edba22b7912d26_tuple, 0)
);

if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 311;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
tmp_cmp_expr_left_6 = mod_consts.const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405;
CHECK_OBJECT(var_key_match);
tmp_expression_value_10 = var_key_match;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_right_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_instance_6;
tmp_called_instance_6 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 313;
tmp_raise_type_input_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ce415fab553c3e1b6cae6585a3920b38_tuple, 0)
);

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 313;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_cert_match);
tmp_expression_value_11 = var_cert_match;
tmp_subscript_value_2 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key_match);
tmp_expression_value_12 = var_key_match;
tmp_subscript_value_3 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_passphrase_match);
tmp_expression_value_14 = var_passphrase_match;
tmp_subscript_value_4 = const_int_0;
tmp_expression_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 314;
tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto frame_return_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
tmp_cmp_expr_left_7 = mod_consts.const_bytes_digest_5067879b2cebd4e7ac34e78bdae5a405;
CHECK_OBJECT(var_key_match);
tmp_expression_value_15 = var_key_match;
tmp_subscript_value_5 = const_int_0;
tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_5, 0);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_raise_type_input_7;
PyObject *tmp_called_instance_7;
tmp_called_instance_7 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 317;
tmp_raise_type_input_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ac2a7f2330bf72e4a4820f9c6805c7b0_tuple, 0)
);

if (tmp_raise_type_input_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_7 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_7);
CHECK_OBJECT(tmp_raise_type_input_7);
Py_DECREF(tmp_raise_type_input_7);
if (tmp_raise_type_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 317;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
nuitka_digit tmp_cmp_expr_right_8;
PyObject *tmp_len_arg_4;
CHECK_OBJECT(var_passphrase_match);
tmp_len_arg_4 = var_passphrase_match;
tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = 0;
tmp_condition_result_9 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_raise_type_input_8;
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame.f_lineno = 319;
tmp_raise_type_input_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1eb1174582f17e9e39dd702417869d4e_tuple, 0)
);

if (tmp_raise_type_input_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_8 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_8);
CHECK_OBJECT(tmp_raise_type_input_8);
Py_DECREF(tmp_raise_type_input_8);
if (tmp_raise_type_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 319;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_9:;
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_cert_match);
tmp_expression_value_16 = var_cert_match;
tmp_subscript_value_6 = const_int_0;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 0);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_7;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_key_match);
tmp_expression_value_17 = var_key_match;
tmp_subscript_value_7 = const_int_0;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_7, 0);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command,
    type_description_1,
    par_command,
    par_expect_encrypted_key,
    var_process,
    var_stdout,
    var_stderr,
    var_caught_exc,
    var_new_exc,
    var_cert_match,
    var_key_match,
    var_passphrase_match
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_process);
CHECK_OBJECT(var_process);
Py_DECREF(var_process);
var_process = NULL;
CHECK_OBJECT(var_stdout);
CHECK_OBJECT(var_stdout);
Py_DECREF(var_stdout);
var_stdout = NULL;
CHECK_OBJECT(var_stderr);
CHECK_OBJECT(var_stderr);
Py_DECREF(var_stderr);
var_stderr = NULL;
CHECK_OBJECT(var_cert_match);
CHECK_OBJECT(var_cert_match);
Py_DECREF(var_cert_match);
var_cert_match = NULL;
CHECK_OBJECT(var_key_match);
CHECK_OBJECT(var_key_match);
Py_DECREF(var_key_match);
var_key_match = NULL;
CHECK_OBJECT(var_passphrase_match);
CHECK_OBJECT(var_passphrase_match);
Py_DECREF(var_passphrase_match);
var_passphrase_match = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_process);
var_process = NULL;
Py_XDECREF(var_stdout);
var_stdout = NULL;
Py_XDECREF(var_stderr);
var_stderr = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
Py_XDECREF(var_cert_match);
var_cert_match = NULL;
Py_XDECREF(var_key_match);
var_key_match = NULL;
Py_XDECREF(var_passphrase_match);
var_passphrase_match = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
CHECK_OBJECT(par_expect_encrypted_key);
Py_DECREF(par_expect_encrypted_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
CHECK_OBJECT(par_expect_encrypted_key);
Py_DECREF(par_expect_encrypted_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_generate_encrypted_key = python_pars[0];
PyObject *par_context_aware_metadata_path = python_pars[1];
PyObject *par_certificate_config_path = python_pars[2];
PyObject *var_cert = NULL;
PyObject *var_key = NULL;
PyObject *var_metadata_path = NULL;
PyObject *var_metadata_json = NULL;
PyObject *var_command = NULL;
PyObject *var_passphrase = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_cff1de5729e85a5a5cac2ad72f563312, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$_get_workload_cert_and_key(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_workload_cert_and_key);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_certificate_config_path);
tmp_args_element_value_1 = par_certificate_config_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 354;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooo";
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



exception_lineno = 354;
type_description_1 = "ooooooooo";
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



exception_lineno = 354;
type_description_1 = "ooooooooo";
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



exception_lineno = 354;
type_description_1 = "ooooooooo";
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
assert(var_cert == NULL);
Py_INCREF(tmp_assign_source_4);
var_cert = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_5);
var_key = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_cert);
tmp_truth_name_1 = CHECK_IF_TRUE(var_cert);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_key);
tmp_truth_name_2 = CHECK_IF_TRUE(var_key);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cert);
tmp_tuple_element_1 = var_cert;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$_check_config_path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__check_config_path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_context_aware_metadata_path);
tmp_args_element_value_2 = par_context_aware_metadata_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 359;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_metadata_path == NULL);
var_metadata_path = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_metadata_path);
tmp_truth_name_3 = CHECK_IF_TRUE(var_metadata_path);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$_load_json_file(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_json_file);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_metadata_path);
tmp_args_element_value_3 = var_metadata_path;
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 362;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_metadata_json == NULL);
var_metadata_json = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$auth$transport$_mtls_helper$_CERT_PROVIDER_COMMAND(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_metadata_json);
tmp_cmp_expr_right_1 = var_metadata_json;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_mtls_helper$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 365;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ClientCertError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_7179bd22406a9d9298ec62e04244d9b6_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 365;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_metadata_json);
tmp_expression_value_1 = var_metadata_json;
tmp_subscript_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$_CERT_PROVIDER_COMMAND(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CERT_PROVIDER_COMMAND);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_command == NULL);
var_command = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_generate_encrypted_key);
tmp_truth_name_4 = CHECK_IF_TRUE(par_generate_encrypted_key);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_cmp_expr_left_2 = mod_consts.const_str_digest_9e069044e39a5dbaad6cef0bd4c333aa;
CHECK_OBJECT(var_command);
tmp_cmp_expr_right_2 = var_command;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_command);
tmp_expression_value_2 = var_command;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 370;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_9e069044e39a5dbaad6cef0bd4c333aa_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$_run_cert_provider_command(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_cert_provider_command);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_command);
tmp_kw_call_arg_value_0_1 = var_command;
CHECK_OBJECT(par_generate_encrypted_key);
tmp_kw_call_dict_value_0_1 = par_generate_encrypted_key;
frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame.f_lineno = 373;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_expect_encrypted_key_tuple);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_cert;
    assert(old != NULL);
    var_cert = tmp_assign_source_13;
    Py_INCREF(var_cert);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_14;
    Py_INCREF(var_key);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
assert(var_passphrase == NULL);
Py_INCREF(tmp_assign_source_15);
var_passphrase = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_True;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_cert);
tmp_tuple_element_2 = var_cert;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_key);
tmp_tuple_element_2 = var_key;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_passphrase);
tmp_tuple_element_2 = var_passphrase;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials,
    type_description_1,
    par_generate_encrypted_key,
    par_context_aware_metadata_path,
    par_certificate_config_path,
    var_cert,
    var_key,
    var_metadata_path,
    var_metadata_json,
    var_command,
    var_passphrase
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = mod_consts.const_tuple_false_none_none_none_tuple;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert);
CHECK_OBJECT(var_cert);
Py_DECREF(var_cert);
var_cert = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
Py_XDECREF(var_metadata_path);
var_metadata_path = NULL;
Py_XDECREF(var_metadata_json);
var_metadata_json = NULL;
Py_XDECREF(var_command);
var_command = NULL;
Py_XDECREF(var_passphrase);
var_passphrase = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_metadata_path);
var_metadata_path = NULL;
Py_XDECREF(var_metadata_json);
var_metadata_json = NULL;
Py_XDECREF(var_command);
var_command = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_generate_encrypted_key);
Py_DECREF(par_generate_encrypted_key);
CHECK_OBJECT(par_context_aware_metadata_path);
Py_DECREF(par_context_aware_metadata_path);
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_generate_encrypted_key);
Py_DECREF(par_generate_encrypted_key);
CHECK_OBJECT(par_context_aware_metadata_path);
Py_DECREF(par_context_aware_metadata_path);
CHECK_OBJECT(par_certificate_config_path);
Py_DECREF(par_certificate_config_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_client_cert_callback = python_pars[0];
PyObject *var_cert = NULL;
PyObject *var_key = NULL;
PyObject *var_has_cert = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key = MAKE_FUNCTION_FRAME(tstate, code_objects_7718ea8eb966e00c16c306f00d77f95f, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_client_cert_callback);
tmp_truth_name_1 = CHECK_IF_TRUE(par_client_cert_callback);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(par_client_cert_callback);
tmp_called_value_1 = par_client_cert_callback;
frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key->m_frame.f_lineno = 402;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "ooooo";
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



exception_lineno = 402;
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
assert(var_cert == NULL);
Py_INCREF(tmp_assign_source_4);
var_cert = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_5);
var_key = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cert);
tmp_tuple_element_1 = var_cert;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$get_client_ssl_credentials(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_client_ssl_credentials);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key->m_frame.f_lineno = 405;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_generate_encrypted_key_tuple);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "ooooo";
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
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
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
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
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
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_4 == NULL);
tmp_tuple_unpack_2__element_4 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "ooooo";
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
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key,
    type_description_1,
    par_client_cert_callback,
    var_cert,
    var_key,
    var_has_cert,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
assert(var_has_cert == NULL);
Py_INCREF(tmp_assign_source_11);
var_has_cert = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
assert(var_cert == NULL);
Py_INCREF(tmp_assign_source_12);
var_cert = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_3;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_13);
var_key = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_4;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_14);
var__ = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_has_cert);
tmp_tuple_element_2 = var_has_cert;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_cert);
tmp_tuple_element_2 = var_cert;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_key);
tmp_tuple_element_2 = var_key;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert);
CHECK_OBJECT(var_cert);
Py_DECREF(var_cert);
var_cert = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
Py_XDECREF(var_has_cert);
var_has_cert = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_client_cert_callback);
Py_DECREF(par_client_cert_callback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_client_cert_callback);
Py_DECREF(par_client_cert_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *par_passphrase = python_pars[1];
PyObject *var_crypto = NULL;
PyObject *var_pkey = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key = MAKE_FUNCTION_FRAME(tstate, code_objects_6cf0b39c2276f07f00bee20a595e4032, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_crypto_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key->m_frame.f_lineno = 442;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain_crypto,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_crypto);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_crypto == NULL);
var_crypto = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var_crypto);
tmp_expression_value_1 = var_crypto;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_load_privatekey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_2 = var_crypto;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 445;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_kw_call_arg_value_1_1 = par_key;
CHECK_OBJECT(par_passphrase);
tmp_kw_call_dict_value_0_1 = par_passphrase;
frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key->m_frame.f_lineno = 445;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_passphrase_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_pkey == NULL);
var_pkey = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_crypto);
tmp_expression_value_3 = var_crypto;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dump_privatekey);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_4 = var_crypto;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 448;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pkey);
tmp_args_element_value_2 = var_pkey;
frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key->m_frame.f_lineno = 448;
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


exception_lineno = 448;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key,
    type_description_1,
    par_key,
    par_passphrase,
    var_crypto,
    var_pkey
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_crypto);
CHECK_OBJECT(var_crypto);
Py_DECREF(var_crypto);
var_crypto = NULL;
CHECK_OBJECT(var_pkey);
CHECK_OBJECT(var_pkey);
Py_DECREF(var_pkey);
var_pkey = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_crypto);
var_crypto = NULL;
Py_XDECREF(var_pkey);
var_pkey = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_passphrase);
Py_DECREF(par_passphrase);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_passphrase);
Py_DECREF(par_passphrase);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_use_client_cert = NULL;
PyObject *var_cert_path = NULL;
PyObject *var_f = NULL;
PyObject *var_content = NULL;
PyObject *var_e = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert = MAKE_FUNCTION_FRAME(tstate, code_objects_807c10b17de8effce2b5c6a179a3aa8a, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$getenv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getenv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 465;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_use_client_cert == NULL);
var_use_client_cert = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_use_client_cert);
tmp_cmp_expr_left_1 = var_use_client_cert;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_use_client_cert);
tmp_cmp_expr_left_2 = var_use_client_cert;
tmp_cmp_expr_right_2 = const_str_empty;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$getenv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getenv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 467;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 467;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_use_client_cert;
    assert(old != NULL);
    var_use_client_cert = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_use_client_cert);
tmp_truth_name_1 = CHECK_IF_TRUE(var_use_client_cert);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_use_client_cert);
tmp_expression_value_3 = var_use_client_cert;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 473;
tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_true;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$getenv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getenv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 476;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_path == NULL);
var_cert_path = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_cert_path);
tmp_cmp_expr_left_4 = var_cert_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
tmp_called_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$getenv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getenv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 478;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$environment_vars(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 478;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cert_path;
    assert(old != NULL);
    var_cert_path = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(var_cert_path);
tmp_truth_name_2 = CHECK_IF_TRUE(var_cert_path);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(var_cert_path);
tmp_open_filename_1 = var_cert_path;
tmp_open_mode_1 = const_str_plain_r;
tmp_assign_source_5 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 484;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_7 = tmp_with_1__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___exit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_9 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_9);
var_f = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_mtls_helper$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_f);
tmp_args_element_value_5 = var_f;
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 485;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(var_content == NULL);
var_content = tmp_assign_source_10;
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_result_1;
CHECK_OBJECT(var_content);
tmp_expression_value_9 = var_content;
tmp_subscript_value_1 = mod_consts.const_str_plain_cert_configs;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_workload;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
}
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 484;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 484;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 484;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_end_5:;
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 484;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 484;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 484;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_3:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
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
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_FileNotFoundError;
tmp_cmp_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_KeyError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_TypeError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 3, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_google$auth$transport$_mtls_helper$json(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_JSONDecodeError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_7, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_7);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_12);
var_e = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_mtls_helper$_LOGGER(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 496;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_e935f7a545d58cd0cbb5007d8024f2fd;
CHECK_OBJECT(var_e);
tmp_args_element_value_10 = var_e;
frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = 496;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 483;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame)) {
        frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_7;
branch_end_8:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
branch_no_4:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert,
    type_description_1,
    var_use_client_cert,
    var_cert_path,
    var_f,
    var_content,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_use_client_cert);
CHECK_OBJECT(var_use_client_cert);
Py_DECREF(var_use_client_cert);
var_use_client_cert = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_use_client_cert);
var_use_client_cert = NULL;
Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_content);
var_content = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cached_cert = python_pars[0];
PyObject *var_call_cert_bytes = NULL;
PyObject *var_call_key_bytes = NULL;
PyObject *var_cert_obj = NULL;
PyObject *var_current_cert_fingerprint = NULL;
PyObject *var_cached_fingerprint = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response = MAKE_FUNCTION_FRAME(tstate, code_objects_1e166d2a6b1ea51db05b39640a4d5eb3, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$call_client_cert_callback(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_call_client_cert_callback);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_frame.f_lineno = 512;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
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



exception_lineno = 512;
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



exception_lineno = 512;
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



exception_lineno = 512;
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
assert(var_call_cert_bytes == NULL);
Py_INCREF(tmp_assign_source_4);
var_call_cert_bytes = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_call_key_bytes == NULL);
Py_INCREF(tmp_assign_source_5);
var_call_key_bytes = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_mtls_helper$_agent_identity_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__agent_identity_utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_call_cert_bytes);
tmp_args_element_value_1 = var_call_cert_bytes;
frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_frame.f_lineno = 513;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse_certificate, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_obj == NULL);
var_cert_obj = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$_mtls_helper$_agent_identity_utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__agent_identity_utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_obj);
tmp_args_element_value_2 = var_cert_obj;
frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_frame.f_lineno = 514;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_calculate_certificate_fingerprint, tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_current_cert_fingerprint == NULL);
var_current_cert_fingerprint = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_cached_cert);
tmp_truth_name_1 = CHECK_IF_TRUE(par_cached_cert);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_google$auth$transport$_mtls_helper$_agent_identity_utils(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__agent_identity_utils);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 518;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cached_cert);
tmp_args_element_value_3 = par_cached_cert;
frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_frame.f_lineno = 518;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_cached_cert_fingerprint, tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cached_fingerprint == NULL);
var_cached_fingerprint = tmp_assign_source_8;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_current_cert_fingerprint);
tmp_assign_source_9 = var_current_cert_fingerprint;
assert(var_cached_fingerprint == NULL);
Py_INCREF(tmp_assign_source_9);
var_cached_fingerprint = tmp_assign_source_9;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response,
    type_description_1,
    par_cached_cert,
    var_call_cert_bytes,
    var_call_key_bytes,
    var_cert_obj,
    var_current_cert_fingerprint,
    var_cached_fingerprint
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_call_cert_bytes);
tmp_tuple_element_1 = var_call_cert_bytes;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_call_key_bytes);
tmp_tuple_element_1 = var_call_key_bytes;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_cached_fingerprint);
tmp_tuple_element_1 = var_cached_fingerprint;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_current_cert_fingerprint);
tmp_tuple_element_1 = var_current_cert_fingerprint;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_call_cert_bytes);
CHECK_OBJECT(var_call_cert_bytes);
Py_DECREF(var_call_cert_bytes);
var_call_cert_bytes = NULL;
CHECK_OBJECT(var_call_key_bytes);
CHECK_OBJECT(var_call_key_bytes);
Py_DECREF(var_call_key_bytes);
var_call_key_bytes = NULL;
CHECK_OBJECT(var_cert_obj);
CHECK_OBJECT(var_cert_obj);
Py_DECREF(var_cert_obj);
var_cert_obj = NULL;
CHECK_OBJECT(var_current_cert_fingerprint);
CHECK_OBJECT(var_current_cert_fingerprint);
Py_DECREF(var_current_cert_fingerprint);
var_current_cert_fingerprint = NULL;
CHECK_OBJECT(var_cached_fingerprint);
CHECK_OBJECT(var_cached_fingerprint);
Py_DECREF(var_cached_fingerprint);
var_cached_fingerprint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_call_cert_bytes);
var_call_cert_bytes = NULL;
Py_XDECREF(var_call_key_bytes);
var_call_key_bytes = NULL;
Py_XDECREF(var_cert_obj);
var_cert_obj = NULL;
Py_XDECREF(var_current_cert_fingerprint);
var_current_cert_fingerprint = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cached_cert);
Py_DECREF(par_cached_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cached_cert);
Py_DECREF(par_cached_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var__ = NULL;
PyObject *var_cert_bytes = NULL;
PyObject *var_key_bytes = NULL;
PyObject *var_passphrase = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_94ef2311ed63fb8f77e413b7637c04a1, module_google$auth$transport$_mtls_helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback->m_type_description == NULL);
frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback = cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$get_client_ssl_credentials(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_client_ssl_credentials);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback->m_frame.f_lineno = 528;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_generate_encrypted_key_tuple);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback,
    type_description_1,
    var__,
    var_cert_bytes,
    var_key_bytes,
    var_passphrase
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback == cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback);
    cache_frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_6);
var__ = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_cert_bytes == NULL);
Py_INCREF(tmp_assign_source_7);
var_cert_bytes = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
assert(var_key_bytes == NULL);
Py_INCREF(tmp_assign_source_8);
var_key_bytes = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
assert(var_passphrase == NULL);
Py_INCREF(tmp_assign_source_9);
var_passphrase = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_cert_bytes);
tmp_tuple_element_1 = var_cert_bytes;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key_bytes);
tmp_tuple_element_1 = var_key_bytes;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_cert_bytes);
CHECK_OBJECT(var_cert_bytes);
Py_DECREF(var_cert_bytes);
var_cert_bytes = NULL;
CHECK_OBJECT(var_key_bytes);
CHECK_OBJECT(var_key_bytes);
Py_DECREF(var_key_bytes);
var_key_bytes = NULL;
CHECK_OBJECT(var_passphrase);
CHECK_OBJECT(var_passphrase);
Py_DECREF(var_passphrase);
var_passphrase = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials,
        mod_consts.const_str_plain_get_client_ssl_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cff1de5729e85a5a5cac2ad72f563312,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_714309ca597e7aba9aa84bc4ca23b107,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key,
        mod_consts.const_str_plain_get_client_cert_and_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7718ea8eb966e00c16c306f00d77f95f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_2fd1ed6518564925963980b8fac93099,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key,
        mod_consts.const_str_plain_decrypt_private_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6cf0b39c2276f07f00bee20a595e4032,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_9c07d282c34526b827e30c62bc33c9e1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert,
        mod_consts.const_str_plain_check_use_client_cert,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_807c10b17de8effce2b5c6a179a3aa8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_d69c6dc7c67284b8cf3eceb55179e9b6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response,
        mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e166d2a6b1ea51db05b39640a4d5eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_7d385a571052bee6bb73012745eb31e2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback,
        mod_consts.const_str_plain_call_client_cert_callback,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_94ef2311ed63fb8f77e413b7637c04a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_f197542601a2d598c1e19da21b8eeee6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__1__check_config_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__1__check_config_path,
        mod_consts.const_str_plain__check_config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_506897e8d8edd356443db025c9c30eaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_b853bb123d9bcad6a5af2b44e792173f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__2__load_json_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__2__load_json_file,
        mod_consts.const_str_plain__load_json_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b5ab3e09b7396fbad97ae55f3e517e07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_2ab5cd0006f0283bc44a9fb33908d29e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key,
        mod_consts.const_str_plain__get_workload_cert_and_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4cd5123b91c3e59326b6a3ad2e8cc80f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_ba7eb085bf46458c979fe81129562268,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path,
        mod_consts.const_str_plain__get_cert_config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_557c023fb8a40bc1b14a5001d4d0e672,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_49374ff2f781a678c2efd6fe4661ceed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths,
        mod_consts.const_str_plain__get_workload_cert_and_key_paths,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_08aeae4867d0e8b896a55c47d00af761,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files,
        mod_consts.const_str_plain__read_cert_and_key_files,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9f20a16a28fe6953de54dbafbe47e73f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__7__read_cert_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__7__read_cert_file,
        mod_consts.const_str_plain__read_cert_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cd51f58bd7447236c61cfbb5f11eb5bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__8__read_key_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__8__read_key_file,
        mod_consts.const_str_plain__read_key_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_daed71e21a8c6b241d6885d8f4aea4dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command,
        mod_consts.const_str_plain__run_cert_provider_command,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b5375012bfdd24e60f317817db0b7f7a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$_mtls_helper,
        mod_consts.const_str_digest_b8b8f078358f8365b6150f58f6b03fb2,
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

static function_impl_code const function_table_google$auth$transport$_mtls_helper[] = {
impl_google$auth$transport$_mtls_helper$$$function__1__check_config_path,
impl_google$auth$transport$_mtls_helper$$$function__2__load_json_file,
impl_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key,
impl_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path,
impl_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths,
impl_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files,
impl_google$auth$transport$_mtls_helper$$$function__7__read_cert_file,
impl_google$auth$transport$_mtls_helper$$$function__8__read_key_file,
impl_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command,
impl_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials,
impl_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key,
impl_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key,
impl_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert,
impl_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response,
impl_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$transport$_mtls_helper);
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
        module_google$auth$transport$_mtls_helper,
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
        function_table_google$auth$transport$_mtls_helper,
        sizeof(function_table_google$auth$transport$_mtls_helper) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.transport._mtls_helper";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$transport$_mtls_helper(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$transport$_mtls_helper");

    // Store the module for future use.
    module_google$auth$transport$_mtls_helper = module;

    moduledict_google$auth$transport$_mtls_helper = MODULE_DICT(module_google$auth$transport$_mtls_helper);

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
        PRINT_STRING("google$auth$transport$_mtls_helper: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$transport$_mtls_helper: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$transport$_mtls_helper: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport._mtls_helper" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$transport$_mtls_helper\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$transport$_mtls_helper,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$_mtls_helper,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$_mtls_helper,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$_mtls_helper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$_mtls_helper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$transport$_mtls_helper);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$transport$_mtls_helper);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$_mtls_helper;
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
tmp_assign_source_1 = mod_consts.const_str_digest_2520770e4403b8c740208cbc8df975b7;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$transport$_mtls_helper = MAKE_MODULE_FRAME(code_objects_3f71d4cbeed3a8766fe2861a4b1779ad, module_google$auth$transport$_mtls_helper);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$_mtls_helper);
assert(Py_REFCNT(frame_frame_google$auth$transport$_mtls_helper) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$transport$_mtls_helper$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$transport$_mtls_helper$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 17;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
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
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain_environ,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_environ);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environ, tmp_assign_source_7);
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
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain_getenv,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_getenv);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_getenv, tmp_assign_source_8);
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
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_NTPATH();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain_path, tmp_assign_source_9);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 20;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 21;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__agent_identity_utils_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 23;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain__agent_identity_utils,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__agent_identity_utils);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__agent_identity_utils, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_environment_vars_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 24;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_environment_vars);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$transport$_mtls_helper;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 25;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$transport$_mtls_helper,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_99bb8ce9e9a41c7d7552baea4c857814;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_aaa3f02044eb6e0da3e5d14da53fc078;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_CERTIFICATE_CONFIGURATION_DEFAULT_PATH, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_plain_cert_provider_command;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_PROVIDER_COMMAND, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_bytes_digest_8d30f025f18f8efe7f4ea366dbccf3ae;
tmp_expression_value_2 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 32;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__CERT_REGEX, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_compile);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_bytes_digest_7bb4383ebf5a79b6f8237c0d3a9ec147;
tmp_expression_value_4 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 41;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__KEY_REGEX, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$_mtls_helper$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 46;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_76c4c07798963223889b12fc60a097b0_tuple, 0)
);

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_compile);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_bytes_digest_942700470f7806993d25aad04e1c0244;
tmp_expression_value_6 = module_var_accessor_google$auth$transport$_mtls_helper$re(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 50;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$_mtls_helper->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__PASSPHRASE_REGEX, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_digest_efaf47ccfb74e8b5b497a60b28a371b0;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_CERT_PATH, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_digest_b706629896765221f68689e024f867ae;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__WELL_KNOWN_CLOUD_RUN_KEY_PATH, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_digest_77efc00b217530ca6e0020504e73fa28;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_CERT_PATH, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_str_digest_ff48e6ed9b38a9561fb53a3702e880ab;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__INCORRECT_CLOUD_RUN_KEY_PATH, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__1__check_config_path(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__check_config_path, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__2__load_json_file(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__load_json_file, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_true_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_28 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__3__get_workload_cert_and_key(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_true_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_29 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__4__get_cert_config_path(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_cert_config_path, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_30 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__5__get_workload_cert_and_key_paths(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__get_workload_cert_and_key_paths, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__6__read_cert_and_key_files(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_and_key_files, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__7__read_cert_file(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_cert_file, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;

tmp_assign_source_33 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__8__read_key_file(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__read_key_file, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_34 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__9__run_cert_provider_command(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain__run_cert_provider_command, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_False;
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_google$auth$transport$_mtls_helper$CONTEXT_AWARE_METADATA_PATH(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CONTEXT_AWARE_METADATA_PATH);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_assign_source_35 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__10_get_client_ssl_credentials(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_ssl_credentials, tmp_assign_source_35);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$_mtls_helper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$_mtls_helper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$_mtls_helper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$transport$_mtls_helper);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_36 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__11_get_client_cert_and_key(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_get_client_cert_and_key, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__12_decrypt_private_key(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_decrypt_private_key, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;

tmp_assign_source_38 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__13_check_use_client_cert(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_check_use_client_cert, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;

tmp_assign_source_39 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__14_check_parameters_for_unauthorized_response(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;

tmp_assign_source_40 = MAKE_FUNCTION_google$auth$transport$_mtls_helper$$$function__15_call_client_cert_callback(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)mod_consts.const_str_plain_call_client_cert_callback, tmp_assign_source_40);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$transport$_mtls_helper", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport._mtls_helper" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$transport$_mtls_helper);
    return module_google$auth$transport$_mtls_helper;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$_mtls_helper, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$transport$_mtls_helper", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

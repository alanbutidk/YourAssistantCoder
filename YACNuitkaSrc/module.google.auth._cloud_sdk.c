/* Generated code for Python module 'google$auth$_cloud_sdk'
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



/* The "module_google$auth$_cloud_sdk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$_cloud_sdk;
PyDictObject *moduledict_google$auth$_cloud_sdk;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_environ;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_CLOUD_SDK_CONFIG_DIR;
PyObject *const_str_plain_join;
PyObject *const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR;
PyObject *const_str_plain__CONFIG_DIRECTORY;
PyObject *const_tuple_fba9739dff9df707afdb62df6cd0e5e4_tuple;
PyObject *const_str_digest_d5cc701b16513dd2970bfb46fe8e152d;
PyObject *const_str_plain_get_config_path;
PyObject *const_str_plain__CREDENTIALS_FILENAME;
PyObject *const_str_digest_cc446395b7f308f7404b54b2eb308ee8;
PyObject *const_str_plain_devnull;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_check_output;
PyObject *const_tuple_str_plain_stderr_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_output;
PyObject *const_str_digest_cab9d78c6034f74e1fb025b275fb0eba;
PyObject *const_str_plain__CLOUD_SDK_WINDOWS_COMMAND;
PyObject *const_str_plain__run_subprocess_ignore_stderr;
PyObject *const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_from_bytes;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_CalledProcessError;
PyObject *const_str_digest_1e5b09a880dda1c936227fe1c2e09e32;
PyObject *const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND;
PyObject *const_str_digest_d55e50d3d3448c10eff5d486e0a2b0ae;
PyObject *const_str_plain_STDOUT;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_UserAccessTokenError;
PyObject *const_str_digest_3dd4632ef2db5616475c8b8b6f903f20;
PyObject *const_str_digest_f17d7122a4e5f3c648199fe51990b6d8;
PyObject *const_str_digest_4645795097a11f8398cea5c59e2b3580;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_plain_gcloud;
PyObject *const_str_plain_APPDATA;
PyObject *const_str_digest_1003e933480009447ac330621f419597;
PyObject *const_str_plain__CLOUD_SDK_POSIX_COMMAND;
PyObject *const_str_digest_c7f6bf283253b0fd64a17f967935562b;
PyObject *const_tuple_str_plain_config_str_plain_get_str_plain_project_tuple;
PyObject *const_tuple_str_plain_auth_str_digest_2c5598b04e047a160c7503405f4d30c7_tuple;
PyObject *const_str_digest_b5cb39b7a5896ace433772a1e37d1b35;
PyObject *const_str_plain_CLOUD_SDK_CLIENT_ID;
PyObject *const_str_plain_get_application_default_credentials_path;
PyObject *const_str_plain_get_project_id;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_get_auth_access_token;
PyObject *const_str_digest_b7785717119bf9d44688f17111e0411e;
PyObject *const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4;
PyObject *const_tuple_str_plain_command_str_plain_devnull_str_plain_output_tuple;
PyObject *const_tuple_str_plain_config_path_tuple;
PyObject *const_tuple_2504d4186abe6d04abc4034667b43c52_tuple;
PyObject *const_tuple_str_plain_drive_tuple;
PyObject *const_tuple_str_plain_command_str_plain_project_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[63];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth._cloud_sdk"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__CONFIG_DIRECTORY);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_fba9739dff9df707afdb62df6cd0e5e4_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5cc701b16513dd2970bfb46fe8e152d);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_config_path);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__CREDENTIALS_FILENAME);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc446395b7f308f7404b54b2eb308ee8);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_devnull);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_output);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stderr_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_cab9d78c6034f74e1fb025b275fb0eba);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_subprocess_ignore_stderr);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CalledProcessError);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e5b09a880dda1c936227fe1c2e09e32);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_d55e50d3d3448c10eff5d486e0a2b0ae);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenError);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dd4632ef2db5616475c8b8b6f903f20);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_f17d7122a4e5f3c648199fe51990b6d8);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_4645795097a11f8398cea5c59e2b3580);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_gcloud);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_APPDATA);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_1003e933480009447ac330621f419597);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_POSIX_COMMAND);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7f6bf283253b0fd64a17f967935562b);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_get_str_plain_project_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_str_digest_2c5598b04e047a160c7503405f4d30c7_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5cb39b7a5896ace433772a1e37d1b35);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CLIENT_ID);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_application_default_credentials_path);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_project_id);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_access_token);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7785717119bf9d44688f17111e0411e);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_str_plain_devnull_str_plain_output_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_path_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_2504d4186abe6d04abc4034667b43c52_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_drive_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_str_plain_project_tuple);
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
void checkModuleConstants_google$auth$_cloud_sdk(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__CONFIG_DIRECTORY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CONFIG_DIRECTORY);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_fba9739dff9df707afdb62df6cd0e5e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fba9739dff9df707afdb62df6cd0e5e4_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5cc701b16513dd2970bfb46fe8e152d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5cc701b16513dd2970bfb46fe8e152d);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_config_path);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__CREDENTIALS_FILENAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CREDENTIALS_FILENAME);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc446395b7f308f7404b54b2eb308ee8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc446395b7f308f7404b54b2eb308ee8);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_devnull));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_devnull);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_output);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stderr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stderr_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_cab9d78c6034f74e1fb025b275fb0eba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cab9d78c6034f74e1fb025b275fb0eba);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_subprocess_ignore_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_subprocess_ignore_stderr);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CalledProcessError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CalledProcessError);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e5b09a880dda1c936227fe1c2e09e32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e5b09a880dda1c936227fe1c2e09e32);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_d55e50d3d3448c10eff5d486e0a2b0ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d55e50d3d3448c10eff5d486e0a2b0ae);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDOUT);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UserAccessTokenError);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dd4632ef2db5616475c8b8b6f903f20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dd4632ef2db5616475c8b8b6f903f20);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_f17d7122a4e5f3c648199fe51990b6d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f17d7122a4e5f3c648199fe51990b6d8);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_4645795097a11f8398cea5c59e2b3580));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4645795097a11f8398cea5c59e2b3580);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_vars_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_gcloud));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gcloud);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_APPDATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APPDATA);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_1003e933480009447ac330621f419597));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1003e933480009447ac330621f419597);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__CLOUD_SDK_POSIX_COMMAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CLOUD_SDK_POSIX_COMMAND);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7f6bf283253b0fd64a17f967935562b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7f6bf283253b0fd64a17f967935562b);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_str_plain_get_str_plain_project_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_str_plain_get_str_plain_project_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_str_digest_2c5598b04e047a160c7503405f4d30c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_auth_str_digest_2c5598b04e047a160c7503405f4d30c7_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5cb39b7a5896ace433772a1e37d1b35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5cb39b7a5896ace433772a1e37d1b35);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CLIENT_ID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOUD_SDK_CLIENT_ID);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_application_default_credentials_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_application_default_credentials_path);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_project_id);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_auth_access_token);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7785717119bf9d44688f17111e0411e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7785717119bf9d44688f17111e0411e);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_str_plain_devnull_str_plain_output_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_str_plain_devnull_str_plain_output_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_path_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_2504d4186abe6d04abc4034667b43c52_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2504d4186abe6d04abc4034667b43c52_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_drive_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_drive_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_str_plain_project_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_str_plain_project_tuple);
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
static PyObject *module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_WINDOWS_COMMAND(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_CONFIG_DIRECTORY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CONFIG_DIRECTORY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CONFIG_DIRECTORY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CONFIG_DIRECTORY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CONFIG_DIRECTORY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CONFIG_DIRECTORY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CONFIG_DIRECTORY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CONFIG_DIRECTORY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CONFIG_DIRECTORY);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_CREDENTIALS_FILENAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CREDENTIALS_FILENAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CREDENTIALS_FILENAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CREDENTIALS_FILENAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CREDENTIALS_FILENAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CREDENTIALS_FILENAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CREDENTIALS_FILENAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CREDENTIALS_FILENAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CREDENTIALS_FILENAME);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_WINDOWS_CONFIG_ROOT_ENV_VAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$_run_subprocess_ignore_stderr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__run_subprocess_ignore_stderr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_subprocess_ignore_stderr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_subprocess_ignore_stderr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_subprocess_ignore_stderr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_subprocess_ignore_stderr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__run_subprocess_ignore_stderr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__run_subprocess_ignore_stderr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_subprocess_ignore_stderr);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$get_config_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_config_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_config_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_config_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_config_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config_path);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$_cloud_sdk$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$_cloud_sdk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$_cloud_sdk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$_cloud_sdk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b385122fe0284933d4f98db94ac4c633;
static PyCodeObject *code_objects_cb23eb10dc8976eeefc80b47f4e354ab;
static PyCodeObject *code_objects_c5c7dcbd39520f9b379f3bdb9548101e;
static PyCodeObject *code_objects_19a62a87b8f1c4692a7429db4317f620;
static PyCodeObject *code_objects_7b2734495cbbad3199e041f98737a193;
static PyCodeObject *code_objects_df46d7cddb1c0e06a30ec094147a7a06;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b7785717119bf9d44688f17111e0411e); CHECK_OBJECT(module_filename_obj);
code_objects_b385122fe0284933d4f98db94ac4c633 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4, mod_consts.const_str_digest_4ecd860c81cbd880c37e7b08f16c59f4, NULL, NULL, 0, 0, 0);
code_objects_cb23eb10dc8976eeefc80b47f4e354ab = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__run_subprocess_ignore_stderr, mod_consts.const_str_plain__run_subprocess_ignore_stderr, mod_consts.const_tuple_str_plain_command_str_plain_devnull_str_plain_output_tuple, NULL, 1, 0, 0);
code_objects_c5c7dcbd39520f9b379f3bdb9548101e = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_application_default_credentials_path, mod_consts.const_str_plain_get_application_default_credentials_path, mod_consts.const_tuple_str_plain_config_path_tuple, NULL, 0, 0, 0);
code_objects_19a62a87b8f1c4692a7429db4317f620 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_auth_access_token, mod_consts.const_str_plain_get_auth_access_token, mod_consts.const_tuple_2504d4186abe6d04abc4034667b43c52_tuple, NULL, 1, 0, 0);
code_objects_7b2734495cbbad3199e041f98737a193 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_config_path, mod_consts.const_str_plain_get_config_path, mod_consts.const_tuple_str_plain_drive_tuple, NULL, 0, 0, 0);
code_objects_df46d7cddb1c0e06a30ec094147a7a06 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_project_id, mod_consts.const_str_plain_get_project_id, mod_consts.const_tuple_str_plain_command_str_plain_project_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__1_get_config_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__4_get_project_id(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__5_get_auth_access_token(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$_cloud_sdk$$$function__1_get_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_drive = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path)) {
    Py_XDECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_7b2734495cbbad3199e041f98737a193, module_google$auth$_cloud_sdk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_type_description == NULL);
frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path = cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_google$auth$_cloud_sdk$environment_vars(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_1);

exception_lineno = 53;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 53;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_keeper_lineno_1);
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
    exception_lineno = 52;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_3;
branch_no_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 64;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_subscript_value_2 = module_var_accessor_google$auth$_cloud_sdk$_WINDOWS_CONFIG_ROOT_ENV_VAR(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_expression_value_5);

exception_lineno = 64;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 64;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_args_element_value_2 = module_var_accessor_google$auth$_cloud_sdk$_CONFIG_DIRECTORY(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CONFIG_DIRECTORY);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 64;
type_description_1 = "o";
    goto try_except_handler_4;
}
frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "o";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_environ);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_5;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_5;
}
frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame.f_lineno = 69;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_fba9739dff9df707afdb62df6cd0e5e4_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_5;
}
assert(var_drive == NULL);
var_drive = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_9 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_9 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_drive);
tmp_args_element_value_3 = var_drive;
tmp_args_element_value_4 = const_str_backslash;
tmp_args_element_value_5 = module_var_accessor_google$auth$_cloud_sdk$_CONFIG_DIRECTORY(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CONFIG_DIRECTORY);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 70;
type_description_1 = "o";
    goto try_except_handler_5;
}
frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto try_except_handler_5;
}
goto try_return_handler_5;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 62;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_5;
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path,
    type_description_1,
    var_drive
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path == cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path);
    cache_frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path = NULL;
}

assertFrameObject(frame_frame_google$auth$_cloud_sdk$$$function__1_get_config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_drive);
var_drive = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_drive);
var_drive = NULL;
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


static PyObject *impl_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_config_path = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path)) {
    Py_XDECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path = MAKE_FUNCTION_FRAME(tstate, code_objects_c5c7dcbd39520f9b379f3bdb9548101e, module_google$auth$_cloud_sdk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path->m_type_description == NULL);
frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path = cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$_cloud_sdk$get_config_path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_config_path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path->m_frame.f_lineno = 81;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(var_config_path == NULL);
var_config_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_config_path);
tmp_args_element_value_1 = var_config_path;
tmp_args_element_value_2 = module_var_accessor_google$auth$_cloud_sdk$_CREDENTIALS_FILENAME(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CREDENTIALS_FILENAME);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 82;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path,
    type_description_1,
    var_config_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path == cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path);
    cache_frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path = NULL;
}

assertFrameObject(frame_frame_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_config_path);
CHECK_OBJECT(var_config_path);
Py_DECREF(var_config_path);
var_config_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_config_path);
var_config_path = NULL;
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


static PyObject *impl_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_command = python_pars[0];
PyObject *var_devnull = NULL;
PyObject *var_output = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr)) {
    Py_XDECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr = MAKE_FUNCTION_FRAME(tstate, code_objects_cb23eb10dc8976eeefc80b47f4e354ab, module_google$auth$_cloud_sdk, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_type_description == NULL);
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr = cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_open_mode_1;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_devnull);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_open_mode_1 = const_str_plain_w;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = 87;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
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


exception_lineno = 87;
type_description_1 = "ooo";
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
assert(var_devnull == NULL);
Py_INCREF(tmp_assign_source_5);
var_devnull = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_4 = module_var_accessor_google$auth$_cloud_sdk$subprocess(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_check_output);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_command);
tmp_kw_call_arg_value_0_1 = par_command;
CHECK_OBJECT(var_devnull);
tmp_kw_call_dict_value_0_1 = var_devnull;
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = 88;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_stderr_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(var_output == NULL);
var_output = tmp_assign_source_6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr, exception_keeper_lineno_1);
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
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
    exception_lineno = 87;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 87;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = 87;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 87;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame.f_lineno = 87;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
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
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_output;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr,
    type_description_1,
    par_command,
    var_devnull,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr == cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr);
    cache_frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr = NULL;
}

assertFrameObject(frame_frame_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_devnull);
CHECK_OBJECT(var_devnull);
Py_DECREF(var_devnull);
var_devnull = NULL;
Py_XDECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_devnull);
var_devnull = NULL;
Py_XDECREF(var_output);
var_output = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_command);
Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$_cloud_sdk$$$function__4_get_project_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_command = NULL;
PyObject *var_project = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id)) {
    Py_XDECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id = MAKE_FUNCTION_FRAME(tstate, code_objects_df46d7cddb1c0e06a30ec094147a7a06, module_google$auth$_cloud_sdk, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_type_description == NULL);
frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id = cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_WINDOWS_COMMAND(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_command == NULL);
Py_INCREF(tmp_assign_source_1);
var_command = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_google$auth$_cloud_sdk$_run_subprocess_ignore_stderr(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_subprocess_ignore_stderr);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_command);
tmp_tuple_element_1 = var_command;
tmp_add_expr_left_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_tuple_element_1);
tmp_add_expr_right_1 = module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame.f_lineno = 106;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_project == NULL);
var_project = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$_cloud_sdk$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_project);
tmp_args_element_value_2 = var_project;
frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame.f_lineno = 111;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_bytes, tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame.f_lineno = 111;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_project;
    assert(old != NULL);
    var_project = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_project);
tmp_truth_name_1 = CHECK_IF_TRUE(var_project);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_project);
tmp_return_value = var_project;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = Py_None;
condexpr_end_1:;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_2;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_2 = module_var_accessor_google$auth$_cloud_sdk$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CalledProcessError);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = PyExc_IOError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_2);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
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
    exception_lineno = 103;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id,
    type_description_1,
    var_command,
    var_project
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id == cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id);
    cache_frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id = NULL;
}

assertFrameObject(frame_frame_google$auth$_cloud_sdk$$$function__4_get_project_id);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_command);
CHECK_OBJECT(var_command);
Py_DECREF(var_command);
var_command = NULL;
Py_XDECREF(var_project);
var_project = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_command);
var_command = NULL;
Py_XDECREF(var_project);
var_project = NULL;
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


static PyObject *impl_google$auth$_cloud_sdk$$$function__5_get_auth_access_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_account = python_pars[0];
PyObject *var_command = NULL;
PyObject *var_access_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token = MAKE_FUNCTION_FRAME(tstate, code_objects_19a62a87b8f1c4692a7429db4317f620, module_google$auth$_cloud_sdk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_type_description == NULL);
frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token = cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_WINDOWS_COMMAND(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_command == NULL);
Py_INCREF(tmp_assign_source_1);
var_command = tmp_assign_source_1;
}
// Tried code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_account);
tmp_truth_name_1 = CHECK_IF_TRUE(par_account);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(var_command);
tmp_tuple_element_1 = var_command;
tmp_add_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_left_2, 0, tmp_tuple_element_1);
tmp_add_expr_right_2 = module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND(tstate);
if (unlikely(tmp_add_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
}

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 140;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_3 = mod_consts.const_str_digest_d55e50d3d3448c10eff5d486e0a2b0ae;
CHECK_OBJECT(par_account);
tmp_add_expr_right_3 = par_account;
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 141;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_right_1, 0, tmp_tuple_element_2);
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_command;
    assert(old != NULL);
    var_command = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_command);
tmp_tuple_element_3 = var_command;
tmp_add_expr_left_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_left_4, 0, tmp_tuple_element_3);
tmp_add_expr_right_4 = module_var_accessor_google$auth$_cloud_sdk$_CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND(tstate);
if (unlikely(tmp_add_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND);
}

if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 144;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_command;
    assert(old != NULL);
    var_command = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$_cloud_sdk$subprocess(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_check_output);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_command);
tmp_kw_call_arg_value_0_1 = var_command;
tmp_expression_value_2 = module_var_accessor_google$auth$_cloud_sdk$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 146;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_STDOUT);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 146;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame.f_lineno = 146;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_stderr_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_access_token == NULL);
var_access_token = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_access_token);
tmp_expression_value_4 = var_access_token;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame.f_lineno = 148;
tmp_expression_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame.f_lineno = 148;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_5;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_5 = module_var_accessor_google$auth$_cloud_sdk$subprocess(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_CalledProcessError);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = PyExc_IOError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_4);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$_cloud_sdk$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_3dd4632ef2db5616475c8b8b6f903f20;
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_2 = var_caught_exc;
frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_UserAccessTokenError,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooo";
    goto try_except_handler_4;
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


exception_lineno = 153;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 153;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 136;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame)) {
        frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token,
    type_description_1,
    par_account,
    var_command,
    var_access_token,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token == cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token);
    cache_frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token = NULL;
}

assertFrameObject(frame_frame_google$auth$_cloud_sdk$$$function__5_get_auth_access_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_command);
CHECK_OBJECT(var_command);
Py_DECREF(var_command);
var_command = NULL;
CHECK_OBJECT(var_access_token);
CHECK_OBJECT(var_access_token);
Py_DECREF(var_access_token);
var_access_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_command);
var_command = NULL;
Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_account);
Py_DECREF(par_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__1_get_config_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_cloud_sdk$$$function__1_get_config_path,
        mod_consts.const_str_plain_get_config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b2734495cbbad3199e041f98737a193,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_cloud_sdk,
        mod_consts.const_str_digest_d5cc701b16513dd2970bfb46fe8e152d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path,
        mod_consts.const_str_plain_get_application_default_credentials_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c5c7dcbd39520f9b379f3bdb9548101e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_cloud_sdk,
        mod_consts.const_str_digest_cc446395b7f308f7404b54b2eb308ee8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr,
        mod_consts.const_str_plain__run_subprocess_ignore_stderr,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb23eb10dc8976eeefc80b47f4e354ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_cloud_sdk,
        mod_consts.const_str_digest_cab9d78c6034f74e1fb025b275fb0eba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__4_get_project_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_cloud_sdk$$$function__4_get_project_id,
        mod_consts.const_str_plain_get_project_id,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_df46d7cddb1c0e06a30ec094147a7a06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_cloud_sdk,
        mod_consts.const_str_digest_1e5b09a880dda1c936227fe1c2e09e32,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__5_get_auth_access_token(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$_cloud_sdk$$$function__5_get_auth_access_token,
        mod_consts.const_str_plain_get_auth_access_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_19a62a87b8f1c4692a7429db4317f620,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$_cloud_sdk,
        mod_consts.const_str_digest_f17d7122a4e5f3c648199fe51990b6d8,
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

static function_impl_code const function_table_google$auth$_cloud_sdk[] = {
impl_google$auth$_cloud_sdk$$$function__1_get_config_path,
impl_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path,
impl_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr,
impl_google$auth$_cloud_sdk$$$function__4_get_project_id,
impl_google$auth$_cloud_sdk$$$function__5_get_auth_access_token,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$_cloud_sdk);
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
        module_google$auth$_cloud_sdk,
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
        function_table_google$auth$_cloud_sdk,
        sizeof(function_table_google$auth$_cloud_sdk) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth._cloud_sdk";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$_cloud_sdk(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$_cloud_sdk");

    // Store the module for future use.
    module_google$auth$_cloud_sdk = module;

    moduledict_google$auth$_cloud_sdk = MODULE_DICT(module_google$auth$_cloud_sdk);

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
        PRINT_STRING("google$auth$_cloud_sdk: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$_cloud_sdk: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$_cloud_sdk: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth._cloud_sdk" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$_cloud_sdk\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$_cloud_sdk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$_cloud_sdk,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$_cloud_sdk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$_cloud_sdk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$_cloud_sdk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$_cloud_sdk);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$_cloud_sdk);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$_cloud_sdk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_4645795097a11f8398cea5c59e2b3580;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$_cloud_sdk = MAKE_MODULE_FRAME(code_objects_b385122fe0284933d4f98db94ac4c633, module_google$auth$_cloud_sdk);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$_cloud_sdk);
assert(Py_REFCNT(frame_frame_google$auth$_cloud_sdk) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$_cloud_sdk$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$_cloud_sdk$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$_cloud_sdk;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$_cloud_sdk->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$_cloud_sdk;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$_cloud_sdk->m_frame.f_lineno = 20;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$_cloud_sdk,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$_cloud_sdk;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_environment_vars_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$_cloud_sdk->m_frame.f_lineno = 21;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$_cloud_sdk,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_environment_vars);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$_cloud_sdk;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$_cloud_sdk->m_frame.f_lineno = 22;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$_cloud_sdk,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$_cloud_sdk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$_cloud_sdk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$_cloud_sdk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$_cloud_sdk);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_gcloud;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CONFIG_DIRECTORY, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_plain_APPDATA;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__WINDOWS_CONFIG_ROOT_ENV_VAR, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_digest_1003e933480009447ac330621f419597;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CREDENTIALS_FILENAME, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_gcloud;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_POSIX_COMMAND, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_digest_c7f6bf283253b0fd64a17f967935562b;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_WINDOWS_COMMAND, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_tuple_str_plain_config_str_plain_get_str_plain_project_tuple;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_CONFIG_GET_PROJECT_COMMAND, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_tuple_str_plain_auth_str_digest_2c5598b04e047a160c7503405f4d30c7_tuple;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__CLOUD_SDK_USER_ACCESS_TOKEN_COMMAND, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_b5cb39b7a5896ace433772a1e37d1b35;
UPDATE_STRING_DICT0(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOUD_SDK_CLIENT_ID, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__1_get_config_path(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_config_path, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__2_get_application_default_credentials_path(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_application_default_credentials_path, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__3__run_subprocess_ignore_stderr(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain__run_subprocess_ignore_stderr, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__4_get_project_id(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_project_id, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_21 = MAKE_FUNCTION_google$auth$_cloud_sdk$$$function__5_get_auth_access_token(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_access_token, tmp_assign_source_21);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$_cloud_sdk", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth._cloud_sdk" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$_cloud_sdk);
    return module_google$auth$_cloud_sdk;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$_cloud_sdk, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$_cloud_sdk", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

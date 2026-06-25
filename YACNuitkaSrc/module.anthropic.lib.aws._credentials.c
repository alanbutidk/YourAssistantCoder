/* Generated code for Python module 'anthropic$lib$aws$_credentials'
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



/* The "module_anthropic$lib$aws$_credentials" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$aws$_credentials;
PyDictObject *moduledict_anthropic$lib$aws$_credentials;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_aws_access_key;
PyObject *const_str_plain_aws_secret_key;
PyObject *const_str_chr_96;
PyObject *const_str_digest_5983bf124eb9426a4bb92c76acdf230c;
PyObject *const_str_digest_b98fcc9f96b78b74803596aefac8aa65;
PyObject *const_str_digest_4af2b1fb368c073cf2284d0386b2949a;
PyObject *const_str_plain_environ;
PyObject *const_str_digest_a0ce4b13c4a416f119cd2aa084f8cc78;
PyObject *const_str_plain__read_env;
PyObject *const_str_digest_0890d1ae948b1a661a406ddd4a2aa350;
PyObject *const_str_digest_99ef784dce79476b799747c654bb8dbe;
PyObject *const_tuple_str_plain_AWS_REGION_tuple;
PyObject *const_tuple_str_plain_AWS_DEFAULT_REGION_tuple;
PyObject *const_str_digest_85b71f6dc5c686d0c8836978e156267a;
PyObject *const_str_digest_e3dd3551d3e7f207cd2394b89feff7ca;
PyObject *const_tuple_str_plain_region_tuple;
PyObject *const_str_digest_8152b7d5d5b7010b05d7cdab082ca647;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_Sequence;
PyObject *const_dict_257b6eda97b90f7b13d07f7c57214045;
PyObject *const_str_plain_validate_credentials;
PyObject *const_dict_1bf4d44062df467a6d8b5463450393f0;
PyObject *const_dict_1167091713ccbb31477c62a8f9097a11;
PyObject *const_dict_0c503f5aff9dfe35e1aa7c5e784b833c;
PyObject *const_str_plain_resolve_auth_mode;
PyObject *const_dict_6966d0cb88ec484e589df5e5087f517f;
PyObject *const_str_plain_resolve_api_key;
PyObject *const_dict_80a02cd9d48fb4221846a37da9ebcc0e;
PyObject *const_str_plain_resolve_region;
PyObject *const_dict_90a31a63d7eaab01033e166f37a490f4;
PyObject *const_dict_b88f35ab0c7109d18bffa541ce0dbff3;
PyObject *const_str_plain_resolve_workspace_id;
PyObject *const_dict_4a19ee7b32b6adab7c672a77499e5453;
PyObject *const_dict_5f892abf931f3915bde00834993eddf3;
PyObject *const_str_plain_resolve_base_url;
PyObject *const_str_digest_ffb42dc92d265fe22fc6bb2e2415e000;
PyObject *const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca;
PyObject *const_tuple_str_plain_env_vars_str_plain_var_str_plain_value_tuple;
PyObject *const_tuple_b44d93faeef5278a6fad4277be18ba1d_tuple;
PyObject *const_tuple_2c18e77a2c9eab39665c8e3ae0e6a013_tuple;
PyObject *const_tuple_10eff549d877560cd4df91cc73ffd826_tuple;
PyObject *const_tuple_str_plain_aws_region_tuple;
PyObject *const_tuple_str_plain_workspace_id_str_plain_workspace_id_env_vars_tuple;
PyObject *const_tuple_5ef36a615d856686591937a487dfa063_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[47];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.aws._credentials"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_aws_access_key);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_aws_secret_key);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_96);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_5983bf124eb9426a4bb92c76acdf230c);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_b98fcc9f96b78b74803596aefac8aa65);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_4af2b1fb368c073cf2284d0386b2949a);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0ce4b13c4a416f119cd2aa084f8cc78);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_env);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_0890d1ae948b1a661a406ddd4a2aa350);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_99ef784dce79476b799747c654bb8dbe);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWS_REGION_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWS_DEFAULT_REGION_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_85b71f6dc5c686d0c8836978e156267a);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3dd3551d3e7f207cd2394b89feff7ca);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_region_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_8152b7d5d5b7010b05d7cdab082ca647);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_dict_257b6eda97b90f7b13d07f7c57214045);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_credentials);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_1bf4d44062df467a6d8b5463450393f0);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_1167091713ccbb31477c62a8f9097a11);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_0c503f5aff9dfe35e1aa7c5e784b833c);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_auth_mode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_6966d0cb88ec484e589df5e5087f517f);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_api_key);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_80a02cd9d48fb4221846a37da9ebcc0e);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_region);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_dict_90a31a63d7eaab01033e166f37a490f4);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_b88f35ab0c7109d18bffa541ce0dbff3);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_workspace_id);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_4a19ee7b32b6adab7c672a77499e5453);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_5f892abf931f3915bde00834993eddf3);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_base_url);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffb42dc92d265fe22fc6bb2e2415e000);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_env_vars_str_plain_var_str_plain_value_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_b44d93faeef5278a6fad4277be18ba1d_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_2c18e77a2c9eab39665c8e3ae0e6a013_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_10eff549d877560cd4df91cc73ffd826_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aws_region_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_workspace_id_str_plain_workspace_id_env_vars_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_5ef36a615d856686591937a487dfa063_tuple);
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
void checkModuleConstants_anthropic$lib$aws$_credentials(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_aws_access_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aws_access_key);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_aws_secret_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aws_secret_key);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_96));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_96);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_5983bf124eb9426a4bb92c76acdf230c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5983bf124eb9426a4bb92c76acdf230c);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_b98fcc9f96b78b74803596aefac8aa65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b98fcc9f96b78b74803596aefac8aa65);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_4af2b1fb368c073cf2284d0386b2949a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4af2b1fb368c073cf2284d0386b2949a);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0ce4b13c4a416f119cd2aa084f8cc78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0ce4b13c4a416f119cd2aa084f8cc78);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_env);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_0890d1ae948b1a661a406ddd4a2aa350));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0890d1ae948b1a661a406ddd4a2aa350);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_99ef784dce79476b799747c654bb8dbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99ef784dce79476b799747c654bb8dbe);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWS_REGION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AWS_REGION_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWS_DEFAULT_REGION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AWS_DEFAULT_REGION_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_85b71f6dc5c686d0c8836978e156267a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85b71f6dc5c686d0c8836978e156267a);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3dd3551d3e7f207cd2394b89feff7ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3dd3551d3e7f207cd2394b89feff7ca);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_region_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_region_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_8152b7d5d5b7010b05d7cdab082ca647));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8152b7d5d5b7010b05d7cdab082ca647);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_dict_257b6eda97b90f7b13d07f7c57214045));
CHECK_OBJECT_DEEP(mod_consts.const_dict_257b6eda97b90f7b13d07f7c57214045);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_credentials);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_1bf4d44062df467a6d8b5463450393f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1bf4d44062df467a6d8b5463450393f0);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_1167091713ccbb31477c62a8f9097a11));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1167091713ccbb31477c62a8f9097a11);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_0c503f5aff9dfe35e1aa7c5e784b833c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0c503f5aff9dfe35e1aa7c5e784b833c);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_auth_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_auth_mode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_6966d0cb88ec484e589df5e5087f517f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6966d0cb88ec484e589df5e5087f517f);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_api_key);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_80a02cd9d48fb4221846a37da9ebcc0e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_80a02cd9d48fb4221846a37da9ebcc0e);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_region);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_dict_90a31a63d7eaab01033e166f37a490f4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90a31a63d7eaab01033e166f37a490f4);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_b88f35ab0c7109d18bffa541ce0dbff3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b88f35ab0c7109d18bffa541ce0dbff3);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_workspace_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_workspace_id);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_4a19ee7b32b6adab7c672a77499e5453));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4a19ee7b32b6adab7c672a77499e5453);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_5f892abf931f3915bde00834993eddf3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f892abf931f3915bde00834993eddf3);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_base_url);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffb42dc92d265fe22fc6bb2e2415e000));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffb42dc92d265fe22fc6bb2e2415e000);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_env_vars_str_plain_var_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_env_vars_str_plain_var_str_plain_value_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_b44d93faeef5278a6fad4277be18ba1d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b44d93faeef5278a6fad4277be18ba1d_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_2c18e77a2c9eab39665c8e3ae0e6a013_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2c18e77a2c9eab39665c8e3ae0e6a013_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_10eff549d877560cd4df91cc73ffd826_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_10eff549d877560cd4df91cc73ffd826_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aws_region_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_aws_region_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_workspace_id_str_plain_workspace_id_env_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_workspace_id_str_plain_workspace_id_env_vars_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_5ef36a615d856686591937a487dfa063_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ef36a615d856686591937a487dfa063_tuple);
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
static PyObject *module_var_accessor_anthropic$lib$aws$_credentials$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$aws$_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$aws$_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$aws$_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$aws$_credentials$_read_env(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$aws$_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$aws$_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__read_env);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$aws$_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_env);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_env, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__read_env);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__read_env, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__read_env);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__read_env);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__read_env);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_983d4ce3ccf0b8329f7d5754b3873ed2;
static PyCodeObject *code_objects_f95fab6b1379f966b60619b54684b414;
static PyCodeObject *code_objects_dffa91f05a5efcbb6e89540dc1109954;
static PyCodeObject *code_objects_34100b535ee0b2579089dabc1b1bc61b;
static PyCodeObject *code_objects_000ba8928e37e3487ecf2065a56edf5d;
static PyCodeObject *code_objects_c9308dd859becd400adb0b7b7f16a7a7;
static PyCodeObject *code_objects_21968cf8b8face390aa1ad47545206de;
static PyCodeObject *code_objects_1905c71889b2642170e36b0bd68941f9;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ffb42dc92d265fe22fc6bb2e2415e000); CHECK_OBJECT(module_filename_obj);
code_objects_983d4ce3ccf0b8329f7d5754b3873ed2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca, mod_consts.const_str_digest_72dd1a7b22cf2f59d51283b3a46426ca, NULL, NULL, 0, 0, 0);
code_objects_f95fab6b1379f966b60619b54684b414 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__read_env, mod_consts.const_str_plain__read_env, mod_consts.const_tuple_str_plain_env_vars_str_plain_var_str_plain_value_tuple, NULL, 0, 0, 0);
code_objects_dffa91f05a5efcbb6e89540dc1109954 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_api_key, mod_consts.const_str_plain_resolve_api_key, mod_consts.const_tuple_b44d93faeef5278a6fad4277be18ba1d_tuple, NULL, 0, 3, 0);
code_objects_34100b535ee0b2579089dabc1b1bc61b = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_auth_mode, mod_consts.const_str_plain_resolve_auth_mode, mod_consts.const_tuple_2c18e77a2c9eab39665c8e3ae0e6a013_tuple, NULL, 0, 5, 0);
code_objects_000ba8928e37e3487ecf2065a56edf5d = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_base_url, mod_consts.const_str_plain_resolve_base_url, mod_consts.const_tuple_10eff549d877560cd4df91cc73ffd826_tuple, NULL, 1, 3, 0);
code_objects_c9308dd859becd400adb0b7b7f16a7a7 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_region, mod_consts.const_str_plain_resolve_region, mod_consts.const_tuple_str_plain_aws_region_tuple, NULL, 1, 0, 0);
code_objects_21968cf8b8face390aa1ad47545206de = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_workspace_id, mod_consts.const_str_plain_resolve_workspace_id, mod_consts.const_tuple_str_plain_workspace_id_str_plain_workspace_id_env_vars_tuple, NULL, 1, 1, 0);
code_objects_1905c71889b2642170e36b0bd68941f9 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_credentials, mod_consts.const_str_plain_validate_credentials, mod_consts.const_tuple_5ef36a615d856686591937a487dfa063_tuple, NULL, 0, 2, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__1_validate_credentials(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__2__read_env(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__5_resolve_region(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$aws$_credentials$$$function__1_validate_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_aws_access_key = python_pars[0];
PyObject *par_aws_secret_key = python_pars[1];
PyObject *var_provided = NULL;
PyObject *var_missing = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_1905c71889b2642170e36b0bd68941f9, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
nuitka_bool tmp_tmp_condition_result_1_nbool_1;
CHECK_OBJECT(par_aws_access_key);
tmp_cmp_expr_left_2 = par_aws_access_key;
tmp_cmp_expr_right_2 = Py_None;
tmp_cmp_expr_left_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(par_aws_secret_key);
tmp_cmp_expr_left_3 = par_aws_secret_key;
tmp_cmp_expr_right_3 = Py_None;
tmp_cmp_expr_right_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
tmp_tmp_condition_result_1_nbool_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_tmp_condition_result_1_nbool_1 == NUITKA_BOOL_EXCEPTION));
tmp_condition_result_1 = tmp_tmp_condition_result_1_nbool_1 == NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_aws_access_key);
tmp_cmp_expr_left_4 = par_aws_access_key;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_aws_access_key;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_aws_secret_key;
condexpr_end_1:;
assert(var_provided == NULL);
Py_INCREF(tmp_assign_source_1);
var_provided = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_aws_access_key);
tmp_cmp_expr_left_5 = par_aws_access_key;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_2 = mod_consts.const_str_plain_aws_secret_key;
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_2 = mod_consts.const_str_plain_aws_access_key;
condexpr_end_2:;
assert(var_missing == NULL);
Py_INCREF(tmp_assign_source_2);
var_missing = tmp_assign_source_2;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_96;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_provided);
tmp_tuple_element_1 = var_provided;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5983bf124eb9426a4bb92c76acdf230c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_missing);
tmp_tuple_element_1 = var_missing;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b98fcc9f96b78b74803596aefac8aa65;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials->m_frame.f_lineno = 16;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 16;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials,
    type_description_1,
    par_aws_access_key,
    par_aws_secret_key,
    var_provided,
    var_missing
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__1_validate_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_provided);
CHECK_OBJECT(var_provided);
Py_DECREF(var_provided);
var_provided = NULL;
CHECK_OBJECT(var_missing);
CHECK_OBJECT(var_missing);
Py_DECREF(var_missing);
var_missing = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__2__read_env(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_env_vars = python_pars[0];
PyObject *var_var = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env = MAKE_FUNCTION_FRAME(tstate, code_objects_f95fab6b1379f966b60619b54684b414, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_env_vars);
tmp_iter_arg_1 = par_env_vars;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
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
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 24;
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
    PyObject *old = var_var;
    var_var = tmp_assign_source_3;
    Py_INCREF(var_var);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_1 = var_var;
frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env->m_frame.f_lineno = 25;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env,
    type_description_1,
    par_env_vars,
    var_var,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__2__read_env);

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
Py_XDECREF(var_var);
var_var = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_var);
var_var = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_env_vars);
Py_DECREF(par_env_vars);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_env_vars);
Py_DECREF(par_env_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_key = python_pars[0];
PyObject *par_aws_access_key = python_pars[1];
PyObject *par_aws_secret_key = python_pars[2];
PyObject *par_aws_profile = python_pars[3];
PyObject *par_api_key_env_vars = python_pars[4];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_1 = par_api_key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_aws_access_key);
tmp_cmp_expr_left_2 = par_aws_access_key;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_aws_secret_key);
tmp_cmp_expr_left_3 = par_aws_secret_key;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_aws_profile);
tmp_cmp_expr_left_4 = par_aws_profile;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_3:;
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_34100b535ee0b2579089dabc1b1bc61b, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode) == 2);

// Framed code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_anthropic$lib$aws$_credentials$_read_env(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_env);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key_env_vars);
tmp_direct_call_arg2_1 = par_api_key_env_vars;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_cmp_expr_left_5 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode,
    type_description_1,
    par_api_key,
    par_aws_access_key,
    par_aws_secret_key,
    par_aws_profile,
    par_api_key_env_vars
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_profile);
Py_DECREF(par_aws_profile);
CHECK_OBJECT(par_api_key_env_vars);
Py_DECREF(par_api_key_env_vars);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_profile);
Py_DECREF(par_aws_profile);
CHECK_OBJECT(par_api_key_env_vars);
Py_DECREF(par_api_key_env_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_key = python_pars[0];
PyObject *par_use_sigv4 = python_pars[1];
PyObject *par_api_key_env_vars = python_pars[2];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_1 = par_api_key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_api_key);
tmp_return_value = par_api_key;
Py_INCREF(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key = MAKE_FUNCTION_FRAME(tstate, code_objects_dffa91f05a5efcbb6e89540dc1109954, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_use_sigv4);
tmp_operand_value_1 = par_use_sigv4;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_anthropic$lib$aws$_credentials$_read_env(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_env);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key_env_vars);
tmp_direct_call_arg2_1 = par_api_key_env_vars;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key,
    type_description_1,
    par_api_key,
    par_use_sigv4,
    par_api_key_env_vars
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key);

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
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_use_sigv4);
Py_DECREF(par_use_sigv4);
CHECK_OBJECT(par_api_key_env_vars);
Py_DECREF(par_api_key_env_vars);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_use_sigv4);
Py_DECREF(par_use_sigv4);
CHECK_OBJECT(par_api_key_env_vars);
Py_DECREF(par_api_key_env_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__5_resolve_region(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_aws_region = python_pars[0];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_aws_region);
tmp_cmp_expr_left_1 = par_aws_region;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_aws_region);
tmp_return_value = par_aws_region;
Py_INCREF(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region = MAKE_FUNCTION_FRAME(tstate, code_objects_c9308dd859becd400adb0b7b7f16a7a7, module_anthropic$lib$aws$_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region->m_frame.f_lineno = 90;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AWS_REGION_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 90;
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
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region->m_frame.f_lineno = 90;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_AWS_DEFAULT_REGION_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region,
    type_description_1,
    par_aws_region
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__5_resolve_region);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_aws_region);
Py_DECREF(par_aws_region);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_aws_region);
Py_DECREF(par_aws_region);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_workspace_id = python_pars[0];
PyObject *par_workspace_id_env_vars = python_pars[1];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_workspace_id);
tmp_cmp_expr_left_1 = par_workspace_id;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_workspace_id);
tmp_return_value = par_workspace_id;
Py_INCREF(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id = MAKE_FUNCTION_FRAME(tstate, code_objects_21968cf8b8face390aa1ad47545206de, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_anthropic$lib$aws$_credentials$_read_env(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_env);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_workspace_id_env_vars);
tmp_direct_call_arg2_1 = par_workspace_id_env_vars;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id,
    type_description_1,
    par_workspace_id,
    par_workspace_id_env_vars
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_workspace_id);
Py_DECREF(par_workspace_id);
CHECK_OBJECT(par_workspace_id_env_vars);
Py_DECREF(par_workspace_id_env_vars);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_workspace_id);
Py_DECREF(par_workspace_id);
CHECK_OBJECT(par_workspace_id_env_vars);
Py_DECREF(par_workspace_id_env_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_base_url = python_pars[0];
PyObject *par_region = python_pars[1];
PyObject *par_base_url_env_vars = python_pars[2];
PyObject *par_url_template = python_pars[3];
PyObject *var_env_url = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_1 = par_base_url;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_base_url);
tmp_return_value = par_base_url;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url = MAKE_FUNCTION_FRAME(tstate, code_objects_000ba8928e37e3487ecf2065a56edf5d, module_anthropic$lib$aws$_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url->m_type_description == NULL);
frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url = cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_anthropic$lib$aws$_credentials$_read_env(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__read_env);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base_url_env_vars);
tmp_direct_call_arg2_1 = par_base_url_env_vars;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_env_url == NULL);
var_env_url = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_env_url);
tmp_cmp_expr_left_2 = var_env_url;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_env_url);
tmp_return_value = var_env_url;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_region);
tmp_cmp_expr_left_3 = par_region;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_url_template);
tmp_expression_value_1 = par_url_template;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_region);
tmp_kw_call_value_0_1 = par_region;
frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url->m_frame.f_lineno = 127;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_region_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url,
    type_description_1,
    par_base_url,
    par_region,
    par_base_url_env_vars,
    par_url_template,
    var_env_url
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url == cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url);
    cache_frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url);

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
Py_XDECREF(var_env_url);
var_env_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_env_url);
var_env_url = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_base_url_env_vars);
Py_DECREF(par_base_url_env_vars);
CHECK_OBJECT(par_url_template);
Py_DECREF(par_url_template);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_base_url_env_vars);
Py_DECREF(par_base_url_env_vars);
CHECK_OBJECT(par_url_template);
Py_DECREF(par_url_template);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__1_validate_credentials(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__1_validate_credentials,
        mod_consts.const_str_plain_validate_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1905c71889b2642170e36b0bd68941f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_4af2b1fb368c073cf2284d0386b2949a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__2__read_env(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__2__read_env,
        mod_consts.const_str_plain__read_env,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f95fab6b1379f966b60619b54684b414,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_a0ce4b13c4a416f119cd2aa084f8cc78,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode,
        mod_consts.const_str_plain_resolve_auth_mode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_34100b535ee0b2579089dabc1b1bc61b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_0890d1ae948b1a661a406ddd4a2aa350,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key,
        mod_consts.const_str_plain_resolve_api_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dffa91f05a5efcbb6e89540dc1109954,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_99ef784dce79476b799747c654bb8dbe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__5_resolve_region(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__5_resolve_region,
        mod_consts.const_str_plain_resolve_region,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c9308dd859becd400adb0b7b7f16a7a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_85b71f6dc5c686d0c8836978e156267a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id,
        mod_consts.const_str_plain_resolve_workspace_id,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_21968cf8b8face390aa1ad47545206de,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_e3dd3551d3e7f207cd2394b89feff7ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url,
        mod_consts.const_str_plain_resolve_base_url,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_000ba8928e37e3487ecf2065a56edf5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$aws$_credentials,
        mod_consts.const_str_digest_8152b7d5d5b7010b05d7cdab082ca647,
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

static function_impl_code const function_table_anthropic$lib$aws$_credentials[] = {
impl_anthropic$lib$aws$_credentials$$$function__1_validate_credentials,
impl_anthropic$lib$aws$_credentials$$$function__2__read_env,
impl_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode,
impl_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key,
impl_anthropic$lib$aws$_credentials$$$function__5_resolve_region,
impl_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id,
impl_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$aws$_credentials);
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
        module_anthropic$lib$aws$_credentials,
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
        function_table_anthropic$lib$aws$_credentials,
        sizeof(function_table_anthropic$lib$aws$_credentials) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.aws._credentials";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$aws$_credentials(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$aws$_credentials");

    // Store the module for future use.
    module_anthropic$lib$aws$_credentials = module;

    moduledict_anthropic$lib$aws$_credentials = MODULE_DICT(module_anthropic$lib$aws$_credentials);

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
        PRINT_STRING("anthropic$lib$aws$_credentials: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$aws$_credentials: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$aws$_credentials: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.aws._credentials" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$aws$_credentials\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$aws$_credentials,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$aws$_credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$aws$_credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$aws$_credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$aws$_credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$aws$_credentials);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$aws$_credentials);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_anthropic$lib$aws$_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$aws$_credentials = MAKE_MODULE_FRAME(code_objects_983d4ce3ccf0b8329f7d5754b3873ed2, module_anthropic$lib$aws$_credentials);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$aws$_credentials);
assert(Py_REFCNT(frame_frame_anthropic$lib$aws$_credentials) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$aws$_credentials$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$aws$_credentials$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$aws$_credentials,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$aws$_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$aws$_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$aws$_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$aws$_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_257b6eda97b90f7b13d07f7c57214045);

tmp_assign_source_7 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__1_validate_credentials(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_credentials, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_1bf4d44062df467a6d8b5463450393f0);

tmp_assign_source_8 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__2__read_env(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__read_env, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_3;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_1167091713ccbb31477c62a8f9097a11);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0c503f5aff9dfe35e1aa7c5e784b833c);

tmp_assign_source_9 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__3_resolve_auth_mode(tstate, tmp_kw_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_auth_mode, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_4;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_1167091713ccbb31477c62a8f9097a11);
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6966d0cb88ec484e589df5e5087f517f);

tmp_assign_source_10 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__4_resolve_api_key(tstate, tmp_kw_defaults_2, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_api_key, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_80a02cd9d48fb4221846a37da9ebcc0e);

tmp_assign_source_11 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__5_resolve_region(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_region, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_6;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_90a31a63d7eaab01033e166f37a490f4);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_b88f35ab0c7109d18bffa541ce0dbff3);

tmp_assign_source_12 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__6_resolve_workspace_id(tstate, tmp_kw_defaults_3, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_workspace_id, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_7;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_4a19ee7b32b6adab7c672a77499e5453);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_5f892abf931f3915bde00834993eddf3);

tmp_assign_source_13 = MAKE_FUNCTION_anthropic$lib$aws$_credentials$$$function__7_resolve_base_url(tstate, tmp_kw_defaults_4, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_base_url, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$aws$_credentials", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.aws._credentials" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$aws$_credentials);
    return module_anthropic$lib$aws$_credentials;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$aws$_credentials, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$aws$_credentials", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

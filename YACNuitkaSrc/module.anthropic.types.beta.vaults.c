/* Generated code for Python module 'anthropic$types$beta$vaults'
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



/* The "module_anthropic$types$beta$vaults" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$vaults;
PyDictObject *moduledict_anthropic$types$beta$vaults;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple;
PyObject *const_str_digest_b7b6a6b4b5a8a8754839f9eddc63ee69;
PyObject *const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple;
PyObject *const_str_digest_4ec67dc496cfa7eeb711e4f1bb6d01c3;
PyObject *const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple;
PyObject *const_str_plain_vaults;
PyObject *const_tuple_e342a57c545ae939acedc8fde2fd675c_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_credential_list_params;
PyObject *const_tuple_str_plain_CredentialListParams_tuple;
PyObject *const_str_plain_CredentialListParams;
PyObject *const_str_plain_credential_create_params;
PyObject *const_tuple_str_plain_CredentialCreateParams_tuple;
PyObject *const_str_plain_CredentialCreateParams;
PyObject *const_str_plain_credential_update_params;
PyObject *const_tuple_str_plain_CredentialUpdateParams_tuple;
PyObject *const_str_plain_CredentialUpdateParams;
PyObject *const_str_plain_beta_managed_agents_mcp_probe;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPProbe_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPProbe;
PyObject *const_str_plain_beta_managed_agents_credential;
PyObject *const_tuple_str_plain_BetaManagedAgentsCredential_tuple;
PyObject *const_str_plain_BetaManagedAgentsCredential;
PyObject *const_str_plain_beta_managed_agents_refresh_object;
PyObject *const_tuple_str_plain_BetaManagedAgentsRefreshObject_tuple;
PyObject *const_str_plain_BetaManagedAgentsRefreshObject;
PyObject *const_str_plain_beta_managed_agents_deleted_credential;
PyObject *const_tuple_str_plain_BetaManagedAgentsDeletedCredential_tuple;
PyObject *const_str_plain_BetaManagedAgentsDeletedCredential;
PyObject *const_str_digest_e12baf4ed2f3fd4d3ddf5fb2266a5bc5;
PyObject *const_tuple_str_plain_BetaManagedAgentsCredentialValidation_tuple;
PyObject *const_str_plain_BetaManagedAgentsCredentialValidation;
PyObject *const_str_digest_623b1fc78f0aa5a323f424f371a58986;
PyObject *const_tuple_str_plain_BetaManagedAgentsRefreshHTTPResponse_tuple;
PyObject *const_str_plain_BetaManagedAgentsRefreshHTTPResponse;
PyObject *const_str_digest_f5ae95e264bb5b8a5dfad7aabbd278e7;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPOAuthAuthResponse_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse;
PyObject *const_str_digest_b54faf197cf42e1d1ee0c8dd924dda13;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPOAuthCreateParams_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPOAuthCreateParams;
PyObject *const_str_digest_4472b2627abdd053d283be7d2ecf8c0c;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPOAuthUpdateParams_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams;
PyObject *const_str_digest_8edea5e30aed3dba2b28f3fa523a644e;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshParams_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams;
PyObject *const_str_digest_2e518076ed98ba740f36f449006b693e;
PyObject *const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse_tuple;
PyObject *const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse;
PyObject *const_str_digest_521ed24cb54b79f3a41e2f0dc926bc1f;
PyObject *const_tuple_str_digest_fecae06a0f32534a95315fb68fd5e784_tuple;
PyObject *const_str_digest_fecae06a0f32534a95315fb68fd5e784;
PyObject *const_str_digest_aa4d97cbbfe640e437ec029054698c43;
PyObject *const_tuple_str_digest_9745d584618b8dda77c5c3bdf08fae81_tuple;
PyObject *const_str_digest_9745d584618b8dda77c5c3bdf08fae81;
PyObject *const_str_digest_24b55d9667a5299e1c4217ff52807699;
PyObject *const_tuple_str_digest_8750672b1561328fccfd86fa3ea5a453_tuple;
PyObject *const_str_digest_8750672b1561328fccfd86fa3ea5a453;
PyObject *const_str_digest_061186e9964931d70c693423afc911d1;
PyObject *const_tuple_str_digest_10d154575fe726502dbe3c1cf7676a3e_tuple;
PyObject *const_str_digest_10d154575fe726502dbe3c1cf7676a3e;
PyObject *const_str_digest_cc9cb968d2cfddab676928b44f5c90fb;
PyObject *const_tuple_str_digest_fa0781e1b226b50eb128f18647824dc2_tuple;
PyObject *const_str_digest_fa0781e1b226b50eb128f18647824dc2;
PyObject *const_str_digest_f78d402e07b16695701fd48a949964eb;
PyObject *const_tuple_str_digest_ceb76b2b82d8602c6db652d8f3b9beef_tuple;
PyObject *const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef;
PyObject *const_str_digest_9e056a80f0e22d580b48dff71f7b0e5b;
PyObject *const_tuple_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4_tuple;
PyObject *const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4;
PyObject *const_str_digest_08ffc9695a600846fbd0b2a20edc5e33;
PyObject *const_tuple_str_digest_6e90cce95d664774cf3383c88397db88_tuple;
PyObject *const_str_digest_6e90cce95d664774cf3383c88397db88;
PyObject *const_str_digest_4ab9c2c02e4e7933a96d9452625ea473;
PyObject *const_tuple_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a_tuple;
PyObject *const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a;
PyObject *const_str_digest_945e8f4bec5704176916b8021ab9b623;
PyObject *const_tuple_str_digest_a3c49bb4d171878b3d1c3f219674e1d6_tuple;
PyObject *const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6;
PyObject *const_str_digest_ab2a71322948f8f3b0b4fb8b84eeaa62;
PyObject *const_tuple_str_digest_888bee3f566fd49f93a3798f5749073d_tuple;
PyObject *const_str_digest_888bee3f566fd49f93a3798f5749073d;
PyObject *const_str_digest_58f486433d8ae9366adef165dd02c44d;
PyObject *const_tuple_str_digest_422a5170556f5da12d754ab25a268fd1_tuple;
PyObject *const_str_digest_422a5170556f5da12d754ab25a268fd1;
PyObject *const_str_digest_aecf2723345557bb0f9b642542e808cb;
PyObject *const_tuple_str_digest_f9908c480a136575c8560dd31edeb348_tuple;
PyObject *const_str_digest_f9908c480a136575c8560dd31edeb348;
PyObject *const_str_digest_30d554496adf4f162666437e6488a749;
PyObject *const_str_digest_edc991d4755dbb1102017908732196d2;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[96];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.vaults"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7b6a6b4b5a8a8754839f9eddc63ee69);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ec67dc496cfa7eeb711e4f1bb6d01c3);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_vaults);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_e342a57c545ae939acedc8fde2fd675c_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_list_params);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialListParams_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialListParams);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_create_params);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialCreateParams_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialCreateParams);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_update_params);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialUpdateParams_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialUpdateParams);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_mcp_probe);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPProbe_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPProbe);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_credential);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsCredential_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsCredential);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_refresh_object);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshObject_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsRefreshObject);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_deleted_credential);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedCredential_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_e12baf4ed2f3fd4d3ddf5fb2266a5bc5);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsCredentialValidation_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_623b1fc78f0aa5a323f424f371a58986);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshHTTPResponse_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5ae95e264bb5b8a5dfad7aabbd278e7);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthAuthResponse_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_b54faf197cf42e1d1ee0c8dd924dda13);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthCreateParams_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_4472b2627abdd053d283be7d2ecf8c0c);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthUpdateParams_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_8edea5e30aed3dba2b28f3fa523a644e);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshParams_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e518076ed98ba740f36f449006b693e);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_521ed24cb54b79f3a41e2f0dc926bc1f);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fecae06a0f32534a95315fb68fd5e784_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa4d97cbbfe640e437ec029054698c43);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9745d584618b8dda77c5c3bdf08fae81_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_24b55d9667a5299e1c4217ff52807699);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8750672b1561328fccfd86fa3ea5a453_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_061186e9964931d70c693423afc911d1);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_10d154575fe726502dbe3c1cf7676a3e_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc9cb968d2cfddab676928b44f5c90fb);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fa0781e1b226b50eb128f18647824dc2_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_f78d402e07b16695701fd48a949964eb);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ceb76b2b82d8602c6db652d8f3b9beef_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e056a80f0e22d580b48dff71f7b0e5b);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_08ffc9695a600846fbd0b2a20edc5e33);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6e90cce95d664774cf3383c88397db88_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab9c2c02e4e7933a96d9452625ea473);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_945e8f4bec5704176916b8021ab9b623);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a3c49bb4d171878b3d1c3f219674e1d6_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab2a71322948f8f3b0b4fb8b84eeaa62);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_888bee3f566fd49f93a3798f5749073d_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_58f486433d8ae9366adef165dd02c44d);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_422a5170556f5da12d754ab25a268fd1_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_aecf2723345557bb0f9b642542e808cb);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f9908c480a136575c8560dd31edeb348_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_30d554496adf4f162666437e6488a749);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_edc991d4755dbb1102017908732196d2);
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
void checkModuleConstants_anthropic$types$beta$vaults(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7b6a6b4b5a8a8754839f9eddc63ee69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7b6a6b4b5a8a8754839f9eddc63ee69);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ec67dc496cfa7eeb711e4f1bb6d01c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ec67dc496cfa7eeb711e4f1bb6d01c3);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_vaults));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vaults);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_e342a57c545ae939acedc8fde2fd675c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e342a57c545ae939acedc8fde2fd675c_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_list_params);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CredentialListParams_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialListParams);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_create_params);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CredentialCreateParams_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialCreateParams);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_update_params);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CredentialUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CredentialUpdateParams_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialUpdateParams);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_mcp_probe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_mcp_probe);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPProbe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPProbe_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPProbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPProbe);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_credential);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsCredential_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsCredential_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsCredential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsCredential);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_refresh_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_refresh_object);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshObject_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsRefreshObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsRefreshObject);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_deleted_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_deleted_credential);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedCredential_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedCredential_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_e12baf4ed2f3fd4d3ddf5fb2266a5bc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e12baf4ed2f3fd4d3ddf5fb2266a5bc5);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsCredentialValidation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsCredentialValidation_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_623b1fc78f0aa5a323f424f371a58986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_623b1fc78f0aa5a323f424f371a58986);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshHTTPResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshHTTPResponse_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5ae95e264bb5b8a5dfad7aabbd278e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5ae95e264bb5b8a5dfad7aabbd278e7);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthAuthResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthAuthResponse_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_b54faf197cf42e1d1ee0c8dd924dda13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b54faf197cf42e1d1ee0c8dd924dda13);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthCreateParams_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_4472b2627abdd053d283be7d2ecf8c0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4472b2627abdd053d283be7d2ecf8c0c);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthUpdateParams_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_8edea5e30aed3dba2b28f3fa523a644e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8edea5e30aed3dba2b28f3fa523a644e);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshParams_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e518076ed98ba740f36f449006b693e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e518076ed98ba740f36f449006b693e);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_521ed24cb54b79f3a41e2f0dc926bc1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_521ed24cb54b79f3a41e2f0dc926bc1f);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fecae06a0f32534a95315fb68fd5e784_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fecae06a0f32534a95315fb68fd5e784_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa4d97cbbfe640e437ec029054698c43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa4d97cbbfe640e437ec029054698c43);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9745d584618b8dda77c5c3bdf08fae81_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9745d584618b8dda77c5c3bdf08fae81_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_24b55d9667a5299e1c4217ff52807699));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24b55d9667a5299e1c4217ff52807699);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8750672b1561328fccfd86fa3ea5a453_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8750672b1561328fccfd86fa3ea5a453_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_061186e9964931d70c693423afc911d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_061186e9964931d70c693423afc911d1);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_10d154575fe726502dbe3c1cf7676a3e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_10d154575fe726502dbe3c1cf7676a3e_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc9cb968d2cfddab676928b44f5c90fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc9cb968d2cfddab676928b44f5c90fb);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fa0781e1b226b50eb128f18647824dc2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fa0781e1b226b50eb128f18647824dc2_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_f78d402e07b16695701fd48a949964eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f78d402e07b16695701fd48a949964eb);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ceb76b2b82d8602c6db652d8f3b9beef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ceb76b2b82d8602c6db652d8f3b9beef_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e056a80f0e22d580b48dff71f7b0e5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e056a80f0e22d580b48dff71f7b0e5b);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_08ffc9695a600846fbd0b2a20edc5e33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08ffc9695a600846fbd0b2a20edc5e33);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6e90cce95d664774cf3383c88397db88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6e90cce95d664774cf3383c88397db88_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab9c2c02e4e7933a96d9452625ea473));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ab9c2c02e4e7933a96d9452625ea473);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_945e8f4bec5704176916b8021ab9b623));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_945e8f4bec5704176916b8021ab9b623);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a3c49bb4d171878b3d1c3f219674e1d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a3c49bb4d171878b3d1c3f219674e1d6_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab2a71322948f8f3b0b4fb8b84eeaa62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab2a71322948f8f3b0b4fb8b84eeaa62);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_888bee3f566fd49f93a3798f5749073d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_888bee3f566fd49f93a3798f5749073d_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_58f486433d8ae9366adef165dd02c44d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58f486433d8ae9366adef165dd02c44d);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_422a5170556f5da12d754ab25a268fd1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_422a5170556f5da12d754ab25a268fd1_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_aecf2723345557bb0f9b642542e808cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aecf2723345557bb0f9b642542e808cb);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f9908c480a136575c8560dd31edeb348_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f9908c480a136575c8560dd31edeb348_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_30d554496adf4f162666437e6488a749));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30d554496adf4f162666437e6488a749);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_edc991d4755dbb1102017908732196d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edc991d4755dbb1102017908732196d2);
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
static PyObject *module_var_accessor_anthropic$types$beta$vaults$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$vaults->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$vaults->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$vaults->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$vaults$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$vaults->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$vaults->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$vaults->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_76346c24d68edb70f2a00a2fab8bf3a2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_30d554496adf4f162666437e6488a749); CHECK_OBJECT(module_filename_obj);
code_objects_76346c24d68edb70f2a00a2fab8bf3a2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_edc991d4755dbb1102017908732196d2, mod_consts.const_str_digest_edc991d4755dbb1102017908732196d2, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_anthropic$types$beta$vaults[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$vaults);
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
        module_anthropic$types$beta$vaults,
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
        function_table_anthropic$types$beta$vaults,
        sizeof(function_table_anthropic$types$beta$vaults) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.vaults";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$vaults(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$vaults");

    // Store the module for future use.
    module_anthropic$types$beta$vaults = module;

    moduledict_anthropic$types$beta$vaults = MODULE_DICT(module_anthropic$types$beta$vaults);

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
        PRINT_STRING("anthropic$types$beta$vaults: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$vaults: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$vaults: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.vaults" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$vaults\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$vaults,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$vaults,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$vaults,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$vaults,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$vaults,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$vaults);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$vaults);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$vaults;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$vaults = MAKE_MODULE_FRAME(code_objects_76346c24d68edb70f2a00a2fab8bf3a2, module_anthropic$types$beta$vaults);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$vaults);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$vaults) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_b7b6a6b4b5a8a8754839f9eddc63ee69;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_5 = NULL;
    }
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_4ec67dc496cfa7eeb711e4f1bb6d01c3;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_6 = NULL;
    }
}
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_7 = NULL;
    }
}
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain_vaults;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_8 = NULL;
    }
}
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_e342a57c545ae939acedc8fde2fd675c_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$vaults$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$vaults$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_anthropic$types$beta$vaults$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_anthropic$types$beta$vaults$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_credential_list_params;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_CredentialListParams_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_CredentialListParams,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_CredentialListParams);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialListParams, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_credential_create_params;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_CredentialCreateParams_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_CredentialCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_CredentialCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialCreateParams, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_credential_update_params;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_CredentialUpdateParams_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_CredentialUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_CredentialUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialUpdateParams, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_beta_managed_agents_mcp_probe;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPProbe_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPProbe,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_BetaManagedAgentsMCPProbe);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPProbe, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_managed_agents_credential;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaManagedAgentsCredential_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 9;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsCredential,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BetaManagedAgentsCredential);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsCredential, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_managed_agents_refresh_object;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshObject_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsRefreshObject,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BetaManagedAgentsRefreshObject);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsRefreshObject, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_managed_agents_deleted_credential;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedCredential_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsDeletedCredential, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_e12baf4ed2f3fd4d3ddf5fb2266a5bc5;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaManagedAgentsCredentialValidation_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 14;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsCredentialValidation, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_623b1fc78f0aa5a323f424f371a58986;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaManagedAgentsRefreshHTTPResponse_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 17;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsRefreshHTTPResponse, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_f5ae95e264bb5b8a5dfad7aabbd278e7;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthAuthResponse_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 20;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthAuthResponse, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_b54faf197cf42e1d1ee0c8dd924dda13;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthCreateParams_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 23;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthCreateParams, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_4472b2627abdd053d283be7d2ecf8c0c;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthUpdateParams_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 26;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthUpdateParams, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_8edea5e30aed3dba2b28f3fa523a644e;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshParams_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 29;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshParams, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_2e518076ed98ba740f36f449006b693e;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 32;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMCPOAuthRefreshResponse, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_521ed24cb54b79f3a41e2f0dc926bc1f;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_digest_fecae06a0f32534a95315fb68fd5e784_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 35;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_fecae06a0f32534a95315fb68fd5e784, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_aa4d97cbbfe640e437ec029054698c43;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_digest_9745d584618b8dda77c5c3bdf08fae81_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 38;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_9745d584618b8dda77c5c3bdf08fae81, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_24b55d9667a5299e1c4217ff52807699;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_digest_8750672b1561328fccfd86fa3ea5a453_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 41;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_8750672b1561328fccfd86fa3ea5a453, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_061186e9964931d70c693423afc911d1;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_digest_10d154575fe726502dbe3c1cf7676a3e_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 44;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_10d154575fe726502dbe3c1cf7676a3e, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_cc9cb968d2cfddab676928b44f5c90fb;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_digest_fa0781e1b226b50eb128f18647824dc2_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 47;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_fa0781e1b226b50eb128f18647824dc2, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_digest_f78d402e07b16695701fd48a949964eb;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_digest_ceb76b2b82d8602c6db652d8f3b9beef_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 50;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_ceb76b2b82d8602c6db652d8f3b9beef, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_digest_9e056a80f0e22d580b48dff71f7b0e5b;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 53;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_095a68626bcd8dc3f3ddd718e9b22ea4, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_digest_08ffc9695a600846fbd0b2a20edc5e33;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_digest_6e90cce95d664774cf3383c88397db88_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 56;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_6e90cce95d664774cf3383c88397db88, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_digest_4ab9c2c02e4e7933a96d9452625ea473;
tmp_globals_arg_value_23 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 59;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_e49c9712a12c30e16d2b66c79e4e0b4a, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_digest_945e8f4bec5704176916b8021ab9b623;
tmp_globals_arg_value_24 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_digest_a3c49bb4d171878b3d1c3f219674e1d6_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 62;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_a3c49bb4d171878b3d1c3f219674e1d6, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_digest_ab2a71322948f8f3b0b4fb8b84eeaa62;
tmp_globals_arg_value_25 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_digest_888bee3f566fd49f93a3798f5749073d_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 65;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_888bee3f566fd49f93a3798f5749073d, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_digest_58f486433d8ae9366adef165dd02c44d;
tmp_globals_arg_value_26 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_digest_422a5170556f5da12d754ab25a268fd1_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 68;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_422a5170556f5da12d754ab25a268fd1, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_digest_aecf2723345557bb0f9b642542e808cb;
tmp_globals_arg_value_27 = (PyObject *)moduledict_anthropic$types$beta$vaults;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_digest_f9908c480a136575c8560dd31edeb348_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_anthropic$types$beta$vaults->m_frame.f_lineno = 71;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_anthropic$types$beta$vaults,
        mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)mod_consts.const_str_digest_f9908c480a136575c8560dd31edeb348, tmp_assign_source_32);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$vaults, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$vaults->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$vaults, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$vaults);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$vaults", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.vaults" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$vaults);
    return module_anthropic$types$beta$vaults;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$vaults, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$vaults", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

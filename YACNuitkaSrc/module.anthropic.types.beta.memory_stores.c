/* Generated code for Python module 'anthropic$types$beta$memory_stores'
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



/* The "module_anthropic$types$beta$memory_stores" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$memory_stores;
PyDictObject *moduledict_anthropic$types$beta$memory_stores;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple;
PyObject *const_str_digest_f9589d823b306e8715cc63b0614e3670;
PyObject *const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple;
PyObject *const_str_digest_9009b7bb4c7326dcbcb0f361e2933d4e;
PyObject *const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple;
PyObject *const_str_plain_memory_stores;
PyObject *const_tuple_a6d0a8b49559db86e66440c290982c78_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_memory_list_params;
PyObject *const_tuple_str_plain_MemoryListParams_tuple;
PyObject *const_str_plain_MemoryListParams;
PyObject *const_str_plain_memory_create_params;
PyObject *const_tuple_str_plain_MemoryCreateParams_tuple;
PyObject *const_str_plain_MemoryCreateParams;
PyObject *const_str_plain_memory_delete_params;
PyObject *const_tuple_str_plain_MemoryDeleteParams_tuple;
PyObject *const_str_plain_MemoryDeleteParams;
PyObject *const_str_plain_memory_update_params;
PyObject *const_tuple_str_plain_MemoryUpdateParams_tuple;
PyObject *const_str_plain_MemoryUpdateParams;
PyObject *const_str_plain_memory_retrieve_params;
PyObject *const_tuple_str_plain_MemoryRetrieveParams_tuple;
PyObject *const_str_plain_MemoryRetrieveParams;
PyObject *const_str_plain_beta_managed_agents_actor;
PyObject *const_tuple_str_plain_BetaManagedAgentsActor_tuple;
PyObject *const_str_plain_BetaManagedAgentsActor;
PyObject *const_str_plain_beta_managed_agents_memory;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemory_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemory;
PyObject *const_str_plain_memory_version_list_params;
PyObject *const_tuple_str_plain_MemoryVersionListParams_tuple;
PyObject *const_str_plain_MemoryVersionListParams;
PyObject *const_str_plain_beta_managed_agents_api_actor;
PyObject *const_tuple_str_plain_BetaManagedAgentsAPIActor_tuple;
PyObject *const_str_plain_BetaManagedAgentsAPIActor;
PyObject *const_str_plain_beta_managed_agents_user_actor;
PyObject *const_tuple_str_plain_BetaManagedAgentsUserActor_tuple;
PyObject *const_str_plain_BetaManagedAgentsUserActor;
PyObject *const_str_plain_memory_version_retrieve_params;
PyObject *const_tuple_str_plain_MemoryVersionRetrieveParams_tuple;
PyObject *const_str_plain_MemoryVersionRetrieveParams;
PyObject *const_str_plain_beta_managed_agents_memory_view;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemoryView_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemoryView;
PyObject *const_str_plain_beta_managed_agents_memory_prefix;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemoryPrefix_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemoryPrefix;
PyObject *const_str_plain_beta_managed_agents_session_actor;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionActor_tuple;
PyObject *const_str_plain_BetaManagedAgentsSessionActor;
PyObject *const_str_plain_beta_managed_agents_deleted_memory;
PyObject *const_tuple_str_plain_BetaManagedAgentsDeletedMemory_tuple;
PyObject *const_str_plain_BetaManagedAgentsDeletedMemory;
PyObject *const_str_plain_beta_managed_agents_memory_version;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemoryVersion_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemoryVersion;
PyObject *const_str_plain_beta_managed_agents_memory_list_item;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemoryListItem_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemoryListItem;
PyObject *const_str_plain_beta_managed_agents_precondition_param;
PyObject *const_tuple_str_plain_BetaManagedAgentsPreconditionParam_tuple;
PyObject *const_str_plain_BetaManagedAgentsPreconditionParam;
PyObject *const_str_digest_0de7666cdb6e957654bd857b18a9d7ad;
PyObject *const_tuple_str_plain_BetaManagedAgentsMemoryVersionOperation_tuple;
PyObject *const_str_plain_BetaManagedAgentsMemoryVersionOperation;
PyObject *const_str_digest_048487c0274e2b504c0a04b81fe9e115;
PyObject *const_str_digest_cec06c79e2ac129970f9880a64345c3c;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[72];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.memory_stores"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9589d823b306e8715cc63b0614e3670);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_9009b7bb4c7326dcbcb0f361e2933d4e);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_stores);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_a6d0a8b49559db86e66440c290982c78_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_list_params);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryListParams_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryListParams);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_create_params);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryCreateParams_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryCreateParams);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_delete_params);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryDeleteParams_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryDeleteParams);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_update_params);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryUpdateParams_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryUpdateParams);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_retrieve_params);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryRetrieveParams_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryRetrieveParams);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_actor);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsActor_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsActor);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemory_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemory);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_version_list_params);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryVersionListParams_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryVersionListParams);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_api_actor);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAPIActor_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAPIActor);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_actor);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserActor_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserActor);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_memory_version_retrieve_params);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryVersionRetrieveParams_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryVersionRetrieveParams);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_view);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryView_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryView);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_prefix);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryPrefix_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_session_actor);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionActor_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionActor);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_deleted_memory);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedMemory_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_version);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersion_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_list_item);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryListItem_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_precondition_param);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsPreconditionParam_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7666cdb6e957654bd857b18a9d7ad);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersionOperation_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_048487c0274e2b504c0a04b81fe9e115);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_cec06c79e2ac129970f9880a64345c3c);
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
void checkModuleConstants_anthropic$types$beta$memory_stores(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_267b1b08e23cbd828589c9ff1fb413aa_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9589d823b306e8715cc63b0614e3670));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9589d823b306e8715cc63b0614e3670);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b33bb4004300fc3cd16d82c209c32141_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_9009b7bb4c7326dcbcb0f361e2933d4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9009b7bb4c7326dcbcb0f361e2933d4e);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_63bca6ec0c203e2c19b2279effd52b81_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_stores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_stores);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_a6d0a8b49559db86e66440c290982c78_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a6d0a8b49559db86e66440c290982c78_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_list_params);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryListParams_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryListParams);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_create_params);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryCreateParams_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryCreateParams);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_delete_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_delete_params);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryDeleteParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryDeleteParams_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryDeleteParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryDeleteParams);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_update_params);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryUpdateParams_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryUpdateParams);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_retrieve_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_retrieve_params);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryRetrieveParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryRetrieveParams_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryRetrieveParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryRetrieveParams);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_actor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_actor);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsActor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsActor_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsActor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsActor);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_memory);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemory_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemory);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_version_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_version_list_params);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryVersionListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryVersionListParams_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryVersionListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryVersionListParams);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_api_actor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_api_actor);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAPIActor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAPIActor_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAPIActor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAPIActor);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_actor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_user_actor);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserActor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUserActor_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserActor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUserActor);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_memory_version_retrieve_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memory_version_retrieve_params);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MemoryVersionRetrieveParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MemoryVersionRetrieveParams_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryVersionRetrieveParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryVersionRetrieveParams);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_memory_view);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryView_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryView_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryView));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemoryView);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_prefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_memory_prefix);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryPrefix_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryPrefix_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_session_actor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_session_actor);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionActor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionActor_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionActor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionActor);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_deleted_memory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_deleted_memory);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedMemory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedMemory_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_memory_version);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersion_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_memory_list_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_memory_list_item);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryListItem_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryListItem_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_precondition_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_precondition_param);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsPreconditionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsPreconditionParam_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7666cdb6e957654bd857b18a9d7ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7666cdb6e957654bd857b18a9d7ad);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersionOperation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersionOperation_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_048487c0274e2b504c0a04b81fe9e115));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_048487c0274e2b504c0a04b81fe9e115);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_cec06c79e2ac129970f9880a64345c3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cec06c79e2ac129970f9880a64345c3c);
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
static PyObject *module_var_accessor_anthropic$types$beta$memory_stores$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$memory_stores->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$memory_stores->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$memory_stores->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$memory_stores$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$memory_stores->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$memory_stores->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$memory_stores->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_df972acbf7e0de18b4a3b92a39f83edd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_048487c0274e2b504c0a04b81fe9e115); CHECK_OBJECT(module_filename_obj);
code_objects_df972acbf7e0de18b4a3b92a39f83edd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_cec06c79e2ac129970f9880a64345c3c, mod_consts.const_str_digest_cec06c79e2ac129970f9880a64345c3c, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_anthropic$types$beta$memory_stores[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$memory_stores);
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
        module_anthropic$types$beta$memory_stores,
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
        function_table_anthropic$types$beta$memory_stores,
        sizeof(function_table_anthropic$types$beta$memory_stores) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.memory_stores";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$memory_stores(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$memory_stores");

    // Store the module for future use.
    module_anthropic$types$beta$memory_stores = module;

    moduledict_anthropic$types$beta$memory_stores = MODULE_DICT(module_anthropic$types$beta$memory_stores);

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
        PRINT_STRING("anthropic$types$beta$memory_stores: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$memory_stores: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$memory_stores: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.memory_stores" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$memory_stores\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$memory_stores,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$memory_stores,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$memory_stores,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$memory_stores,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$memory_stores,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$memory_stores);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$memory_stores);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$memory_stores;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$memory_stores = MAKE_MODULE_FRAME(code_objects_df972acbf7e0de18b4a3b92a39f83edd, module_anthropic$types$beta$memory_stores);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$memory_stores);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$memory_stores) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = mod_consts.const_str_digest_f9589d823b306e8715cc63b0614e3670;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
tmp_args_element_value_5 = mod_consts.const_str_digest_9009b7bb4c7326dcbcb0f361e2933d4e;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
tmp_args_element_value_7 = mod_consts.const_str_plain_memory_stores;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
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
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_a6d0a8b49559db86e66440c290982c78_tuple);

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
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$memory_stores$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$memory_stores$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_anthropic$types$beta$memory_stores$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_anthropic$types$beta$memory_stores$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_memory_list_params;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_MemoryListParams_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryListParams,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_MemoryListParams);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryListParams, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_memory_create_params;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_MemoryCreateParams_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_MemoryCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryCreateParams, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_memory_delete_params;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_MemoryDeleteParams_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryDeleteParams,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_MemoryDeleteParams);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryDeleteParams, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_memory_update_params;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_MemoryUpdateParams_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_MemoryUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryUpdateParams, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_memory_retrieve_params;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_MemoryRetrieveParams_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 9;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryRetrieveParams,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_MemoryRetrieveParams);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryRetrieveParams, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_managed_agents_actor;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaManagedAgentsActor_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 10;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsActor,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BetaManagedAgentsActor);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsActor, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_managed_agents_memory;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemory_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 11;
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
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemory,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BetaManagedAgentsMemory);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemory, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_memory_version_list_params;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_MemoryVersionListParams_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 12;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryVersionListParams,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_MemoryVersionListParams);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryVersionListParams, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_beta_managed_agents_api_actor;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAPIActor_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 13;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsAPIActor,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaManagedAgentsAPIActor);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAPIActor, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_beta_managed_agents_user_actor;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUserActor_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 14;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsUserActor,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaManagedAgentsUserActor);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserActor, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_memory_version_retrieve_params;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_MemoryVersionRetrieveParams_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 15;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_MemoryVersionRetrieveParams,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MemoryVersionRetrieveParams);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryVersionRetrieveParams, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_beta_managed_agents_memory_view;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryView_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 16;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemoryView,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaManagedAgentsMemoryView);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemoryView, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_beta_managed_agents_memory_prefix;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryPrefix_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 17;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemoryPrefix, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_beta_managed_agents_session_actor;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionActor_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 18;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsSessionActor,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BetaManagedAgentsSessionActor);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionActor, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_beta_managed_agents_deleted_memory;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_BetaManagedAgentsDeletedMemory_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 19;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsDeletedMemory, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_beta_managed_agents_memory_version;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersion_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 20;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemoryVersion, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_beta_managed_agents_memory_list_item;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryListItem_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 21;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemoryListItem, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_beta_managed_agents_precondition_param;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_BetaManagedAgentsPreconditionParam_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 22;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsPreconditionParam, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_0de7666cdb6e957654bd857b18a9d7ad;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$memory_stores;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_BetaManagedAgentsMemoryVersionOperation_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$memory_stores->m_frame.f_lineno = 25;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$memory_stores,
        mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsMemoryVersionOperation, tmp_assign_source_24);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$memory_stores, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$memory_stores->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$memory_stores, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$memory_stores);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$memory_stores", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.memory_stores" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$memory_stores);
    return module_anthropic$types$beta$memory_stores;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$memory_stores, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$memory_stores", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'openai$types$fine_tuning'
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



/* The "module_openai$types$fine_tuning" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$fine_tuning;
PyDictObject *moduledict_openai$types$fine_tuning;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_digest_060468b2ea3ee811a37021bf5d897e69;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_plain_fine_tuning;
PyObject *const_tuple_1fb4dd9a7fba922c16637328cc5688fe_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_dpo_method;
PyObject *const_tuple_str_plain_DpoMethod_tuple;
PyObject *const_str_plain_DpoMethod;
PyObject *const_str_plain_fine_tuning_job;
PyObject *const_tuple_str_plain_FineTuningJob_tuple;
PyObject *const_str_plain_FineTuningJob;
PyObject *const_str_plain_job_list_params;
PyObject *const_tuple_str_plain_JobListParams_tuple;
PyObject *const_str_plain_JobListParams;
PyObject *const_str_plain_dpo_method_param;
PyObject *const_tuple_str_plain_DpoMethodParam_tuple;
PyObject *const_str_plain_DpoMethodParam;
PyObject *const_str_plain_job_create_params;
PyObject *const_tuple_str_plain_JobCreateParams_tuple;
PyObject *const_str_plain_JobCreateParams;
PyObject *const_str_plain_supervised_method;
PyObject *const_tuple_str_plain_SupervisedMethod_tuple;
PyObject *const_str_plain_SupervisedMethod;
PyObject *const_str_plain_dpo_hyperparameters;
PyObject *const_tuple_str_plain_DpoHyperparameters_tuple;
PyObject *const_str_plain_DpoHyperparameters;
PyObject *const_str_plain_reinforcement_method;
PyObject *const_tuple_str_plain_ReinforcementMethod_tuple;
PyObject *const_str_plain_ReinforcementMethod;
PyObject *const_str_plain_fine_tuning_job_event;
PyObject *const_tuple_str_plain_FineTuningJobEvent_tuple;
PyObject *const_str_plain_FineTuningJobEvent;
PyObject *const_str_plain_job_list_events_params;
PyObject *const_tuple_str_plain_JobListEventsParams_tuple;
PyObject *const_str_plain_JobListEventsParams;
PyObject *const_str_plain_supervised_method_param;
PyObject *const_tuple_str_plain_SupervisedMethodParam_tuple;
PyObject *const_str_plain_SupervisedMethodParam;
PyObject *const_str_plain_dpo_hyperparameters_param;
PyObject *const_tuple_str_plain_DpoHyperparametersParam_tuple;
PyObject *const_str_plain_DpoHyperparametersParam;
PyObject *const_str_plain_reinforcement_method_param;
PyObject *const_tuple_str_plain_ReinforcementMethodParam_tuple;
PyObject *const_str_plain_ReinforcementMethodParam;
PyObject *const_str_plain_supervised_hyperparameters;
PyObject *const_tuple_str_plain_SupervisedHyperparameters_tuple;
PyObject *const_str_plain_SupervisedHyperparameters;
PyObject *const_str_plain_fine_tuning_job_integration;
PyObject *const_tuple_str_plain_FineTuningJobIntegration_tuple;
PyObject *const_str_plain_FineTuningJobIntegration;
PyObject *const_str_plain_reinforcement_hyperparameters;
PyObject *const_tuple_str_plain_ReinforcementHyperparameters_tuple;
PyObject *const_str_plain_ReinforcementHyperparameters;
PyObject *const_str_plain_supervised_hyperparameters_param;
PyObject *const_tuple_str_plain_SupervisedHyperparametersParam_tuple;
PyObject *const_str_plain_SupervisedHyperparametersParam;
PyObject *const_str_plain_fine_tuning_job_wandb_integration;
PyObject *const_tuple_str_plain_FineTuningJobWandbIntegration_tuple;
PyObject *const_str_plain_FineTuningJobWandbIntegration;
PyObject *const_str_plain_reinforcement_hyperparameters_param;
PyObject *const_tuple_str_plain_ReinforcementHyperparametersParam_tuple;
PyObject *const_str_plain_ReinforcementHyperparametersParam;
PyObject *const_str_plain_fine_tuning_job_wandb_integration_object;
PyObject *const_tuple_str_plain_FineTuningJobWandbIntegrationObject_tuple;
PyObject *const_str_plain_FineTuningJobWandbIntegrationObject;
PyObject *const_str_digest_c3309c1f0062f2ccd0c4760435d92b56;
PyObject *const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[73];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.fine_tuning"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_060468b2ea3ee811a37021bf5d897e69);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_1fb4dd9a7fba922c16637328cc5688fe_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_method);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoMethod_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_DpoMethod);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJob_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJob);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_job_list_params);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobListParams_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_JobListParams);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_method_param);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoMethodParam_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_DpoMethodParam);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_job_create_params);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobCreateParams_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_JobCreateParams);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_method);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedMethod_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedMethod);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_hyperparameters);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoHyperparameters_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_DpoHyperparameters);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_method);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementMethod_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementMethod);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_event);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobEvent_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobEvent);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_job_list_events_params);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobListEventsParams_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_JobListEventsParams);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_method_param);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedMethodParam_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedMethodParam);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_hyperparameters_param);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoHyperparametersParam_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_DpoHyperparametersParam);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_method_param);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementMethodParam_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementMethodParam);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_hyperparameters);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedHyperparameters_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedHyperparameters);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_integration);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobIntegration_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobIntegration);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_hyperparameters);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementHyperparameters_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementHyperparameters);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_hyperparameters_param);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedHyperparametersParam_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedHyperparametersParam);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_wandb_integration);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegration_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobWandbIntegration);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_hyperparameters_param);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementHyperparametersParam_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementHyperparametersParam);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_wandb_integration_object);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegrationObject_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3309c1f0062f2ccd0c4760435d92b56);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c);
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
void checkModuleConstants_openai$types$fine_tuning(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_060468b2ea3ee811a37021bf5d897e69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_060468b2ea3ee811a37021bf5d897e69);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_1fb4dd9a7fba922c16637328cc5688fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1fb4dd9a7fba922c16637328cc5688fe_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dpo_method);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoMethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DpoMethod_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_DpoMethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DpoMethod);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning_job);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJob_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FineTuningJob_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJob));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningJob);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_job_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_job_list_params);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_JobListParams_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_JobListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JobListParams);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_method_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dpo_method_param);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoMethodParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DpoMethodParam_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_DpoMethodParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DpoMethodParam);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_job_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_job_create_params);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_JobCreateParams_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_JobCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JobCreateParams);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_supervised_method);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedMethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SupervisedMethod_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedMethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupervisedMethod);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_hyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dpo_hyperparameters);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoHyperparameters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DpoHyperparameters_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_DpoHyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DpoHyperparameters);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reinforcement_method);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementMethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReinforcementMethod_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementMethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReinforcementMethod);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning_job_event);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FineTuningJobEvent_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningJobEvent);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_job_list_events_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_job_list_events_params);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JobListEventsParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_JobListEventsParams_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_JobListEventsParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JobListEventsParams);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_method_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_supervised_method_param);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedMethodParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SupervisedMethodParam_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedMethodParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupervisedMethodParam);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpo_hyperparameters_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dpo_hyperparameters_param);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DpoHyperparametersParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DpoHyperparametersParam_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_DpoHyperparametersParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DpoHyperparametersParam);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_method_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reinforcement_method_param);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementMethodParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReinforcementMethodParam_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementMethodParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReinforcementMethodParam);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_hyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_supervised_hyperparameters);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedHyperparameters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SupervisedHyperparameters_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedHyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupervisedHyperparameters);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_integration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning_job_integration);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobIntegration_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FineTuningJobIntegration_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobIntegration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningJobIntegration);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_hyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reinforcement_hyperparameters);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementHyperparameters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReinforcementHyperparameters_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementHyperparameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReinforcementHyperparameters);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_supervised_hyperparameters_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_supervised_hyperparameters_param);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupervisedHyperparametersParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SupervisedHyperparametersParam_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupervisedHyperparametersParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupervisedHyperparametersParam);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_wandb_integration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning_job_wandb_integration);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegration_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegration_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobWandbIntegration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningJobWandbIntegration);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_reinforcement_hyperparameters_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reinforcement_hyperparameters_param);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReinforcementHyperparametersParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReinforcementHyperparametersParam_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReinforcementHyperparametersParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReinforcementHyperparametersParam);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning_job_wandb_integration_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning_job_wandb_integration_object);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegrationObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegrationObject_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3309c1f0062f2ccd0c4760435d92b56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3309c1f0062f2ccd0c4760435d92b56);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c);
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
static PyObject *module_var_accessor_openai$types$fine_tuning$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$fine_tuning->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$fine_tuning->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$fine_tuning->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$fine_tuning$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$fine_tuning->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$fine_tuning->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$fine_tuning->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1a7c30bed0e1509c68e706b4a3cab657;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c3309c1f0062f2ccd0c4760435d92b56); CHECK_OBJECT(module_filename_obj);
code_objects_1a7c30bed0e1509c68e706b4a3cab657 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c, mod_consts.const_str_digest_558812d4f29eaa72fcfbf3b8bb1a833c, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$fine_tuning[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$fine_tuning);
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
        module_openai$types$fine_tuning,
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
        function_table_openai$types$fine_tuning,
        sizeof(function_table_openai$types$fine_tuning) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.fine_tuning";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$fine_tuning(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$fine_tuning");

    // Store the module for future use.
    module_openai$types$fine_tuning = module;

    moduledict_openai$types$fine_tuning = MODULE_DICT(module_openai$types$fine_tuning);

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
        PRINT_STRING("openai$types$fine_tuning: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$fine_tuning: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$fine_tuning: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.fine_tuning" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$fine_tuning\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$fine_tuning,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$fine_tuning,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$fine_tuning,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$fine_tuning,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$fine_tuning,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$fine_tuning);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$fine_tuning);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_openai$types$fine_tuning;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$fine_tuning = MAKE_MODULE_FRAME(code_objects_1a7c30bed0e1509c68e706b4a3cab657, module_openai$types$fine_tuning);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$fine_tuning);
assert(Py_REFCNT(frame_frame_openai$types$fine_tuning) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 4);
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
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_060468b2ea3ee811a37021bf5d897e69;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_fine_tuning;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
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
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_1fb4dd9a7fba922c16637328cc5688fe_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$fine_tuning$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$fine_tuning$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$fine_tuning$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$fine_tuning$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dpo_method;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_DpoMethod_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_DpoMethod,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_DpoMethod);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_DpoMethod, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_fine_tuning_job;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_FineTuningJob_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_FineTuningJob,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_FineTuningJob);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningJob, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_job_list_params;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_JobListParams_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_JobListParams,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_JobListParams);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_JobListParams, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_dpo_method_param;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DpoMethodParam_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_DpoMethodParam,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DpoMethodParam);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_DpoMethodParam, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_job_create_params;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_JobCreateParams_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 9;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_JobCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_JobCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_JobCreateParams, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_supervised_method;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_SupervisedMethod_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 10;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_SupervisedMethod,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_SupervisedMethod);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_SupervisedMethod, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_dpo_hyperparameters;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_DpoHyperparameters_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 11;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_DpoHyperparameters,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_DpoHyperparameters);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_DpoHyperparameters, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_reinforcement_method;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ReinforcementMethod_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 12;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_ReinforcementMethod,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ReinforcementMethod);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_ReinforcementMethod, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_fine_tuning_job_event;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_FineTuningJobEvent_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 13;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_FineTuningJobEvent,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_FineTuningJobEvent);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningJobEvent, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_job_list_events_params;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_JobListEventsParams_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 14;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_JobListEventsParams,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_JobListEventsParams);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_JobListEventsParams, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_supervised_method_param;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_SupervisedMethodParam_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 15;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_SupervisedMethodParam,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_SupervisedMethodParam);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_SupervisedMethodParam, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_dpo_hyperparameters_param;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_DpoHyperparametersParam_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 16;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_DpoHyperparametersParam,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_DpoHyperparametersParam);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_DpoHyperparametersParam, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_reinforcement_method_param;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ReinforcementMethodParam_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 17;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_ReinforcementMethodParam,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ReinforcementMethodParam);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_ReinforcementMethodParam, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_supervised_hyperparameters;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_SupervisedHyperparameters_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 18;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_SupervisedHyperparameters,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_SupervisedHyperparameters);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_SupervisedHyperparameters, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_fine_tuning_job_integration;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_FineTuningJobIntegration_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 19;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_FineTuningJobIntegration,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_FineTuningJobIntegration);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningJobIntegration, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_reinforcement_hyperparameters;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ReinforcementHyperparameters_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 20;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_ReinforcementHyperparameters,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ReinforcementHyperparameters);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_ReinforcementHyperparameters, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_supervised_hyperparameters_param;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_SupervisedHyperparametersParam_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 21;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_SupervisedHyperparametersParam,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_SupervisedHyperparametersParam);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_SupervisedHyperparametersParam, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_fine_tuning_job_wandb_integration;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegration_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 22;
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
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_FineTuningJobWandbIntegration,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_FineTuningJobWandbIntegration);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningJobWandbIntegration, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_reinforcement_hyperparameters_param;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_ReinforcementHyperparametersParam_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 23;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_ReinforcementHyperparametersParam,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ReinforcementHyperparametersParam);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_ReinforcementHyperparametersParam, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_fine_tuning_job_wandb_integration_object;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$fine_tuning;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_FineTuningJobWandbIntegrationObject_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$fine_tuning->m_frame.f_lineno = 24;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types$fine_tuning,
        mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningJobWandbIntegrationObject, tmp_assign_source_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$fine_tuning, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$fine_tuning->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$fine_tuning, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$fine_tuning);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$fine_tuning", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.fine_tuning" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$fine_tuning);
    return module_openai$types$fine_tuning;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$fine_tuning, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$fine_tuning", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

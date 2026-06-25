/* Generated code for Python module 'anthropic$types$beta$sessions$beta_managed_agents_session_error_event'
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



/* The "module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
PyDictObject *moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_datetime;
PyObject *const_tuple_str_plain_datetime_tuple;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_4;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_BaseModel_tuple;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_beta_managed_agents_billing_error;
PyObject *const_tuple_str_plain_BetaManagedAgentsBillingError_tuple;
PyObject *const_str_plain_BetaManagedAgentsBillingError;
PyObject *const_str_plain_beta_managed_agents_unknown_error;
PyObject *const_tuple_str_plain_BetaManagedAgentsUnknownError_tuple;
PyObject *const_str_plain_BetaManagedAgentsUnknownError;
PyObject *const_str_digest_c8cda2d1f5f906aec1fead4089f7c19a;
PyObject *const_tuple_str_plain_BetaManagedAgentsModelOverloadedError_tuple;
PyObject *const_str_plain_BetaManagedAgentsModelOverloadedError;
PyObject *const_str_digest_e98ebba0d9c49841eaa6d7b9fdc28eae;
PyObject *const_tuple_str_plain_BetaManagedAgentsModelRateLimitedError_tuple;
PyObject *const_str_plain_BetaManagedAgentsModelRateLimitedError;
PyObject *const_str_digest_acf6c8bd2b1df01d7b3913b3b4445847;
PyObject *const_tuple_str_plain_BetaManagedAgentsModelRequestFailedError_tuple;
PyObject *const_str_plain_BetaManagedAgentsModelRequestFailedError;
PyObject *const_str_digest_b1e4574a2d2798659bb173d1b4694ea4;
PyObject *const_tuple_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147_tuple;
PyObject *const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147;
PyObject *const_str_digest_e2c6c3dabb6f518a0a6297ce1b09c3ca;
PyObject *const_tuple_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487_tuple;
PyObject *const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487;
PyObject *const_str_plain_BetaManagedAgentsSessionErrorEvent;
PyObject *const_str_plain_Error;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a7fb50b068952845d8932340e9fc09df;
PyObject *const_str_digest_578fdd8fecf668f40e2666120aa04d45;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_str_plain_id;
PyObject *const_str_plain_error;
PyObject *const_str_plain_processed_at;
PyObject *const_str_digest_5b76f40b182614b2d6baf0a07daec4f3;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_efbac11fd1720e13bbc73686476486f8;
PyObject *const_str_digest_f4257415958d7ae23b26b44650a3c08c;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[61];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.sessions.beta_managed_agents_session_error_event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_billing_error);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsBillingError_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsBillingError);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_unknown_error);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUnknownError_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8cda2d1f5f906aec1fead4089f7c19a);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelOverloadedError_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_e98ebba0d9c49841eaa6d7b9fdc28eae);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRateLimitedError_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_acf6c8bd2b1df01d7b3913b3b4445847);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRequestFailedError_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1e4574a2d2798659bb173d1b4694ea4);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2c6c3dabb6f518a0a6297ce1b09c3ca);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Error);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7fb50b068952845d8932340e9fc09df);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_578fdd8fecf668f40e2666120aa04d45);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_processed_at);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b76f40b182614b2d6baf0a07daec4f3);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_efbac11fd1720e13bbc73686476486f8);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4257415958d7ae23b26b44650a3c08c);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_anthropic$types$beta$sessions$beta_managed_agents_session_error_event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_datetime_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_billing_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_billing_error);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsBillingError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsBillingError_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsBillingError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsBillingError);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_unknown_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_unknown_error);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUnknownError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUnknownError_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUnknownError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8cda2d1f5f906aec1fead4089f7c19a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8cda2d1f5f906aec1fead4089f7c19a);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelOverloadedError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsModelOverloadedError_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_e98ebba0d9c49841eaa6d7b9fdc28eae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e98ebba0d9c49841eaa6d7b9fdc28eae);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRateLimitedError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRateLimitedError_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_acf6c8bd2b1df01d7b3913b3b4445847));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acf6c8bd2b1df01d7b3913b3b4445847);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRequestFailedError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRequestFailedError_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1e4574a2d2798659bb173d1b4694ea4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1e4574a2d2798659bb173d1b4694ea4);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2c6c3dabb6f518a0a6297ce1b09c3ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2c6c3dabb6f518a0a6297ce1b09c3ca);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Error);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7fb50b068952845d8932340e9fc09df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7fb50b068952845d8932340e9fc09df);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_578fdd8fecf668f40e2666120aa04d45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_578fdd8fecf668f40e2666120aa04d45);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_processed_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_processed_at);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b76f40b182614b2d6baf0a07daec4f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b76f40b182614b2d6baf0a07daec4f3);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_efbac11fd1720e13bbc73686476486f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efbac11fd1720e13bbc73686476486f8);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4257415958d7ae23b26b44650a3c08c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4257415958d7ae23b26b44650a3c08c);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BaseModel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsBillingError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsBillingError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsBillingError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsBillingError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsBillingError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsBillingError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsBillingError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsBillingError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsBillingError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsMCPAuthenticationFailedError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsMCPConnectionFailedError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelOverloadedError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelRateLimitedError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelRequestFailedError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsUnknownError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUnknownError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUnknownError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Error);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_991154097cc7d9b870a09f95172f0d68;
static PyCodeObject *code_objects_ad77c7c0f38e7ccc2f5da6e038e2013d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_efbac11fd1720e13bbc73686476486f8); CHECK_OBJECT(module_filename_obj);
code_objects_991154097cc7d9b870a09f95172f0d68 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_f4257415958d7ae23b26b44650a3c08c, mod_consts.const_str_digest_f4257415958d7ae23b26b44650a3c08c, NULL, NULL, 0, 0, 0);
code_objects_ad77c7c0f38e7ccc2f5da6e038e2013d = MAKE_CODE_OBJECT(module_filename_obj, 33, 0, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


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

static function_impl_code const function_table_anthropic$types$beta$sessions$beta_managed_agents_session_error_event[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);
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
        module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
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
        function_table_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        sizeof(function_table_anthropic$types$beta$sessions$beta_managed_agents_session_error_event) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.sessions.beta_managed_agents_session_error_event";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$sessions$beta_managed_agents_session_error_event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$sessions$beta_managed_agents_session_error_event");

    // Store the module for future use.
    module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event = module;

    moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event = MODULE_DICT(module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);

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
        PRINT_STRING("anthropic$types$beta$sessions$beta_managed_agents_session_error_event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$sessions$beta_managed_agents_session_error_event: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$sessions$beta_managed_agents_session_error_event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.sessions.beta_managed_agents_session_error_event" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$sessions$beta_managed_agents_session_error_event\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event = MAKE_MODULE_FRAME(code_objects_991154097cc7d9b870a09f95172f0d68, module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_datetime_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_datetime);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_4;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 7;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BaseModel_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_4;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 8;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BaseModel);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_managed_agents_billing_error;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaManagedAgentsBillingError_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 9;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BetaManagedAgentsBillingError,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BetaManagedAgentsBillingError);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsBillingError, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_managed_agents_unknown_error;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUnknownError_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 10;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BetaManagedAgentsUnknownError,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUnknownError, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_c8cda2d1f5f906aec1fead4089f7c19a;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaManagedAgentsModelOverloadedError_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 11;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_e98ebba0d9c49841eaa6d7b9fdc28eae;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRateLimitedError_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 12;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_acf6c8bd2b1df01d7b3913b3b4445847;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaManagedAgentsModelRequestFailedError_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 13;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_b1e4574a2d2798659bb173d1b4694ea4;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 14;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_e2c6c3dabb6f518a0a6297ce1b09c3ca;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 15;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event,
        mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_digest_904ccebe3e75e7fb1a8bd2266dc4c487, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_LIST2(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent,mod_consts.const_str_plain_Error);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Annotated(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsUnknownError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsUnknownError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelOverloadedError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsModelOverloadedError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelRateLimitedError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsModelRateLimitedError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsModelRequestFailedError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsModelRequestFailedError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsMCPConnectionFailedError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_7fbc6a8bdc0a94098bfa9ca9cf9e7147);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsMCPAuthenticationFailedError(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BetaManagedAgentsBillingError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsBillingError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$PropertyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_2;
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 29;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Error, tmp_assign_source_21);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Error;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

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
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

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
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 33;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
branch_end_1:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a7fb50b068952845d8932340e9fc09df;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_578fdd8fecf668f40e2666120aa04d45;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2 = MAKE_CLASS_FRAME(tstate, code_objects_ad77c7c0f38e7ccc2f5da6e038e2013d, module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_2 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subscribed_2 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain_Error);

if (tmp_ass_subvalue_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_3 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Error(tstate);
if (unlikely(tmp_ass_subvalue_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Error);
}

if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_ass_subvalue_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subscribed_3 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_error;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain_datetime);

if (tmp_ass_subvalue_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_4 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$datetime(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_ass_subvalue_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subscribed_4 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_processed_at;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_9 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$Literal(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_4 = mod_consts.const_str_digest_5b76f40b182614b2d6baf0a07daec4f3;
tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_5 = PyObject_GetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_2);

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
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

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


exception_lineno = 33;

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
tmp_res = PyObject_SetItem(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame.f_lineno = 33;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_28 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33);
locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33);
locals_anthropic$types$beta$sessions$beta_managed_agents_session_error_event$$$class__1_BetaManagedAgentsSessionErrorEvent_33 = NULL;
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
exception_lineno = 33;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, tmp_assign_source_28);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$sessions$beta_managed_agents_session_error_event", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.sessions.beta_managed_agents_session_error_event" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event);
    return module_anthropic$types$beta$sessions$beta_managed_agents_session_error_event;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_error_event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$sessions$beta_managed_agents_session_error_event", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

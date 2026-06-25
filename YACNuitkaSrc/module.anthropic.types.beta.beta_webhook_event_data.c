/* Generated code for Python module 'anthropic$types$beta$beta_webhook_event_data'
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



/* The "module_anthropic$types$beta$beta_webhook_event_data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$beta_webhook_event_data;
PyDictObject *moduledict_anthropic$types$beta$beta_webhook_event_data;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_beta_webhook_session_idled_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionIdledEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionIdledEventData;
PyObject *const_str_plain_beta_webhook_vault_created_event_data;
PyObject *const_tuple_str_plain_BetaWebhookVaultCreatedEventData_tuple;
PyObject *const_str_plain_BetaWebhookVaultCreatedEventData;
PyObject *const_str_plain_beta_webhook_vault_deleted_event_data;
PyObject *const_tuple_str_plain_BetaWebhookVaultDeletedEventData_tuple;
PyObject *const_str_plain_BetaWebhookVaultDeletedEventData;
PyObject *const_str_plain_beta_webhook_vault_archived_event_data;
PyObject *const_tuple_str_plain_BetaWebhookVaultArchivedEventData_tuple;
PyObject *const_str_plain_BetaWebhookVaultArchivedEventData;
PyObject *const_str_plain_beta_webhook_session_created_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionCreatedEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionCreatedEventData;
PyObject *const_str_plain_beta_webhook_session_deleted_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionDeletedEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionDeletedEventData;
PyObject *const_str_plain_beta_webhook_session_pending_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionPendingEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionPendingEventData;
PyObject *const_str_plain_beta_webhook_session_running_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionRunningEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionRunningEventData;
PyObject *const_str_plain_beta_webhook_session_archived_event_data;
PyObject *const_tuple_str_plain_BetaWebhookSessionArchivedEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionArchivedEventData;
PyObject *const_str_digest_5af5a4126273428ebedc742da0254a91;
PyObject *const_tuple_str_plain_BetaWebhookSessionStatusIdledEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionStatusIdledEventData;
PyObject *const_str_digest_152242307e9d388478a0fb7e08d6c3e5;
PyObject *const_tuple_str_plain_BetaWebhookSessionThreadIdledEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionThreadIdledEventData;
PyObject *const_str_digest_bfc01dda9f377b768fd72f9a5cf801ae;
PyObject *const_tuple_str_plain_BetaWebhookSessionThreadCreatedEventData_tuple;
PyObject *const_str_plain_BetaWebhookSessionThreadCreatedEventData;
PyObject *const_str_digest_60b08bf82cd82dd5cecc0f93f332ced2;
PyObject *const_tuple_str_digest_09300715af5050b7026e9dc8a53c5c2c_tuple;
PyObject *const_str_digest_09300715af5050b7026e9dc8a53c5c2c;
PyObject *const_str_digest_f32055a013b530dbba3947fd2efb876e;
PyObject *const_tuple_str_digest_29302f7f164fbdef2b3f225b845f23d2_tuple;
PyObject *const_str_digest_29302f7f164fbdef2b3f225b845f23d2;
PyObject *const_str_digest_1ea6359a11ff63925ef8305d810b593a;
PyObject *const_tuple_str_digest_612f9e4617167a4b05cf597c8671180a_tuple;
PyObject *const_str_digest_612f9e4617167a4b05cf597c8671180a;
PyObject *const_str_digest_de9c20718a7b125ea7adc4296597c045;
PyObject *const_tuple_str_digest_b6941486ed50165297d03bc55fe44740_tuple;
PyObject *const_str_digest_b6941486ed50165297d03bc55fe44740;
PyObject *const_str_digest_bebb2849f1d940a9d0e0a40eb60d8e3f;
PyObject *const_tuple_str_digest_de8a570e09f432d55807372bb35a0007_tuple;
PyObject *const_str_digest_de8a570e09f432d55807372bb35a0007;
PyObject *const_str_digest_a3f448b914410d431fa950932e01c079;
PyObject *const_tuple_str_digest_2538495efb1c7e519060ab939c063233_tuple;
PyObject *const_str_digest_2538495efb1c7e519060ab939c063233;
PyObject *const_str_digest_33550f1fb6503f334dfb18753eb323a4;
PyObject *const_tuple_str_digest_572b0868e355abe6f6327eb0541416cd_tuple;
PyObject *const_str_digest_572b0868e355abe6f6327eb0541416cd;
PyObject *const_str_digest_1bb90c2548629caca56b3aaa40ae512d;
PyObject *const_tuple_str_digest_8a73163bad2158b54c53c0d1f5c1b667_tuple;
PyObject *const_str_digest_8a73163bad2158b54c53c0d1f5c1b667;
PyObject *const_str_digest_b907f1eac5a210a78004f9008e64ea37;
PyObject *const_tuple_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5_tuple;
PyObject *const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5;
PyObject *const_str_digest_4201b3505050198afa708689cf5e5126;
PyObject *const_tuple_str_digest_ddd89be700b49b6eca142f5d71388931_tuple;
PyObject *const_str_digest_ddd89be700b49b6eca142f5d71388931;
PyObject *const_str_plain_BetaWebhookEventData;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_digest_460fb38ceb77f700f638dc03a740e7df;
PyObject *const_str_digest_eb981bff71cc7c819c7b052cf05944ff;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.beta_webhook_event_data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_idled_event_data);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionIdledEventData_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_created_event_data);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultCreatedEventData_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_deleted_event_data);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultDeletedEventData_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_archived_event_data);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultArchivedEventData_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_created_event_data);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionCreatedEventData_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_deleted_event_data);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionDeletedEventData_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_pending_event_data);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionPendingEventData_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_running_event_data);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionRunningEventData_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_archived_event_data);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionArchivedEventData_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_5af5a4126273428ebedc742da0254a91);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionStatusIdledEventData_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_152242307e9d388478a0fb7e08d6c3e5);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadIdledEventData_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfc01dda9f377b768fd72f9a5cf801ae);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadCreatedEventData_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_60b08bf82cd82dd5cecc0f93f332ced2);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_09300715af5050b7026e9dc8a53c5c2c_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_f32055a013b530dbba3947fd2efb876e);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_29302f7f164fbdef2b3f225b845f23d2_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ea6359a11ff63925ef8305d810b593a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_612f9e4617167a4b05cf597c8671180a_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_de9c20718a7b125ea7adc4296597c045);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6941486ed50165297d03bc55fe44740_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_bebb2849f1d940a9d0e0a40eb60d8e3f);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_de8a570e09f432d55807372bb35a0007_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3f448b914410d431fa950932e01c079);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2538495efb1c7e519060ab939c063233_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_33550f1fb6503f334dfb18753eb323a4);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_572b0868e355abe6f6327eb0541416cd_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bb90c2548629caca56b3aaa40ae512d);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a73163bad2158b54c53c0d1f5c1b667_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_b907f1eac5a210a78004f9008e64ea37);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_4201b3505050198afa708689cf5e5126);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ddd89be700b49b6eca142f5d71388931_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookEventData);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_460fb38ceb77f700f638dc03a740e7df);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb981bff71cc7c819c7b052cf05944ff);
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
void checkModuleConstants_anthropic$types$beta$beta_webhook_event_data(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_idled_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_idled_event_data);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionIdledEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionIdledEventData_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_created_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_vault_created_event_data);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultCreatedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookVaultCreatedEventData_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_deleted_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_vault_deleted_event_data);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultDeletedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookVaultDeletedEventData_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_vault_archived_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_vault_archived_event_data);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookVaultArchivedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookVaultArchivedEventData_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_created_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_created_event_data);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionCreatedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionCreatedEventData_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_deleted_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_deleted_event_data);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionDeletedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionDeletedEventData_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_pending_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_pending_event_data);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionPendingEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionPendingEventData_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_running_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_running_event_data);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionRunningEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionRunningEventData_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_webhook_session_archived_event_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_webhook_session_archived_event_data);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionArchivedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionArchivedEventData_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_5af5a4126273428ebedc742da0254a91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5af5a4126273428ebedc742da0254a91);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionStatusIdledEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionStatusIdledEventData_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_152242307e9d388478a0fb7e08d6c3e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_152242307e9d388478a0fb7e08d6c3e5);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadIdledEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadIdledEventData_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfc01dda9f377b768fd72f9a5cf801ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfc01dda9f377b768fd72f9a5cf801ae);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadCreatedEventData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadCreatedEventData_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_60b08bf82cd82dd5cecc0f93f332ced2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60b08bf82cd82dd5cecc0f93f332ced2);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_09300715af5050b7026e9dc8a53c5c2c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_09300715af5050b7026e9dc8a53c5c2c_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_f32055a013b530dbba3947fd2efb876e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f32055a013b530dbba3947fd2efb876e);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_29302f7f164fbdef2b3f225b845f23d2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_29302f7f164fbdef2b3f225b845f23d2_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ea6359a11ff63925ef8305d810b593a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ea6359a11ff63925ef8305d810b593a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_612f9e4617167a4b05cf597c8671180a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_612f9e4617167a4b05cf597c8671180a_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_de9c20718a7b125ea7adc4296597c045));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de9c20718a7b125ea7adc4296597c045);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6941486ed50165297d03bc55fe44740_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b6941486ed50165297d03bc55fe44740_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_bebb2849f1d940a9d0e0a40eb60d8e3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bebb2849f1d940a9d0e0a40eb60d8e3f);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_de8a570e09f432d55807372bb35a0007_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_de8a570e09f432d55807372bb35a0007_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3f448b914410d431fa950932e01c079));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3f448b914410d431fa950932e01c079);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2538495efb1c7e519060ab939c063233_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2538495efb1c7e519060ab939c063233_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_33550f1fb6503f334dfb18753eb323a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33550f1fb6503f334dfb18753eb323a4);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_572b0868e355abe6f6327eb0541416cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_572b0868e355abe6f6327eb0541416cd_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bb90c2548629caca56b3aaa40ae512d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bb90c2548629caca56b3aaa40ae512d);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a73163bad2158b54c53c0d1f5c1b667_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8a73163bad2158b54c53c0d1f5c1b667_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_b907f1eac5a210a78004f9008e64ea37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b907f1eac5a210a78004f9008e64ea37);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_4201b3505050198afa708689cf5e5126));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4201b3505050198afa708689cf5e5126);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ddd89be700b49b6eca142f5d71388931_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ddd89be700b49b6eca142f5d71388931_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWebhookEventData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWebhookEventData);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_460fb38ceb77f700f638dc03a740e7df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_460fb38ceb77f700f638dc03a740e7df);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb981bff71cc7c819c7b052cf05944ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb981bff71cc7c819c7b052cf05944ff);
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
static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionArchivedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionCreatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionDeletedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionIdledEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionOutcomeEvaluationEndedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionPendingEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionRequiresActionEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionRunningEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusIdledEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusRescheduledEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusRunStartedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusTerminatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadCreatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadIdledEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadTerminatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultArchivedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCreatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialArchivedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialCreatedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialDeletedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialRefreshFailedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultDeletedEventData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$beta_webhook_event_data$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$beta_webhook_event_data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_041594202f4b516c6fb2b0208db6f932;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_460fb38ceb77f700f638dc03a740e7df); CHECK_OBJECT(module_filename_obj);
code_objects_041594202f4b516c6fb2b0208db6f932 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_eb981bff71cc7c819c7b052cf05944ff, mod_consts.const_str_digest_eb981bff71cc7c819c7b052cf05944ff, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_anthropic$types$beta$beta_webhook_event_data[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$beta_webhook_event_data);
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
        module_anthropic$types$beta$beta_webhook_event_data,
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
        function_table_anthropic$types$beta$beta_webhook_event_data,
        sizeof(function_table_anthropic$types$beta$beta_webhook_event_data) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.beta_webhook_event_data";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$beta_webhook_event_data(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$beta_webhook_event_data");

    // Store the module for future use.
    module_anthropic$types$beta$beta_webhook_event_data = module;

    moduledict_anthropic$types$beta$beta_webhook_event_data = MODULE_DICT(module_anthropic$types$beta$beta_webhook_event_data);

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
        PRINT_STRING("anthropic$types$beta$beta_webhook_event_data: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$beta_webhook_event_data: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$beta_webhook_event_data: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.beta_webhook_event_data" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$beta_webhook_event_data\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$beta_webhook_event_data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$beta_webhook_event_data,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$beta_webhook_event_data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$beta_webhook_event_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$beta_webhook_event_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$beta_webhook_event_data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$beta_webhook_event_data);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$beta_webhook_event_data;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$beta_webhook_event_data = MAKE_MODULE_FRAME(code_objects_041594202f4b516c6fb2b0208db6f932, module_anthropic$types$beta$beta_webhook_event_data);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$beta_webhook_event_data);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$beta_webhook_event_data) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
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
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
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
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_beta_webhook_session_idled_event_data;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BetaWebhookSessionIdledEventData_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionIdledEventData,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionIdledEventData, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_beta_webhook_vault_created_event_data;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BetaWebhookVaultCreatedEventData_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_webhook_vault_deleted_event_data;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaWebhookVaultDeletedEventData_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_webhook_vault_archived_event_data;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaWebhookVaultArchivedEventData_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_webhook_session_created_event_data;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaWebhookSessionCreatedEventData_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_beta_webhook_session_deleted_event_data;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaWebhookSessionDeletedEventData_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 12;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_beta_webhook_session_pending_event_data;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaWebhookSessionPendingEventData_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionPendingEventData,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionPendingEventData, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_beta_webhook_session_running_event_data;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaWebhookSessionRunningEventData_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionRunningEventData,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionRunningEventData, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_beta_webhook_session_archived_event_data;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BetaWebhookSessionArchivedEventData_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 15;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_5af5a4126273428ebedc742da0254a91;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaWebhookSessionStatusIdledEventData_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 16;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_152242307e9d388478a0fb7e08d6c3e5;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadIdledEventData_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 17;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_bfc01dda9f377b768fd72f9a5cf801ae;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaWebhookSessionThreadCreatedEventData_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 18;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_60b08bf82cd82dd5cecc0f93f332ced2;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_digest_09300715af5050b7026e9dc8a53c5c2c_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 19;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_f32055a013b530dbba3947fd2efb876e;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_digest_29302f7f164fbdef2b3f225b845f23d2_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 20;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_1ea6359a11ff63925ef8305d810b593a;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_digest_612f9e4617167a4b05cf597c8671180a_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 21;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_de9c20718a7b125ea7adc4296597c045;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_digest_b6941486ed50165297d03bc55fe44740_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 22;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_bebb2849f1d940a9d0e0a40eb60d8e3f;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_digest_de8a570e09f432d55807372bb35a0007_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 23;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_digest_a3f448b914410d431fa950932e01c079;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_digest_2538495efb1c7e519060ab939c063233_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 24;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_digest_33550f1fb6503f334dfb18753eb323a4;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_digest_572b0868e355abe6f6327eb0541416cd_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 25;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_digest_1bb90c2548629caca56b3aaa40ae512d;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_digest_8a73163bad2158b54c53c0d1f5c1b667_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 26;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_digest_b907f1eac5a210a78004f9008e64ea37;
tmp_globals_arg_value_23 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 27;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_digest_4201b3505050198afa708689cf5e5126;
tmp_globals_arg_value_24 = (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_digest_ddd89be700b49b6eca142f5d71388931_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 28;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_anthropic$types$beta$beta_webhook_event_data,
        mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_digest_ddd89be700b49b6eca142f5d71388931, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_BetaWebhookEventData);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_1 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$Annotated(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionCreatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionCreatedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 22);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionPendingEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionPendingEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionRunningEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionRunningEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionIdledEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionIdledEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionRequiresActionEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_09300715af5050b7026e9dc8a53c5c2c);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionArchivedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionArchivedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionDeletedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionDeletedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusRescheduledEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_572b0868e355abe6f6327eb0541416cd);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusRunStartedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_8a73163bad2158b54c53c0d1f5c1b667);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 8, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusIdledEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionStatusIdledEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionStatusTerminatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_b6941486ed50165297d03bc55fe44740);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 10, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadCreatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionThreadCreatedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 11, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadIdledEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookSessionThreadIdledEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 12, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionThreadTerminatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_de8a570e09f432d55807372bb35a0007);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 13, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookSessionOutcomeEvaluationEndedEventData(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_2, 14, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCreatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookVaultCreatedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 15, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultArchivedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookVaultArchivedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 16, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultDeletedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaWebhookVaultDeletedEventData);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 17, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialCreatedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_29302f7f164fbdef2b3f225b845f23d2);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 18, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialArchivedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_2538495efb1c7e519060ab939c063233);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 19, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialDeletedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_612f9e4617167a4b05cf597c8671180a);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 20, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$BetaWebhookVaultCredentialRefreshFailedEventData(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_1da4a7e7d1d7288294efc6bf08bd21e5);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 21, tmp_tuple_element_2);
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


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$PropertyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto tuple_build_exception_2;
}
frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame.f_lineno = 57;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

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
tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWebhookEventData, tmp_assign_source_33);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$beta$beta_webhook_event_data$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_BetaWebhookEventData;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$beta_webhook_event_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$beta_webhook_event_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$beta_webhook_event_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$beta_webhook_event_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$beta_webhook_event_data", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.beta_webhook_event_data" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$beta_webhook_event_data);
    return module_anthropic$types$beta$beta_webhook_event_data;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$beta_webhook_event_data, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$beta_webhook_event_data", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
